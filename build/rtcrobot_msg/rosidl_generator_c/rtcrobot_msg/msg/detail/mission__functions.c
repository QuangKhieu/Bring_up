// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtcrobot_msg:msg/Mission.idl
// generated code does not contain a copyright notice
#include "rtcrobot_msg/msg/detail/mission__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ip`
// Member `mission`
#include "rosidl_runtime_c/string_functions.h"

bool
rtcrobot_msg__msg__Mission__init(rtcrobot_msg__msg__Mission * msg)
{
  if (!msg) {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__init(&msg->ip)) {
    rtcrobot_msg__msg__Mission__fini(msg);
    return false;
  }
  // action
  // mission
  if (!rosidl_runtime_c__String__init(&msg->mission)) {
    rtcrobot_msg__msg__Mission__fini(msg);
    return false;
  }
  return true;
}

void
rtcrobot_msg__msg__Mission__fini(rtcrobot_msg__msg__Mission * msg)
{
  if (!msg) {
    return;
  }
  // ip
  rosidl_runtime_c__String__fini(&msg->ip);
  // action
  // mission
  rosidl_runtime_c__String__fini(&msg->mission);
}

bool
rtcrobot_msg__msg__Mission__are_equal(const rtcrobot_msg__msg__Mission * lhs, const rtcrobot_msg__msg__Mission * rhs)
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
  // action
  if (lhs->action != rhs->action) {
    return false;
  }
  // mission
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission), &(rhs->mission)))
  {
    return false;
  }
  return true;
}

bool
rtcrobot_msg__msg__Mission__copy(
  const rtcrobot_msg__msg__Mission * input,
  rtcrobot_msg__msg__Mission * output)
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
  // action
  output->action = input->action;
  // mission
  if (!rosidl_runtime_c__String__copy(
      &(input->mission), &(output->mission)))
  {
    return false;
  }
  return true;
}

rtcrobot_msg__msg__Mission *
rtcrobot_msg__msg__Mission__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__Mission * msg = (rtcrobot_msg__msg__Mission *)allocator.allocate(sizeof(rtcrobot_msg__msg__Mission), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtcrobot_msg__msg__Mission));
  bool success = rtcrobot_msg__msg__Mission__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtcrobot_msg__msg__Mission__destroy(rtcrobot_msg__msg__Mission * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtcrobot_msg__msg__Mission__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtcrobot_msg__msg__Mission__Sequence__init(rtcrobot_msg__msg__Mission__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__Mission * data = NULL;

  if (size) {
    data = (rtcrobot_msg__msg__Mission *)allocator.zero_allocate(size, sizeof(rtcrobot_msg__msg__Mission), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtcrobot_msg__msg__Mission__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtcrobot_msg__msg__Mission__fini(&data[i - 1]);
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
rtcrobot_msg__msg__Mission__Sequence__fini(rtcrobot_msg__msg__Mission__Sequence * array)
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
      rtcrobot_msg__msg__Mission__fini(&array->data[i]);
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

rtcrobot_msg__msg__Mission__Sequence *
rtcrobot_msg__msg__Mission__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__Mission__Sequence * array = (rtcrobot_msg__msg__Mission__Sequence *)allocator.allocate(sizeof(rtcrobot_msg__msg__Mission__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtcrobot_msg__msg__Mission__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtcrobot_msg__msg__Mission__Sequence__destroy(rtcrobot_msg__msg__Mission__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtcrobot_msg__msg__Mission__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtcrobot_msg__msg__Mission__Sequence__are_equal(const rtcrobot_msg__msg__Mission__Sequence * lhs, const rtcrobot_msg__msg__Mission__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtcrobot_msg__msg__Mission__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtcrobot_msg__msg__Mission__Sequence__copy(
  const rtcrobot_msg__msg__Mission__Sequence * input,
  rtcrobot_msg__msg__Mission__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtcrobot_msg__msg__Mission);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtcrobot_msg__msg__Mission * data =
      (rtcrobot_msg__msg__Mission *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtcrobot_msg__msg__Mission__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtcrobot_msg__msg__Mission__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtcrobot_msg__msg__Mission__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
