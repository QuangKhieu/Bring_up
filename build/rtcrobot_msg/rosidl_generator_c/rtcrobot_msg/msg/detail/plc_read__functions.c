// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtcrobot_msg:msg/PlcRead.idl
// generated code does not contain a copyright notice
#include "rtcrobot_msg/msg/detail/plc_read__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rtcrobot_msg__msg__PlcRead__init(rtcrobot_msg__msg__PlcRead * msg)
{
  if (!msg) {
    return false;
  }
  // bumper
  // sensor_check_product
  // emo_forward
  // emo_backward
  // auto_switch
  // manual_switch
  // motor_left_out1
  // motor_left_out2
  // motor_right_out1
  // motor_right_out2
  // start_btn
  // stop_btn
  // reset_btn
  // he_forward_out
  // he_forward_er
  // he_backward_out
  // he_backward_er
  return true;
}

void
rtcrobot_msg__msg__PlcRead__fini(rtcrobot_msg__msg__PlcRead * msg)
{
  if (!msg) {
    return;
  }
  // bumper
  // sensor_check_product
  // emo_forward
  // emo_backward
  // auto_switch
  // manual_switch
  // motor_left_out1
  // motor_left_out2
  // motor_right_out1
  // motor_right_out2
  // start_btn
  // stop_btn
  // reset_btn
  // he_forward_out
  // he_forward_er
  // he_backward_out
  // he_backward_er
}

bool
rtcrobot_msg__msg__PlcRead__are_equal(const rtcrobot_msg__msg__PlcRead * lhs, const rtcrobot_msg__msg__PlcRead * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bumper
  if (lhs->bumper != rhs->bumper) {
    return false;
  }
  // sensor_check_product
  if (lhs->sensor_check_product != rhs->sensor_check_product) {
    return false;
  }
  // emo_forward
  if (lhs->emo_forward != rhs->emo_forward) {
    return false;
  }
  // emo_backward
  if (lhs->emo_backward != rhs->emo_backward) {
    return false;
  }
  // auto_switch
  if (lhs->auto_switch != rhs->auto_switch) {
    return false;
  }
  // manual_switch
  if (lhs->manual_switch != rhs->manual_switch) {
    return false;
  }
  // motor_left_out1
  if (lhs->motor_left_out1 != rhs->motor_left_out1) {
    return false;
  }
  // motor_left_out2
  if (lhs->motor_left_out2 != rhs->motor_left_out2) {
    return false;
  }
  // motor_right_out1
  if (lhs->motor_right_out1 != rhs->motor_right_out1) {
    return false;
  }
  // motor_right_out2
  if (lhs->motor_right_out2 != rhs->motor_right_out2) {
    return false;
  }
  // start_btn
  if (lhs->start_btn != rhs->start_btn) {
    return false;
  }
  // stop_btn
  if (lhs->stop_btn != rhs->stop_btn) {
    return false;
  }
  // reset_btn
  if (lhs->reset_btn != rhs->reset_btn) {
    return false;
  }
  // he_forward_out
  if (lhs->he_forward_out != rhs->he_forward_out) {
    return false;
  }
  // he_forward_er
  if (lhs->he_forward_er != rhs->he_forward_er) {
    return false;
  }
  // he_backward_out
  if (lhs->he_backward_out != rhs->he_backward_out) {
    return false;
  }
  // he_backward_er
  if (lhs->he_backward_er != rhs->he_backward_er) {
    return false;
  }
  return true;
}

bool
rtcrobot_msg__msg__PlcRead__copy(
  const rtcrobot_msg__msg__PlcRead * input,
  rtcrobot_msg__msg__PlcRead * output)
{
  if (!input || !output) {
    return false;
  }
  // bumper
  output->bumper = input->bumper;
  // sensor_check_product
  output->sensor_check_product = input->sensor_check_product;
  // emo_forward
  output->emo_forward = input->emo_forward;
  // emo_backward
  output->emo_backward = input->emo_backward;
  // auto_switch
  output->auto_switch = input->auto_switch;
  // manual_switch
  output->manual_switch = input->manual_switch;
  // motor_left_out1
  output->motor_left_out1 = input->motor_left_out1;
  // motor_left_out2
  output->motor_left_out2 = input->motor_left_out2;
  // motor_right_out1
  output->motor_right_out1 = input->motor_right_out1;
  // motor_right_out2
  output->motor_right_out2 = input->motor_right_out2;
  // start_btn
  output->start_btn = input->start_btn;
  // stop_btn
  output->stop_btn = input->stop_btn;
  // reset_btn
  output->reset_btn = input->reset_btn;
  // he_forward_out
  output->he_forward_out = input->he_forward_out;
  // he_forward_er
  output->he_forward_er = input->he_forward_er;
  // he_backward_out
  output->he_backward_out = input->he_backward_out;
  // he_backward_er
  output->he_backward_er = input->he_backward_er;
  return true;
}

rtcrobot_msg__msg__PlcRead *
rtcrobot_msg__msg__PlcRead__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__PlcRead * msg = (rtcrobot_msg__msg__PlcRead *)allocator.allocate(sizeof(rtcrobot_msg__msg__PlcRead), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtcrobot_msg__msg__PlcRead));
  bool success = rtcrobot_msg__msg__PlcRead__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtcrobot_msg__msg__PlcRead__destroy(rtcrobot_msg__msg__PlcRead * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtcrobot_msg__msg__PlcRead__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtcrobot_msg__msg__PlcRead__Sequence__init(rtcrobot_msg__msg__PlcRead__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__PlcRead * data = NULL;

  if (size) {
    data = (rtcrobot_msg__msg__PlcRead *)allocator.zero_allocate(size, sizeof(rtcrobot_msg__msg__PlcRead), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtcrobot_msg__msg__PlcRead__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtcrobot_msg__msg__PlcRead__fini(&data[i - 1]);
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
rtcrobot_msg__msg__PlcRead__Sequence__fini(rtcrobot_msg__msg__PlcRead__Sequence * array)
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
      rtcrobot_msg__msg__PlcRead__fini(&array->data[i]);
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

rtcrobot_msg__msg__PlcRead__Sequence *
rtcrobot_msg__msg__PlcRead__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__PlcRead__Sequence * array = (rtcrobot_msg__msg__PlcRead__Sequence *)allocator.allocate(sizeof(rtcrobot_msg__msg__PlcRead__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtcrobot_msg__msg__PlcRead__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtcrobot_msg__msg__PlcRead__Sequence__destroy(rtcrobot_msg__msg__PlcRead__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtcrobot_msg__msg__PlcRead__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtcrobot_msg__msg__PlcRead__Sequence__are_equal(const rtcrobot_msg__msg__PlcRead__Sequence * lhs, const rtcrobot_msg__msg__PlcRead__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtcrobot_msg__msg__PlcRead__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtcrobot_msg__msg__PlcRead__Sequence__copy(
  const rtcrobot_msg__msg__PlcRead__Sequence * input,
  rtcrobot_msg__msg__PlcRead__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtcrobot_msg__msg__PlcRead);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtcrobot_msg__msg__PlcRead * data =
      (rtcrobot_msg__msg__PlcRead *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtcrobot_msg__msg__PlcRead__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtcrobot_msg__msg__PlcRead__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtcrobot_msg__msg__PlcRead__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
