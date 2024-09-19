// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtcrobot_msg:msg/PlcRead.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__PLC_READ__STRUCT_H_
#define RTCROBOT_MSG__MSG__DETAIL__PLC_READ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PlcRead in the package rtcrobot_msg.
typedef struct rtcrobot_msg__msg__PlcRead
{
  uint8_t bumper;
  uint8_t sensor_check_product;
  uint8_t emo_forward;
  uint8_t emo_backward;
  uint8_t auto_switch;
  uint8_t manual_switch;
  uint8_t motor_left_out1;
  uint8_t motor_left_out2;
  uint8_t motor_right_out1;
  uint8_t motor_right_out2;
  uint8_t start_btn;
  uint8_t stop_btn;
  uint8_t reset_btn;
  uint8_t he_forward_out;
  uint8_t he_forward_er;
  uint8_t he_backward_out;
  uint8_t he_backward_er;
} rtcrobot_msg__msg__PlcRead;

// Struct for a sequence of rtcrobot_msg__msg__PlcRead.
typedef struct rtcrobot_msg__msg__PlcRead__Sequence
{
  rtcrobot_msg__msg__PlcRead * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtcrobot_msg__msg__PlcRead__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__PLC_READ__STRUCT_H_
