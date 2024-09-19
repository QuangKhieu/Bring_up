// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/RobotPose.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__ROBOT_POSE__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__ROBOT_POSE__STRUCT_H_

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

/// Struct defined in msg/RobotPose in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__RobotPose
{
  rosidl_runtime_c__String ip;
  float x;
  float y;
  float theta;
} rtcrobot_msg__msg__RobotPose;

// Struct for a sequence of rtcrobot_msg__msg__RobotPose.
typedef struct rtcrobot_msg__msg__RobotPose__Sequence
{
  rtcrobot_msg__msg__RobotPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__RobotPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__ROBOT_POSE__STRUCT_H_
