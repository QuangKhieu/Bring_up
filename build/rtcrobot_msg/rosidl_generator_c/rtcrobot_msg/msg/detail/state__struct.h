// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/State.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__STATE__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/State in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__State
{
  int8_t state;
  int8_t pose;
  rosidl_runtime_c__String mode;
  int8_t agv_mode;
} rtcrobot_msg__msg__State;

// Struct for a sequence of rtcrobot_msg__msg__State.
typedef struct rtcrobot_msg__msg__State__Sequence
{
  rtcrobot_msg__msg__State * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__State__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__STATE__STRUCT_H_
