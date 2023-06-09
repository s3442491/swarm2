// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication_interfaces:msg/RangeData.idl
// generated code does not contain a copyright notice
#include "communication_interfaces/msg/detail/range_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ranges`
// Member `angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
communication_interfaces__msg__RangeData__init(communication_interfaces__msg__RangeData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    communication_interfaces__msg__RangeData__fini(msg);
    return false;
  }
  // ranges
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ranges, 0)) {
    communication_interfaces__msg__RangeData__fini(msg);
    return false;
  }
  // angles
  if (!rosidl_runtime_c__double__Sequence__init(&msg->angles, 0)) {
    communication_interfaces__msg__RangeData__fini(msg);
    return false;
  }
  return true;
}

void
communication_interfaces__msg__RangeData__fini(communication_interfaces__msg__RangeData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ranges
  rosidl_runtime_c__float__Sequence__fini(&msg->ranges);
  // angles
  rosidl_runtime_c__double__Sequence__fini(&msg->angles);
}

communication_interfaces__msg__RangeData *
communication_interfaces__msg__RangeData__create()
{
  communication_interfaces__msg__RangeData * msg = (communication_interfaces__msg__RangeData *)malloc(sizeof(communication_interfaces__msg__RangeData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_interfaces__msg__RangeData));
  bool success = communication_interfaces__msg__RangeData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
communication_interfaces__msg__RangeData__destroy(communication_interfaces__msg__RangeData * msg)
{
  if (msg) {
    communication_interfaces__msg__RangeData__fini(msg);
  }
  free(msg);
}


bool
communication_interfaces__msg__RangeData__Sequence__init(communication_interfaces__msg__RangeData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  communication_interfaces__msg__RangeData * data = NULL;
  if (size) {
    data = (communication_interfaces__msg__RangeData *)calloc(size, sizeof(communication_interfaces__msg__RangeData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_interfaces__msg__RangeData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_interfaces__msg__RangeData__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
communication_interfaces__msg__RangeData__Sequence__fini(communication_interfaces__msg__RangeData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      communication_interfaces__msg__RangeData__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

communication_interfaces__msg__RangeData__Sequence *
communication_interfaces__msg__RangeData__Sequence__create(size_t size)
{
  communication_interfaces__msg__RangeData__Sequence * array = (communication_interfaces__msg__RangeData__Sequence *)malloc(sizeof(communication_interfaces__msg__RangeData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = communication_interfaces__msg__RangeData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
communication_interfaces__msg__RangeData__Sequence__destroy(communication_interfaces__msg__RangeData__Sequence * array)
{
  if (array) {
    communication_interfaces__msg__RangeData__Sequence__fini(array);
  }
  free(array);
}
