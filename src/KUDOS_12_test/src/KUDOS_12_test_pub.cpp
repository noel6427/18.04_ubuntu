#include "ros/ros.h"
#include "std_msgs/String.h"

int flag;

void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
  ROS_INFO("I heard: [%s][%d]", msg->data.c_str(),flag);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "KUDOS_12_test_pub");
  ros::NodeHandle nh;

  ros::Publisher chatter_pub = nh.advertise<std_msgs::String>("chatter", 1000);
  ros::Subscriber sub = nh.subscribe("chatter", 1000, chatterCallback);

  ros::Rate loop_rate(10);

  while (ros::ok())
  {
    std_msgs::String msg;
    msg.data = "hello world";

    chatter_pub.publish(msg);

    ROS_INFO("send msg(%d)",flag);
    ROS_INFO("=====");

    flag += 1;
    ros::spinOnce();

    loop_rate.sleep();
  }

  return 0;
}
