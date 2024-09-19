// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/ObstacleSeg.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_SEG__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_SEG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'first_point'
// Member 'last_point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/ObstacleSeg in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__ObstacleSeg
{
  /// First point of the segment
  geometry_msgs__msg__Point first_point;
  /// Last point of the segment
  geometry_msgs__msg__Point last_point;
} rtcrobot_msg__msg__ObstacleSeg;

// Struct for a sequence of rtcrobot_msg__msg__ObstacleSeg.
typedef struct rtcrobot_msg__msg__ObstacleSeg__Sequence
{
  rtcrobot_msg__msg__ObstacleSeg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__ObstacleSeg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_SEG__STRUCT_H_
