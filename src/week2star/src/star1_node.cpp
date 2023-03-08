#include "ros/ros.h"
#include "turtlesim/Pose.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "pos_node");
  ros::NodeHandle nh;

  ros::Publisher chatter_pub = nh.advertise<turtlesim::Pose>("/turtle1/Pose", 1000);

  ros::Rate loop_rate(10);
  while (ros::ok())
  {
   turtlesim::Pose msg;
    msg.x = 0.0;
    msg.y = 0.0;
    msg.theta =0;
    msg.linear_velocity= 2.0;
    msg.angular_velocity = -2.0;
    chatter_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
  }

  return 0;
}
