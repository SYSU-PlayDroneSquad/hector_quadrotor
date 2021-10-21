#include <ros/ros.h>
#include <std_msgs/String.h>

#include "UavGroup.h"

void keyCallBack(const std_msgs::String::ConstPtr cmd, UavGroup &uav_group){
//    cout << cmd << endl;
    string data = cmd->data;
    uav_group.control(data);
}

int main(int argc, char **argv){
    ros::init(argc, argv, "keyboard_controller");
    ros::NodeHandle nh ;
    // 从参数服务器获取无人机数量
    int uavNumbers;
    nh.param("/keyboard_controller/uavNumbers", uavNumbers, 10);
    // 创建无人机类型组
    UavGroup uav_group(nh, uavNumbers);
    // 根据回调函数订阅的键盘命令控制无人机组
    ros::Subscriber key_subscriber = nh.subscribe<std_msgs::String>("key", 1,
                                                                    boost::bind(keyCallBack, _1, uav_group));
    ros::spin();
}


