// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_NONE'.
/**
  * mode
 */
enum
{
  rtcrobot_msg__msg__RobotStatus__MODE_NONE = 0
};

/// Constant 'MAPPING'.
enum
{
  rtcrobot_msg__msg__RobotStatus__MAPPING = 1
};

/// Constant 'NAVIGATION'.
enum
{
  rtcrobot_msg__msg__RobotStatus__NAVIGATION = 2
};

/// Constant 'MANUAL'.
enum
{
  rtcrobot_msg__msg__RobotStatus__MANUAL = 3
};

/// Constant 'IDLE'.
/**
  * State Nav
 */
enum
{
  rtcrobot_msg__msg__RobotStatus__IDLE = 0
};

/// Constant 'RUN'.
enum
{
  rtcrobot_msg__msg__RobotStatus__RUN = 1
};

/// Constant 'PAUSE'.
enum
{
  rtcrobot_msg__msg__RobotStatus__PAUSE = 2
};

/// Constant 'CHARGE'.
enum
{
  rtcrobot_msg__msg__RobotStatus__CHARGE = 3
};

/// Constant 'ERROR_NONE'.
/**
  * Error code
 */
enum
{
  rtcrobot_msg__msg__RobotStatus__ERROR_NONE = 0
};

/// Constant 'BUMPER'.
enum
{
  rtcrobot_msg__msg__RobotStatus__BUMPER = 1
};

/// Constant 'EMG'.
enum
{
  rtcrobot_msg__msg__RobotStatus__EMG = 2
};

/// Constant 'MASTER_ON'.
enum
{
  rtcrobot_msg__msg__RobotStatus__MASTER_ON = 3
};

/// Constant 'MOTOR_LEFT'.
enum
{
  rtcrobot_msg__msg__RobotStatus__MOTOR_LEFT = 4
};

/// Constant 'MOTOR_RIGHT'.
enum
{
  rtcrobot_msg__msg__RobotStatus__MOTOR_RIGHT = 5
};

/// Constant 'OUT_OF_MAP'.
enum
{
  rtcrobot_msg__msg__RobotStatus__OUT_OF_MAP = 6
};

/// Constant 'DOCK_TIMEOUT'.
enum
{
  rtcrobot_msg__msg__RobotStatus__DOCK_TIMEOUT = 7
};

/// Constant 'OBSTACLE'.
enum
{
  rtcrobot_msg__msg__RobotStatus__OBSTACLE = 8
};

/// Constant 'BATTERY_LOW'.
enum
{
  rtcrobot_msg__msg__RobotStatus__BATTERY_LOW = 9
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'error'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RobotStatus in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__RobotStatus
{
  std_msgs__msg__Header header;
  uint8_t mode;
  uint8_t sub_mode;
  rosidl_runtime_c__uint8__Sequence error;
} rtcrobot_msg__msg__RobotStatus;

// Struct for a sequence of rtcrobot_msg__msg__RobotStatus.
typedef struct rtcrobot_msg__msg__RobotStatus__Sequence
{
  rtcrobot_msg__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
