// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtcrobot_msg:msg/StateAMR.idl
// generated code does not contain a copyright notice
#include "rtcrobot_msg/msg/detail/state_amr__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ip`
// Member `pose`
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

bool
rtcrobot_msg__msg__StateAMR__init(rtcrobot_msg__msg__StateAMR * msg)
{
  if (!msg) {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__init(&msg->ip)) {
    rtcrobot_msg__msg__StateAMR__fini(msg);
    return false;
  }
  // state
  // pose
  if (!rosidl_runtime_c__String__init(&msg->pose)) {
    rtcrobot_msg__msg__StateAMR__fini(msg);
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    rtcrobot_msg__msg__StateAMR__fini(msg);
    return false;
  }
  // agv_mode
  return true;
}

void
rtcrobot_msg__msg__StateAMR__fini(rtcrobot_msg__msg__StateAMR * msg)
{
  if (!msg) {
    return;
  }
  // ip
  rosidl_runtime_c__String__fini(&msg->ip);
  // state
  // pose
  rosidl_runtime_c__String__fini(&msg->pose);
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // agv_mode
}

bool
rtcrobot_msg__msg__StateAMR__are_equal(const rtcrobot_msg__msg__StateAMR * lhs, const rtcrobot_msg__msg__StateAMR * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ip), &(rhs->ip)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // pose
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // agv_mode
  if (lhs->agv_mode != rhs->agv_mode) {
    return false;
  }
  return true;
}

bool
rtcrobot_msg__msg__StateAMR__copy(
  const rtcrobot_msg__msg__StateAMR * input,
  rtcrobot_msg__msg__StateAMR * output)
{
  if (!input || !output) {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__copy(
      &(input->ip), &(output->ip)))
  {
    return false;
  }
  // state
  output->state = input->state;
  // pose
  if (!rosidl_runtime_c__String__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // agv_mode
  output->agv_mode = input->agv_mode;
  return true;
}

rtcrobot_msg__msg__StateAMR *
rtcrobot_msg__msg__StateAMR__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__StateAMR * msg = (rtcrobot_msg__msg__StateAMR *)allocator.allocate(sizeof(rtcrobot_msg__msg__StateAMR), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtcrobot_msg__msg__StateAMR));
  bool success = rtcrobot_msg__msg__StateAMR__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtcrobot_msg__msg__StateAMR__destroy(rtcrobot_msg__msg__StateAMR * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtcrobot_msg__msg__StateAMR__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtcrobot_msg__msg__StateAMR__Sequence__init(rtcrobot_msg__msg__StateAMR__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__StateAMR * data = NULL;

  if (size) {
    data = (rtcrobot_msg__msg__StateAMR *)allocator.zero_allocate(size, sizeof(rtcrobot_msg__msg__StateAMR), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtcrobot_msg__msg__StateAMR__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtcrobot_msg__msg__StateAMR__fini(&data[i - 1]);
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
rtcrobot_msg__msg__StateAMR__Sequence__fini(rtcrobot_msg__msg__StateAMR__Sequence * array)
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
      rtcrobot_msg__msg__StateAMR__fini(&array->data[i]);
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

rtcrobot_msg__msg__StateAMR__Sequence *
rtcrobot_msg__msg__StateAMR__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__StateAMR__Sequence * array = (rtcrobot_msg__msg__StateAMR__Sequence *)allocator.allocate(sizeof(rtcrobot_msg__msg__StateAMR__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtcrobot_msg__msg__StateAMR__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtcrobot_msg__msg__StateAMR__Sequence__destroy(rtcrobot_msg__msg__StateAMR__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtcrobot_msg__msg__StateAMR__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtcrobot_msg__msg__StateAMR__Sequence__are_equal(const rtcrobot_msg__msg__StateAMR__Sequence * lhs, const rtcrobot_msg__msg__StateAMR__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtcrobot_msg__msg__StateAMR__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtcrobot_msg__msg__StateAMR__Sequence__copy(
  const rtcrobot_msg__msg__StateAMR__Sequence * input,
  rtcrobot_msg__msg__StateAMR__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtcrobot_msg__msg__StateAMR);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtcrobot_msg__msg__StateAMR * data =
      (rtcrobot_msg__msg__StateAMR *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtcrobot_msg__msg__StateAMR__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtcrobot_msg__msg__StateAMR__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtcrobot_msg__msg__StateAMR__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
