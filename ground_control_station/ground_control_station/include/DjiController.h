#ifndef HECTOR_QUADROTOR_WS_DJICONTROLLER_H
#define HECTOR_QUADROTOR_WS_DJICONTROLLER_H

// ROS includes
#include <ros/ros.h>
#include <std_msgs/UInt8.h>
#include <sensor_msgs/Joy.h>
#include <geometry_msgs/QuaternionStamped.h>
#include <tf/tf.h>

// DJI SDK includes
#include "dji_sdk/dji_sdk.h"             // 飞行姿态、模式
#include "dji_sdk/DroneTaskControl.h"    // 起飞降落返航
#include <dji_sdk/SetLocalPosRef.h>      // GPS相关
#include <dji_sdk/QueryDroneVersion.h>   // 飞控版本获取
#include <dji_sdk/DroneArmControl.h>     // 电机锁
#include <dji_sdk/SDKControlAuthority.h> // 获取板载控制权

// Others includes
#include <math.h>

class DjiN3Controller {
public:
    DjiN3Controller(ros::NodeHandle nh, string uavName) {
        // 句柄
        _nh = nh;
        _uavName = uavName;
        // 速度消息
        _xCmd = _yCmd = _zCmd = _yawCmd = 0;
        _setVelYaw_msg.axes.emplace_back(_xCmd);
        _setVelYaw_msg.axes.emplace_back(_yCmd);
        _setVelYaw_msg.axes.emplace_back(_zCmd);
        _setVelYaw_msg.axes.emplace_back(_yawCmd);

        // 位置消息
        _setPosYaw_msg.axes.emplace_back(_xCmd);
        _setPosYaw_msg.axes.emplace_back(_yCmd);
        _setPosYaw_msg.axes.emplace_back(_zCmd);
        _setPosYaw_msg.axes.emplace_back(_yawCmd);

        _yaw = _roll = _pitch = 0.0;
        // 速度限制
        _vel_limt = 4.0;
        // 速度步进值
        _step = 0.5;

        // 飞行状态与模式
        _flight_status = 255;
        _display_mode = 255;
        //　无人机任务　client
        _drone_task_client = nh.serviceClient<dji_sdk::DroneTaskControl>(
                _uavName + "/dji_sdk/drone_task_control");
        // 速度 publisher
        _setVelYaw_pub = nh.advertise<sensor_msgs::Joy>(
                _uavName + "/dji_sdk/flight_control_setpoint_ENUvelocity_yawrate", 10);
        // 位置 publisher
        _setPosYaw_pub = nh.advertise<sensor_msgs::Joy>(
                _uavName + "/dji_sdk/flight_control_setpoint_ENUposition_yaw", 10);
        // 飞行状态与模式订阅器
        _flightStatusSub = nh.subscribe(
                _uavName + "/dji_sdk/flight_status", 10, &DjiN3Controller::flight_status_CB, this);
        _displayModeSub = nh.subscribe(
                _uavName + "/dji_sdk/display_mode", 10, &DjiN3Controller::display_mode_CB, this);
        // FLU 到 ENU 的旋转四元数订阅
        _dji_att_sub = nh.subscribe<geometry_msgs::QuaternionStamped>(
                _uavName +"/dji_sdk/attitude", 10,
                boost::bind(&DjiN3Controller::attitude_CB, this, _1));

    }

    ~DjiN3Controller() {}

    /// 基本控制
    void takeoff() {
        dji_sdk::DroneTaskControl droneTaskControl;
        droneTaskControl.request.task = dji_sdk::DroneTaskControl::Request::TASK_TAKEOFF;
        _drone_task_client.call(droneTaskControl);
        if (droneTaskControl.response.result) {
            cout << _uavName << ": Takeoff success!" << endl;
        } else {
            cout << "\033[31mError: \033[0m" << "takeoff failed" << endl;
        }
    }

