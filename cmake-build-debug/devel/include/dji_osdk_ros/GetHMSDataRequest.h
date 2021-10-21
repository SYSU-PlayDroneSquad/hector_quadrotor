// Generated by gencpp from file dji_osdk_ros/GetHMSDataRequest.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_GETHMSDATAREQUEST_H
#define DJI_OSDK_ROS_MESSAGE_GETHMSDATAREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dji_osdk_ros
{
template <class ContainerAllocator>
struct GetHMSDataRequest_
{
  typedef GetHMSDataRequest_<ContainerAllocator> Type;

  GetHMSDataRequest_()
    : enable(false)  {
    }
  GetHMSDataRequest_(const ContainerAllocator& _alloc)
    : enable(false)  {
  (void)_alloc;
    }



   typedef uint8_t _enable_type;
  _enable_type enable;





  typedef boost::shared_ptr< ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetHMSDataRequest_

typedef ::dji_osdk_ros::GetHMSDataRequest_<std::allocator<void> > GetHMSDataRequest;

typedef boost::shared_ptr< ::dji_osdk_ros::GetHMSDataRequest > GetHMSDataRequestPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::GetHMSDataRequest const> GetHMSDataRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator2> & rhs)
{
  return lhs.enable == rhs.enable;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dji_osdk_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8c1211af706069c994c06e00eb59ac9e";
  }

  static const char* value(const ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8c1211af706069c9ULL;
  static const uint64_t static_value2 = 0x94c06e00eb59ac9eULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/GetHMSDataRequest";
  }

  static const char* value(const ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#request\n"
"bool enable\n"
;
  }

  static const char* value(const ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enable);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetHMSDataRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::GetHMSDataRequest_<ContainerAllocator>& v)
  {
    s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_GETHMSDATAREQUEST_H
