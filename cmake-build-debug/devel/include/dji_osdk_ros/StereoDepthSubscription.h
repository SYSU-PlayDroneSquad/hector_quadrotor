// Generated by gencpp from file dji_osdk_ros/StereoDepthSubscription.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_STEREODEPTHSUBSCRIPTION_H
#define DJI_OSDK_ROS_MESSAGE_STEREODEPTHSUBSCRIPTION_H

#include <ros/service_traits.h>


#include <dji_osdk_ros/StereoDepthSubscriptionRequest.h>
#include <dji_osdk_ros/StereoDepthSubscriptionResponse.h>


namespace dji_osdk_ros
{

struct StereoDepthSubscription
{

typedef StereoDepthSubscriptionRequest Request;
typedef StereoDepthSubscriptionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StereoDepthSubscription
} // namespace dji_osdk_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_osdk_ros::StereoDepthSubscription > {
  static const char* value()
  {
    return "6da41f0fc9c34988dbd56e6a11bddfdf";
  }

  static const char* value(const ::dji_osdk_ros::StereoDepthSubscription&) { return value(); }
};

template<>
struct DataType< ::dji_osdk_ros::StereoDepthSubscription > {
  static const char* value()
  {
    return "dji_osdk_ros/StereoDepthSubscription";
  }

  static const char* value(const ::dji_osdk_ros::StereoDepthSubscription&) { return value(); }
};


// service_traits::MD5Sum< ::dji_osdk_ros::StereoDepthSubscriptionRequest> should match
// service_traits::MD5Sum< ::dji_osdk_ros::StereoDepthSubscription >
template<>
struct MD5Sum< ::dji_osdk_ros::StereoDepthSubscriptionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::StereoDepthSubscription >::value();
  }
  static const char* value(const ::dji_osdk_ros::StereoDepthSubscriptionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::StereoDepthSubscriptionRequest> should match
// service_traits::DataType< ::dji_osdk_ros::StereoDepthSubscription >
template<>
struct DataType< ::dji_osdk_ros::StereoDepthSubscriptionRequest>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::StereoDepthSubscription >::value();
  }
  static const char* value(const ::dji_osdk_ros::StereoDepthSubscriptionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_osdk_ros::StereoDepthSubscriptionResponse> should match
// service_traits::MD5Sum< ::dji_osdk_ros::StereoDepthSubscription >
template<>
struct MD5Sum< ::dji_osdk_ros::StereoDepthSubscriptionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_osdk_ros::StereoDepthSubscription >::value();
  }
  static const char* value(const ::dji_osdk_ros::StereoDepthSubscriptionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_osdk_ros::StereoDepthSubscriptionResponse> should match
// service_traits::DataType< ::dji_osdk_ros::StereoDepthSubscription >
template<>
struct DataType< ::dji_osdk_ros::StereoDepthSubscriptionResponse>
{
  static const char* value()
  {
    return DataType< ::dji_osdk_ros::StereoDepthSubscription >::value();
  }
  static const char* value(const ::dji_osdk_ros::StereoDepthSubscriptionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_STEREODEPTHSUBSCRIPTION_H
