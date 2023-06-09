// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_interfaces:msg/RangeData.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__RANGE_DATA__STRUCT_H_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__RANGE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'ranges'
// Member 'angles'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/RangeData in the package communication_interfaces.
typedef struct communication_interfaces__msg__RangeData
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__float__Sequence ranges;
  rosidl_runtime_c__double__Sequence angles;
} communication_interfaces__msg__RangeData;

// Struct for a sequence of communication_interfaces__msg__RangeData.
typedef struct communication_interfaces__msg__RangeData__Sequence
{
  communication_interfaces__msg__RangeData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces__msg__RangeData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__RANGE_DATA__STRUCT_H_
