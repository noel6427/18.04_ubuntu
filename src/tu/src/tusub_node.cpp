#include "ros/ros.h"
#include "turtlesim/Pose.h"

void cb_get_pose(const turtlesim::Pose& msg)
{
  ROS_INFO("x:[%.2f],y:[%.2f],theta:[%.2f]", msg.x, msg.y, msg.theta);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "tusub_node");
  ros::NodeHandle nh;

  ros::Subscriber sub = nh.subscribe("/turtle1/pose", 1000, cb_get_pose);

  ros::spin();

  return 0;
}
