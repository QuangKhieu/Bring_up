// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rtcrobot_msg:msg/PlcWrite.idl
// generated code does not contain a copyright notice
#include "rtcrobot_msg/msg/detail/plc_write__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rtcrobot_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtcrobot_msg/msg/detail/plc_write__struct.h"
#include "rtcrobot_msg/msg/detail/plc_write__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PlcWrite__ros_msg_type = rtcrobot_msg__msg__PlcWrite;

static bool _PlcWrite__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlcWrite__ros_msg_type * ros_message = static_cast<const _PlcWrite__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_left_stop
  {
    cdr << ros_message->motor_left_stop;
  }

  // Field name: motor_left_reset
  {
    cdr << ros_message->motor_left_reset;
  }

  // Field name: motor_right_stop
  {
    cdr << ros_message->motor_right_stop;
  }

  // Field name: motor_right_reset
  {
    cdr << ros_message->motor_right_reset;
  }

  // Field name: front_left_lamp
  {
    cdr << ros_message->front_left_lamp;
  }

  // Field name: front_right_lamp
  {
    cdr << ros_message->front_right_lamp;
  }

  // Field name: back_left_lamp
  {
    cdr << ros_message->back_left_lamp;
  }

  // Field name: back_right_lamp
  {
    cdr << ros_message->back_right_lamp;
  }

  // Field name: red_lamp
  {
    cdr << ros_message->red_lamp;
  }

  // Field name: yellow_lamp
  {
    cdr << ros_message->yellow_lamp;
  }

  // Field name: green_lamp
  {
    cdr << ros_message->green_lamp;
  }

  // Field name: charger
  {
    cdr << ros_message->charger;
  }

  // Field name: plc_safety
  {
    cdr << ros_message->plc_safety;
  }

  // Field name: brake_on
  {
    cdr << ros_message->brake_on;
  }

  // Field name: tim_forward_in1
  {
    cdr << ros_message->tim_forward_in1;
  }

  // Field name: tim_forward_in2
  {
    cdr << ros_message->tim_forward_in2;
  }

  // Field name: tim_forward_in3
  {
    cdr << ros_message->tim_forward_in3;
  }

  // Field name: tim_forward_in4
  {
    cdr << ros_message->tim_forward_in4;
  }

  // Field name: tim_backward_in1
  {
    cdr << ros_message->tim_backward_in1;
  }

  // Field name: tim_backward_in2
  {
    cdr << ros_message->tim_backward_in2;
  }

  // Field name: tim_backward_in3
  {
    cdr << ros_message->tim_backward_in3;
  }

  // Field name: tim_backward_in4
  {
    cdr << ros_message->tim_backward_in4;
  }

  return true;
}

