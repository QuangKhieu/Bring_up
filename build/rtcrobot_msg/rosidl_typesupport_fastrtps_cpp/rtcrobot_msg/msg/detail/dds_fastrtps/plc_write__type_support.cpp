// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rtcrobot_msg:msg/PlcWrite.idl
// generated code does not contain a copyright notice
#include "rtcrobot_msg/msg/detail/plc_write__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rtcrobot_msg/msg/detail/plc_write__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rtcrobot_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcrobot_msg
cdr_serialize(
  const rtcrobot_msg::msg::PlcWrite & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motor_left_stop
  cdr << ros_message.motor_left_stop;
  // Member: motor_left_reset
  cdr << ros_message.motor_left_reset;
  // Member: motor_right_stop
  cdr << ros_message.motor_right_stop;
  // Member: motor_right_reset
  cdr << ros_message.motor_right_reset;
  // Member: front_left_lamp
  cdr << ros_message.front_left_lamp;
  // Member: front_right_lamp
  cdr << ros_message.front_right_lamp;
  // Member: back_left_lamp
  cdr << ros_message.back_left_lamp;
  // Member: back_right_lamp
  cdr << ros_message.back_right_lamp;
  // Member: red_lamp
  cdr << ros_message.red_lamp;
  // Member: yellow_lamp
  cdr << ros_message.yellow_lamp;
  // Member: green_lamp
  cdr << ros_message.green_lamp;
  // Member: charger
  cdr << ros_message.charger;
  // Member: plc_safety
  cdr << ros_message.plc_safety;
  // Member: brake_on
  cdr << ros_message.brake_on;
  // Member: tim_forward_in1
  cdr << ros_message.tim_forward_in1;
  // Member: tim_forward_in2
  cdr << ros_message.tim_forward_in2;
  // Member: tim_forward_in3
  cdr << ros_message.tim_forward_in3;
  // Member: tim_forward_in4
  cdr << ros_message.tim_forward_in4;
  // Member: tim_backward_in1
  cdr << ros_message.tim_backward_in1;
  // Member: tim_backward_in2
  cdr << ros_message.tim_backward_in2;
  // Member: tim_backward_in3
  cdr << ros_message.tim_backward_in3;
  // Member: tim_backward_in4
  cdr << ros_message.tim_backward_in4;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcrobot_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rtcrobot_msg::msg::PlcWrite & ros_message)
{
  // Member: motor_left_stop
  cdr >> ros_message.motor_left_stop;

  // Member: motor_left_reset
  cdr >> ros_message.motor_left_reset;

  // Member: motor_right_stop
  cdr >> ros_message.motor_right_stop;

  // Member: motor_right_reset
  cdr >> ros_message.motor_right_reset;

  // Member: front_left_lamp
  cdr >> ros_message.front_left_lamp;

  // Member: front_right_lamp
  cdr >> ros_message.front_right_lamp;

  // Member: back_left_lamp
  cdr >> ros_message.back_left_lamp;

  // Member: back_right_lamp
  cdr >> ros_message.back_right_lamp;

  // Member: red_lamp
  cdr >> ros_message.red_lamp;

  // Member: yellow_lamp
  cdr >> ros_message.yellow_lamp;

  // Member: green_lamp
  cdr >> ros_message.green_lamp;

  // Member: charger
  cdr >> ros_message.charger;

  // Member: plc_safety
  cdr >> ros_message.plc_safety;

  // Member: brake_on
  cdr >> ros_message.brake_on;

  // Member: tim_forward_in1
  cdr >> ros_message.tim_forward_in1;

  // Member: tim_forward_in2
  cdr >> ros_message.tim_forward_in2;

  // Member: tim_forward_in3
  cdr >> ros_message.tim_forward_in3;

  // Member: tim_forward_in4
  cdr >> ros_message.tim_forward_in4;

  // Member: tim_backward_in1
  cdr >> ros_message.tim_backward_in1;

  // Member: tim_backward_in2
  cdr >> ros_message.tim_backward_in2;

  // Member: tim_backward_in3
  cdr >> ros_message.tim_backward_in3;

  // Member: tim_backward_in4
  cdr >> ros_message.tim_backward_in4;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcrobot_msg
get_serialized_size(
  const rtcrobot_msg::msg::PlcWrite & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motor_left_stop
  {
    size_t item_size = sizeof(ros_message.motor_left_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_left_reset
  {
    size_t item_size = sizeof(ros_message.motor_left_reset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_right_stop
  {
    size_t item_size = sizeof(ros_message.motor_right_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_right_reset
  {
    size_t item_size = sizeof(ros_message.motor_right_reset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_left_lamp
  {
    size_t item_size = sizeof(ros_message.front_left_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_right_lamp
  {
    size_t item_size = sizeof(ros_message.front_right_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: back_left_lamp
  {
    size_t item_size = sizeof(ros_message.back_left_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: back_right_lamp
  {
    size_t item_size = sizeof(ros_message.back_right_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red_lamp
  {
    size_t item_size = sizeof(ros_message.red_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yellow_lamp
  {
    size_t item_size = sizeof(ros_message.yellow_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: green_lamp
  {
    size_t item_size = sizeof(ros_message.green_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: charger
  {
    size_t item_size = sizeof(ros_message.charger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plc_safety
  {
    size_t item_size = sizeof(ros_message.plc_safety);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_on
  {
    size_t item_size = sizeof(ros_message.brake_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tim_forward_in1
  {
    size_t item_size = sizeof(ros_message.tim_forward_in1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tim_forward_in2
  {
    size_t item_size = sizeof(ros_message.tim_forward_in2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tim_forward_in3
  {
    size_t item_size = sizeof(ros_message.tim_forward_in3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tim_forward_in4
  {
    size_t item_size = sizeof(ros_message.tim_forward_in4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tim_backward_in1
  {
    size_t item_size = sizeof(ros_message.tim_backward_in1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tim_backward_in2
  {
    size_t item_size = sizeof(ros_message.tim_backward_in2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tim_backward_in3
  {
    size_t item_size = sizeof(ros_message.tim_backward_in3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tim_backward_in4
  {
    size_t item_size = sizeof(ros_message.tim_backward_in4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcrobot_msg
max_serialized_size_PlcWrite(
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


  // Member: motor_left_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motor_left_reset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motor_right_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motor_right_reset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: front_left_lamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: front_right_lamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: back_left_lamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: back_right_lamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: red_lamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: yellow_lamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: green_lamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: charger
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: plc_safety
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brake_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tim_forward_in1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tim_forward_in2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tim_forward_in3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tim_forward_in4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tim_backward_in1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tim_backward_in2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tim_backward_in3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tim_backward_in4
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
    using DataType = rtcrobot_msg::msg::PlcWrite;
    is_plain =
      (
      offsetof(DataType, tim_backward_in4) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PlcWrite__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rtcrobot_msg::msg::PlcWrite *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlcWrite__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rtcrobot_msg::msg::PlcWrite *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlcWrite__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rtcrobot_msg::msg::PlcWrite *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlcWrite__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PlcWrite(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PlcWrite__callbacks = {
  "rtcrobot_msg::msg",
  "PlcWrite",
  _PlcWrite__cdr_serialize,
  _PlcWrite__cdr_deserialize,
  _PlcWrite__get_serialized_size,
  _PlcWrite__max_serialized_size
};

static rosidl_message_type_support_t _PlcWrite__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlcWrite__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rtcrobot_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rtcrobot_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<rtcrobot_msg::msg::PlcWrite>()
{
  return &rtcrobot_msg::msg::typesupport_fastrtps_cpp::_PlcWrite__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtcrobot_msg, msg, PlcWrite)() {
  return &rtcrobot_msg::msg::typesupport_fastrtps_cpp::_PlcWrite__handle;
}

#ifdef __cplusplus
}
#endif
