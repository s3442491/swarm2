// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from thymio_msgs:msg/Led.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__LED__STRUCT_H_
#define THYMIO_MSGS__MSG__DETAIL__LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CIRCLE'.
enum
{
  thymio_msgs__msg__Led__CIRCLE = 0
};

/// Constant 'PROXIMITY'.
enum
{
  thymio_msgs__msg__Led__PROXIMITY = 1
};

/// Constant 'BUTTONS'.
enum
{
  thymio_msgs__msg__Led__BUTTONS = 2
};

/// Constant 'GROUND'.
enum
{
  thymio_msgs__msg__Led__GROUND = 3
};

/// Constant 'TEMPERATURE'.
enum
{
  thymio_msgs__msg__Led__TEMPERATURE = 4
};

/// Constant 'MICROPHONE'.
enum
{
  thymio_msgs__msg__Led__MICROPHONE = 5
};

/// Constant 'REMOTE'.
enum
{
  thymio_msgs__msg__Led__REMOTE = 6
};

// Include directives for member types
// Member 'values'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Led in the package thymio_msgs.
typedef struct thymio_msgs__msg__Led
{
  uint8_t id;
  rosidl_runtime_c__float__Sequence values;
} thymio_msgs__msg__Led;

// Struct for a sequence of thymio_msgs__msg__Led.
typedef struct thymio_msgs__msg__Led__Sequence
{
  thymio_msgs__msg__Led * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} thymio_msgs__msg__Led__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // THYMIO_MSGS__MSG__DETAIL__LED__STRUCT_H_
