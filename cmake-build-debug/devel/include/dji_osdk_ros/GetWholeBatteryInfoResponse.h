// Generated by gencpp from file dji_osdk_ros/GetWholeBatteryInfoResponse.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_GETWHOLEBATTERYINFORESPONSE_H
#define DJI_OSDK_ROS_MESSAGE_GETWHOLEBATTERYINFORESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dji_osdk_ros/BatteryWholeInfo.h>

namespace dji_osdk_ros
{
template <class ContainerAllocator>
struct GetWholeBatteryInfoResponse_
{
  typedef GetWholeBatteryInfoResponse_<ContainerAllocator> Type;

  GetWholeBatteryInfoResponse_()
    : battery_whole_info()  {
    }
  GetWholeBatteryInfoResponse_(const ContainerAllocator& _alloc)
    : battery_whole_info(_alloc)  {
  (void)_alloc;
    }



   typedef  ::dji_osdk_ros::BatteryWholeInfo_<ContainerAllocator>  _battery_whole_info_type;
  _battery_whole_info_type battery_whole_info;





  typedef boost::shared_ptr< ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetWholeBatteryInfoResponse_

typedef ::dji_osdk_ros::GetWholeBatteryInfoResponse_<std::allocator<void> > GetWholeBatteryInfoResponse;

typedef boost::shared_ptr< ::dji_osdk_ros::GetWholeBatteryInfoResponse > GetWholeBatteryInfoResponsePtr;
typedef boost::shared_ptr< ::dji_osdk_ros::GetWholeBatteryInfoResponse const> GetWholeBatteryInfoResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator2> & rhs)
{
  return lhs.battery_whole_info == rhs.battery_whole_info;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dji_osdk_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a954f2c109885a4dd2f5564d3eb1433a";
  }

  static const char* value(const ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa954f2c109885a4dULL;
  static const uint64_t static_value2 = 0xd2f5564d3eb1433aULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/GetWholeBatteryInfoResponse";
  }

  static const char* value(const ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#response\n"
"BatteryWholeInfo battery_whole_info\n"
"\n"
"================================================================================\n"
"MSG: dji_osdk_ros/BatteryWholeInfo\n"
"uint16  remainFlyTime             # remain fly time(s)\n"
"uint16  goHomeNeedTime            # Time required for the gohome flight (s)\n"
"uint16  landNeedTime              # Time required for the land flight (s).max value:100*/\n"
"uint16  goHomeNeedCapacity        # Capacity required for the gohome flight (%).max value:100*/\n"
"uint16  landNeedCapacity          # Capacity required for the land flight (%).max value:100*/\n"
"float32 safeFlyRadius             # Safe flight area radius (m)*/\n"
"float32 capacityConsumeSpeed      # (mAh/sec)*/\n"
"BatteryState batteryState\n"
"uint8   goHomeCountDownState      # Countdown status of smart battery gohome\n"
"                                   # 0/2:not in gohome state\n"
"                                   # 1  :in gohome state\n"
"                                   #\n"
"uint8   gohomeCountDownvalue      # uint:s.max value:10\n"
"uint16  voltage                   # mv\n"
"uint8   batteryCapacityPercentage # uint:%.max value:100\n"
"uint8   lowBatteryAlarmThreshold\n"
"uint8   lowBatteryAlarmEnable\n"
"uint8   seriousLowBatteryAlarmThreshold\n"
"uint8   seriousLowBatteryAlarmEnable  \n"
"================================================================================\n"
"MSG: dji_osdk_ros/BatteryState\n"
"uint8 voltageNotSafety # Generally caused by low temperature, the battery has electricity,\n"
"                       # but the battery voltage is too low.\n"
"uint8 veryLowVoltageAlarm\n"
"uint8 LowVoltageAlarm\n"
"uint8 seriousLowCapacityAlarm\n"
"uint8 LowCapacityAlarm\n"
;
  }

  static const char* value(const ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.battery_whole_info);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetWholeBatteryInfoResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::GetWholeBatteryInfoResponse_<ContainerAllocator>& v)
  {
    s << indent << "battery_whole_info: ";
    s << std::endl;
    Printer< ::dji_osdk_ros::BatteryWholeInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.battery_whole_info);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_GETWHOLEBATTERYINFORESPONSE_H