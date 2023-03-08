#ifdef __linux__                                           //#ifdef = linux가 정의 되어있다면 밑에 내용을 실행하라는 전처리기( linux가 정의 되지않으면 실행되지 않음)
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>
#elif defined(_WIN32) || defined(_WIN64)                    //#elif = else if 와 같은 역할을 하는 전처리기 (window가 정의되지 않으면 실행되지 않음)
#include <conio.h>
#endif                                                      //#ifdef,elif가 영향을 끼치는 범위 ~#endif

#include <stdlib.h>                                         //헤더파일
#include <stdio.h>                                          //헤더파일
#include "ros/ros.h"                                        //헤더파일
#include "std_msgs/String.h"                                //헤더파일
#include "dynamixel_sdk/dynamixel_sdk.h"                    //헤더파일

#define ADDR_PRO_TORQUE_ENABLE          24                  //Dynamixel 에서 토크 작동여부를 결정하는 값의 주소
#define ADDR_PRO_GOAL_POSITION          30                  //Dynamixel 에서 목표 위치값을 결정하는 값의 주소값
#define ADDR_PRO_PRESENT_POSITION       36                  //Dynamixel 에서 현재 위치값을 나타내는 값의 주소값
#define PROTOCOL_VERSION                1.0                 // Dynamixel 의 프로토콜 버전
#define DXL_ID                          2                   // Dynamixel 의 ID값
#define BAUDRATE                        2000000             // Dunamixel 의 baudrate 값
#define DEVICENAME                      "/dev/ttyUSB0"      // 포트이름 입력 ex) Windows: "COM1"   Linux: "/dev/ttyUSB0"
#define TORQUE_ENABLE                   1                   // 토크 작동 시 값
#define TORQUE_DISABLE                  0                   // 토크 미작동 시 값
#define DXL_MINIMUM_POSITION_VALUE      0                   // Dynamixel의 최소값 (이 범위 안에서 회전)
#define DXL_MAXIMUM_POSITION_VALUE      4048                // Dynamixel의 최댓값 (만약 다이나믹셀이 움직이지 않는다면 이 범위가 동작 가능한 범위 밖일 수 있음-e manual참조)
#define DXL_MOVING_STATUS_THRESHOLD     20                  // Dynamixel moving status threshold

#define ESC_ASCII_VALUE                 0x1b                //ESC의 아스키코드값

int getch()                                                 //사용자로부터 키보의 키의 값을 입력받는 함수 (아스키 코드값을 반환)
{
#ifdef __linux__
  struct termios oldt, newt;
  int ch;
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  ch = getchar();
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  return ch;
#elif defined(_WIN32) || defined(_WIN64)
  return _getch();
#endif
}

