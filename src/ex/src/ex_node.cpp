#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "turtlesim/Pose.h"

void posCallback(const turtlesim::Pose& msg)
{
  ROS_INFO("turtle position:x = [%.2f], y = [%.2f], theta = [%.2f]", msg.x, msg.y, msg.theta);
}

int main(int argc, char **argv)
{

  ros::init(argc, argv, "pos_node");

  ros::NodeHandle nh;

  ros::Publisher chatter_pub = nh.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1000);
  ros::Subscriber sub = nh.subscribe("/turtle1/pose", 1000, posCallback);

  ros::Rate loop_rate(10);
  while (ros::ok())
  {
      geometry_msgs::Twist msg;
      msg.linear.x=2.0;
      msg.linear.y=2.0;
      msg.linear.z=0.0;

      msg.angular.x=0.0;
      msg.angular.y=0.0;
      msg.angular.z=1.0;

    chatter_pub.publish(msg);
}
    ros::spinOnce();

    loop_rate.sleep();


  return 0;
}
