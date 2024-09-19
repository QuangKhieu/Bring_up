// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/StateAMR.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__STATE_AMR__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__STATE_AMR__STRUCT_H_

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
// Member 'pose'
// Member 'mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StateAMR in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__StateAMR
{
  rosidl_runtime_c__String ip;
  int8_t state;
  rosidl_runtime_c__String pose;
  rosidl_runtime_c__String mode;
  int8_t agv_mode;
} rtcrobot_msg__msg__StateAMR;

// Struct for a sequence of rtcrobot_msg__msg__StateAMR.
typedef struct rtcrobot_msg__msg__StateAMR__Sequence
{
  rtcrobot_msg__msg__StateAMR * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__StateAMR__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__STATE_AMR__STRUCT_H_