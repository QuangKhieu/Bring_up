// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rtcrobot_msg:msg/RawObstacle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rtcrobot_msg/msg/detail/raw_obstacle__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rtcrobot_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RawObstacle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rtcrobot_msg::msg::RawObstacle(_init);
}

void RawObstacle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rtcrobot_msg::msg::RawObstacle *>(message_memory);
  typed_message->~RawObstacle();
}

size_t size_function__RawObstacle__circles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtcrobot_msg::msg::ObstacleCir> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RawObstacle__circles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtcrobot_msg::msg::ObstacleCir> *>(untyped_member);
  return &member[index];
}

void * get_function__RawObstacle__circles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtcrobot_msg::msg::ObstacleCir> *>(untyped_member);
  return &member[index];
}

void fetch_function__RawObstacle__circles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rtcrobot_msg::msg::ObstacleCir *>(
    get_const_function__RawObstacle__circles(untyped_member, index));
  auto & value = *reinterpret_cast<rtcrobot_msg::msg::ObstacleCir *>(untyped_value);
  value = item;
}

void assign_function__RawObstacle__circles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rtcrobot_msg::msg::ObstacleCir *>(
    get_function__RawObstacle__circles(untyped_member, index));
  const auto & value = *reinterpret_cast<const rtcrobot_msg::msg::ObstacleCir *>(untyped_value);
  item = value;
}

void resize_function__RawObstacle__circles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtcrobot_msg::msg::ObstacleCir> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RawObstacle__segments(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtcrobot_msg::msg::ObstacleSeg> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RawObstacle__segments(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtcrobot_msg::msg::ObstacleSeg> *>(untyped_member);
  return &member[index];
}

void * get_function__RawObstacle__segments(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtcrobot_msg::msg::ObstacleSeg> *>(untyped_member);
  return &member[index];
}

void fetch_function__RawObstacle__segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rtcrobot_msg::msg::ObstacleSeg *>(
    get_const_function__RawObstacle__segments(untyped_member, index));
  auto & value = *reinterpret_cast<rtcrobot_msg::msg::ObstacleSeg *>(untyped_value);
  value = item;
}

void assign_function__RawObstacle__segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rtcrobot_msg::msg::ObstacleSeg *>(
    get_function__RawObstacle__segments(untyped_member, index));
  const auto & value = *reinterpret_cast<const rtcrobot_msg::msg::ObstacleSeg *>(untyped_value);
  item = value;
}

void resize_function__RawObstacle__segments(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtcrobot_msg::msg::ObstacleSeg> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RawObstacle_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtcrobot_msg::msg::RawObstacle, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "circles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtcrobot_msg::msg::ObstacleCir>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtcrobot_msg::msg::RawObstacle, circles),  // bytes offset in struct
    nullptr,  // default value
    size_function__RawObstacle__circles,  // size() function pointer
    get_const_function__RawObstacle__circles,  // get_const(index) function pointer
    get_function__RawObstacle__circles,  // get(index) function pointer
    fetch_function__RawObstacle__circles,  // fetch(index, &value) function pointer
    assign_function__RawObstacle__circles,  // assign(index, value) function pointer
    resize_function__RawObstacle__circles  // resize(index) function pointer
  },
  {
    "segments",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtcrobot_msg::msg::ObstacleSeg>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtcrobot_msg::msg::RawObstacle, segments),  // bytes offset in struct
    nullptr,  // default value
    size_function__RawObstacle__segments,  // size() function pointer
    get_const_function__RawObstacle__segments,  // get_const(index) function pointer
    get_function__RawObstacle__segments,  // get(index) function pointer
    fetch_function__RawObstacle__segments,  // fetch(index, &value) function pointer
    assign_function__RawObstacle__segments,  // assign(index, value) function pointer
    resize_function__RawObstacle__segments  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RawObstacle_message_members = {
  "rtcrobot_msg::msg",  // message namespace
  "RawObstacle",  // message name
  3,  // number of fields
  sizeof(rtcrobot_msg::msg::RawObstacle),
  RawObstacle_message_member_array,  // message members
  RawObstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  RawObstacle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RawObstacle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RawObstacle_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rtcrobot_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rtcrobot_msg::msg::RawObstacle>()
{
  return &::rtcrobot_msg::msg::rosidl_typesupport_introspection_cpp::RawObstacle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rtcrobot_msg, msg, RawObstacle)() {
  return &::rtcrobot_msg::msg::rosidl_typesupport_introspection_cpp::RawObstacle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
