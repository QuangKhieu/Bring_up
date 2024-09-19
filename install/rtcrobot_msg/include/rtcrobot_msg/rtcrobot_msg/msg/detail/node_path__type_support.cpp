// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rtcrobot_msg:msg/NodePath.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rtcrobot_msg/msg/detail/node_path__struct.hpp"
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

void NodePath_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rtcrobot_msg::msg::NodePath(_init);
}

void NodePath_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rtcrobot_msg::msg::NodePath *>(message_memory);
  typed_message->~NodePath();
}

size_t size_function__NodePath__waypoints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodePath__waypoints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__NodePath__waypoints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__NodePath__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__NodePath__waypoints(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__NodePath__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__NodePath__waypoints(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__NodePath__waypoints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NodePath_message_member_array[2] = {
  {
    "waypoints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtcrobot_msg::msg::NodePath, waypoints),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodePath__waypoints,  // size() function pointer
    get_const_function__NodePath__waypoints,  // get_const(index) function pointer
    get_function__NodePath__waypoints,  // get(index) function pointer
    fetch_function__NodePath__waypoints,  // fetch(index, &value) function pointer
    assign_function__NodePath__waypoints,  // assign(index, value) function pointer
    resize_function__NodePath__waypoints  // resize(index) function pointer
  },
  {
    "theta",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtcrobot_msg::msg::NodePath, theta),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NodePath_message_members = {
  "rtcrobot_msg::msg",  // message namespace
  "NodePath",  // message name
  2,  // number of fields
  sizeof(rtcrobot_msg::msg::NodePath),
  NodePath_message_member_array,  // message members
  NodePath_init_function,  // function to initialize message memory (memory has to be allocated)
  NodePath_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NodePath_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NodePath_message_members,
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
get_message_type_support_handle<rtcrobot_msg::msg::NodePath>()
{
  return &::rtcrobot_msg::msg::rosidl_typesupport_introspection_cpp::NodePath_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rtcrobot_msg, msg, NodePath)() {
  return &::rtcrobot_msg::msg::rosidl_typesupport_introspection_cpp::NodePath_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
