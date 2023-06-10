// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from thymio_msgs:msg/Sound.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__SOUND__STRUCT_H_
#define THYMIO_MSGS__MSG__DETAIL__SOUND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in msg/Sound in the package thymio_msgs.
typedef struct thymio_msgs__msg__Sound
{
  builtin_interfaces__msg__Duration duration;
  float frequency;
} thymio_msgs__msg__Sound;

// Struct for a sequence of thymio_msgs__msg__Sound.
typedef struct thymio_msgs__msg__Sound__Sequence
{
  thymio_msgs__msg__Sound * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} thymio_msgs__msg__Sound__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // THYMIO_MSGS__MSG__DETAIL__SOUND__STRUCT_H_
