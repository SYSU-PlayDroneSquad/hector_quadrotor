// Generated by gencpp from file dji_sdk/MissionHpResetYawRequest.msg
// DO NOT EDIT!


#ifndef DJI_SDK_MESSAGE_MISSIONHPRESETYAWREQUEST_H
#define DJI_SDK_MESSAGE_MISSIONHPRESETYAWREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dji_sdk
{
template <class ContainerAllocator>
struct MissionHpResetYawRequest_
{
  typedef MissionHpResetYawRequest_<ContainerAllocator> Type;

  MissionHpResetYawRequest_()
    {
    }
  MissionHpResetYawRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MissionHpResetYawRequest_

typedef ::dji_sdk::MissionHpResetYawRequest_<std::allocator<void> > MissionHpResetYawRequest;

typedef boost::shared_ptr< ::dji_sdk::MissionHpResetYawRequest > MissionHpResetYawRequestPtr;
typedef boost::shared_ptr< ::dji_sdk::MissionHpResetYawRequest const> MissionHpResetYawRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace dji_sdk

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_sdk/MissionHpResetYawRequest";
  }

  static const char* value(const ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MissionHpResetYawRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::dji_sdk::MissionHpResetYawRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DJI_SDK_MESSAGE_MISSIONHPRESETYAWREQUEST_H