int kbhit(void)                                              //키보드의 키가 눌렸는지 확인하는 함수 getch는 입력이 없으면 무한대기, kbhit는 입력전까지 하던 작업을 계속하고 키 입력시에 실행
{
#ifdef __linux__
  struct termios oldt, newt;
  int ch;
  int oldf;

  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

  ch = getchar();

  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  fcntl(STDIN_FILENO, F_SETFL, oldf);

  if (ch != EOF)
  {
    ungetc(ch, stdin);
    return 1;
  }

  return 0;
#elif defined(_WIN32) || defined(_WIN64)
  return _kbhit();
#endif
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "dynamixel12_node");                //로스 노드 선언
  ros::NodeHandle nh;

  // Initialize PortHandler instance 포트핸들러 인스턴스 초기화->??
  // Set the port path 포트 경로 설정
  // Get methods and members of PortHandlerLinux or PortHandlerWindows 포트핸들러 리눅스의 메소드와 멤버를 받음
  dynamixel::PortHandler *portHandler = dynamixel::PortHandler::getPortHandler(DEVICENAME);

  // Initialize PacketHandler instance 패킷핸들러 인스턴스 초기화
  // Set the protocol version 프로토콜 버전 설정
  // Get methods and members of Protocol1PacketHandler or Protocol2PacketHandler 프로토콜 패킷핸들러 리눅스의 메소드와 멤버를 받음
  dynamixel::PacketHandler *packetHandler = dynamixel::PacketHandler::getPacketHandler(PROTOCOL_VERSION);

  int index = 0;
  int dxl_comm_result = COMM_TX_FAIL;             // 통신 결과
  int dxl_goal_position[2] = {DXL_MINIMUM_POSITION_VALUE, DXL_MAXIMUM_POSITION_VALUE};         // 목표값 지정

  uint8_t dxl_error = 0;                          // Dynamixel 에러
  int32_t dxl_present_position = 0;               // 현재 위치값

  // 포트 개방 유무 확인
  if (portHandler->openPort())
  {
    printf("Succeeded to open the port!\n");
  }
  else
  {
    printf("Failed to open the port!\n");
    printf("Press any key to terminate...\n");
    getch();
    return 0;
  }

  // port baudrate 설정
  if (portHandler->setBaudRate(BAUDRATE))
  {
    printf("Succeeded to change the baudrate!\n");
  }
  else
  {
    printf("Failed to change the baudrate!\n");
    printf("Press any key to terminate...\n");
    getch();
    return 0;
  }

  // Dynamixel Torque 작동
  dxl_comm_result = packetHandler->write1ByteTxRx(portHandler, DXL_ID, ADDR_PRO_TORQUE_ENABLE, TORQUE_ENABLE, &dxl_error);
  if (dxl_comm_result != COMM_SUCCESS)
  {
    packetHandler->getTxRxResult(dxl_comm_result);
  }
  else if (dxl_error != 0)
  {
    packetHandler->getRxPacketError(dxl_error);
  }
  else
  {
    printf("Dynamixel has been successfully connected \n");
  }

  while(1)
  {
    printf("Press any key to continue! (or press ESC to quit!)\n"); //키보드를 누르개 하여 아스키 코드 값을 받아서 esc를 누르면 종료,esc가 아닌 다른값은 코드실행
    if (getch() == ESC_ASCII_VALUE)
      break;

    // goal position 설정
    dxl_comm_result = packetHandler->write4ByteTxRx(portHandler, XL_ID, ADDR_PRO_GOAL_POSITION,dxl_goal_position[index], &dxl_error);
    if (dxl_comm_result != COMM_SUCCESS)
    {
      packetHandler->getTxRxResult(dxl_comm_result);
    }
    else if (dxl_error != 0)
    {
      packetHandler->getRxPacketError(dxl_error);
    }

    usleep(10000); //1만 마이크로(micro) 초 뒤에 실행

    do
    {
       // 현재 위치값 받아오기
      dxl_comm_result = packetHandler->read4ByteTxRx(portHandler, DXL_ID, ADDR_PRO_PRESENT_POSITION, (uint32_t*)&dxl_present_position, &dxl_error);
      if (dxl_comm_result != COMM_SUCCESS)
      {
        packetHandler->getTxRxResult(dxl_comm_result);
      }
      else if (dxl_error != 0)
      {기
        packetHandler->getRxPacketError(dxl_error);
      }

      printf("[ID:%03d] GoalPos:%03d  PresPos:%03d\n", DXL_ID,dxl_goal_position[index], dxl_present_position); //ID,목표지점,현재위치 값 출력

    }while((abs(dxl_goal_position[index] - dxl_present_position) > DXL_MOVING_STATUS_THRESHOLD));

    // 목표지점에 도달했다면 목표 지점 변경(0번과 1번 위치 변경)
    if (index == 0)
    {
      index = 1;
    }
    else
    {
      index = 0;
    }
  }

  // Dynamixel 토크 비활성화
  dxl_comm_result = packetHandler->write1ByteTxRx(portHandler, DXL_ID, ADDR_PRO_TORQUE_ENABLE, TORQUE_DISABLE, &dxl_error);
  if (dxl_comm_result != COMM_SUCCESS)
  {
    packetHandler->getTxRxResult(dxl_comm_result);
  }
  else if (dxl_error != 0)
  {
    packetHandler->getRxPacketError(dxl_error);
  }

  // 포트닫기
  portHandler->closePort();

  return 0;
}
