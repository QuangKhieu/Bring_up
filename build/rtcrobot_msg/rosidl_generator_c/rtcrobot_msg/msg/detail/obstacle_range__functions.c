// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtcrobot_msg:msg/ObstacleRange.idl
// generated code does not contain a copyright notice
#include "rtcrobot_msg/msg/detail/obstacle_range__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `range`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rtcrobot_msg__msg__ObstacleRange__init(rtcrobot_msg__msg__ObstacleRange * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rtcrobot_msg__msg__ObstacleRange__fini(msg);
    return false;
  }
  // range
  if (!rosidl_runtime_c__float__Sequence__init(&msg->range, 0)) {
    rtcrobot_msg__msg__ObstacleRange__fini(msg);
    return false;
  }
  return true;
}

void
rtcrobot_msg__msg__ObstacleRange__fini(rtcrobot_msg__msg__ObstacleRange * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // range
  rosidl_runtime_c__float__Sequence__fini(&msg->range);
}

bool
rtcrobot_msg__msg__ObstacleRange__are_equal(const rtcrobot_msg__msg__ObstacleRange * lhs, const rtcrobot_msg__msg__ObstacleRange * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // range
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->range), &(rhs->range)))
  {
    return false;
  }
  return true;
}

bool
rtcrobot_msg__msg__ObstacleRange__copy(
  const rtcrobot_msg__msg__ObstacleRange * input,
  rtcrobot_msg__msg__ObstacleRange * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // range
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->range), &(output->range)))
  {
    return false;
  }
  return true;
}

rtcrobot_msg__msg__ObstacleRange *
rtcrobot_msg__msg__ObstacleRange__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__ObstacleRange * msg = (rtcrobot_msg__msg__ObstacleRange *)allocator.allocate(sizeof(rtcrobot_msg__msg__ObstacleRange), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtcrobot_msg__msg__ObstacleRange));
  bool success = rtcrobot_msg__msg__ObstacleRange__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtcrobot_msg__msg__ObstacleRange__destroy(rtcrobot_msg__msg__ObstacleRange * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtcrobot_msg__msg__ObstacleRange__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtcrobot_msg__msg__ObstacleRange__Sequence__init(rtcrobot_msg__msg__ObstacleRange__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__ObstacleRange * data = NULL;

  if (size) {
    data = (rtcrobot_msg__msg__ObstacleRange *)allocator.zero_allocate(size, sizeof(rtcrobot_msg__msg__ObstacleRange), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtcrobot_msg__msg__ObstacleRange__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtcrobot_msg__msg__ObstacleRange__fini(&data[i - 1]);
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
rtcrobot_msg__msg__ObstacleRange__Sequence__fini(rtcrobot_msg__msg__ObstacleRange__Sequence * array)
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
      rtcrobot_msg__msg__ObstacleRange__fini(&array->data[i]);
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

rtcrobot_msg__msg__ObstacleRange__Sequence *
rtcrobot_msg__msg__ObstacleRange__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__ObstacleRange__Sequence * array = (rtcrobot_msg__msg__ObstacleRange__Sequence *)allocator.allocate(sizeof(rtcrobot_msg__msg__ObstacleRange__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtcrobot_msg__msg__ObstacleRange__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtcrobot_msg__msg__ObstacleRange__Sequence__destroy(rtcrobot_msg__msg__ObstacleRange__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtcrobot_msg__msg__ObstacleRange__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtcrobot_msg__msg__ObstacleRange__Sequence__are_equal(const rtcrobot_msg__msg__ObstacleRange__Sequence * lhs, const rtcrobot_msg__msg__ObstacleRange__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtcrobot_msg__msg__ObstacleRange__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtcrobot_msg__msg__ObstacleRange__Sequence__copy(
  const rtcrobot_msg__msg__ObstacleRange__Sequence * input,
  rtcrobot_msg__msg__ObstacleRange__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtcrobot_msg__msg__ObstacleRange);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtcrobot_msg__msg__ObstacleRange * data =
      (rtcrobot_msg__msg__ObstacleRange *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtcrobot_msg__msg__ObstacleRange__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtcrobot_msg__msg__ObstacleRange__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtcrobot_msg__msg__ObstacleRange__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
