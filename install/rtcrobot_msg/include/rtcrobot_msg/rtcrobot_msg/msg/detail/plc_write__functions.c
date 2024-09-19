// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtcrobot_msg:msg/PlcWrite.idl
// generated code does not contain a copyright notice
#include "rtcrobot_msg/msg/detail/plc_write__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rtcrobot_msg__msg__PlcWrite__init(rtcrobot_msg__msg__PlcWrite * msg)
{
  if (!msg) {
    return false;
  }
  // motor_left_stop
  // motor_left_reset
  // motor_right_stop
  // motor_right_reset
  // front_left_lamp
  // front_right_lamp
  // back_left_lamp
  // back_right_lamp
  // red_lamp
  // yellow_lamp
  // green_lamp
  // charger
  // plc_safety
  // brake_on
  // tim_forward_in1
  // tim_forward_in2
  // tim_forward_in3
  // tim_forward_in4
  // tim_backward_in1
  // tim_backward_in2
  // tim_backward_in3
  // tim_backward_in4
  return true;
}

void
rtcrobot_msg__msg__PlcWrite__fini(rtcrobot_msg__msg__PlcWrite * msg)
{
  if (!msg) {
    return;
  }
  // motor_left_stop
  // motor_left_reset
  // motor_right_stop
  // motor_right_reset
  // front_left_lamp
  // front_right_lamp
  // back_left_lamp
  // back_right_lamp
  // red_lamp
  // yellow_lamp
  // green_lamp
  // charger
  // plc_safety
  // brake_on
  // tim_forward_in1
  // tim_forward_in2
  // tim_forward_in3
  // tim_forward_in4
  // tim_backward_in1
  // tim_backward_in2
  // tim_backward_in3
  // tim_backward_in4
}

bool
rtcrobot_msg__msg__PlcWrite__are_equal(const rtcrobot_msg__msg__PlcWrite * lhs, const rtcrobot_msg__msg__PlcWrite * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_left_stop
  if (lhs->motor_left_stop != rhs->motor_left_stop) {
    return false;
  }
  // motor_left_reset
  if (lhs->motor_left_reset != rhs->motor_left_reset) {
    return false;
  }
  // motor_right_stop
  if (lhs->motor_right_stop != rhs->motor_right_stop) {
    return false;
  }
  // motor_right_reset
  if (lhs->motor_right_reset != rhs->motor_right_reset) {
    return false;
  }
  // front_left_lamp
  if (lhs->front_left_lamp != rhs->front_left_lamp) {
    return false;
  }
  // front_right_lamp
  if (lhs->front_right_lamp != rhs->front_right_lamp) {
    return false;
  }
  // back_left_lamp
  if (lhs->back_left_lamp != rhs->back_left_lamp) {
    return false;
  }
  // back_right_lamp
  if (lhs->back_right_lamp != rhs->back_right_lamp) {
    return false;
  }
  // red_lamp
  if (lhs->red_lamp != rhs->red_lamp) {
    return false;
  }
  // yellow_lamp
  if (lhs->yellow_lamp != rhs->yellow_lamp) {
    return false;
  }
  // green_lamp
  if (lhs->green_lamp != rhs->green_lamp) {
    return false;
  }
  // charger
  if (lhs->charger != rhs->charger) {
    return false;
  }
  // plc_safety
  if (lhs->plc_safety != rhs->plc_safety) {
    return false;
  }
  // brake_on
  if (lhs->brake_on != rhs->brake_on) {
    return false;
  }
  // tim_forward_in1
  if (lhs->tim_forward_in1 != rhs->tim_forward_in1) {
    return false;
  }
  // tim_forward_in2
  if (lhs->tim_forward_in2 != rhs->tim_forward_in2) {
    return false;
  }
  // tim_forward_in3
  if (lhs->tim_forward_in3 != rhs->tim_forward_in3) {
    return false;
  }
  // tim_forward_in4
  if (lhs->tim_forward_in4 != rhs->tim_forward_in4) {
    return false;
  }
  // tim_backward_in1
  if (lhs->tim_backward_in1 != rhs->tim_backward_in1) {
    return false;
  }
  // tim_backward_in2
  if (lhs->tim_backward_in2 != rhs->tim_backward_in2) {
    return false;
  }
  // tim_backward_in3
  if (lhs->tim_backward_in3 != rhs->tim_backward_in3) {
    return false;
  }
  // tim_backward_in4
  if (lhs->tim_backward_in4 != rhs->tim_backward_in4) {
    return false;
  }
  return true;
}

