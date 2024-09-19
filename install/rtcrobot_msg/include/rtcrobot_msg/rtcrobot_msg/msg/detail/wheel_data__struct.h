// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/WheelData.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__WHEEL_DATA__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__WHEEL_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'left'
// Member 'right'
#include "rtcrobot_msg/msg/detail/motor_data__struct.h"

/// Struct defined in msg/WheelData in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__WheelData
{
  rtcrobot_msg__msg__MotorData left;
  rtcrobot_msg__msg__MotorData right;
} rtcrobot_msg__msg__WheelData;

// Struct for a sequence of rtcrobot_msg__msg__WheelData.
typedef struct rtcrobot_msg__msg__WheelData__Sequence
{
  rtcrobot_msg__msg__WheelData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__WheelData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__WHEEL_DATA__STRUCT_H_
