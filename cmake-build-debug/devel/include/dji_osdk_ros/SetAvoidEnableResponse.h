// Generated by gencpp from file dji_osdk_ros/SetAvoidEnableResponse.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_SETAVOIDENABLERESPONSE_H
#define DJI_OSDK_ROS_MESSAGE_SETAVOIDENABLERESPONSE_H


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
struct SetAvoidEnableResponse_
{
  typedef SetAvoidEnableResponse_<ContainerAllocator> Type;

  SetAvoidEnableResponse_()
    : result(false)  {
    }
  SetAvoidEnableResponse_(const ContainerAllocator& _alloc)
    : result(false)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetAvoidEnableResponse_

typedef ::dji_osdk_ros::SetAvoidEnableResponse_<std::allocator<void> > SetAvoidEnableResponse;

typedef boost::shared_ptr< ::dji_osdk_ros::SetAvoidEnableResponse > SetAvoidEnableResponsePtr;
typedef boost::shared_ptr< ::dji_osdk_ros::SetAvoidEnableResponse const> SetAvoidEnableResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dji_osdk_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/SetAvoidEnableResponse";
  }

  static const char* value(const ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#response\n"
"bool result\n"
;
  }

  static const char* value(const ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetAvoidEnableResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::SetAvoidEnableResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_SETAVOIDENABLERESPONSE_H
