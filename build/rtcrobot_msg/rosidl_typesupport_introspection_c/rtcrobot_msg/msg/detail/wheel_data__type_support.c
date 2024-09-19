// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtcrobot_msg:msg/WheelData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtcrobot_msg/msg/detail/wheel_data__rosidl_typesupport_introspection_c.h"
#include "rtcrobot_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtcrobot_msg/msg/detail/wheel_data__functions.h"
#include "rtcrobot_msg/msg/detail/wheel_data__struct.h"


// Include directives for member types
// Member `left`
// Member `right`
#include "rtcrobot_msg/msg/motor_data.h"
// Member `left`
// Member `right`
#include "rtcrobot_msg/msg/detail/motor_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rtcrobot_msg__msg__WheelData__rosidl_typesupport_introspection_c__WheelData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtcrobot_msg__msg__WheelData__init(message_memory);
}

void rtcrobot_msg__msg__WheelData__rosidl_typesupport_introspection_c__WheelData_fini_function(void * message_memory)
{
  rtcrobot_msg__msg__WheelData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rtcrobot_msg__msg__WheelData__rosidl_typesupport_introspection_c__WheelData_message_member_array[2] = {
  {
    "left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtcrobot_msg__msg__WheelData, left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtcrobot_msg__msg__WheelData, right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rtcrobot_msg__msg__WheelData__rosidl_typesupport_introspection_c__WheelData_message_members = {
  "rtcrobot_msg__msg",  // message namespace
  "WheelData",  // message name
  2,  // number of fields
  sizeof(rtcrobot_msg__msg__WheelData),
  rtcrobot_msg__msg__WheelData__rosidl_typesupport_introspection_c__WheelData_message_member_array,  // message members
  rtcrobot_msg__msg__WheelData__rosidl_typesupport_introspection_c__WheelData_init_function,  // function to initialize message memory (memory has to be allocated)
  rtcrobot_msg__msg__WheelData__rosidl_typesupport_introspection_c__WheelData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rtcrobot_msg__msg__WheelData__rosidl_typesupport_introspection_c__WheelData_message_type_support_handle = {
  0,
  &rtcrobot_msg__msg__WheelData__rosidl_typesupport_introspection_c__WheelData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtcrobot_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtcrobot_msg, msg, WheelData)() {
  rtcrobot_msg__msg__WheelData__rosidl_typesupport_introspection_c__WheelData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtcrobot_msg, msg, MotorData)();
  rtcrobot_msg__msg__WheelData__rosidl_typesupport_introspection_c__WheelData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtcrobot_msg, msg, MotorData)();
  if (!rtcrobot_msg__msg__WheelData__rosidl_typesupport_introspection_c__WheelData_message_type_support_handle.typesupport_identifier) {
    rtcrobot_msg__msg__WheelData__rosidl_typesupport_introspection_c__WheelData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rtcrobot_msg__msg__WheelData__rosidl_typesupport_introspection_c__WheelData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif