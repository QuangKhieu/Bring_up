// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__OBSTACLE__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__OBSTACLE__STRUCT_H_

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

/// Struct defined in msg/Obstacle in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__Obstacle
{
  std_msgs__msg__Header header;
  bool obstacle;
  float dist;
} rtcrobot_msg__msg__Obstacle;

// Struct for a sequence of rtcrobot_msg__msg__Obstacle.
typedef struct rtcrobot_msg__msg__Obstacle__Sequence
{
  rtcrobot_msg__msg__Obstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__Obstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__OBSTACLE__STRUCT_H_
