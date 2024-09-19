// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/ObstacleRange.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_RANGE__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'range'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ObstacleRange in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__ObstacleRange
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__float__Sequence range;
} rtcrobot_msg__msg__ObstacleRange;

// Struct for a sequence of rtcrobot_msg__msg__ObstacleRange.
typedef struct rtcrobot_msg__msg__ObstacleRange__Sequence
{
  rtcrobot_msg__msg__ObstacleRange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__ObstacleRange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_RANGE__STRUCT_H_
