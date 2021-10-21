// Generated by gencpp from file dji_osdk_ros/MFIOConfigRequest.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_MFIOCONFIGREQUEST_H
#define DJI_OSDK_ROS_MESSAGE_MFIOCONFIGREQUEST_H


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
struct MFIOConfigRequest_
{
  typedef MFIOConfigRequest_<ContainerAllocator> Type;

  MFIOConfigRequest_()
    : mode(0)
    , channel(0)
    , init_on_time_us(0)
    , pwm_freq(0)  {
    }
  MFIOConfigRequest_(const ContainerAllocator& _alloc)
    : mode(0)
    , channel(0)
    , init_on_time_us(0)
    , pwm_freq(0)  {
  (void)_alloc;
    }



   typedef uint8_t _mode_type;
  _mode_type mode;

   typedef uint8_t _channel_type;
  _channel_type channel;

   typedef uint32_t _init_on_time_us_type;
  _init_on_time_us_type init_on_time_us;

   typedef uint16_t _pwm_freq_type;
  _pwm_freq_type pwm_freq;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(MODE_PWM_OUT)
  #undef MODE_PWM_OUT
#endif
#if defined(_WIN32) && defined(MODE_GPIO_OUT)
  #undef MODE_GPIO_OUT
#endif
#if defined(_WIN32) && defined(MODE_GPIO_IN)
  #undef MODE_GPIO_IN
#endif
#if defined(_WIN32) && defined(MODE_ADC)
  #undef MODE_ADC
#endif

  enum {
    MODE_PWM_OUT = 0u,
    MODE_GPIO_OUT = 2u,
    MODE_GPIO_IN = 3u,
    MODE_ADC = 4u,
  };


  typedef boost::shared_ptr< ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MFIOConfigRequest_

typedef ::dji_osdk_ros::MFIOConfigRequest_<std::allocator<void> > MFIOConfigRequest;

typedef boost::shared_ptr< ::dji_osdk_ros::MFIOConfigRequest > MFIOConfigRequestPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::MFIOConfigRequest const> MFIOConfigRequestConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator2> & rhs)
{
  return lhs.mode == rhs.mode &&
    lhs.channel == rhs.channel &&
    lhs.init_on_time_us == rhs.init_on_time_us &&
    lhs.pwm_freq == rhs.pwm_freq;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dji_osdk_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ad06bda475c7f13453680ee626114de0";
  }

  static const char* value(const ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xad06bda475c7f134ULL;
  static const uint64_t static_value2 = 0x53680ee626114de0ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/MFIOConfigRequest";
  }

  static const char* value(const ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#constant for mode\n"
"uint8 MODE_PWM_OUT  = 0\n"
"#uint8 MODE_PWM_IN  = 1 #PWM_IN is not functioning correctly\n"
"uint8 MODE_GPIO_OUT = 2\n"
"uint8 MODE_GPIO_IN  = 3\n"
"uint8 MODE_ADC      = 4\n"
"\n"
"#request\n"
"uint8 mode              # see constants above for possible modes\n"
"uint8 channel           # 0-7\n"
"uint32 init_on_time_us  # on time for pwm duty cycle in micro-seconds\n"
"uint16 pwm_freq         # set pwm frequency in Hz\n"
;
  }

  static const char* value(const ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
      stream.next(m.channel);
      stream.next(m.init_on_time_us);
      stream.next(m.pwm_freq);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MFIOConfigRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::MFIOConfigRequest_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "channel: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.channel);
    s << indent << "init_on_time_us: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.init_on_time_us);
    s << indent << "pwm_freq: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.pwm_freq);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_MFIOCONFIGREQUEST_H
