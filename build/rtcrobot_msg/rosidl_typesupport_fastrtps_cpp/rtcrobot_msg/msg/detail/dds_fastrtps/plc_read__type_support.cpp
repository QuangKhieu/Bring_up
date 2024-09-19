// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rtcrobot_msg:msg/PlcRead.idl
// generated code does not contain a copyright notice
#include "rtcrobot_msg/msg/detail/plc_read__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rtcrobot_msg/msg/detail/plc_read__struct.hpp"

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
  const rtcrobot_msg::msg::PlcRead & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bumper
  cdr << ros_message.bumper;
  // Member: sensor_check_product
  cdr << ros_message.sensor_check_product;
  // Member: emo_forward
  cdr << ros_message.emo_forward;
  // Member: emo_backward
  cdr << ros_message.emo_backward;
  // Member: auto_switch
  cdr << ros_message.auto_switch;
  // Member: manual_switch
  cdr << ros_message.manual_switch;
  // Member: motor_left_out1
  cdr << ros_message.motor_left_out1;
  // Member: motor_left_out2
  cdr << ros_message.motor_left_out2;
  // Member: motor_right_out1
  cdr << ros_message.motor_right_out1;
  // Member: motor_right_out2
  cdr << ros_message.motor_right_out2;
  // Member: start_btn
  cdr << ros_message.start_btn;
  // Member: stop_btn
  cdr << ros_message.stop_btn;
  // Member: reset_btn
  cdr << ros_message.reset_btn;
  // Member: he_forward_out
  cdr << ros_message.he_forward_out;
  // Member: he_forward_er
  cdr << ros_message.he_forward_er;
  // Member: he_backward_out
  cdr << ros_message.he_backward_out;
  // Member: he_backward_er
  cdr << ros_message.he_backward_er;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcrobot_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rtcrobot_msg::msg::PlcRead & ros_message)
{
  // Member: bumper
  cdr >> ros_message.bumper;

  // Member: sensor_check_product
  cdr >> ros_message.sensor_check_product;

  // Member: emo_forward
  cdr >> ros_message.emo_forward;

  // Member: emo_backward
  cdr >> ros_message.emo_backward;

  // Member: auto_switch
  cdr >> ros_message.auto_switch;

  // Member: manual_switch
  cdr >> ros_message.manual_switch;

  // Member: motor_left_out1
  cdr >> ros_message.motor_left_out1;

  // Member: motor_left_out2
  cdr >> ros_message.motor_left_out2;

  // Member: motor_right_out1
  cdr >> ros_message.motor_right_out1;

  // Member: motor_right_out2
  cdr >> ros_message.motor_right_out2;

  // Member: start_btn
  cdr >> ros_message.start_btn;

  // Member: stop_btn
  cdr >> ros_message.stop_btn;

  // Member: reset_btn
  cdr >> ros_message.reset_btn;

  // Member: he_forward_out
  cdr >> ros_message.he_forward_out;

  // Member: he_forward_er
  cdr >> ros_message.he_forward_er;

  // Member: he_backward_out
  cdr >> ros_message.he_backward_out;

  // Member: he_backward_er
  cdr >> ros_message.he_backward_er;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcrobot_msg
get_serialized_size(
  const rtcrobot_msg::msg::PlcRead & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bumper
  {
    size_t item_size = sizeof(ros_message.bumper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sensor_check_product
  {
    size_t item_size = sizeof(ros_message.sensor_check_product);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: emo_forward
  {
    size_t item_size = sizeof(ros_message.emo_forward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: emo_backward
  {
    size_t item_size = sizeof(ros_message.emo_backward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: auto_switch
  {
    size_t item_size = sizeof(ros_message.auto_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: manual_switch
  {
    size_t item_size = sizeof(ros_message.manual_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_left_out1
  {
    size_t item_size = sizeof(ros_message.motor_left_out1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_left_out2
  {
    size_t item_size = sizeof(ros_message.motor_left_out2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_right_out1
  {
    size_t item_size = sizeof(ros_message.motor_right_out1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_right_out2
  {
    size_t item_size = sizeof(ros_message.motor_right_out2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_btn
  {
    size_t item_size = sizeof(ros_message.start_btn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stop_btn
  {
    size_t item_size = sizeof(ros_message.stop_btn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reset_btn
  {
    size_t item_size = sizeof(ros_message.reset_btn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: he_forward_out
  {
    size_t item_size = sizeof(ros_message.he_forward_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: he_forward_er
  {
    size_t item_size = sizeof(ros_message.he_forward_er);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: he_backward_out
  {
    size_t item_size = sizeof(ros_message.he_backward_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: he_backward_er
  {
    size_t item_size = sizeof(ros_message.he_backward_er);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcrobot_msg
max_serialized_size_PlcRead(
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


  // Member: bumper
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sensor_check_product
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emo_forward
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emo_backward
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: auto_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: manual_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motor_left_out1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motor_left_out2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motor_right_out1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motor_right_out2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: start_btn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stop_btn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reset_btn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: he_forward_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: he_forward_er
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: he_backward_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: he_backward_er
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
    using DataType = rtcrobot_msg::msg::PlcRead;
    is_plain =
      (
      offsetof(DataType, he_backward_er) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PlcRead__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rtcrobot_msg::msg::PlcRead *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlcRead__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rtcrobot_msg::msg::PlcRead *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlcRead__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rtcrobot_msg::msg::PlcRead *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlcRead__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PlcRead(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PlcRead__callbacks = {
  "rtcrobot_msg::msg",
  "PlcRead",
  _PlcRead__cdr_serialize,
  _PlcRead__cdr_deserialize,
  _PlcRead__get_serialized_size,
  _PlcRead__max_serialized_size
};

static rosidl_message_type_support_t _PlcRead__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlcRead__callbacks,
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
get_message_type_support_handle<rtcrobot_msg::msg::PlcRead>()
{
  return &rtcrobot_msg::msg::typesupport_fastrtps_cpp::_PlcRead__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtcrobot_msg, msg, PlcRead)() {
  return &rtcrobot_msg::msg::typesupport_fastrtps_cpp::_PlcRead__handle;
}

#ifdef __cplusplus
}
#endif
