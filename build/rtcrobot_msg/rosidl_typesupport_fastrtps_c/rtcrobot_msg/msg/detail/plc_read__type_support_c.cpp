// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rtcrobot_msg:msg/PlcRead.idl
// generated code does not contain a copyright notice
#include "rtcrobot_msg/msg/detail/plc_read__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rtcrobot_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtcrobot_msg/msg/detail/plc_read__struct.h"
#include "rtcrobot_msg/msg/detail/plc_read__functions.h"
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


using _PlcRead__ros_msg_type = rtcrobot_msg__msg__PlcRead;

static bool _PlcRead__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlcRead__ros_msg_type * ros_message = static_cast<const _PlcRead__ros_msg_type *>(untyped_ros_message);
  // Field name: bumper
  {
    cdr << ros_message->bumper;
  }

  // Field name: sensor_check_product
  {
    cdr << ros_message->sensor_check_product;
  }

  // Field name: emo_forward
  {
    cdr << ros_message->emo_forward;
  }

  // Field name: emo_backward
  {
    cdr << ros_message->emo_backward;
  }

  // Field name: auto_switch
  {
    cdr << ros_message->auto_switch;
  }

  // Field name: manual_switch
  {
    cdr << ros_message->manual_switch;
  }

  // Field name: motor_left_out1
  {
    cdr << ros_message->motor_left_out1;
  }

  // Field name: motor_left_out2
  {
    cdr << ros_message->motor_left_out2;
  }

  // Field name: motor_right_out1
  {
    cdr << ros_message->motor_right_out1;
  }

  // Field name: motor_right_out2
  {
    cdr << ros_message->motor_right_out2;
  }

  // Field name: start_btn
  {
    cdr << ros_message->start_btn;
  }

  // Field name: stop_btn
  {
    cdr << ros_message->stop_btn;
  }

  // Field name: reset_btn
  {
    cdr << ros_message->reset_btn;
  }

  // Field name: he_forward_out
  {
    cdr << ros_message->he_forward_out;
  }

  // Field name: he_forward_er
  {
    cdr << ros_message->he_forward_er;
  }

  // Field name: he_backward_out
  {
    cdr << ros_message->he_backward_out;
  }

  // Field name: he_backward_er
  {
    cdr << ros_message->he_backward_er;
  }

  return true;
}

static bool _PlcRead__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlcRead__ros_msg_type * ros_message = static_cast<_PlcRead__ros_msg_type *>(untyped_ros_message);
  // Field name: bumper
  {
    cdr >> ros_message->bumper;
  }

  // Field name: sensor_check_product
  {
    cdr >> ros_message->sensor_check_product;
  }

  // Field name: emo_forward
  {
    cdr >> ros_message->emo_forward;
  }

  // Field name: emo_backward
  {
    cdr >> ros_message->emo_backward;
  }

  // Field name: auto_switch
  {
    cdr >> ros_message->auto_switch;
  }

  // Field name: manual_switch
  {
    cdr >> ros_message->manual_switch;
  }

  // Field name: motor_left_out1
  {
    cdr >> ros_message->motor_left_out1;
  }

  // Field name: motor_left_out2
  {
    cdr >> ros_message->motor_left_out2;
  }

  // Field name: motor_right_out1
  {
    cdr >> ros_message->motor_right_out1;
  }

  // Field name: motor_right_out2
  {
    cdr >> ros_message->motor_right_out2;
  }

  // Field name: start_btn
  {
    cdr >> ros_message->start_btn;
  }

  // Field name: stop_btn
  {
    cdr >> ros_message->stop_btn;
  }

  // Field name: reset_btn
  {
    cdr >> ros_message->reset_btn;
  }

  // Field name: he_forward_out
  {
    cdr >> ros_message->he_forward_out;
  }

  // Field name: he_forward_er
  {
    cdr >> ros_message->he_forward_er;
  }

  // Field name: he_backward_out
  {
    cdr >> ros_message->he_backward_out;
  }

  // Field name: he_backward_er
  {
    cdr >> ros_message->he_backward_er;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtcrobot_msg
size_t get_serialized_size_rtcrobot_msg__msg__PlcRead(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlcRead__ros_msg_type * ros_message = static_cast<const _PlcRead__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bumper
  {
    size_t item_size = sizeof(ros_message->bumper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sensor_check_product
  {
    size_t item_size = sizeof(ros_message->sensor_check_product);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emo_forward
  {
    size_t item_size = sizeof(ros_message->emo_forward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emo_backward
  {
    size_t item_size = sizeof(ros_message->emo_backward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_switch
  {
    size_t item_size = sizeof(ros_message->auto_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name manual_switch
  {
    size_t item_size = sizeof(ros_message->manual_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_left_out1
  {
    size_t item_size = sizeof(ros_message->motor_left_out1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_left_out2
  {
    size_t item_size = sizeof(ros_message->motor_left_out2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_right_out1
  {
    size_t item_size = sizeof(ros_message->motor_right_out1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_right_out2
  {
    size_t item_size = sizeof(ros_message->motor_right_out2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_btn
  {
    size_t item_size = sizeof(ros_message->start_btn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stop_btn
  {
    size_t item_size = sizeof(ros_message->stop_btn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_btn
  {
    size_t item_size = sizeof(ros_message->reset_btn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name he_forward_out
  {
    size_t item_size = sizeof(ros_message->he_forward_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name he_forward_er
  {
    size_t item_size = sizeof(ros_message->he_forward_er);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name he_backward_out
  {
    size_t item_size = sizeof(ros_message->he_backward_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name he_backward_er
  {
    size_t item_size = sizeof(ros_message->he_backward_er);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlcRead__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtcrobot_msg__msg__PlcRead(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtcrobot_msg
size_t max_serialized_size_rtcrobot_msg__msg__PlcRead(
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

  // member: bumper
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sensor_check_product
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emo_forward
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emo_backward
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: manual_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motor_left_out1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motor_left_out2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motor_right_out1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motor_right_out2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: start_btn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stop_btn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_btn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: he_forward_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: he_forward_er
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: he_backward_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: he_backward_er
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
    using DataType = rtcrobot_msg__msg__PlcRead;
    is_plain =
      (
      offsetof(DataType, he_backward_er) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PlcRead__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rtcrobot_msg__msg__PlcRead(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlcRead = {
  "rtcrobot_msg::msg",
  "PlcRead",
  _PlcRead__cdr_serialize,
  _PlcRead__cdr_deserialize,
  _PlcRead__get_serialized_size,
  _PlcRead__max_serialized_size
};

static rosidl_message_type_support_t _PlcRead__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlcRead,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtcrobot_msg, msg, PlcRead)() {
  return &_PlcRead__type_support;
}

#if defined(__cplusplus)
}
#endif
