// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtcrobot_msg:msg/RawObstacle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtcrobot_msg/msg/detail/raw_obstacle__rosidl_typesupport_introspection_c.h"
#include "rtcrobot_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtcrobot_msg/msg/detail/raw_obstacle__functions.h"
#include "rtcrobot_msg/msg/detail/raw_obstacle__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `circles`
#include "rtcrobot_msg/msg/obstacle_cir.h"
// Member `circles`
#include "rtcrobot_msg/msg/detail/obstacle_cir__rosidl_typesupport_introspection_c.h"
// Member `segments`
#include "rtcrobot_msg/msg/obstacle_seg.h"
// Member `segments`
#include "rtcrobot_msg/msg/detail/obstacle_seg__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__RawObstacle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtcrobot_msg__msg__RawObstacle__init(message_memory);
}

void rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__RawObstacle_fini_function(void * message_memory)
{
  rtcrobot_msg__msg__RawObstacle__fini(message_memory);
}

size_t rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__size_function__RawObstacle__circles(
  const void * untyped_member)
{
  const rtcrobot_msg__msg__ObstacleCir__Sequence * member =
    (const rtcrobot_msg__msg__ObstacleCir__Sequence *)(untyped_member);
  return member->size;
}

const void * rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__get_const_function__RawObstacle__circles(
  const void * untyped_member, size_t index)
{
  const rtcrobot_msg__msg__ObstacleCir__Sequence * member =
    (const rtcrobot_msg__msg__ObstacleCir__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__get_function__RawObstacle__circles(
  void * untyped_member, size_t index)
{
  rtcrobot_msg__msg__ObstacleCir__Sequence * member =
    (rtcrobot_msg__msg__ObstacleCir__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__fetch_function__RawObstacle__circles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rtcrobot_msg__msg__ObstacleCir * item =
    ((const rtcrobot_msg__msg__ObstacleCir *)
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__get_const_function__RawObstacle__circles(untyped_member, index));
  rtcrobot_msg__msg__ObstacleCir * value =
    (rtcrobot_msg__msg__ObstacleCir *)(untyped_value);
  *value = *item;
}

void rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__assign_function__RawObstacle__circles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rtcrobot_msg__msg__ObstacleCir * item =
    ((rtcrobot_msg__msg__ObstacleCir *)
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__get_function__RawObstacle__circles(untyped_member, index));
  const rtcrobot_msg__msg__ObstacleCir * value =
    (const rtcrobot_msg__msg__ObstacleCir *)(untyped_value);
  *item = *value;
}

bool rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__resize_function__RawObstacle__circles(
  void * untyped_member, size_t size)
{
  rtcrobot_msg__msg__ObstacleCir__Sequence * member =
    (rtcrobot_msg__msg__ObstacleCir__Sequence *)(untyped_member);
  rtcrobot_msg__msg__ObstacleCir__Sequence__fini(member);
  return rtcrobot_msg__msg__ObstacleCir__Sequence__init(member, size);
}

size_t rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__size_function__RawObstacle__segments(
  const void * untyped_member)
{
  const rtcrobot_msg__msg__ObstacleSeg__Sequence * member =
    (const rtcrobot_msg__msg__ObstacleSeg__Sequence *)(untyped_member);
  return member->size;
}

const void * rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__get_const_function__RawObstacle__segments(
  const void * untyped_member, size_t index)
{
  const rtcrobot_msg__msg__ObstacleSeg__Sequence * member =
    (const rtcrobot_msg__msg__ObstacleSeg__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__get_function__RawObstacle__segments(
  void * untyped_member, size_t index)
{
  rtcrobot_msg__msg__ObstacleSeg__Sequence * member =
    (rtcrobot_msg__msg__ObstacleSeg__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__fetch_function__RawObstacle__segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rtcrobot_msg__msg__ObstacleSeg * item =
    ((const rtcrobot_msg__msg__ObstacleSeg *)
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__get_const_function__RawObstacle__segments(untyped_member, index));
  rtcrobot_msg__msg__ObstacleSeg * value =
    (rtcrobot_msg__msg__ObstacleSeg *)(untyped_value);
  *value = *item;
}

void rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__assign_function__RawObstacle__segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rtcrobot_msg__msg__ObstacleSeg * item =
    ((rtcrobot_msg__msg__ObstacleSeg *)
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__get_function__RawObstacle__segments(untyped_member, index));
  const rtcrobot_msg__msg__ObstacleSeg * value =
    (const rtcrobot_msg__msg__ObstacleSeg *)(untyped_value);
  *item = *value;
}

bool rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__resize_function__RawObstacle__segments(
  void * untyped_member, size_t size)
{
  rtcrobot_msg__msg__ObstacleSeg__Sequence * member =
    (rtcrobot_msg__msg__ObstacleSeg__Sequence *)(untyped_member);
  rtcrobot_msg__msg__ObstacleSeg__Sequence__fini(member);
  return rtcrobot_msg__msg__ObstacleSeg__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__RawObstacle_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtcrobot_msg__msg__RawObstacle, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "circles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtcrobot_msg__msg__RawObstacle, circles),  // bytes offset in struct
    NULL,  // default value
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__size_function__RawObstacle__circles,  // size() function pointer
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__get_const_function__RawObstacle__circles,  // get_const(index) function pointer
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__get_function__RawObstacle__circles,  // get(index) function pointer
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__fetch_function__RawObstacle__circles,  // fetch(index, &value) function pointer
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__assign_function__RawObstacle__circles,  // assign(index, value) function pointer
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__resize_function__RawObstacle__circles  // resize(index) function pointer
  },
  {
    "segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtcrobot_msg__msg__RawObstacle, segments),  // bytes offset in struct
    NULL,  // default value
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__size_function__RawObstacle__segments,  // size() function pointer
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__get_const_function__RawObstacle__segments,  // get_const(index) function pointer
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__get_function__RawObstacle__segments,  // get(index) function pointer
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__fetch_function__RawObstacle__segments,  // fetch(index, &value) function pointer
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__assign_function__RawObstacle__segments,  // assign(index, value) function pointer
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__resize_function__RawObstacle__segments  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__RawObstacle_message_members = {
  "rtcrobot_msg__msg",  // message namespace
  "RawObstacle",  // message name
  3,  // number of fields
  sizeof(rtcrobot_msg__msg__RawObstacle),
  rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__RawObstacle_message_member_array,  // message members
  rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__RawObstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__RawObstacle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__RawObstacle_message_type_support_handle = {
  0,
  &rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__RawObstacle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtcrobot_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtcrobot_msg, msg, RawObstacle)() {
  rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__RawObstacle_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__RawObstacle_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtcrobot_msg, msg, ObstacleCir)();
  rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__RawObstacle_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtcrobot_msg, msg, ObstacleSeg)();
  if (!rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__RawObstacle_message_type_support_handle.typesupport_identifier) {
    rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__RawObstacle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rtcrobot_msg__msg__RawObstacle__rosidl_typesupport_introspection_c__RawObstacle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
