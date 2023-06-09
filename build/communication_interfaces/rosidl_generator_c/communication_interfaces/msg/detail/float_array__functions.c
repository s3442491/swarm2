// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication_interfaces:msg/FloatArray.idl
// generated code does not contain a copyright notice
#include "communication_interfaces/msg/detail/float_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `floats`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
communication_interfaces__msg__FloatArray__init(communication_interfaces__msg__FloatArray * msg)
{
  if (!msg) {
    return false;
  }
  // floats
  if (!rosidl_runtime_c__float__Sequence__init(&msg->floats, 0)) {
    communication_interfaces__msg__FloatArray__fini(msg);
    return false;
  }
  return true;
}

void
communication_interfaces__msg__FloatArray__fini(communication_interfaces__msg__FloatArray * msg)
{
  if (!msg) {
    return;
  }
  // floats
  rosidl_runtime_c__float__Sequence__fini(&msg->floats);
}

communication_interfaces__msg__FloatArray *
communication_interfaces__msg__FloatArray__create()
{
  communication_interfaces__msg__FloatArray * msg = (communication_interfaces__msg__FloatArray *)malloc(sizeof(communication_interfaces__msg__FloatArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_interfaces__msg__FloatArray));
  bool success = communication_interfaces__msg__FloatArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
communication_interfaces__msg__FloatArray__destroy(communication_interfaces__msg__FloatArray * msg)
{
  if (msg) {
    communication_interfaces__msg__FloatArray__fini(msg);
  }
  free(msg);
}


bool
communication_interfaces__msg__FloatArray__Sequence__init(communication_interfaces__msg__FloatArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  communication_interfaces__msg__FloatArray * data = NULL;
  if (size) {
    data = (communication_interfaces__msg__FloatArray *)calloc(size, sizeof(communication_interfaces__msg__FloatArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_interfaces__msg__FloatArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_interfaces__msg__FloatArray__fini(&data[i - 1]);
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
communication_interfaces__msg__FloatArray__Sequence__fini(communication_interfaces__msg__FloatArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      communication_interfaces__msg__FloatArray__fini(&array->data[i]);
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

communication_interfaces__msg__FloatArray__Sequence *
communication_interfaces__msg__FloatArray__Sequence__create(size_t size)
{
  communication_interfaces__msg__FloatArray__Sequence * array = (communication_interfaces__msg__FloatArray__Sequence *)malloc(sizeof(communication_interfaces__msg__FloatArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = communication_interfaces__msg__FloatArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
communication_interfaces__msg__FloatArray__Sequence__destroy(communication_interfaces__msg__FloatArray__Sequence * array)
{
  if (array) {
    communication_interfaces__msg__FloatArray__Sequence__fini(array);
  }
  free(array);
}
