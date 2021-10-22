#ifndef HECTOR_QUADROTOR_WS_QUADROTOR_H
#define HECTOR_QUADROTOR_WS_QUADROTOR_H

#include <ros/ros.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Twist.h>
#include <gazebo_msgs/GetModelState.h>
#include <string>
#include <Eigen/Dense>
#include <hector_uav_msgs/EnableMotors.h>

using std::cout;
using std::endl;
using std::string;

class Quadrotor{
public:
    Quadrotor(ros::NodeHandle &nh, string quadrotor_name);
    ~Quadrotor(){}
    void enable_motor();
    void takeoff();
    void land();
    void stop();
    void forward();
    void backward();
    void turn_left();
    void turn_right();
    void upward();
    void down();
    void rotate_right();
    void rotate_left();

private:
    string _quadrotor_name;
    string _flame_world;
    int _height;
    int _vel_limt;
    double _setp;

    /// gazebo 仿真
    //  位置发布
    ros::Publisher _position_pub;
    geometry_msgs::PoseStamped _position_msg;
    //  速度发布
    ros::Publisher _twist_pub;
    geometry_msgs::Twist _twist_msg;
    //  获取 gazebo 模型的位置、速度等状态信息
    ros::ServiceClient _get_uav_state_client;
    gazebo_msgs::GetModelState _uav_state;
    //  使能电机
    ros::ServiceClient _enable_motor_client;

};

#endif //HECTOR_QUADROTOR_WS_QUADROTOR_H