static bool _PlcWrite__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlcWrite__ros_msg_type * ros_message = static_cast<_PlcWrite__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_left_stop
  {
    cdr >> ros_message->motor_left_stop;
  }

  // Field name: motor_left_reset
  {
    cdr >> ros_message->motor_left_reset;
  }

  // Field name: motor_right_stop
  {
    cdr >> ros_message->motor_right_stop;
  }

  // Field name: motor_right_reset
  {
    cdr >> ros_message->motor_right_reset;
  }

  // Field name: front_left_lamp
  {
    cdr >> ros_message->front_left_lamp;
  }

  // Field name: front_right_lamp
  {
    cdr >> ros_message->front_right_lamp;
  }

  // Field name: back_left_lamp
  {
    cdr >> ros_message->back_left_lamp;
  }

  // Field name: back_right_lamp
  {
    cdr >> ros_message->back_right_lamp;
  }

  // Field name: red_lamp
  {
    cdr >> ros_message->red_lamp;
  }

  // Field name: yellow_lamp
  {
    cdr >> ros_message->yellow_lamp;
  }

  // Field name: green_lamp
  {
    cdr >> ros_message->green_lamp;
  }

  // Field name: charger
  {
    cdr >> ros_message->charger;
  }

  // Field name: plc_safety
  {
    cdr >> ros_message->plc_safety;
  }

  // Field name: brake_on
  {
    cdr >> ros_message->brake_on;
  }

  // Field name: tim_forward_in1
  {
    cdr >> ros_message->tim_forward_in1;
  }

  // Field name: tim_forward_in2
  {
    cdr >> ros_message->tim_forward_in2;
  }

  // Field name: tim_forward_in3
  {
    cdr >> ros_message->tim_forward_in3;
  }

  // Field name: tim_forward_in4
  {
    cdr >> ros_message->tim_forward_in4;
  }

  // Field name: tim_backward_in1
  {
    cdr >> ros_message->tim_backward_in1;
  }

  // Field name: tim_backward_in2
  {
    cdr >> ros_message->tim_backward_in2;
  }

  // Field name: tim_backward_in3
  {
    cdr >> ros_message->tim_backward_in3;
  }

  // Field name: tim_backward_in4
  {
    cdr >> ros_message->tim_backward_in4;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtcrobot_msg
size_t get_serialized_size_rtcrobot_msg__msg__PlcWrite(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlcWrite__ros_msg_type * ros_message = static_cast<const _PlcWrite__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motor_left_stop
  {
    size_t item_size = sizeof(ros_message->motor_left_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_left_reset
  {
    size_t item_size = sizeof(ros_message->motor_left_reset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_right_stop
  {
    size_t item_size = sizeof(ros_message->motor_right_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_right_reset
  {
    size_t item_size = sizeof(ros_message->motor_right_reset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_left_lamp
  {
    size_t item_size = sizeof(ros_message->front_left_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_right_lamp
  {
    size_t item_size = sizeof(ros_message->front_right_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name back_left_lamp
  {
    size_t item_size = sizeof(ros_message->back_left_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name back_right_lamp
  {
    size_t item_size = sizeof(ros_message->back_right_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_lamp
  {
    size_t item_size = sizeof(ros_message->red_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yellow_lamp
  {
    size_t item_size = sizeof(ros_message->yellow_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name green_lamp
  {
    size_t item_size = sizeof(ros_message->green_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name charger
  {
    size_t item_size = sizeof(ros_message->charger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plc_safety
  {
    size_t item_size = sizeof(ros_message->plc_safety);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_on
  {
    size_t item_size = sizeof(ros_message->brake_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tim_forward_in1
  {
    size_t item_size = sizeof(ros_message->tim_forward_in1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tim_forward_in2
  {
    size_t item_size = sizeof(ros_message->tim_forward_in2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tim_forward_in3
  {
    size_t item_size = sizeof(ros_message->tim_forward_in3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tim_forward_in4
  {
    size_t item_size = sizeof(ros_message->tim_forward_in4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tim_backward_in1
  {
    size_t item_size = sizeof(ros_message->tim_backward_in1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tim_backward_in2
  {
    size_t item_size = sizeof(ros_message->tim_backward_in2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tim_backward_in3
  {
    size_t item_size = sizeof(ros_message->tim_backward_in3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tim_backward_in4
  {
    size_t item_size = sizeof(ros_message->tim_backward_in4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlcWrite__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtcrobot_msg__msg__PlcWrite(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtcrobot_msg
size_t max_serialized_size_rtcrobot_msg__msg__PlcWrite(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: motor_left_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motor_left_reset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motor_right_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motor_right_reset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: front_left_lamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: front_right_lamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: back_left_lamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: back_right_lamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: red_lamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: yellow_lamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: green_lamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: charger
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: plc_safety
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brake_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tim_forward_in1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tim_forward_in2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tim_forward_in3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tim_forward_in4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tim_backward_in1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tim_backward_in2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tim_backward_in3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tim_backward_in4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rtcrobot_msg__msg__PlcWrite;
    is_plain =
      (
      offsetof(DataType, tim_backward_in4) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PlcWrite__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rtcrobot_msg__msg__PlcWrite(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlcWrite = {
  "rtcrobot_msg::msg",
  "PlcWrite",
  _PlcWrite__cdr_serialize,
  _PlcWrite__cdr_deserialize,
  _PlcWrite__get_serialized_size,
  _PlcWrite__max_serialized_size
};

static rosidl_message_type_support_t _PlcWrite__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlcWrite,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtcrobot_msg, msg, PlcWrite)() {
  return &_PlcWrite__type_support;
}

#if defined(__cplusplus)
}
#endif
