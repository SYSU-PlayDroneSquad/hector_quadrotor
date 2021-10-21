#ifndef HECTOR_QUADROTOR_WS_DJICONTROLLER_H
#define HECTOR_QUADROTOR_WS_DJICONTROLLER_H

// ROS includes
#include <ros/ros.h>
#include <std_msgs/UInt8.h>
#include <sensor_msgs/Joy.h>
#include <geometry_msgs/Vector3Stamped.h>

// DJI SDK includes
#include "dji_sdk/dji_sdk.h"
#include "dji_sdk/DroneTaskControl.h"
#include <dji_sdk/SetLocalPosRef.h>
#include <dji_sdk/QueryDroneVersion.h>
#include <dji_sdk/DroneArmControl.h>
#include <dji_sdk/SDKControlAuthority.h>

class DjiN3Controller {
public:
    DjiN3Controller(ros::NodeHandle nh, string uavName) {
        // 句柄
        _nh = nh;
        _uavName = uavName;
        // 速度消息
        _xCmd = _yCmd = _zCmd = _yaw = 0;
        _vel_msg.vector.x = _xCmd;
        _vel_msg.vector.y = _yCmd;
        _vel_msg.vector.z = _zCmd;

        // 速度限制
        _vel_limt = 5.0;
        // 速度步进值
        _step = 0.5;
        // 飞行状态与模式
        _flight_status = 255;
        _display_mode = 255;
        //　无人机任务　client
        _drone_task_client = nh.serviceClient<dji_sdk::DroneTaskControl>(
                _uavName + "/dji_sdk/drone_task_control");
        // ｄji 速度发布器
        _gimbal_speed_pub = nh.advertise<geometry_msgs::Vector3Stamped>(
                _uavName + "/dji_sdk/gimbal_speed_cmd", 10);
        // 飞行状态与模式订阅器
        _flightStatusSub = nh.subscribe(
                _uavName + "/dji_sdk/flight_status", 10, &DjiN3Controller::flight_status_callback, this);
        _displayModeSub = nh.subscribe(
                _uavName + "/dji_sdk/display_mode", 10, &DjiN3Controller::display_mode_callback, this);
    }

    ~DjiN3Controller() {}

    /// 基本控制
    void takeoff() {
        dji_sdk::DroneTaskControl droneTaskControl;
        droneTaskControl.request.task = dji_sdk::DroneTaskControl::Request::TASK_TAKEOFF;
        _drone_task_client.call(droneTaskControl);
        if (droneTaskControl.response.result) {
            ROS_INFO("takeoff success");
        } else {
            ROS_ERROR("takeoff failed");
        }
    }

    void land() {
        dji_sdk::DroneTaskControl droneTaskControl;
        droneTaskControl.request.task = dji_sdk::DroneTaskControl::Request::TASK_LAND;
        _drone_task_client.call(droneTaskControl);
        if (droneTaskControl.response.result) {
            ROS_INFO("land success");
        } else {
            ROS_ERROR("land failed");
        }
    }

    void stop() {
        _xCmd = 0;
        _yCmd = 0;
        _zCmd = 0;

        _vel_msg.vector.x = _xCmd;
        _vel_msg.vector.y = _yCmd;
        _vel_msg.vector.z = _zCmd;

        _gimbal_speed_pub.publish(_vel_msg);
    }

    void forward() {
        if (_xCmd >= 0 && _xCmd < _vel_limt) {
            _xCmd += _step;
        } else if (_xCmd < 0) {
            _xCmd = 0;
        } else {
            _xCmd = _vel_limt;
        }
        _vel_msg.vector.x = _xCmd;
        _gimbal_speed_pub.publish(_vel_msg);
        cout << " send forward success,vel = " << _xCmd << endl;
    }

    void backward() {
        if (_xCmd <= 0 && _xCmd > -_vel_limt) {
            _xCmd -= _step;
        } else if (_xCmd > 0) {
            _xCmd = 0;
        } else {
            _xCmd = -_vel_limt;
        }
        _vel_msg.vector.x = _xCmd;
        _gimbal_speed_pub.publish(_vel_msg);
        cout << " send backward success,vel = " << _xCmd << endl;
    }

    void turn_left() {
        if (_yCmd <= 0 && _yCmd > -_vel_limt) {
            _yCmd -= _step;
        } else if (_yCmd > 0) {
            _yCmd = 0;
        } else {
            _yCmd = -_vel_limt;
        }
        _vel_msg.vector.y = _yCmd;
        _gimbal_speed_pub.publish(_vel_msg);
        cout << " send turn_left success,vel = " << _yCmd << endl;
    }

