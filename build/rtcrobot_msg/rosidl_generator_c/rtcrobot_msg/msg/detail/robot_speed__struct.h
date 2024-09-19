// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/RobotSpeed.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__ROBOT_SPEED__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__ROBOT_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotSpeed in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__RobotSpeed
{
  rosidl_runtime_c__String id;
  int8_t vx;
  int8_t az;
} rtcrobot_msg__msg__RobotSpeed;

// Struct for a sequence of rtcrobot_msg__msg__RobotSpeed.
typedef struct rtcrobot_msg__msg__RobotSpeed__Sequence
{
  rtcrobot_msg__msg__RobotSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__RobotSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__ROBOT_SPEED__STRUCT_H_
