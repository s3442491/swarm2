// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_interfaces:msg/FloatArray.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__FLOAT_ARRAY__STRUCT_H_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__FLOAT_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'floats'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/FloatArray in the package communication_interfaces.
typedef struct communication_interfaces__msg__FloatArray
{
  rosidl_runtime_c__float__Sequence floats;
} communication_interfaces__msg__FloatArray;

// Struct for a sequence of communication_interfaces__msg__FloatArray.
typedef struct communication_interfaces__msg__FloatArray__Sequence
{
  communication_interfaces__msg__FloatArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces__msg__FloatArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__FLOAT_ARRAY__STRUCT_H_
