/* Auto-generated by genmsg_cpp for file /home/samer/code_release/hitl-slam/vector_slam_msgs/msg/GuiKeyboardEvent.msg */
#ifndef VECTOR_SLAM_MSGS_MESSAGE_GUIKEYBOARDEVENT_H
#define VECTOR_SLAM_MSGS_MESSAGE_GUIKEYBOARDEVENT_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace vector_slam_msgs
{
template <class ContainerAllocator>
struct GuiKeyboardEvent_ {
  typedef GuiKeyboardEvent_<ContainerAllocator> Type;

  GuiKeyboardEvent_()
  : header()
  , keycode(0)
  , modifiers(0)
  {
  }

  GuiKeyboardEvent_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , keycode(0)
  , modifiers(0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef uint32_t _keycode_type;
  uint32_t keycode;

  typedef uint32_t _modifiers_type;
  uint32_t modifiers;


  typedef boost::shared_ptr< ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator>  const> ConstPtr;
}; // struct GuiKeyboardEvent
typedef  ::vector_slam_msgs::GuiKeyboardEvent_<std::allocator<void> > GuiKeyboardEvent;

typedef boost::shared_ptr< ::vector_slam_msgs::GuiKeyboardEvent> GuiKeyboardEventPtr;
typedef boost::shared_ptr< ::vector_slam_msgs::GuiKeyboardEvent const> GuiKeyboardEventConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace vector_slam_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f0fec8e32de970ac60b5f38ede499ab5";
  }

  static const char* value(const  ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf0fec8e32de970acULL;
  static const uint64_t static_value2 = 0x60b5f38ede499ab5ULL;
};

template<class ContainerAllocator>
struct DataType< ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vector_slam_msgs/GuiKeyboardEvent";
  }

  static const char* value(const  ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# Feedback in terms keyboard keypress events on the localization GUI.\n\
#\n\
\n\
# Standard header. The frame should normally be \"map\", since the localization\n\
# GUI reports coordinates in the world (map) frame.\n\
std_msgs/Header header\n\
\n\
# The Keycode constant, as enumerated in the Qt::Key enumerator.\n\
uint32 keycode\n\
\n\
# Binary mask of keyboard modifiers that were active when the mouse event occurred.\n\
# 0x01 = Alt key  modifier\n\
# 0x02 = Ctrl key modifier\n\
# 0x04 = Shift key modifier\n\
uint32 modifiers\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.keycode);
    stream.next(m.modifiers);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GuiKeyboardEvent_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::vector_slam_msgs::GuiKeyboardEvent_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "keycode: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.keycode);
    s << indent << "modifiers: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.modifiers);
  }
};


} // namespace message_operations
} // namespace ros

#endif // VECTOR_SLAM_MSGS_MESSAGE_GUIKEYBOARDEVENT_H
