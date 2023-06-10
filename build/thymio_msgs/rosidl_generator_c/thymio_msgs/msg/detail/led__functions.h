// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from thymio_msgs:msg/Led.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__LED__FUNCTIONS_H_
#define THYMIO_MSGS__MSG__DETAIL__LED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "thymio_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "thymio_msgs/msg/detail/led__struct.h"

/// Initialize msg/Led message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * thymio_msgs__msg__Led
 * )) before or use
 * thymio_msgs__msg__Led__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio_msgs
bool
thymio_msgs__msg__Led__init(thymio_msgs__msg__Led * msg);

/// Finalize msg/Led message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio_msgs
void
thymio_msgs__msg__Led__fini(thymio_msgs__msg__Led * msg);

/// Create msg/Led message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * thymio_msgs__msg__Led__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio_msgs
thymio_msgs__msg__Led *
thymio_msgs__msg__Led__create();

/// Destroy msg/Led message.
/**
 * It calls
 * thymio_msgs__msg__Led__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio_msgs
void
thymio_msgs__msg__Led__destroy(thymio_msgs__msg__Led * msg);


/// Initialize array of msg/Led messages.
/**
 * It allocates the memory for the number of elements and calls
 * thymio_msgs__msg__Led__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio_msgs
bool
thymio_msgs__msg__Led__Sequence__init(thymio_msgs__msg__Led__Sequence * array, size_t size);

/// Finalize array of msg/Led messages.
/**
 * It calls
 * thymio_msgs__msg__Led__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio_msgs
void
thymio_msgs__msg__Led__Sequence__fini(thymio_msgs__msg__Led__Sequence * array);

/// Create array of msg/Led messages.
/**
 * It allocates the memory for the array and calls
 * thymio_msgs__msg__Led__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio_msgs
thymio_msgs__msg__Led__Sequence *
thymio_msgs__msg__Led__Sequence__create(size_t size);

/// Destroy array of msg/Led messages.
/**
 * It calls
 * thymio_msgs__msg__Led__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio_msgs
void
thymio_msgs__msg__Led__Sequence__destroy(thymio_msgs__msg__Led__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // THYMIO_MSGS__MSG__DETAIL__LED__FUNCTIONS_H_
