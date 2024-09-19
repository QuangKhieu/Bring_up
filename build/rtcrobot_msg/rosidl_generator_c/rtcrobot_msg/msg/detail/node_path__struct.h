// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/NodePath.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__NODE_PATH__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__NODE_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/NodePath in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__NodePath
{
  rosidl_runtime_c__String__Sequence waypoints;
  float theta;
} rtcrobot_msg__msg__NodePath;

// Struct for a sequence of rtcrobot_msg__msg__NodePath.
typedef struct rtcrobot_msg__msg__NodePath__Sequence
{
  rtcrobot_msg__msg__NodePath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__NodePath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__NODE_PATH__STRUCT_H_
