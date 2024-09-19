// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/MapData.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__MAP_DATA__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__MAP_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'image'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MapData in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__MapData
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String image;
} rtcrobot_msg__msg__MapData;

// Struct for a sequence of rtcrobot_msg__msg__MapData.
typedef struct rtcrobot_msg__msg__MapData__Sequence
{
  rtcrobot_msg__msg__MapData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__MapData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__MAP_DATA__STRUCT_H_