    void turn_right() {
        if (_yCmd >= 0 && _yCmd < _vel_limt) {
            _yCmd += _step;
        } else if (_yCmd < 0) {
            _yCmd = 0;
        } else {
            _yCmd = _vel_limt;
        }
        _vel_msg.vector.y = _yCmd;
        _gimbal_speed_pub.publish(_vel_msg);
        cout << " send turn_right success,vel = " << _yCmd << endl;
    }

    void upward() {
        if (_zCmd >= 0 && _zCmd < _vel_limt) {
            _zCmd += _step;
        } else if (_zCmd < 0) {
            _zCmd = 0;
        } else {
            _zCmd = _vel_limt;
        }
        _vel_msg.vector.z = _zCmd;
        _gimbal_speed_pub.publish(_vel_msg);
        cout << " send upward success,vel = " << _zCmd << endl;
    }

    void down() {
        if (_zCmd <= 0 && _zCmd > -_vel_limt) {
            _zCmd -= _step;
        } else if (_zCmd > 0) {
            _zCmd = 0;
        } else {
            _zCmd = -_vel_limt;
        }
        _vel_msg.vector.z = _zCmd;
        _gimbal_speed_pub.publish(_vel_msg);
        cout << " send down success,vel = " << _zCmd << endl;
    }

    void rotate_right() {
        if (_yaw >= 0 && _zCmd < _vel_limt) {
            _yaw += _step;
        } else if (_yaw < 0) {
            _yaw = 0;
        } else {
            _yaw = _vel_limt;
        }
//        _vel_msg.axes[3] = _yaw;
//        _gimbal_speed_pub.publish(_vel_msg);
        cout << " send rotate_right success,vel = " << _yaw << endl;
    }

    void rotate_left() {
        if (_yaw <= 0 && _yaw > -_vel_limt) {
            _yaw -= _step;
        } else if (_yaw > 0) {
            _yaw = 0;
        } else {
            _yaw = -_vel_limt;
        }
//        _vel_msg.axes[3] = _yaw;
//        _gimbal_speed_pub.publish(_vel_msg);
        cout << " send rotate_right success,vel = " << _yaw << endl;
    }

    /// 飞控控制
    // 获取板载控制权
    bool obtain_control() {
        dji_sdk::SDKControlAuthority authority;
        authority.request.control_enable = 1;
        ros::ServiceClient sdk_ctrl_authority_service;
        sdk_ctrl_authority_service = _nh.serviceClient<dji_sdk::SDKControlAuthority>(
                _uavName + "/dji_sdk/sdk_control_authority");
        sdk_ctrl_authority_service.call(authority);

        if (!authority.response.result) {
            ROS_ERROR("obtain control failed!");
            return false;
        } else {
            cout << "obtain control success!" << endl;
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
            ROS_ERROR("GPS health insufficient - No local frame reference for height. Exiting.");
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
            cout << "get version success" << endl;
            cout << "\033[33muav version: \033[0m" << query.response.hardware << endl;
        }
    }

    // 判断遥控器是否连接
    void spinning_motor() {
        ros::Time start_time = ros::Time::now();
        int flight =  _flight_status;
        int display =  _display_mode;
        std::cout << "flight_1 = " << flight << std::endl;
        std::cout << "display_1 = " << display << std::endl << std::endl;

        while ( _flight_status != DJISDK::FlightStatus::STATUS_ON_GROUND &&
                _display_mode != DJISDK::DisplayMode::MODE_ENGINE_START &&
                ros::Time::now() - start_time < ros::Duration(5)) {
            ros::Duration(0.01).sleep();
            ros::spinOnce();
        }
        if (ros::Time::now() - start_time > ros::Duration(5)) {
            ROS_ERROR("Takeoff failed. Motors are not spinnning.");
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
    void flight_status_callback(const std_msgs::UInt8::ConstPtr &msg) {
        _flight_status = msg->data;
    }

    // 显示模式订阅回调
    void display_mode_callback(const std_msgs::UInt8::ConstPtr &msg) {
        _display_mode = msg->data;
    }

private:
    // ros 句柄
    ros::NodeHandle _nh;
    // 无人机名
    string _uavName;
    // 飞行任务 client
    ros::ServiceClient _drone_task_client;
    // 速度消息
    geometry_msgs::Vector3Stamped _vel_msg;
    // 速度 topic publisher
    ros::Publisher _gimbal_speed_pub;
    // 速度消息辅助参数
    float _xCmd, _yCmd, _zCmd, _yaw, _vel_limt, _step;
    // 飞行状态与模式订阅器
    ros::Subscriber _flightStatusSub;
    ros::Subscriber _displayModeSub;
    // 飞行状态与模式参数
    uint8_t  _flight_status;
    uint8_t  _display_mode;


};


#endif //HECTOR_QUADROTOR_WS_DJICONTROLLER_H
