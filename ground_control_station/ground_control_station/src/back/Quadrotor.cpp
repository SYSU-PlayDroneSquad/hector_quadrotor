#include "Quadrotor.h"
Quadrotor::Quadrotor(ros::NodeHandle &nh, string quadrotor_name){
    // 初始化无人机名字和无人机坐标系
    _quadrotor_name = quadrotor_name;
    _flame_world = quadrotor_name + "/world";

    // 初始化无人机位置消息
    _position_msg.header.frame_id = _flame_world;

    // 初始化无人机速度消息
    _twist_msg.linear.x = _twist_msg.linear.y = _twist_msg.linear.z = 0;
    _twist_msg.angular.x = _twist_msg.angular.y = _twist_msg.angular.z = 0;

    _uav_state.request.model_name = _quadrotor_name;

    _height = 2;
    _vel_limt = 1;
    _setp = 0.05;

    // 初始化 ros 发布器、服务器用户端
    _position_pub = nh.advertise<geometry_msgs::PoseStamped>(_quadrotor_name + "/command/pose", 1);
    _twist_pub = nh.advertise<geometry_msgs::Twist>(_quadrotor_name + "/cmd_vel",1);
    _enable_motor_client = nh.serviceClient<hector_uav_msgs::EnableMotors>(_quadrotor_name+"/enable_motors");
    _get_uav_state_client = nh.serviceClient<gazebo_msgs::GetModelState>("gazebo/get_model_state");

}

// 使能电机
void Quadrotor::enable_motor(){
    hector_uav_msgs::EnableMotors srv;
    srv.request.enable = true;
    _enable_motor_client.call(srv);
    cout << _quadrotor_name << " enable success!" << endl;
}
void Quadrotor::takeoff(){
    // 获取无人机当前位置和速度信息
    _get_uav_state_client.call(_uav_state);
    // 当前位置赋值
    _position_msg.pose.position.x = _uav_state.response.pose.position.x;
    _position_msg.pose.position.y = _uav_state.response.pose.position.y;
    // 起飞
    if(_uav_state.response.pose.position.z < 0.3){
        _position_msg.pose.position.z = _height;
        _position_pub.publish(_position_msg);
    }
    cout << _quadrotor_name << " send takeoff success!" << endl;
}
void Quadrotor::land(){
    // 获取无人机当前位置和速度信息
    _get_uav_state_client.call(_uav_state);
    // 当前位置赋值
    _position_msg.pose.position.x = _uav_state.response.pose.position.x;
    _position_msg.pose.position.y = _uav_state.response.pose.position.y;
    // 降落
    _position_msg.pose.position.z = 0;
    _position_msg.header.frame_id = _flame_world;
    _position_pub.publish(_position_msg);
    cout << _quadrotor_name << " send land success!" << endl;
}
void Quadrotor::stop(){ // 悬停
    _twist_msg.linear.x = _twist_msg.linear.y = _twist_msg.linear.z = 0;
    _twist_msg.angular.x = _twist_msg.angular.y = _twist_msg.angular.z = 0;
    _twist_pub.publish(_twist_msg);
    cout << _quadrotor_name << " send stop success!" << endl;
}
void Quadrotor::forward(){
    if(_twist_msg.linear.x >= 0 && _twist_msg.linear.x < _vel_limt){
        _twist_msg.linear.x += _setp;
    } else if (_twist_msg.linear.x < 0) {
        _twist_msg.linear.x = 0;
    } else {
        _twist_msg.linear.x = _vel_limt;
    }
    _twist_pub.publish(_twist_msg);
    cout << _quadrotor_name << " send forward success!" << endl;
}
void Quadrotor::backward(){
    if(_twist_msg.linear.x <= 0 && _twist_msg.linear.x > -_vel_limt){
        _twist_msg.linear.x -= _setp;
    } else if (_twist_msg.linear.x > 0) {
        _twist_msg.linear.x = 0;
    } else {
        _twist_msg.linear.x = -_vel_limt;
    }
    _twist_pub.publish(_twist_msg);
    cout << _quadrotor_name << " send backward success!" << endl;
}
void Quadrotor::turn_left(){
    if(_twist_msg.linear.y <= 0 && _twist_msg.linear.y > -_vel_limt){
        _twist_msg.linear.y -= _setp;
    } else if (_twist_msg.linear.y > 0) {
        _twist_msg.linear.y = 0;
    } else {
        _twist_msg.linear.y = -_vel_limt;
    }
    _twist_pub.publish(_twist_msg);
    cout << _quadrotor_name << " send turn_left success!" << endl;
}
void Quadrotor::turn_right(){
    if(_twist_msg.linear.y >= 0 && _twist_msg.linear.y < _vel_limt){
        _twist_msg.linear.y += _setp;
    } else if (_twist_msg.linear.y < 0) {
        _twist_msg.linear.y = 0;
    } else {
        _twist_msg.linear.y = _vel_limt;
    }
    _twist_pub.publish(_twist_msg);
    cout << _quadrotor_name << " send turn_right success!" << endl;
}
void Quadrotor::upward(){
    if(_twist_msg.linear.z >= 0 && _twist_msg.linear.z < _vel_limt){
        _twist_msg.linear.z += _setp;
    } else if (_twist_msg.linear.z < 0) {
        _twist_msg.linear.z = 0;
    } else {
        _twist_msg.linear.z = _vel_limt;
    }
    _twist_pub.publish(_twist_msg);
    cout << _quadrotor_name << " send upward success!" << endl;
}
void Quadrotor::down(){
    if(_twist_msg.linear.z <= 0 && _twist_msg.linear.z > -_vel_limt){
        _twist_msg.linear.z -= _setp;
    } else if (_twist_msg.linear.z > 0) {
        _twist_msg.linear.z = 0;
    } else {
        _twist_msg.linear.z = -_vel_limt;
    }
    _twist_pub.publish(_twist_msg);
    cout << _quadrotor_name << " send down success!" << endl;
}
void Quadrotor::rotate_right(){
    if(_twist_msg.angular.z >= 0 && _twist_msg.linear.z < _vel_limt){
        _twist_msg.angular.z += _setp;
    } else if (_twist_msg.angular.z < 0) {
        _twist_msg.angular.z = 0;
    } else {
        _twist_msg.angular.z = _vel_limt;
    }
    _twist_pub.publish(_twist_msg);
    cout << _quadrotor_name << " send rotate_right success!" << endl;
}
void Quadrotor::rotate_left(){
    if(_twist_msg.angular.z <= 0 && _twist_msg.angular.z > -_vel_limt){
        _twist_msg.angular.z -= _setp;
    } else if (_twist_msg.angular.z > 0) {
        _twist_msg.angular.z = 0;
    } else {
        _twist_msg.angular.z = -_vel_limt;
    }
    _twist_pub.publish(_twist_msg);
    cout << _quadrotor_name << " send rotate_right success!" << endl;
}