bool
rtcrobot_msg__msg__PlcWrite__copy(
  const rtcrobot_msg__msg__PlcWrite * input,
  rtcrobot_msg__msg__PlcWrite * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_left_stop
  output->motor_left_stop = input->motor_left_stop;
  // motor_left_reset
  output->motor_left_reset = input->motor_left_reset;
  // motor_right_stop
  output->motor_right_stop = input->motor_right_stop;
  // motor_right_reset
  output->motor_right_reset = input->motor_right_reset;
  // front_left_lamp
  output->front_left_lamp = input->front_left_lamp;
  // front_right_lamp
  output->front_right_lamp = input->front_right_lamp;
  // back_left_lamp
  output->back_left_lamp = input->back_left_lamp;
  // back_right_lamp
  output->back_right_lamp = input->back_right_lamp;
  // red_lamp
  output->red_lamp = input->red_lamp;
  // yellow_lamp
  output->yellow_lamp = input->yellow_lamp;
  // green_lamp
  output->green_lamp = input->green_lamp;
  // charger
  output->charger = input->charger;
  // plc_safety
  output->plc_safety = input->plc_safety;
  // brake_on
  output->brake_on = input->brake_on;
  // tim_forward_in1
  output->tim_forward_in1 = input->tim_forward_in1;
  // tim_forward_in2
  output->tim_forward_in2 = input->tim_forward_in2;
  // tim_forward_in3
  output->tim_forward_in3 = input->tim_forward_in3;
  // tim_forward_in4
  output->tim_forward_in4 = input->tim_forward_in4;
  // tim_backward_in1
  output->tim_backward_in1 = input->tim_backward_in1;
  // tim_backward_in2
  output->tim_backward_in2 = input->tim_backward_in2;
  // tim_backward_in3
  output->tim_backward_in3 = input->tim_backward_in3;
  // tim_backward_in4
  output->tim_backward_in4 = input->tim_backward_in4;
  return true;
}

rtcrobot_msg__msg__PlcWrite *
rtcrobot_msg__msg__PlcWrite__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__PlcWrite * msg = (rtcrobot_msg__msg__PlcWrite *)allocator.allocate(sizeof(rtcrobot_msg__msg__PlcWrite), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtcrobot_msg__msg__PlcWrite));
  bool success = rtcrobot_msg__msg__PlcWrite__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtcrobot_msg__msg__PlcWrite__destroy(rtcrobot_msg__msg__PlcWrite * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtcrobot_msg__msg__PlcWrite__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtcrobot_msg__msg__PlcWrite__Sequence__init(rtcrobot_msg__msg__PlcWrite__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__PlcWrite * data = NULL;

  if (size) {
    data = (rtcrobot_msg__msg__PlcWrite *)allocator.zero_allocate(size, sizeof(rtcrobot_msg__msg__PlcWrite), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtcrobot_msg__msg__PlcWrite__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtcrobot_msg__msg__PlcWrite__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rtcrobot_msg__msg__PlcWrite__Sequence__fini(rtcrobot_msg__msg__PlcWrite__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtcrobot_msg__msg__PlcWrite__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rtcrobot_msg__msg__PlcWrite__Sequence *
rtcrobot_msg__msg__PlcWrite__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__PlcWrite__Sequence * array = (rtcrobot_msg__msg__PlcWrite__Sequence *)allocator.allocate(sizeof(rtcrobot_msg__msg__PlcWrite__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtcrobot_msg__msg__PlcWrite__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtcrobot_msg__msg__PlcWrite__Sequence__destroy(rtcrobot_msg__msg__PlcWrite__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtcrobot_msg__msg__PlcWrite__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtcrobot_msg__msg__PlcWrite__Sequence__are_equal(const rtcrobot_msg__msg__PlcWrite__Sequence * lhs, const rtcrobot_msg__msg__PlcWrite__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtcrobot_msg__msg__PlcWrite__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtcrobot_msg__msg__PlcWrite__Sequence__copy(
  const rtcrobot_msg__msg__PlcWrite__Sequence * input,
  rtcrobot_msg__msg__PlcWrite__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtcrobot_msg__msg__PlcWrite);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtcrobot_msg__msg__PlcWrite * data =
      (rtcrobot_msg__msg__PlcWrite *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtcrobot_msg__msg__PlcWrite__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtcrobot_msg__msg__PlcWrite__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtcrobot_msg__msg__PlcWrite__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
