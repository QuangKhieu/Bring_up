// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/StringStamped.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__STRING_STAMPED__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__STRING_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StringStamped in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__StringStamped
{
  rosidl_runtime_c__String data;
} rtcrobot_msg__msg__StringStamped;

// Struct for a sequence of rtcrobot_msg__msg__StringStamped.
typedef struct rtcrobot_msg__msg__StringStamped__Sequence
{
  rtcrobot_msg__msg__StringStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__StringStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__STRING_STAMPED__STRUCT_H_
