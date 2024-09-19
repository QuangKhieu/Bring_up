// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__MISSION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MissionStatus in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__MissionStatus
{
  int8_t status;
} rtcrobot_msg__msg__MissionStatus;

// Struct for a sequence of rtcrobot_msg__msg__MissionStatus.
typedef struct rtcrobot_msg__msg__MissionStatus__Sequence
{
  rtcrobot_msg__msg__MissionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__MissionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
