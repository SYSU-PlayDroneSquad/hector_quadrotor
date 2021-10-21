// Generated by gencpp from file dji_osdk_ros/CameraStartShootAEBPhotoRequest.msg
// DO NOT EDIT!


#ifndef DJI_OSDK_ROS_MESSAGE_CAMERASTARTSHOOTAEBPHOTOREQUEST_H
#define DJI_OSDK_ROS_MESSAGE_CAMERASTARTSHOOTAEBPHOTOREQUEST_H


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
struct CameraStartShootAEBPhotoRequest_
{
  typedef CameraStartShootAEBPhotoRequest_<ContainerAllocator> Type;

  CameraStartShootAEBPhotoRequest_()
    : payload_index(0)
    , photo_aeb_count(0)  {
    }
  CameraStartShootAEBPhotoRequest_(const ContainerAllocator& _alloc)
    : payload_index(0)
    , photo_aeb_count(0)  {
  (void)_alloc;
    }



   typedef uint8_t _payload_index_type;
  _payload_index_type payload_index;

   typedef uint8_t _photo_aeb_count_type;
  _photo_aeb_count_type photo_aeb_count;





  typedef boost::shared_ptr< ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CameraStartShootAEBPhotoRequest_

typedef ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<std::allocator<void> > CameraStartShootAEBPhotoRequest;

typedef boost::shared_ptr< ::dji_osdk_ros::CameraStartShootAEBPhotoRequest > CameraStartShootAEBPhotoRequestPtr;
typedef boost::shared_ptr< ::dji_osdk_ros::CameraStartShootAEBPhotoRequest const> CameraStartShootAEBPhotoRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator2> & rhs)
{
  return lhs.payload_index == rhs.payload_index &&
    lhs.photo_aeb_count == rhs.photo_aeb_count;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator1> & lhs, const ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dji_osdk_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dd4f68927ad0771b9c08ccc08748ba4d";
  }

  static const char* value(const ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdd4f68927ad0771bULL;
  static const uint64_t static_value2 = 0x9c08ccc08748ba4dULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_osdk_ros/CameraStartShootAEBPhotoRequest";
  }

  static const char* value(const ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#request\n"
"uint8 payload_index #see enum class PayloadIndex in common_type.h\n"
"uint8 photo_aeb_count #see enum class PhotoAEBCount in common_type.h\n"
;
  }

  static const char* value(const ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.payload_index);
      stream.next(m.photo_aeb_count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CameraStartShootAEBPhotoRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_osdk_ros::CameraStartShootAEBPhotoRequest_<ContainerAllocator>& v)
  {
    s << indent << "payload_index: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.payload_index);
    s << indent << "photo_aeb_count: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.photo_aeb_count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_OSDK_ROS_MESSAGE_CAMERASTARTSHOOTAEBPHOTOREQUEST_H