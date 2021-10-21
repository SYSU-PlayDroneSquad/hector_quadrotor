// Generated by gencpp from file dji_osdk_ros/WaypointV2AircraftControlActuator.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_WAYPOINTV2AIRCRAFTCONTROLACTUATOR_H
#define DJI_OSDK_ROS_MESSAGE_WAYPOINTV2AIRCRAFTCONTROLACTUATOR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dji_osdk_ros/WaypointV2AircraftControlActuatorFlying.h>
#include <dji_osdk_ros/WaypointV2AircraftControlActuatorRotateHeading.h>

namespace dji_osdk_ros
{
template <class ContainerAllocator>
struct WaypointV2AircraftControlActuator_
{
  typedef WaypointV2AircraftControlActuator_<ContainerAllocator> Type;

  WaypointV2AircraftControlActuator_()
    : actuatorIndex(0)
    , DJIWaypointV2ActionActuatorAircraftControlOperationType(0)
    , waypointV2AircraftControlActuatorFlying()
    , waypointV2AircraftControlActuatorRotateHeading()  {
    }
  WaypointV2AircraftControlActuator_(const ContainerAllocator& _alloc)
    : actuatorIndex(0)
    , DJIWaypointV2ActionActuatorAircraftControlOperationType(0)
    , waypointV2AircraftControlActuatorFlying(_alloc)
    , waypointV2AircraftControlActuatorRotateHeading(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _actuatorIndex_type;
  _actuatorIndex_type actuatorIndex;

   typedef uint16_t _DJIWaypointV2ActionActuatorAircraftControlOperationType_type;
  _DJIWaypointV2ActionActuatorAircraftControlOperationType_type DJIWaypointV2ActionActuatorAircraftControlOperationType;

   typedef  ::dji_osdk_ros::WaypointV2AircraftControlActuatorFlying_<ContainerAllocator>  _waypointV2AircraftControlActuatorFlying_type;
  _waypointV2AircraftControlActuatorFlying_type waypointV2AircraftControlActuatorFlying;

   typedef  ::dji_osdk_ros::WaypointV2AircraftControlActuatorRotateHeading_<ContainerAllocator>  _waypointV2AircraftControlActuatorRotateHeading_type;
  _waypointV2AircraftControlActuatorRotateHeading_type waypointV2AircraftControlActuatorRotateHeading;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(DJIWaypointV2ActionActuatorAircraftControlOperationTypeRotateYaw)
  #undef DJIWaypointV2ActionActuatorAircraftControlOperationTypeRotateYaw
#endif
#if defined(_WIN32) && defined(DJIWaypointV2ActionActuatorAircraftControlOperationTypeFlyingControl)
  #undef DJIWaypointV2ActionActuatorAircraftControlOperationTypeFlyingControl
#endif
#if defined(_WIN32) && defined(DJIWaypointV2ActionActuatorAircraftControlOperationTypeUnknown)
  #undef DJIWaypointV2ActionActuatorAircraftControlOperationTypeUnknown
#endif

  enum {
    DJIWaypointV2ActionActuatorAircraftControlOperationTypeRotateYaw = 1u,
    DJIWaypointV2ActionActuatorAircraftControlOperationTypeFlyingControl = 2u,
    DJIWaypointV2ActionActuatorAircraftControlOperationTypeUnknown = 255u,
  };


  typedef boost::shared_ptr< ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator> const> ConstPtr;

}; // struct WaypointV2AircraftControlActuator_

typedef ::dji_osdk_ros::WaypointV2AircraftControlActuator_<std::allocator<void> > WaypointV2AircraftControlActuator;

typedef boost::shared_ptr< ::dji_osdk_ros::WaypointV2AircraftControlActuator > WaypointV2AircraftControlActuatorPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::WaypointV2AircraftControlActuator const> WaypointV2AircraftControlActuatorConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator2> & rhs)
{
  return lhs.actuatorIndex == rhs.actuatorIndex &&
    lhs.DJIWaypointV2ActionActuatorAircraftControlOperationType == rhs.DJIWaypointV2ActionActuatorAircraftControlOperationType &&
    lhs.waypointV2AircraftControlActuatorFlying == rhs.waypointV2AircraftControlActuatorFlying &&
    lhs.waypointV2AircraftControlActuatorRotateHeading == rhs.waypointV2AircraftControlActuatorRotateHeading;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dji_osdk_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7737a1bd220f9cf26070a870330aaaa8";
  }

