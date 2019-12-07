// Generated by gencpp from file master_msg/node0_t.msg
// DO NOT EDIT!


#ifndef MASTER_MSG_MESSAGE_NODE0_T_H
#define MASTER_MSG_MESSAGE_NODE0_T_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace master_msg
{
template <class ContainerAllocator>
struct node0_t_
{
  typedef node0_t_<ContainerAllocator> Type;

  node0_t_()
    : role(0)
    , id(0)
    , dataArray()  {
    }
  node0_t_(const ContainerAllocator& _alloc)
    : role(0)
    , id(0)
    , dataArray(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _role_type;
  _role_type role;

   typedef uint8_t _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _dataArray_type;
  _dataArray_type dataArray;





  typedef boost::shared_ptr< ::master_msg::node0_t_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::master_msg::node0_t_<ContainerAllocator> const> ConstPtr;

}; // struct node0_t_

typedef ::master_msg::node0_t_<std::allocator<void> > node0_t;

typedef boost::shared_ptr< ::master_msg::node0_t > node0_tPtr;
typedef boost::shared_ptr< ::master_msg::node0_t const> node0_tConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::master_msg::node0_t_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::master_msg::node0_t_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace master_msg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'master_msg': ['/home/ubuntu/catkin_ws/src/master_multirobot/master_msg/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::master_msg::node0_t_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::master_msg::node0_t_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::master_msg::node0_t_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::master_msg::node0_t_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::master_msg::node0_t_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::master_msg::node0_t_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::master_msg::node0_t_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6857f2f154d6c47296b16a1f8ce2144e";
  }

  static const char* value(const ::master_msg::node0_t_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6857f2f154d6c472ULL;
  static const uint64_t static_value2 = 0x96b16a1f8ce2144eULL;
};

template<class ContainerAllocator>
struct DataType< ::master_msg::node0_t_<ContainerAllocator> >
{
  static const char* value()
  {
    return "master_msg/node0_t";
  }

  static const char* value(const ::master_msg::node0_t_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::master_msg::node0_t_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 role\n\
uint8 id\n\
string dataArray\n\
\n\
";
  }

  static const char* value(const ::master_msg::node0_t_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::master_msg::node0_t_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.role);
      stream.next(m.id);
      stream.next(m.dataArray);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node0_t_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::master_msg::node0_t_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::master_msg::node0_t_<ContainerAllocator>& v)
  {
    s << indent << "role: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.role);
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
    s << indent << "dataArray: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.dataArray);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MASTER_MSG_MESSAGE_NODE0_T_H
