// Generated by gencpp from file dji_osdk_ros/SetAvoidEnable.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_SETAVOIDENABLE_H
#define DJI_OSDK_ROS_MESSAGE_SETAVOIDENABLE_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/SetAvoidEnableRequest.h>
#include <dji_osdk_ros/SetAvoidEnableResponse.h>


namespace dji_osdk_ros
{

struct SetAvoidEnable
{

typedef SetAvoidEnableRequest Request;
typedef SetAvoidEnableResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetAvoidEnable
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::SetAvoidEnable > {
  static const char* value()
  {
    return "29d58f387352c15c4e4f5763022ae875";
  }

  static const char* value(const ::dji_osdk_ros::SetAvoidEnable&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::SetAvoidEnable > {
  static const char* value()
  {
    return "dji_osdk_ros/SetAvoidEnable";
  }

  static const char* value(const ::dji_osdk_ros::SetAvoidEnable&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::SetAvoidEnableRequest> should match
// service_traits::MD5Sum< ::dji_osdk_ros::SetAvoidEnable >
template<>
struct MD5Sum< ::dji_osdk_ros::SetAvoidEnableRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::SetAvoidEnable >::value();
  }
  static const char* value(const ::dji_osdk_ros::SetAvoidEnableRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::SetAvoidEnableRequest> should match
// service_traits::DataType< ::dji_osdk_ros::SetAvoidEnable >
template<>
struct DataType< ::dji_osdk_ros::SetAvoidEnableRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::SetAvoidEnable >::value();
  }
  static const char* value(const ::dji_osdk_ros::SetAvoidEnableRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::SetAvoidEnableResponse> should match
// service_traits::MD5Sum< ::dji_osdk_ros::SetAvoidEnable >
template<>
struct MD5Sum< ::dji_osdk_ros::SetAvoidEnableResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::SetAvoidEnable >::value();
  }
  static const char* value(const ::dji_osdk_ros::SetAvoidEnableResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::SetAvoidEnableResponse> should match
// service_traits::DataType< ::dji_osdk_ros::SetAvoidEnable >
template<>
struct DataType< ::dji_osdk_ros::SetAvoidEnableResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::SetAvoidEnable >::value();
  }
  static const char* value(const ::dji_osdk_ros::SetAvoidEnableResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_SETAVOIDENABLE_H