  static const char* value(const ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7737a1bd220f9cf2ULL;
  static const uint64_t static_value2 = 0x6070a870330aaaa8ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/WaypointV2AircraftControlActuator";
  }

  static const char* value(const ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Parameters for aircraft control actuator. It is valid only when the\n"
"# ``DJIWaypointV2Action_DJIWaypointV2Actuator_type`` is\n"
"# ``DJIWaypointV2MissionV2_DJIWaypointV2ActionActuatorType_AircraftControl``.\n"
"#contant for DJIWaypointV2ActionActuatorAircraftControlOperationType\n"
"# Rotates the aircraft's yaw.\n"
"uint8 DJIWaypointV2ActionActuatorAircraftControlOperationTypeRotateYaw = 1\n"
"# Keeps the aircraft stop flying or start flying.\n"
"uint8 DJIWaypointV2ActionActuatorAircraftControlOperationTypeFlyingControl = 2\n"
"# Unknown\n"
"uint8 DJIWaypointV2ActionActuatorAircraftControlOperationTypeUnknown = 255\n"
"\n"
"uint8 actuatorIndex   # The index of actuator. It is valid when the diagnostics is related\n"
"                      # to camera or gimbal and the connected product has multiple gimbals and cameras.\n"
"uint16 DJIWaypointV2ActionActuatorAircraftControlOperationType \n"
"WaypointV2AircraftControlActuatorFlying waypointV2AircraftControlActuatorFlying\n"
"WaypointV2AircraftControlActuatorRotateHeading waypointV2AircraftControlActuatorRotateHeading\n"
"================================================================================\n"
"MSG: dji_osdk_ros/WaypointV2AircraftControlActuatorFlying\n"
"# This class defines if the aircraft starts or stops the flight.s.\n"
"uint8  isStartFlying  # Determines the aircraft start flying or stop flying.\n"
"                        # ``TRUE`` for the aircraft to start flying.\n"
"================================================================================\n"
"MSG: dji_osdk_ros/WaypointV2AircraftControlActuatorRotateHeading\n"
"# This class defines how the aircraft rotates on the yaw axis.\n"
"  uint8 isRelative # Determines the aircraft rotate heading relative.\n"
"                     # if ``TRUE``, when the aircraft is rotating, relative to the current angle.\n"
"  float32 yaw # Determines the direction how aircraft changes its heading.\n"
;
  }

  static const char* value(const ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.actuatorIndex);
      stream.next(m.DJIWaypointV2ActionActuatorAircraftControlOperationType);
      stream.next(m.waypointV2AircraftControlActuatorFlying);
      stream.next(m.waypointV2AircraftControlActuatorRotateHeading);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaypointV2AircraftControlActuator_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::WaypointV2AircraftControlActuator_<ContainerAllocator>& v)
  {
    s << indent << "actuatorIndex: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.actuatorIndex);
    s << indent << "DJIWaypointV2ActionActuatorAircraftControlOperationType: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.DJIWaypointV2ActionActuatorAircraftControlOperationType);
    s << indent << "waypointV2AircraftControlActuatorFlying: ";
    s << std::endl;
    Printer< ::dji_osdk_ros::WaypointV2AircraftControlActuatorFlying_<ContainerAllocator> >::stream(s, indent + "  ", v.waypointV2AircraftControlActuatorFlying);
    s << indent << "waypointV2AircraftControlActuatorRotateHeading: ";
    s << std::endl;
    Printer< ::dji_osdk_ros::WaypointV2AircraftControlActuatorRotateHeading_<ContainerAllocator> >::stream(s, indent + "  ", v.waypointV2AircraftControlActuatorRotateHeading);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_WAYPOINTV2AIRCRAFTCONTROLACTUATOR_H
