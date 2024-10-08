// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rtcrobot_msg:msg/ObstacleSeg.idl
// generated code does not contain a copyright notice
#include "rtcrobot_msg/msg/detail/obstacle_seg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rtcrobot_msg/msg/detail/obstacle_seg__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

// functions for geometry_msgs::msg::Point already declared above


namespace rtcrobot_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcrobot_msg
cdr_serialize(
  const rtcrobot_msg::msg::ObstacleSeg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: first_point
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.first_point,
    cdr);
  // Member: last_point
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.last_point,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcrobot_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rtcrobot_msg::msg::ObstacleSeg & ros_message)
{
  // Member: first_point
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.first_point);

  // Member: last_point
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.last_point);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcrobot_msg
get_serialized_size(
  const rtcrobot_msg::msg::ObstacleSeg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: first_point

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.first_point, current_alignment);
  // Member: last_point

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.last_point, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcrobot_msg
max_serialized_size_ObstacleSeg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: first_point
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: last_point
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rtcrobot_msg::msg::ObstacleSeg;
    is_plain =
      (
      offsetof(DataType, last_point) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ObstacleSeg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rtcrobot_msg::msg::ObstacleSeg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ObstacleSeg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rtcrobot_msg::msg::ObstacleSeg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ObstacleSeg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rtcrobot_msg::msg::ObstacleSeg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ObstacleSeg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ObstacleSeg(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ObstacleSeg__callbacks = {
  "rtcrobot_msg::msg",
  "ObstacleSeg",
  _ObstacleSeg__cdr_serialize,
  _ObstacleSeg__cdr_deserialize,
  _ObstacleSeg__get_serialized_size,
  _ObstacleSeg__max_serialized_size
};

static rosidl_message_type_support_t _ObstacleSeg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObstacleSeg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rtcrobot_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rtcrobot_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<rtcrobot_msg::msg::ObstacleSeg>()
{
  return &rtcrobot_msg::msg::typesupport_fastrtps_cpp::_ObstacleSeg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtcrobot_msg, msg, ObstacleSeg)() {
  return &rtcrobot_msg::msg::typesupport_fastrtps_cpp::_ObstacleSeg__handle;
}

#ifdef __cplusplus
}
#endif
