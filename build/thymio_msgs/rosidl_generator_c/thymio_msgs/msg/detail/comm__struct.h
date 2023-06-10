// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from thymio_msgs:msg/Comm.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__COMM__STRUCT_H_
#define THYMIO_MSGS__MSG__DETAIL__COMM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Comm in the package thymio_msgs.
typedef struct thymio_msgs__msg__Comm
{
  int16_t value;
  int16_t payloads[7];
  int16_t intensities[7];
} thymio_msgs__msg__Comm;

// Struct for a sequence of thymio_msgs__msg__Comm.
typedef struct thymio_msgs__msg__Comm__Sequence
{
  thymio_msgs__msg__Comm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} thymio_msgs__msg__Comm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // THYMIO_MSGS__MSG__DETAIL__COMM__STRUCT_H_
