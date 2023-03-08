#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "sensor_msgs/Joy.h"
#include "turtlesim/Pose.h"

float lin_x,lin_y,ang_z = 0.0;

void chatterCallback(const sensor_msgs::JoyConstPtr& msg)
{
lin_x = msg->axes[0];
lin_y = msg->axes[1];
ang_z = msg->axes[4];
//pos_t = msg->buttons[3];

}

/*void posCallback(const turtlesim::Pose& msg)
{
  if(pos_t!=0){
  ROS_INFO("turtle position:x = [%.2f], y = [%.2f], theta = [%.2f]", msg.x, msg.y, msg.theta);
}
}*/

int main(int argc, char **argv)
{
  ros::init(argc, argv, "joy12_node");
  ros::NodeHandle nh;

  ros::Publisher cmd_vel_pub = nh.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1000);
  ros::Subscriber sub = nh.subscribe("/joy", 1000, chatterCallback);
 // ros::Subscriber possub = nh.subscribe("/turtle1/pose", 1000, posCallback);

  ros::Rate loop_rate(10);

  while (ros::ok())
  {
   geometry_msgs::Twist msg;
   msg.linear.x=lin_x;
   msg.linear.y=lin_y;
   msg.angular.z=ang_z;
  cmd_vel_pub.publish(msg);

    ros::spinOnce();
    loop_rate.sleep();
}

  return 0;
}
