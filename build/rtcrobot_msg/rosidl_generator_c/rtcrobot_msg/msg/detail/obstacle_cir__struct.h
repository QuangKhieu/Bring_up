// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/ObstacleCir.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_CIR__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_CIR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/ObstacleCir in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__ObstacleCir
{
  /// Central point
  geometry_msgs__msg__Point center;
  /// Linear velocity
  geometry_msgs__msg__Vector3 velocity;
  /// Radius with added margin
  double radius;
  /// True measured radius
  double true_radius;
} rtcrobot_msg__msg__ObstacleCir;

// Struct for a sequence of rtcrobot_msg__msg__ObstacleCir.
typedef struct rtcrobot_msg__msg__ObstacleCir__Sequence
{
  rtcrobot_msg__msg__ObstacleCir * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__ObstacleCir__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_CIR__STRUCT_H_
