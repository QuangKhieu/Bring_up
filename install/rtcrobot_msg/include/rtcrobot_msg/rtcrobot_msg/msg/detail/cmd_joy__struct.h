// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/CmdJoy.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__CMD_JOY__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__CMD_JOY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CmdJoy in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__CmdJoy
{
  int8_t manual;
  float vx;
  float vy;
  float az;
} rtcrobot_msg__msg__CmdJoy;

// Struct for a sequence of rtcrobot_msg__msg__CmdJoy.
typedef struct rtcrobot_msg__msg__CmdJoy__Sequence
{
  rtcrobot_msg__msg__CmdJoy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__CmdJoy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__CMD_JOY__STRUCT_H_
