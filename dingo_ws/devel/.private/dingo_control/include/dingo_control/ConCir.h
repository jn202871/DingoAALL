// Generated by gencpp from file dingo_control/ConCir.msg
// DO NOT EDIT!


#ifndef DINGO_CONTROL_MESSAGE_CONCIR_H
#define DINGO_CONTROL_MESSAGE_CONCIR_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dingo_control
{
template <class ContainerAllocator>
struct ConCir_
{
  typedef ConCir_<ContainerAllocator> Type;

  ConCir_()
    : string()  {
    }
  ConCir_(const ContainerAllocator& _alloc)
    : string(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _string_type;
  _string_type string;





  typedef boost::shared_ptr< ::dingo_control::ConCir_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dingo_control::ConCir_<ContainerAllocator> const> ConstPtr;

}; // struct ConCir_

typedef ::dingo_control::ConCir_<std::allocator<void> > ConCir;

typedef boost::shared_ptr< ::dingo_control::ConCir > ConCirPtr;
typedef boost::shared_ptr< ::dingo_control::ConCir const> ConCirConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dingo_control::ConCir_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dingo_control::ConCir_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dingo_control::ConCir_<ContainerAllocator1> & lhs, const ::dingo_control::ConCir_<ContainerAllocator2> & rhs)
{
  return lhs.string == rhs.string;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dingo_control::ConCir_<ContainerAllocator1> & lhs, const ::dingo_control::ConCir_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dingo_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dingo_control::ConCir_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dingo_control::ConCir_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dingo_control::ConCir_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dingo_control::ConCir_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dingo_control::ConCir_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dingo_control::ConCir_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dingo_control::ConCir_<ContainerAllocator> >
{
  static const char* value()
  {
    return "923dd8c946bcf1b66f509c36c23d7b88";
  }

  static const char* value(const ::dingo_control::ConCir_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x923dd8c946bcf1b6ULL;
  static const uint64_t static_value2 = 0x6f509c36c23d7b88ULL;
};

template<class ContainerAllocator>
struct DataType< ::dingo_control::ConCir_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dingo_control/ConCir";
  }

  static const char* value(const ::dingo_control::ConCir_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dingo_control::ConCir_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string string\n"
;
  }

  static const char* value(const ::dingo_control::ConCir_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dingo_control::ConCir_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.string);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConCir_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dingo_control::ConCir_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dingo_control::ConCir_<ContainerAllocator>& v)
  {
    s << indent << "string: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.string);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DINGO_CONTROL_MESSAGE_CONCIR_H
