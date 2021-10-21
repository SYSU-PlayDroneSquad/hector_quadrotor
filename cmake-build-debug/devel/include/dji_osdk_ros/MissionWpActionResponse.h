// Generated by gencpp from file dji_osdk_ros/MissionWpActionResponse.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_MISSIONWPACTIONRESPONSE_H
#define DJI_OSDK_ROS_MESSAGE_MISSIONWPACTIONRESPONSE_H


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
struct MissionWpActionResponse_
{
  typedef MissionWpActionResponse_<ContainerAllocator> Type;

  MissionWpActionResponse_()
    : result(false)
    , cmd_set(0)
    , cmd_id(0)
    , ack_data(0)  {
    }
  MissionWpActionResponse_(const ContainerAllocator& _alloc)
    : result(false)
    , cmd_set(0)
    , cmd_id(0)
    , ack_data(0)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;

   typedef uint8_t _cmd_set_type;
  _cmd_set_type cmd_set;

   typedef uint8_t _cmd_id_type;
  _cmd_id_type cmd_id;

   typedef uint32_t _ack_data_type;
  _ack_data_type ack_data;





  typedef boost::shared_ptr< ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MissionWpActionResponse_

typedef ::dji_osdk_ros::MissionWpActionResponse_<std::allocator<void> > MissionWpActionResponse;

typedef boost::shared_ptr< ::dji_osdk_ros::MissionWpActionResponse > MissionWpActionResponsePtr;
typedef boost::shared_ptr< ::dji_osdk_ros::MissionWpActionResponse const> MissionWpActionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result &&
    lhs.cmd_set == rhs.cmd_set &&
    lhs.cmd_id == rhs.cmd_id &&
    lhs.ack_data == rhs.ack_data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dji_osdk_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f03b0bc279b265c40946c1011df83013";
  }

  static const char* value(const ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf03b0bc279b265c4ULL;
  static const uint64_t static_value2 = 0x0946c1011df83013ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/MissionWpActionResponse";
  }

  static const char* value(const ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool result\n"
"# for debugging usage\n"
"uint8 cmd_set\n"
"uint8 cmd_id\n"
"uint32 ack_data\n"
"\n"
;
  }

  static const char* value(const ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.cmd_set);
      stream.next(m.cmd_id);
      stream.next(m.ack_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MissionWpActionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::MissionWpActionResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
    s << indent << "cmd_set: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_set);
    s << indent << "cmd_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd_id);
    s << indent << "ack_data: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ack_data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_MISSIONWPACTIONRESPONSE_H