// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__MISSION__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ip'
// Member 'mission'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Mission in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__Mission
{
  rosidl_runtime_c__String ip;
  int8_t action;
  rosidl_runtime_c__String mission;
} rtcrobot_msg__msg__Mission;

// Struct for a sequence of rtcrobot_msg__msg__Mission.
typedef struct rtcrobot_msg__msg__Mission__Sequence
{
  rtcrobot_msg__msg__Mission * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__Mission__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__MISSION__STRUCT_H_
