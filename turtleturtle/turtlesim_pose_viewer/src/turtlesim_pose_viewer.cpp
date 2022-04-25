#include "ros/ros.h"
#include "turtlesim/Pose.h"

void msgCallback(const turtlesim::Pose::ConstPtr &msg)
{
    ROS_INFO("x : %f", msg->x);
    ROS_INFO("y : %f", msg->y);
    ROS_INFO("theta : %f", msg->theta);
    ROS_INFO("linear_velocity : %f", msg->linear_velocity);
    ROS_INFO("angular_velocity : %f", msg->angular_velocity);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "turtlesim_pose_viewer");

    ros::NodeHandle nh;
    
    ros::Subscriber ros_turtle_sub = nh.subscribe("/turtle1/pose", 100, msgCallback);

    ros::spin();

    return 0;

}