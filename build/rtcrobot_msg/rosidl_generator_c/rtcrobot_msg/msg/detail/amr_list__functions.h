// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rtcrobot_msg:msg/AmrList.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__AMR_LIST__FUNCTIONS_H_
#define RTCROBOT_MSG__MSG__DETAIL__AMR_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rtcrobot_msg/msg/rosidl_generator_c__visibility_control.h"

#include "rtcrobot_msg/msg/detail/amr_list__struct.h"

/// Initialize msg/AmrList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rtcrobot_msg__msg__AmrList
 * )) before or use
 * rtcrobot_msg__msg__AmrList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
bool
rtcrobot_msg__msg__AmrList__init(rtcrobot_msg__msg__AmrList * msg);

/// Finalize msg/AmrList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
void
rtcrobot_msg__msg__AmrList__fini(rtcrobot_msg__msg__AmrList * msg);

/// Create msg/AmrList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rtcrobot_msg__msg__AmrList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
rtcrobot_msg__msg__AmrList *
rtcrobot_msg__msg__AmrList__create();

/// Destroy msg/AmrList message.
/**
 * It calls
 * rtcrobot_msg__msg__AmrList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
void
rtcrobot_msg__msg__AmrList__destroy(rtcrobot_msg__msg__AmrList * msg);

/// Check for msg/AmrList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
bool
rtcrobot_msg__msg__AmrList__are_equal(const rtcrobot_msg__msg__AmrList * lhs, const rtcrobot_msg__msg__AmrList * rhs);

/// Copy a msg/AmrList message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
bool
rtcrobot_msg__msg__AmrList__copy(
  const rtcrobot_msg__msg__AmrList * input,
  rtcrobot_msg__msg__AmrList * output);

/// Initialize array of msg/AmrList messages.
/**
 * It allocates the memory for the number of elements and calls
 * rtcrobot_msg__msg__AmrList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
bool
rtcrobot_msg__msg__AmrList__Sequence__init(rtcrobot_msg__msg__AmrList__Sequence * array, size_t size);

/// Finalize array of msg/AmrList messages.
/**
 * It calls
 * rtcrobot_msg__msg__AmrList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
void
rtcrobot_msg__msg__AmrList__Sequence__fini(rtcrobot_msg__msg__AmrList__Sequence * array);

/// Create array of msg/AmrList messages.
/**
 * It allocates the memory for the array and calls
 * rtcrobot_msg__msg__AmrList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
rtcrobot_msg__msg__AmrList__Sequence *
rtcrobot_msg__msg__AmrList__Sequence__create(size_t size);

/// Destroy array of msg/AmrList messages.
/**
 * It calls
 * rtcrobot_msg__msg__AmrList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
void
rtcrobot_msg__msg__AmrList__Sequence__destroy(rtcrobot_msg__msg__AmrList__Sequence * array);

/// Check for msg/AmrList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
bool
rtcrobot_msg__msg__AmrList__Sequence__are_equal(const rtcrobot_msg__msg__AmrList__Sequence * lhs, const rtcrobot_msg__msg__AmrList__Sequence * rhs);

/// Copy an array of msg/AmrList messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
bool
rtcrobot_msg__msg__AmrList__Sequence__copy(
  const rtcrobot_msg__msg__AmrList__Sequence * input,
  rtcrobot_msg__msg__AmrList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__AMR_LIST__FUNCTIONS_H_
