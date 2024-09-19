// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtcrobot_msg:msg/ObstacleCir.idl
// generated code does not contain a copyright notice
#include "rtcrobot_msg/msg/detail/obstacle_cir__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
rtcrobot_msg__msg__ObstacleCir__init(rtcrobot_msg__msg__ObstacleCir * msg)
{
  if (!msg) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__init(&msg->center)) {
    rtcrobot_msg__msg__ObstacleCir__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    rtcrobot_msg__msg__ObstacleCir__fini(msg);
    return false;
  }
  // radius
  // true_radius
  return true;
}

void
rtcrobot_msg__msg__ObstacleCir__fini(rtcrobot_msg__msg__ObstacleCir * msg)
{
  if (!msg) {
    return;
  }
  // center
  geometry_msgs__msg__Point__fini(&msg->center);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // radius
  // true_radius
}

bool
rtcrobot_msg__msg__ObstacleCir__are_equal(const rtcrobot_msg__msg__ObstacleCir * lhs, const rtcrobot_msg__msg__ObstacleCir * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  // true_radius
  if (lhs->true_radius != rhs->true_radius) {
    return false;
  }
  return true;
}

bool
rtcrobot_msg__msg__ObstacleCir__copy(
  const rtcrobot_msg__msg__ObstacleCir * input,
  rtcrobot_msg__msg__ObstacleCir * output)
{
  if (!input || !output) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // radius
  output->radius = input->radius;
  // true_radius
  output->true_radius = input->true_radius;
  return true;
}

rtcrobot_msg__msg__ObstacleCir *
rtcrobot_msg__msg__ObstacleCir__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__ObstacleCir * msg = (rtcrobot_msg__msg__ObstacleCir *)allocator.allocate(sizeof(rtcrobot_msg__msg__ObstacleCir), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtcrobot_msg__msg__ObstacleCir));
  bool success = rtcrobot_msg__msg__ObstacleCir__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtcrobot_msg__msg__ObstacleCir__destroy(rtcrobot_msg__msg__ObstacleCir * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtcrobot_msg__msg__ObstacleCir__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtcrobot_msg__msg__ObstacleCir__Sequence__init(rtcrobot_msg__msg__ObstacleCir__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__ObstacleCir * data = NULL;

  if (size) {
    data = (rtcrobot_msg__msg__ObstacleCir *)allocator.zero_allocate(size, sizeof(rtcrobot_msg__msg__ObstacleCir), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtcrobot_msg__msg__ObstacleCir__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtcrobot_msg__msg__ObstacleCir__fini(&data[i - 1]);
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
rtcrobot_msg__msg__ObstacleCir__Sequence__fini(rtcrobot_msg__msg__ObstacleCir__Sequence * array)
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
      rtcrobot_msg__msg__ObstacleCir__fini(&array->data[i]);
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

rtcrobot_msg__msg__ObstacleCir__Sequence *
rtcrobot_msg__msg__ObstacleCir__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__ObstacleCir__Sequence * array = (rtcrobot_msg__msg__ObstacleCir__Sequence *)allocator.allocate(sizeof(rtcrobot_msg__msg__ObstacleCir__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtcrobot_msg__msg__ObstacleCir__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtcrobot_msg__msg__ObstacleCir__Sequence__destroy(rtcrobot_msg__msg__ObstacleCir__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtcrobot_msg__msg__ObstacleCir__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtcrobot_msg__msg__ObstacleCir__Sequence__are_equal(const rtcrobot_msg__msg__ObstacleCir__Sequence * lhs, const rtcrobot_msg__msg__ObstacleCir__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtcrobot_msg__msg__ObstacleCir__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtcrobot_msg__msg__ObstacleCir__Sequence__copy(
  const rtcrobot_msg__msg__ObstacleCir__Sequence * input,
  rtcrobot_msg__msg__ObstacleCir__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtcrobot_msg__msg__ObstacleCir);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtcrobot_msg__msg__ObstacleCir * data =
      (rtcrobot_msg__msg__ObstacleCir *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtcrobot_msg__msg__ObstacleCir__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtcrobot_msg__msg__ObstacleCir__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtcrobot_msg__msg__ObstacleCir__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
