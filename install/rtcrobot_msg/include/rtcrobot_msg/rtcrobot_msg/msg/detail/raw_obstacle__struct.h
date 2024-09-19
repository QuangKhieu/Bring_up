// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/RawObstacle.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__RAW_OBSTACLE__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__RAW_OBSTACLE__STRUCT_H_

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
// Member 'circles'
#include "rtcrobot_msg/msg/detail/obstacle_cir__struct.h"
// Member 'segments'
#include "rtcrobot_msg/msg/detail/obstacle_seg__struct.h"

/// Struct defined in msg/RawObstacle in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__RawObstacle
{
  std_msgs__msg__Header header;
  rtcrobot_msg__msg__ObstacleCir__Sequence circles;
  rtcrobot_msg__msg__ObstacleSeg__Sequence segments;
} rtcrobot_msg__msg__RawObstacle;

// Struct for a sequence of rtcrobot_msg__msg__RawObstacle.
typedef struct rtcrobot_msg__msg__RawObstacle__Sequence
{
  rtcrobot_msg__msg__RawObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__RawObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__RAW_OBSTACLE__STRUCT_H_
