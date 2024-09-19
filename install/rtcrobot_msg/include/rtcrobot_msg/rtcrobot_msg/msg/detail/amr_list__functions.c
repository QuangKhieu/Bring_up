// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtcrobot_msg:msg/AmrList.idl
// generated code does not contain a copyright notice
#include "rtcrobot_msg/msg/detail/amr_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `list`
#include "rosidl_runtime_c/string_functions.h"

bool
rtcrobot_msg__msg__AmrList__init(rtcrobot_msg__msg__AmrList * msg)
{
  if (!msg) {
    return false;
  }
  // list
  if (!rosidl_runtime_c__String__Sequence__init(&msg->list, 0)) {
    rtcrobot_msg__msg__AmrList__fini(msg);
    return false;
  }
  return true;
}

void
rtcrobot_msg__msg__AmrList__fini(rtcrobot_msg__msg__AmrList * msg)
{
  if (!msg) {
    return;
  }
  // list
  rosidl_runtime_c__String__Sequence__fini(&msg->list);
}

bool
rtcrobot_msg__msg__AmrList__are_equal(const rtcrobot_msg__msg__AmrList * lhs, const rtcrobot_msg__msg__AmrList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // list
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->list), &(rhs->list)))
  {
    return false;
  }
  return true;
}

bool
rtcrobot_msg__msg__AmrList__copy(
  const rtcrobot_msg__msg__AmrList * input,
  rtcrobot_msg__msg__AmrList * output)
{
  if (!input || !output) {
    return false;
  }
  // list
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->list), &(output->list)))
  {
    return false;
  }
  return true;
}

rtcrobot_msg__msg__AmrList *
rtcrobot_msg__msg__AmrList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__AmrList * msg = (rtcrobot_msg__msg__AmrList *)allocator.allocate(sizeof(rtcrobot_msg__msg__AmrList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtcrobot_msg__msg__AmrList));
  bool success = rtcrobot_msg__msg__AmrList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtcrobot_msg__msg__AmrList__destroy(rtcrobot_msg__msg__AmrList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtcrobot_msg__msg__AmrList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtcrobot_msg__msg__AmrList__Sequence__init(rtcrobot_msg__msg__AmrList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__AmrList * data = NULL;

  if (size) {
    data = (rtcrobot_msg__msg__AmrList *)allocator.zero_allocate(size, sizeof(rtcrobot_msg__msg__AmrList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtcrobot_msg__msg__AmrList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtcrobot_msg__msg__AmrList__fini(&data[i - 1]);
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
rtcrobot_msg__msg__AmrList__Sequence__fini(rtcrobot_msg__msg__AmrList__Sequence * array)
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
      rtcrobot_msg__msg__AmrList__fini(&array->data[i]);
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

rtcrobot_msg__msg__AmrList__Sequence *
rtcrobot_msg__msg__AmrList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__AmrList__Sequence * array = (rtcrobot_msg__msg__AmrList__Sequence *)allocator.allocate(sizeof(rtcrobot_msg__msg__AmrList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtcrobot_msg__msg__AmrList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtcrobot_msg__msg__AmrList__Sequence__destroy(rtcrobot_msg__msg__AmrList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtcrobot_msg__msg__AmrList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtcrobot_msg__msg__AmrList__Sequence__are_equal(const rtcrobot_msg__msg__AmrList__Sequence * lhs, const rtcrobot_msg__msg__AmrList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtcrobot_msg__msg__AmrList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtcrobot_msg__msg__AmrList__Sequence__copy(
  const rtcrobot_msg__msg__AmrList__Sequence * input,
  rtcrobot_msg__msg__AmrList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtcrobot_msg__msg__AmrList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtcrobot_msg__msg__AmrList * data =
      (rtcrobot_msg__msg__AmrList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtcrobot_msg__msg__AmrList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtcrobot_msg__msg__AmrList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtcrobot_msg__msg__AmrList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
