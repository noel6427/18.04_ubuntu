#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

int main(int argc, char **argv)
{
  int n =0;
  ros::init(argc, argv, "pos_node");
  ros::NodeHandle nh;

  ros::Publisher chatter_pub = nh.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1000);

  ros::Rate loop_rate(5);

  while(ros::ok())
  {
   if (n<10){
    geometry_msgs::Twist msg;
    msg.linear.x = 3.0;
    msg.linear.y = 0.0;
    msg.linear.z = 0.0;

    msg.angular.x = 0.0;
    msg.angular.y = 0.0;
    msg.angular.z = 0.0;
    chatter_pub.publish(msg);
    n++;
  }
   else {
     geometry_msgs::Twist msg;
     msg.linear.x = 0.0;
     msg.linear.y = 0.0;
     msg.linear.z = 0.0;

     msg.angular.x = 0.0;
     msg.angular.y = 0.0;
     msg.angular.z = -50.0;
     chatter_pub.publish(msg);
     n=0;
   }
    ros::spinOnce();

  loop_rate.sleep();
}
  
  return 0;
}
