// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtcrobot_msg:msg/WheelData.idl
// generated code does not contain a copyright notice
#include "rtcrobot_msg/msg/detail/wheel_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `left`
// Member `right`
#include "rtcrobot_msg/msg/detail/motor_data__functions.h"

bool
rtcrobot_msg__msg__WheelData__init(rtcrobot_msg__msg__WheelData * msg)
{
  if (!msg) {
    return false;
  }
  // left
  if (!rtcrobot_msg__msg__MotorData__init(&msg->left)) {
    rtcrobot_msg__msg__WheelData__fini(msg);
    return false;
  }
  // right
  if (!rtcrobot_msg__msg__MotorData__init(&msg->right)) {
    rtcrobot_msg__msg__WheelData__fini(msg);
    return false;
  }
  return true;
}

void
rtcrobot_msg__msg__WheelData__fini(rtcrobot_msg__msg__WheelData * msg)
{
  if (!msg) {
    return;
  }
  // left
  rtcrobot_msg__msg__MotorData__fini(&msg->left);
  // right
  rtcrobot_msg__msg__MotorData__fini(&msg->right);
}

bool
rtcrobot_msg__msg__WheelData__are_equal(const rtcrobot_msg__msg__WheelData * lhs, const rtcrobot_msg__msg__WheelData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left
  if (!rtcrobot_msg__msg__MotorData__are_equal(
      &(lhs->left), &(rhs->left)))
  {
    return false;
  }
  // right
  if (!rtcrobot_msg__msg__MotorData__are_equal(
      &(lhs->right), &(rhs->right)))
  {
    return false;
  }
  return true;
}

bool
rtcrobot_msg__msg__WheelData__copy(
  const rtcrobot_msg__msg__WheelData * input,
  rtcrobot_msg__msg__WheelData * output)
{
  if (!input || !output) {
    return false;
  }
  // left
  if (!rtcrobot_msg__msg__MotorData__copy(
      &(input->left), &(output->left)))
  {
    return false;
  }
  // right
  if (!rtcrobot_msg__msg__MotorData__copy(
      &(input->right), &(output->right)))
  {
    return false;
  }
  return true;
}

rtcrobot_msg__msg__WheelData *
rtcrobot_msg__msg__WheelData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__WheelData * msg = (rtcrobot_msg__msg__WheelData *)allocator.allocate(sizeof(rtcrobot_msg__msg__WheelData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtcrobot_msg__msg__WheelData));
  bool success = rtcrobot_msg__msg__WheelData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtcrobot_msg__msg__WheelData__destroy(rtcrobot_msg__msg__WheelData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtcrobot_msg__msg__WheelData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtcrobot_msg__msg__WheelData__Sequence__init(rtcrobot_msg__msg__WheelData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__WheelData * data = NULL;

  if (size) {
    data = (rtcrobot_msg__msg__WheelData *)allocator.zero_allocate(size, sizeof(rtcrobot_msg__msg__WheelData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtcrobot_msg__msg__WheelData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtcrobot_msg__msg__WheelData__fini(&data[i - 1]);
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
rtcrobot_msg__msg__WheelData__Sequence__fini(rtcrobot_msg__msg__WheelData__Sequence * array)
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
      rtcrobot_msg__msg__WheelData__fini(&array->data[i]);
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

rtcrobot_msg__msg__WheelData__Sequence *
rtcrobot_msg__msg__WheelData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__WheelData__Sequence * array = (rtcrobot_msg__msg__WheelData__Sequence *)allocator.allocate(sizeof(rtcrobot_msg__msg__WheelData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtcrobot_msg__msg__WheelData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtcrobot_msg__msg__WheelData__Sequence__destroy(rtcrobot_msg__msg__WheelData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtcrobot_msg__msg__WheelData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtcrobot_msg__msg__WheelData__Sequence__are_equal(const rtcrobot_msg__msg__WheelData__Sequence * lhs, const rtcrobot_msg__msg__WheelData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtcrobot_msg__msg__WheelData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtcrobot_msg__msg__WheelData__Sequence__copy(
  const rtcrobot_msg__msg__WheelData__Sequence * input,
  rtcrobot_msg__msg__WheelData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtcrobot_msg__msg__WheelData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtcrobot_msg__msg__WheelData * data =
      (rtcrobot_msg__msg__WheelData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtcrobot_msg__msg__WheelData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtcrobot_msg__msg__WheelData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtcrobot_msg__msg__WheelData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
