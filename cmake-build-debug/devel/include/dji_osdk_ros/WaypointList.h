// Generated by gencpp from file dji_osdk_ros/WaypointList.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_WAYPOINTLIST_H
#define DJI_OSDK_ROS_MESSAGE_WAYPOINTLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dji_osdk_ros/Waypoint.h>

namespace dji_osdk_ros
{
template <class ContainerAllocator>
struct WaypointList_
{
  typedef WaypointList_<ContainerAllocator> Type;

  WaypointList_()
    : waypoint_list()  {
    }
  WaypointList_(const ContainerAllocator& _alloc)
    : waypoint_list(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::dji_osdk_ros::Waypoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::dji_osdk_ros::Waypoint_<ContainerAllocator> >::other >  _waypoint_list_type;
  _waypoint_list_type waypoint_list;





  typedef boost::shared_ptr< ::dji_osdk_ros::WaypointList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::WaypointList_<ContainerAllocator> const> ConstPtr;

}; // struct WaypointList_

typedef ::dji_osdk_ros::WaypointList_<std::allocator<void> > WaypointList;

typedef boost::shared_ptr< ::dji_osdk_ros::WaypointList > WaypointListPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::WaypointList const> WaypointListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::WaypointList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::WaypointList_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dji_osdk_ros::WaypointList_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::WaypointList_<ContainerAllocator2> & rhs)
{
  return lhs.waypoint_list == rhs.waypoint_list;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dji_osdk_ros::WaypointList_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::WaypointList_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dji_osdk_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::WaypointList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::WaypointList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::WaypointList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::WaypointList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::WaypointList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::WaypointList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::WaypointList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "284386e6fe0f355bdea1db93ead90084";
  }

  static const char* value(const ::dji_osdk_ros::WaypointList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x284386e6fe0f355bULL;
  static const uint64_t static_value2 = 0xdea1db93ead90084ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::WaypointList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/WaypointList";
  }

  static const char* value(const ::dji_osdk_ros::WaypointList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::WaypointList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Waypoint[] waypoint_list\n"
"\n"
"================================================================================\n"
"MSG: dji_osdk_ros/Waypoint\n"
"float64 latitude      # in degree\n"
"float64 longitude     # in degree\n"
"float32 altitude\n"
"int16 heading         #heading is in [-180,180]\n"
"uint16 staytime       # in second\n"
"\n"
;
  }

  static const char* value(const ::dji_osdk_ros::WaypointList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::WaypointList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.waypoint_list);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaypointList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::WaypointList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::WaypointList_<ContainerAllocator>& v)
  {
    s << indent << "waypoint_list[]" << std::endl;
    for (size_t i = 0; i < v.waypoint_list.size(); ++i)
    {
      s << indent << "  waypoint_list[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dji_osdk_ros::Waypoint_<ContainerAllocator> >::stream(s, indent + "    ", v.waypoint_list[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_WAYPOINTLIST_H
