// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/WayPoint.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__WAY_POINT__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__WAY_POINT__STRUCT_H_

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
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/WayPoint in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__WayPoint
{
  rosidl_runtime_c__int8__Sequence waypoints;
  float theta;
} rtcrobot_msg__msg__WayPoint;

// Struct for a sequence of rtcrobot_msg__msg__WayPoint.
typedef struct rtcrobot_msg__msg__WayPoint__Sequence
{
  rtcrobot_msg__msg__WayPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__WayPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__WAY_POINT__STRUCT_H_
