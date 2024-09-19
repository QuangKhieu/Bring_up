// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtcrobot_msg:msg/ObstacleSeg.idl
// generated code does not contain a copyright notice
#include "rtcrobot_msg/msg/detail/obstacle_seg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `first_point`
// Member `last_point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
rtcrobot_msg__msg__ObstacleSeg__init(rtcrobot_msg__msg__ObstacleSeg * msg)
{
  if (!msg) {
    return false;
  }
  // first_point
  if (!geometry_msgs__msg__Point__init(&msg->first_point)) {
    rtcrobot_msg__msg__ObstacleSeg__fini(msg);
    return false;
  }
  // last_point
  if (!geometry_msgs__msg__Point__init(&msg->last_point)) {
    rtcrobot_msg__msg__ObstacleSeg__fini(msg);
    return false;
  }
  return true;
}

void
rtcrobot_msg__msg__ObstacleSeg__fini(rtcrobot_msg__msg__ObstacleSeg * msg)
{
  if (!msg) {
    return;
  }
  // first_point
  geometry_msgs__msg__Point__fini(&msg->first_point);
  // last_point
  geometry_msgs__msg__Point__fini(&msg->last_point);
}

bool
rtcrobot_msg__msg__ObstacleSeg__are_equal(const rtcrobot_msg__msg__ObstacleSeg * lhs, const rtcrobot_msg__msg__ObstacleSeg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // first_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->first_point), &(rhs->first_point)))
  {
    return false;
  }
  // last_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->last_point), &(rhs->last_point)))
  {
    return false;
  }
  return true;
}

bool
rtcrobot_msg__msg__ObstacleSeg__copy(
  const rtcrobot_msg__msg__ObstacleSeg * input,
  rtcrobot_msg__msg__ObstacleSeg * output)
{
  if (!input || !output) {
    return false;
  }
  // first_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->first_point), &(output->first_point)))
  {
    return false;
  }
  // last_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->last_point), &(output->last_point)))
  {
    return false;
  }
  return true;
}

rtcrobot_msg__msg__ObstacleSeg *
rtcrobot_msg__msg__ObstacleSeg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__ObstacleSeg * msg = (rtcrobot_msg__msg__ObstacleSeg *)allocator.allocate(sizeof(rtcrobot_msg__msg__ObstacleSeg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtcrobot_msg__msg__ObstacleSeg));
  bool success = rtcrobot_msg__msg__ObstacleSeg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtcrobot_msg__msg__ObstacleSeg__destroy(rtcrobot_msg__msg__ObstacleSeg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtcrobot_msg__msg__ObstacleSeg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtcrobot_msg__msg__ObstacleSeg__Sequence__init(rtcrobot_msg__msg__ObstacleSeg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__ObstacleSeg * data = NULL;

  if (size) {
    data = (rtcrobot_msg__msg__ObstacleSeg *)allocator.zero_allocate(size, sizeof(rtcrobot_msg__msg__ObstacleSeg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtcrobot_msg__msg__ObstacleSeg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtcrobot_msg__msg__ObstacleSeg__fini(&data[i - 1]);
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
rtcrobot_msg__msg__ObstacleSeg__Sequence__fini(rtcrobot_msg__msg__ObstacleSeg__Sequence * array)
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
      rtcrobot_msg__msg__ObstacleSeg__fini(&array->data[i]);
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

rtcrobot_msg__msg__ObstacleSeg__Sequence *
rtcrobot_msg__msg__ObstacleSeg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__ObstacleSeg__Sequence * array = (rtcrobot_msg__msg__ObstacleSeg__Sequence *)allocator.allocate(sizeof(rtcrobot_msg__msg__ObstacleSeg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtcrobot_msg__msg__ObstacleSeg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtcrobot_msg__msg__ObstacleSeg__Sequence__destroy(rtcrobot_msg__msg__ObstacleSeg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtcrobot_msg__msg__ObstacleSeg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtcrobot_msg__msg__ObstacleSeg__Sequence__are_equal(const rtcrobot_msg__msg__ObstacleSeg__Sequence * lhs, const rtcrobot_msg__msg__ObstacleSeg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtcrobot_msg__msg__ObstacleSeg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtcrobot_msg__msg__ObstacleSeg__Sequence__copy(
  const rtcrobot_msg__msg__ObstacleSeg__Sequence * input,
  rtcrobot_msg__msg__ObstacleSeg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtcrobot_msg__msg__ObstacleSeg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtcrobot_msg__msg__ObstacleSeg * data =
      (rtcrobot_msg__msg__ObstacleSeg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtcrobot_msg__msg__ObstacleSeg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtcrobot_msg__msg__ObstacleSeg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtcrobot_msg__msg__ObstacleSeg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
