// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rtcrobot_msg:msg/PlcRead.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__PLC_READ__FUNCTIONS_H_
#define RTCROBOT_MSG__MSG__DETAIL__PLC_READ__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rtcrobot_msg/msg/rosidl_generator_c__visibility_control.h"

#include "rtcrobot_msg/msg/detail/plc_read__struct.h"

/// Initialize msg/PlcRead message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rtcrobot_msg__msg__PlcRead
 * )) before or use
 * rtcrobot_msg__msg__PlcRead__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
bool
rtcrobot_msg__msg__PlcRead__init(rtcrobot_msg__msg__PlcRead * msg);

/// Finalize msg/PlcRead message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
void
rtcrobot_msg__msg__PlcRead__fini(rtcrobot_msg__msg__PlcRead * msg);

/// Create msg/PlcRead message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rtcrobot_msg__msg__PlcRead__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
rtcrobot_msg__msg__PlcRead *
rtcrobot_msg__msg__PlcRead__create();

/// Destroy msg/PlcRead message.
/**
 * It calls
 * rtcrobot_msg__msg__PlcRead__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
void
rtcrobot_msg__msg__PlcRead__destroy(rtcrobot_msg__msg__PlcRead * msg);

/// Check for msg/PlcRead message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
bool
rtcrobot_msg__msg__PlcRead__are_equal(const rtcrobot_msg__msg__PlcRead * lhs, const rtcrobot_msg__msg__PlcRead * rhs);

/// Copy a msg/PlcRead message.
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
rtcrobot_msg__msg__PlcRead__copy(
  const rtcrobot_msg__msg__PlcRead * input,
  rtcrobot_msg__msg__PlcRead * output);

/// Initialize array of msg/PlcRead messages.
/**
 * It allocates the memory for the number of elements and calls
 * rtcrobot_msg__msg__PlcRead__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
bool
rtcrobot_msg__msg__PlcRead__Sequence__init(rtcrobot_msg__msg__PlcRead__Sequence * array, size_t size);

/// Finalize array of msg/PlcRead messages.
/**
 * It calls
 * rtcrobot_msg__msg__PlcRead__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
void
rtcrobot_msg__msg__PlcRead__Sequence__fini(rtcrobot_msg__msg__PlcRead__Sequence * array);

/// Create array of msg/PlcRead messages.
/**
 * It allocates the memory for the array and calls
 * rtcrobot_msg__msg__PlcRead__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
rtcrobot_msg__msg__PlcRead__Sequence *
rtcrobot_msg__msg__PlcRead__Sequence__create(size_t size);

/// Destroy array of msg/PlcRead messages.
/**
 * It calls
 * rtcrobot_msg__msg__PlcRead__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
void
rtcrobot_msg__msg__PlcRead__Sequence__destroy(rtcrobot_msg__msg__PlcRead__Sequence * array);

/// Check for msg/PlcRead message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtcrobot_msg
bool
rtcrobot_msg__msg__PlcRead__Sequence__are_equal(const rtcrobot_msg__msg__PlcRead__Sequence * lhs, const rtcrobot_msg__msg__PlcRead__Sequence * rhs);

/// Copy an array of msg/PlcRead messages.
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
rtcrobot_msg__msg__PlcRead__Sequence__copy(
  const rtcrobot_msg__msg__PlcRead__Sequence * input,
  rtcrobot_msg__msg__PlcRead__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RTCROBOT_MSG__MSG__DETAIL__PLC_READ__FUNCTIONS_H_
