// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/AmrConn.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__AMR_CONN__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__AMR_CONN__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AmrConn in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__AmrConn
{
  rosidl_runtime_c__String ip;
  bool connect;
} rtcrobot_msg__msg__AmrConn;

// Struct for a sequence of rtcrobot_msg__msg__AmrConn.
typedef struct rtcrobot_msg__msg__AmrConn__Sequence
{
  rtcrobot_msg__msg__AmrConn * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__AmrConn__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__AMR_CONN__STRUCT_H_
