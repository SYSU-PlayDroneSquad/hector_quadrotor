#include <ros/ros.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>
#include <zmq.h>
#include <nav_msgs/Odometry.h>
#include "../include/cloud_server_communication/delay.pb.h"
//#include "../include/delay/delay.pb.cc"
#include "../include/cloud_server_communication/config.h"
#include <std_msgs/String.h>
using namespace std;

void* ctx = zmq_ctx_new();
void* subscriber = zmq_socket(ctx, ZMQ_SUB);
vector<void*> subscriberList = vector<void*>(50, zmq_socket(ctx, ZMQ_SUB));
string uavName("uav");
int numUav;

int main(int argc, char **argv)
{
    ros::init(argc, argv, "subscribe_node");
    ros::NodeHandle nh;
    ros::param::get("~uav_name", uavName);
    ros::param::get("~num_uav", numUav);
    delayMessage::DelayMsg delaymsg;

    ros::Publisher status_pub = nh.advertise<std_msgs::String>("/status", 100);

    // ros::Publisher odom_pub = nh.advertise<vector<nav_msgs::Odometry>>("odom", 1);

    for(int i=0;i<numUav;++i){
        if(0==zmq_connect(subscriberList[i], sub_ground_addr_list[i])){
            ROS_INFO("client %d bind success", i);//return 0 if success
        }
        else{
            perror("server bind failed:");
            return -1;
        }
        zmq_setsockopt(subscriberList[i], ZMQ_SUBSCRIBE, "", 0);
    }

    // if(0==zmq_connect(subscriberList[0], sub_ground_addr_list[0])){
    //     ROS_INFO("client %d bind success", 0);//return 0 if success
    // }
    // else{
    //     perror("server bind failed:");
    //     return -1;
    // }
    // zmq_setsockopt(subscriberList[0], ZMQ_SUBSCRIBE, "", 0);
    
    ros::Rate loop_rate(100);

    while(ros::ok()){
        delaymsg.Clear();
        zmq_msg_t recv_msg;
        zmq_msg_init(&recv_msg);

        for (int i = 0; i < numUav; i++)
        {
            int recv_byte = zmq_msg_recv(&recv_msg,subscriberList[i],0);//ZMQ_DONTWAIT

            if(recv_byte > 0)
            {
                ROS_INFO("Ground control station receive message (%d bytes) success.", recv_byte);

                string str;
                str.assign((char*)zmq_msg_data(&recv_msg),recv_byte);
                zmq_msg_close(&recv_msg);
                //    int index = str.find_first_of('\0');
                //    ROS_INFO("%d",index);
                //    delaymsg.ParseFromString(str.substr(0,index));
                delaymsg.ParseFromString(str);
                ROS_INFO("The status of uav%d : %s", delaymsg.uav_id(), delaymsg.cmd().c_str());
                std_msgs::String status_msg;
                status_msg.data = delaymsg.cmd();
                status_pub.publish(status_msg);
            }
        }   

        ros::spinOnce();
        loop_rate.sleep();
    }


    zmq_close(subscriber);
    zmq_ctx_destroy(ctx);

    ros::shutdown();
    return 0;
}
