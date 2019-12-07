// Generated by gencpp from file master_msg/node_frame2.msg
// DO NOT EDIT!


#ifndef MASTER_MSG_MESSAGE_NODE_FRAME2_H
#define MASTER_MSG_MESSAGE_NODE_FRAME2_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <master_msg/vector3d_t.h>
#include <master_msg/vector3d_t.h>
#include <master_msg/vector3d_t.h>
#include <master_msg/vector3d_t.h>
#include <master_msg/vector3d_t.h>
#include <master_msg/vector3d_t.h>
#include <master_msg/node2_t.h>

namespace master_msg
{
template <class ContainerAllocator>
struct node_frame2_
{
  typedef node_frame2_<ContainerAllocator> Type;

  node_frame2_()
    : role(0)
    , id(0)
    , systemTime(0)
    , position()
    , eop()
    , velocity()
    , distances()
    , imuGyro()
    , imuAcc()
    , angle()
    , quaternions()
    , supplyVoltage(0.0)
    , nodes()  {
      distances.assign(0.0);

      quaternions.assign(0.0);
  }
  node_frame2_(const ContainerAllocator& _alloc)
    : role(0)
    , id(0)
    , systemTime(0)
    , position(_alloc)
    , eop(_alloc)
    , velocity(_alloc)
    , distances()
    , imuGyro(_alloc)
    , imuAcc(_alloc)
    , angle(_alloc)
    , quaternions()
    , supplyVoltage(0.0)
    , nodes(_alloc)  {
  (void)_alloc;
      distances.assign(0.0);

      quaternions.assign(0.0);
  }



   typedef uint8_t _role_type;
  _role_type role;

   typedef uint8_t _id_type;
  _id_type id;

   typedef uint32_t _systemTime_type;
  _systemTime_type systemTime;

   typedef  ::master_msg::vector3d_t_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef  ::master_msg::vector3d_t_<ContainerAllocator>  _eop_type;
  _eop_type eop;

   typedef  ::master_msg::vector3d_t_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;

   typedef boost::array<float, 8>  _distances_type;
  _distances_type distances;

   typedef  ::master_msg::vector3d_t_<ContainerAllocator>  _imuGyro_type;
  _imuGyro_type imuGyro;

   typedef  ::master_msg::vector3d_t_<ContainerAllocator>  _imuAcc_type;
  _imuAcc_type imuAcc;

   typedef  ::master_msg::vector3d_t_<ContainerAllocator>  _angle_type;
  _angle_type angle;

   typedef boost::array<float, 4>  _quaternions_type;
  _quaternions_type quaternions;

   typedef float _supplyVoltage_type;
  _supplyVoltage_type supplyVoltage;

   typedef std::vector< ::master_msg::node2_t_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::master_msg::node2_t_<ContainerAllocator> >::other >  _nodes_type;
  _nodes_type nodes;





  typedef boost::shared_ptr< ::master_msg::node_frame2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::master_msg::node_frame2_<ContainerAllocator> const> ConstPtr;

}; // struct node_frame2_

typedef ::master_msg::node_frame2_<std::allocator<void> > node_frame2;

typedef boost::shared_ptr< ::master_msg::node_frame2 > node_frame2Ptr;
typedef boost::shared_ptr< ::master_msg::node_frame2 const> node_frame2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::master_msg::node_frame2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::master_msg::node_frame2_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::master_msg::node_frame2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::master_msg::node_frame2_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::master_msg::node_frame2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::master_msg::node_frame2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::master_msg::node_frame2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::master_msg::node_frame2_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::master_msg::node_frame2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2bd4695057836d171d8201257d601e34";
  }

  static const char* value(const ::master_msg::node_frame2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2bd4695057836d17ULL;
  static const uint64_t static_value2 = 0x1d8201257d601e34ULL;
};

template<class ContainerAllocator>
struct DataType< ::master_msg::node_frame2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "master_msg/node_frame2";
  }

  static const char* value(const ::master_msg::node_frame2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::master_msg::node_frame2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 role\n\
uint8 id\n\
uint32 systemTime\n\
vector3d_t position\n\
vector3d_t eop\n\
vector3d_t velocity\n\
float32[8] distances\n\
vector3d_t imuGyro\n\
vector3d_t imuAcc\n\
vector3d_t angle\n\
float32[4] quaternions\n\
float32 supplyVoltage\n\
node2_t[] nodes\n\
\n\
================================================================================\n\
MSG: master_msg/vector3d_t\n\
float32 x\n\
float32 y\n\
float32 z\n\
\n\
================================================================================\n\
MSG: master_msg/node2_t\n\
uint8 role\n\
uint8 id\n\
float32 distance\n\
float32 fpRssi\n\
float32 rxRssi\n\
uint32 systemTime\n\
";
  }

  static const char* value(const ::master_msg::node_frame2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::master_msg::node_frame2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.role);
      stream.next(m.id);
      stream.next(m.systemTime);
      stream.next(m.position);
      stream.next(m.eop);
      stream.next(m.velocity);
      stream.next(m.distances);
      stream.next(m.imuGyro);
      stream.next(m.imuAcc);
      stream.next(m.angle);
      stream.next(m.quaternions);
      stream.next(m.supplyVoltage);
      stream.next(m.nodes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_frame2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::master_msg::node_frame2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::master_msg::node_frame2_<ContainerAllocator>& v)
  {
    s << indent << "role: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.role);
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
    s << indent << "systemTime: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.systemTime);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::master_msg::vector3d_t_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "eop: ";
    s << std::endl;
    Printer< ::master_msg::vector3d_t_<ContainerAllocator> >::stream(s, indent + "  ", v.eop);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::master_msg::vector3d_t_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    s << indent << "distances[]" << std::endl;
    for (size_t i = 0; i < v.distances.size(); ++i)
    {
      s << indent << "  distances[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.distances[i]);
    }
    s << indent << "imuGyro: ";
    s << std::endl;
    Printer< ::master_msg::vector3d_t_<ContainerAllocator> >::stream(s, indent + "  ", v.imuGyro);
    s << indent << "imuAcc: ";
    s << std::endl;
    Printer< ::master_msg::vector3d_t_<ContainerAllocator> >::stream(s, indent + "  ", v.imuAcc);
    s << indent << "angle: ";
    s << std::endl;
    Printer< ::master_msg::vector3d_t_<ContainerAllocator> >::stream(s, indent + "  ", v.angle);
    s << indent << "quaternions[]" << std::endl;
    for (size_t i = 0; i < v.quaternions.size(); ++i)
    {
      s << indent << "  quaternions[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.quaternions[i]);
    }
    s << indent << "supplyVoltage: ";
    Printer<float>::stream(s, indent + "  ", v.supplyVoltage);
    s << indent << "nodes[]" << std::endl;
    for (size_t i = 0; i < v.nodes.size(); ++i)
    {
      s << indent << "  nodes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::master_msg::node2_t_<ContainerAllocator> >::stream(s, indent + "    ", v.nodes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MASTER_MSG_MESSAGE_NODE_FRAME2_H
