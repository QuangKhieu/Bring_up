// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rtcrobot_msg:msg/AmrConn.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__AMR_CONN__FUNCTIONS_H_
#define RTCROBOT_MSG__MSG__DETAIL__AMR_CONN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rtcrobot_msg/msg/rosidl_generator_c__visibility_control.h"

#include "rtcrobot_msg/msg/detail/amr_conn__struct.h"

/// Initialize msg/AmrConn message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rtcrobot_msg__msg__AmrConn
 * )) before or use
 * rtcrobot_msg__msg__AmrConn__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
bool
rtcrobot_msg__msg__AmrConn__init(rtcrobot_msg__msg__AmrConn * msg);

/// Finalize msg/AmrConn message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
void
rtcrobot_msg__msg__AmrConn__fini(rtcrobot_msg__msg__AmrConn * msg);

/// Create msg/AmrConn message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rtcrobot_msg__msg__AmrConn__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
rtcrobot_msg__msg__AmrConn *
rtcrobot_msg__msg__AmrConn__create();

/// Destroy msg/AmrConn message.
/**
 * It calls
 * rtcrobot_msg__msg__AmrConn__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
void
rtcrobot_msg__msg__AmrConn__destroy(rtcrobot_msg__msg__AmrConn * msg);

/// Check for msg/AmrConn message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
bool
rtcrobot_msg__msg__AmrConn__are_equal(const rtcrobot_msg__msg__AmrConn * lhs, const rtcrobot_msg__msg__AmrConn * rhs);

/// Copy a msg/AmrConn message.
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
rtcrobot_msg__msg__AmrConn__copy(
  const rtcrobot_msg__msg__AmrConn * input,
  rtcrobot_msg__msg__AmrConn * output);

/// Initialize array of msg/AmrConn messages.
/**
 * It allocates the memory for the number of elements and calls
 * rtcrobot_msg__msg__AmrConn__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
bool
rtcrobot_msg__msg__AmrConn__Sequence__init(rtcrobot_msg__msg__AmrConn__Sequence * array, size_t size);

/// Finalize array of msg/AmrConn messages.
/**
 * It calls
 * rtcrobot_msg__msg__AmrConn__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
void
rtcrobot_msg__msg__AmrConn__Sequence__fini(rtcrobot_msg__msg__AmrConn__Sequence * array);

/// Create array of msg/AmrConn messages.
/**
 * It allocates the memory for the array and calls
 * rtcrobot_msg__msg__AmrConn__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
rtcrobot_msg__msg__AmrConn__Sequence *
rtcrobot_msg__msg__AmrConn__Sequence__create(size_t size);

/// Destroy array of msg/AmrConn messages.
/**
 * It calls
 * rtcrobot_msg__msg__AmrConn__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
void
rtcrobot_msg__msg__AmrConn__Sequence__destroy(rtcrobot_msg__msg__AmrConn__Sequence * array);

/// Check for msg/AmrConn message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
bool
rtcrobot_msg__msg__AmrConn__Sequence__are_equal(const rtcrobot_msg__msg__AmrConn__Sequence * lhs, const rtcrobot_msg__msg__AmrConn__Sequence * rhs);

/// Copy an array of msg/AmrConn messages.
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
rtcrobot_msg__msg__AmrConn__Sequence__copy(
  const rtcrobot_msg__msg__AmrConn__Sequence * input,
  rtcrobot_msg__msg__AmrConn__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__AMR_CONN__FUNCTIONS_H_
