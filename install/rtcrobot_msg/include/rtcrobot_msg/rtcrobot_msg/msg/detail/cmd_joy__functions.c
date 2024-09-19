// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtcrobot_msg:msg/CmdJoy.idl
// generated code does not contain a copyright notice
#include "rtcrobot_msg/msg/detail/cmd_joy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rtcrobot_msg__msg__CmdJoy__init(rtcrobot_msg__msg__CmdJoy * msg)
{
  if (!msg) {
    return false;
  }
  // manual
  // vx
  // vy
  // az
  return true;
}

void
rtcrobot_msg__msg__CmdJoy__fini(rtcrobot_msg__msg__CmdJoy * msg)
{
  if (!msg) {
    return;
  }
  // manual
  // vx
  // vy
  // az
}

bool
rtcrobot_msg__msg__CmdJoy__are_equal(const rtcrobot_msg__msg__CmdJoy * lhs, const rtcrobot_msg__msg__CmdJoy * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // manual
  if (lhs->manual != rhs->manual) {
    return false;
  }
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // vy
  if (lhs->vy != rhs->vy) {
    return false;
  }
  // az
  if (lhs->az != rhs->az) {
    return false;
  }
  return true;
}

bool
rtcrobot_msg__msg__CmdJoy__copy(
  const rtcrobot_msg__msg__CmdJoy * input,
  rtcrobot_msg__msg__CmdJoy * output)
{
  if (!input || !output) {
    return false;
  }
  // manual
  output->manual = input->manual;
  // vx
  output->vx = input->vx;
  // vy
  output->vy = input->vy;
  // az
  output->az = input->az;
  return true;
}

rtcrobot_msg__msg__CmdJoy *
rtcrobot_msg__msg__CmdJoy__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__CmdJoy * msg = (rtcrobot_msg__msg__CmdJoy *)allocator.allocate(sizeof(rtcrobot_msg__msg__CmdJoy), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtcrobot_msg__msg__CmdJoy));
  bool success = rtcrobot_msg__msg__CmdJoy__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtcrobot_msg__msg__CmdJoy__destroy(rtcrobot_msg__msg__CmdJoy * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtcrobot_msg__msg__CmdJoy__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtcrobot_msg__msg__CmdJoy__Sequence__init(rtcrobot_msg__msg__CmdJoy__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__CmdJoy * data = NULL;

  if (size) {
    data = (rtcrobot_msg__msg__CmdJoy *)allocator.zero_allocate(size, sizeof(rtcrobot_msg__msg__CmdJoy), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtcrobot_msg__msg__CmdJoy__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtcrobot_msg__msg__CmdJoy__fini(&data[i - 1]);
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
rtcrobot_msg__msg__CmdJoy__Sequence__fini(rtcrobot_msg__msg__CmdJoy__Sequence * array)
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
      rtcrobot_msg__msg__CmdJoy__fini(&array->data[i]);
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

rtcrobot_msg__msg__CmdJoy__Sequence *
rtcrobot_msg__msg__CmdJoy__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtcrobot_msg__msg__CmdJoy__Sequence * array = (rtcrobot_msg__msg__CmdJoy__Sequence *)allocator.allocate(sizeof(rtcrobot_msg__msg__CmdJoy__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtcrobot_msg__msg__CmdJoy__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtcrobot_msg__msg__CmdJoy__Sequence__destroy(rtcrobot_msg__msg__CmdJoy__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtcrobot_msg__msg__CmdJoy__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtcrobot_msg__msg__CmdJoy__Sequence__are_equal(const rtcrobot_msg__msg__CmdJoy__Sequence * lhs, const rtcrobot_msg__msg__CmdJoy__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtcrobot_msg__msg__CmdJoy__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtcrobot_msg__msg__CmdJoy__Sequence__copy(
  const rtcrobot_msg__msg__CmdJoy__Sequence * input,
  rtcrobot_msg__msg__CmdJoy__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtcrobot_msg__msg__CmdJoy);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtcrobot_msg__msg__CmdJoy * data =
      (rtcrobot_msg__msg__CmdJoy *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtcrobot_msg__msg__CmdJoy__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtcrobot_msg__msg__CmdJoy__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtcrobot_msg__msg__CmdJoy__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