    void land() {
        dji_sdk::DroneTaskControl droneTaskControl;
        droneTaskControl.request.task = dji_sdk::DroneTaskControl::Request::TASK_LAND;
        _drone_task_client.call(droneTaskControl);
        if (droneTaskControl.response.result) {
            cout << _uavName << ": Land success!" << endl;
        } else {
            cout << "\033[31mError: \033[0m" << "land failed" << endl;
        }
    }

    void stop() {
        _xCmd = 0;
        _yCmd = 0;
        _zCmd = 0;
        _yawCmd = 0;
        _setVelYaw_msg.axes[0] = _xCmd;
        _setVelYaw_msg.axes[1] = _yCmd;
        _setVelYaw_msg.axes[2] = _zCmd;
        _setVelYaw_msg.axes[3] = _yawCmd;
        _setVelYaw_pub.publish(_setVelYaw_msg);
        cout << _uavName << ": Successfully sent the stop command!" << endl;
    }

    void forward() {
        if (_xCmd >= 0 && _xCmd < _vel_limt) {
            _xCmd += _step;
        } else if (_xCmd < 0) {
            _xCmd = 0;
        } else {
            _xCmd = _vel_limt;
        }
        vel_ENU2FLU();
        _setVelYaw_pub.publish(_setVelYaw_msg);
        cout << _uavName << ": Successfully sent the forward command!" << endl;
    }

    void backward() {
        if (_xCmd <= 0 && _xCmd > -_vel_limt) {
            _xCmd -= _step;
        } else if (_xCmd > 0) {
            _xCmd = 0;
        } else {
            _xCmd = -_vel_limt;
        }
        vel_ENU2FLU();
        _setVelYaw_pub.publish(_setVelYaw_msg);
        cout << _uavName << ": Successfully sent the backward command!" << endl;
    }

    void turn_right() {
        if (_yCmd <= 0 && _yCmd > -_vel_limt) {
            _yCmd -= _step;
        } else if (_yCmd > 0) {
            _yCmd = 0;
        } else {
            _yCmd = -_vel_limt;
        }
        vel_ENU2FLU();
        _setVelYaw_pub.publish(_setVelYaw_msg);
        cout << _uavName << ": Successfully sent the right turn command!" << endl;
    }

    void turn_left() {
        if (_yCmd >= 0 && _yCmd < _vel_limt) {
            _yCmd += _step;
        } else if (_yCmd < 0) {
            _yCmd = 0;
        } else {
            _yCmd = _vel_limt;
        }
        vel_ENU2FLU();
        _setVelYaw_pub.publish(_setVelYaw_msg);
        cout << _uavName << ": Successfully sent the left turn command!" << endl;
    }

    void upward() {
        if (_zCmd >= 0 && _zCmd < _vel_limt) {
            _zCmd += _step;
        } else if (_zCmd < 0) {
            _zCmd = 0;
        } else {
            _zCmd = _vel_limt;
        }
        _setVelYaw_msg.axes[2] = _zCmd;
        _setVelYaw_pub.publish(_setVelYaw_msg);
        cout << _uavName << ": Successfully sent the upward command!" << endl;
    }

    void down() {
        if (_zCmd <= 0 && _zCmd > -_vel_limt) {
            _zCmd -= _step;
        } else if (_zCmd > 0) {
            _zCmd = 0;
        } else {
            _zCmd = -_vel_limt;
        }
        _setVelYaw_msg.axes[2] = _zCmd;
        _setVelYaw_pub.publish(_setVelYaw_msg);
        cout << _uavName << ": Successfully sent the right turn command!" << endl;
    }

    void rotate_left() {
        if (_yawCmd >= 0 && _zCmd < _vel_limt) {
            _yawCmd += _step;
        } else if (_yawCmd < 0) {
            _yawCmd = 0;
        } else {
            _yawCmd = _vel_limt;
        }
        _setVelYaw_msg.axes[3] = _yawCmd;
        _setVelYaw_pub.publish(_setVelYaw_msg);
        cout << _uavName << ": Successfully sent the left rotate command!" << endl;
    }

