// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/PlcWrite.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__PLC_WRITE__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__PLC_WRITE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PlcWrite in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__PlcWrite
{
  uint8_t motor_left_stop;
  uint8_t motor_left_reset;
  uint8_t motor_right_stop;
  uint8_t motor_right_reset;
  uint8_t front_left_lamp;
  uint8_t front_right_lamp;
  uint8_t back_left_lamp;
  uint8_t back_right_lamp;
  uint8_t red_lamp;
  uint8_t yellow_lamp;
  uint8_t green_lamp;
  uint8_t charger;
  uint8_t plc_safety;
  uint8_t brake_on;
  uint8_t tim_forward_in1;
  uint8_t tim_forward_in2;
  uint8_t tim_forward_in3;
  uint8_t tim_forward_in4;
  uint8_t tim_backward_in1;
  uint8_t tim_backward_in2;
  uint8_t tim_backward_in3;
  uint8_t tim_backward_in4;
} rtcrobot_msg__msg__PlcWrite;

// Struct for a sequence of rtcrobot_msg__msg__PlcWrite.
typedef struct rtcrobot_msg__msg__PlcWrite__Sequence
{
  rtcrobot_msg__msg__PlcWrite * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__PlcWrite__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__PLC_WRITE__STRUCT_H_
