// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rtcrobot_msg:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__OBSTACLE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__OBSTACLE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rtcrobot_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rtcrobot_msg/msg/detail/obstacle__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace rtcrobot_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcrobot_msg
cdr_serialize(
  const rtcrobot_msg::msg::Obstacle & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcrobot_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rtcrobot_msg::msg::Obstacle & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcrobot_msg
get_serialized_size(
  const rtcrobot_msg::msg::Obstacle & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcrobot_msg
max_serialized_size_Obstacle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rtcrobot_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcrobot_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtcrobot_msg, msg, Obstacle)();

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__OBSTACLE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