    void rotate_right() {
        if (_yawCmd <= 0 && _yawCmd > -_vel_limt) {
            _yawCmd -= _step;
        } else if (_yawCmd > 0) {
            _yawCmd = 0;
        } else {
            _yawCmd = -_vel_limt;
        }
        _setVelYaw_msg.axes[3] = _yawCmd;
        _setVelYaw_pub.publish(_setVelYaw_msg);
        cout << _uavName << ": Successfully sent the right turn command!" << endl;
    }

    void set_pos(sensor_msgs::Joy pos){
        _xCmd = pos.axes[0];
        _yCmd = pos.axes[1];
        _zCmd = pos.axes[2];
        _yawCmd = pos.axes[3];
        enu2flu(_setPosYaw_msg);
        cout << "\033[33m_setPosYaw_msg:\033[0m\n" << _setPosYaw_msg << endl;
        _setPosYaw_pub.publish(_setPosYaw_msg);
    }

    void set_vel(sensor_msgs::Joy vel){
        _xCmd = vel.axes[0];
        _yCmd = vel.axes[1];
        _zCmd = vel.axes[2];
        _yawCmd = vel.axes[3];
        vel_ENU2FLU();
        _setVelYaw_pub.publish(vel);
    }

    /// 飞控
    // 获取板载控制权
    bool obtain_control() {
        dji_sdk::SDKControlAuthority authority;
        authority.request.control_enable = 1;
        ros::ServiceClient sdk_ctrl_authority_service;
        sdk_ctrl_authority_service = _nh.serviceClient<dji_sdk::SDKControlAuthority>(
                _uavName + "/dji_sdk/sdk_control_authority");
        sdk_ctrl_authority_service.call(authority);

        if (!authority.response.result) {
            cout << "\033[31mError: \033[0m"<< _uavName << " Obtain control failed!" << endl;
            return false;
        } else {
            cout << "Obtain control success!" << endl;
        }

        return true;
    }

    // 设置本地坐标
    void set_local_position() {
        ros::ServiceClient set_local_pos_reference;
        set_local_pos_reference = _nh.serviceClient<dji_sdk::SetLocalPosRef>(
                _uavName + "/dji_sdk/set_local_pos_ref");

        dji_sdk::SetLocalPosRef localPosReferenceSetter;
        set_local_pos_reference.call(localPosReferenceSetter);
        if (!localPosReferenceSetter.response.result) {
            cout << "\033[31mError: \033[0m"<< _uavName <<
            " GPS health insufficient - No local frame reference for height." << endl;
        } else {
            cout << "GPS health " << endl;
        }
    }

    // 获取无人机飞控型号
    void get_version() {
        ros::ServiceClient query_version_service;
        query_version_service = _nh.serviceClient<dji_sdk::QueryDroneVersion>(
                _uavName + "/dji_sdk/query_drone_version");
        dji_sdk::QueryDroneVersion query;
        query_version_service.call(query);
        if (query.response.hardware == "N3") {
            cout << "\033[33mUav version: \033[0m" << query.response.hardware << endl;
        }
    }

    // 判断遥控器是否连接
    void spinning_motor() {
        ros::Time start_time = ros::Time::now();
        int flight = _flight_status;
        int display = _display_mode;
        std::cout << "flight_1 = " << flight << std::endl;
        std::cout << "display_1 = " << display << std::endl << std::endl;

        while (_flight_status != DJISDK::FlightStatus::STATUS_ON_GROUND &&
               _display_mode != DJISDK::DisplayMode::MODE_ENGINE_START &&
               ros::Time::now() - start_time < ros::Duration(5)) {
            ros::Duration(0.01).sleep();
            ros::spinOnce();
        }
        if (ros::Time::now() - start_time > ros::Duration(5)) {
            cout << "\033[31mError:\033[0m"<< _uavName << "Takeoff failed. Motors are not spinnning." << endl;
        } else {
            start_time = ros::Time::now();
            ROS_INFO("Motor Spinning ...");
            ros::spinOnce();
        }

    }

