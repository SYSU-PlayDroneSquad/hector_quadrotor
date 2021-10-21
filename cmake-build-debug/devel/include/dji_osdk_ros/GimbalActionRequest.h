// Generated by gencpp from file dji_osdk_ros/GimbalActionRequest.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_GIMBALACTIONREQUEST_H
#define DJI_OSDK_ROS_MESSAGE_GIMBALACTIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace dji_osdk_ros
{
template <class ContainerAllocator>
struct GimbalActionRequest_
{
  typedef GimbalActionRequest_<ContainerAllocator> Type;

  GimbalActionRequest_()
    : header()
    , is_reset(false)
    , payload_index(0)
    , rotationMode(0)
    , pitch(0.0)
    , roll(0.0)
    , yaw(0.0)
    , time(0.0)  {
    }
  GimbalActionRequest_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , is_reset(false)
    , payload_index(0)
    , rotationMode(0)
    , pitch(0.0)
    , roll(0.0)
    , yaw(0.0)
    , time(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _is_reset_type;
  _is_reset_type is_reset;

   typedef uint8_t _payload_index_type;
  _payload_index_type payload_index;

   typedef uint8_t _rotationMode_type;
  _rotationMode_type rotationMode;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _roll_type;
  _roll_type roll;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef double _time_type;
  _time_type time;





  typedef boost::shared_ptr< ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GimbalActionRequest_

typedef ::dji_osdk_ros::GimbalActionRequest_<std::allocator<void> > GimbalActionRequest;

typedef boost::shared_ptr< ::dji_osdk_ros::GimbalActionRequest > GimbalActionRequestPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::GimbalActionRequest const> GimbalActionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.is_reset == rhs.is_reset &&
    lhs.payload_index == rhs.payload_index &&
    lhs.rotationMode == rhs.rotationMode &&
    lhs.pitch == rhs.pitch &&
    lhs.roll == rhs.roll &&
    lhs.yaw == rhs.yaw &&
    lhs.time == rhs.time;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dji_osdk_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d81c7fa815423435db4054a0191ed73e";
  }

  static const char* value(const ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd81c7fa815423435ULL;
  static const uint64_t static_value2 = 0xdb4054a0191ed73eULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/GimbalActionRequest";
  }

  static const char* value(const ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"# ts is the time it takes to achieve the desired angle,\n"
"# so the shorter the time, the faster the gimbal rotates.\n"
"\n"
"#request\n"
"bool is_reset\n"
"\n"
"uint8 payload_index\n"
"\n"
"# rotation cooradiration\n"
"# 0 = execute angle command based on the previously set reference point\n"
"# 1 = execute angle command based on the current point\n"
"uint8 rotationMode\n"
"\n"
"# pitch angle in degree, unit : deg\n"
"float32 pitch\n"
"\n"
"# roll angle in degree, unit : deg\n"
"float32 roll\n"
"\n"
"# yaw angle in degree, unit : deg\n"
"float32 yaw\n"
"\n"
"#execution time, unit : second\n"
"float64 time\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.is_reset);
      stream.next(m.payload_index);
      stream.next(m.rotationMode);
      stream.next(m.pitch);
      stream.next(m.roll);
      stream.next(m.yaw);
      stream.next(m.time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GimbalActionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::GimbalActionRequest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "is_reset: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_reset);
    s << indent << "payload_index: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.payload_index);
    s << indent << "rotationMode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rotationMode);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_GIMBALACTIONREQUEST_H