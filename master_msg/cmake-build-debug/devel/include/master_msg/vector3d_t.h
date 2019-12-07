// Generated by gencpp from file master_msg/vector3d_t.msg
// DO NOT EDIT!


#ifndef MASTER_MSG_MESSAGE_VECTOR3D_T_H
#define MASTER_MSG_MESSAGE_VECTOR3D_T_H


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
struct vector3d_t_
{
  typedef vector3d_t_<ContainerAllocator> Type;

  vector3d_t_()
    : x(0.0)
    , y(0.0)
    , z(0.0)  {
    }
  vector3d_t_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::master_msg::vector3d_t_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::master_msg::vector3d_t_<ContainerAllocator> const> ConstPtr;

}; // struct vector3d_t_

typedef ::master_msg::vector3d_t_<std::allocator<void> > vector3d_t;

typedef boost::shared_ptr< ::master_msg::vector3d_t > vector3d_tPtr;
typedef boost::shared_ptr< ::master_msg::vector3d_t const> vector3d_tConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::master_msg::vector3d_t_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::master_msg::vector3d_t_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace master_msg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'master_msg': ['/home/ubuntu/catkin_ws/src/master_multirobot/master_msg/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::master_msg::vector3d_t_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::master_msg::vector3d_t_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::master_msg::vector3d_t_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::master_msg::vector3d_t_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::master_msg::vector3d_t_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::master_msg::vector3d_t_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::master_msg::vector3d_t_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cc153912f1453b708d221682bc23d9ac";
  }

  static const char* value(const ::master_msg::vector3d_t_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcc153912f1453b70ULL;
  static const uint64_t static_value2 = 0x8d221682bc23d9acULL;
};

template<class ContainerAllocator>
struct DataType< ::master_msg::vector3d_t_<ContainerAllocator> >
{
  static const char* value()
  {
    return "master_msg/vector3d_t";
  }

  static const char* value(const ::master_msg::vector3d_t_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::master_msg::vector3d_t_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n\
float32 y\n\
float32 z\n\
";
  }

  static const char* value(const ::master_msg::vector3d_t_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::master_msg::vector3d_t_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct vector3d_t_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::master_msg::vector3d_t_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::master_msg::vector3d_t_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MASTER_MSG_MESSAGE_VECTOR3D_T_H