    // 使能电机
    void enable_motor() {
        ros::ServiceClient enable_motor_client;
        enable_motor_client = _nh.serviceClient<dji_sdk::DroneArmControl>(
                _uavName + "/dji_sdk/DroneArmControl");
        dji_sdk::DroneArmControl enable;
        enable.request.arm = 1;
        enable_motor_client.call(enable);
        if (enable.response.result) {
            cout << "enable motor success" << endl;
        }
    }

    // 飞行状态订阅回调
    void flight_status_CB(const std_msgs::UInt8::ConstPtr &msg) {
        _flight_status = msg->data;
    }

    // 显示模式订阅回调
    void display_mode_CB(const std_msgs::UInt8::ConstPtr &msg) {
        _display_mode = msg->data;
    }

    // FLU 到 ENU 的旋转四元数订阅
    void attitude_CB(const geometry_msgs::QuaternionStamped::ConstPtr &msg) {
        quat2Tf2Rpy(msg);
    }

    /// 辅助函数
    // 四元数转rpy
    void quat2Tf2Rpy(const geometry_msgs::QuaternionStamped::ConstPtr &msg){
        tf::Quaternion quat;
        tf::quaternionMsgToTF(msg->quaternion,quat);
        tf::Matrix3x3(quat).getRPY(_roll, _pitch, _yaw);
        _yawRate = _yaw * 180 / M_PI;
    }

    // ENU 二平面坐标系转 FLU 平面坐标系
    void vel_ENU2FLU(){
        ros::spinOnce();
        double xVel, yVel;
        // 二维坐标系旋转变换
        xVel = _xCmd * cos(-_yaw) + _yCmd * sin(-_yaw);
        yVel = _yCmd * cos(-_yaw) - _xCmd * sin(-_yaw);
        // 大地坐标系的速度
        _setVelYaw_msg.axes[0] = xVel;
        _setVelYaw_msg.axes[1] = yVel;
    }

    void enu2flu(sensor_msgs::Joy &msg){
        ros::spinOnce();
        double x, y;
        // 二维坐标系旋转变换
        x = _xCmd * cos(-_yaw) + _yCmd * sin(-_yaw);
        y = _yCmd * cos(-_yaw) - _xCmd * sin(-_yaw);

        msg.axes[0] = x;
        msg.axes[1] = y;
        msg.axes[2] = _zCmd;
        msg.axes[3] = _rate;
    }

    void get_rate(){
        _rate = -_yawRate;
        cout << "get rate sucess,rate = " << _rate << endl;
    }


private:
    // ros 句柄
    ros::NodeHandle _nh;
    // 无人机名
    string _uavName;
    // 飞行任务 client
    ros::ServiceClient _drone_task_client;
    // 速度 ros 通信
    sensor_msgs::Joy _setVelYaw_msg;
    ros::Publisher _setVelYaw_pub;
    // 位置 ros 通信
    sensor_msgs::Joy _setPosYaw_msg;
    ros::Publisher _setPosYaw_pub;

    // 速度消息辅助参数
    float _xCmd, _yCmd, _zCmd, _yawCmd, _vel_limt, _step;
    // 飞行状态与模式订阅器
    ros::Subscriber _flightStatusSub;
    ros::Subscriber _displayModeSub;
    // FLU 机身坐标系到 ENU 地面坐标系的旋转四元数
    ros::Subscriber _dji_att_sub;
    // FLU 到 ENU 的姿态角变化
    static double _roll, _pitch, _yaw, _yawRate, _rate;
    // 飞行状态与模式参数
    uint8_t _flight_status;
    uint8_t _display_mode;


};

double DjiN3Controller::_roll = 0.0;
double DjiN3Controller::_pitch = 0.0;
double DjiN3Controller::_yaw = 0.0;
double DjiN3Controller::_yawRate = 0.0;
double DjiN3Controller::_rate = 0.0;



#endif //HECTOR_QUADROTOR_WS_DJICONTROLLER_H
