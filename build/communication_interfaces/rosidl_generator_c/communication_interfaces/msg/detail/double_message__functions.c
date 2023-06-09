// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication_interfaces:msg/DoubleMessage.idl
// generated code does not contain a copyright notice
#include "communication_interfaces/msg/detail/double_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
communication_interfaces__msg__DoubleMessage__init(communication_interfaces__msg__DoubleMessage * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
communication_interfaces__msg__DoubleMessage__fini(communication_interfaces__msg__DoubleMessage * msg)
{
  if (!msg) {
    return;
  }
  // data
}

communication_interfaces__msg__DoubleMessage *
communication_interfaces__msg__DoubleMessage__create()
{
  communication_interfaces__msg__DoubleMessage * msg = (communication_interfaces__msg__DoubleMessage *)malloc(sizeof(communication_interfaces__msg__DoubleMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_interfaces__msg__DoubleMessage));
  bool success = communication_interfaces__msg__DoubleMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
communication_interfaces__msg__DoubleMessage__destroy(communication_interfaces__msg__DoubleMessage * msg)
{
  if (msg) {
    communication_interfaces__msg__DoubleMessage__fini(msg);
  }
  free(msg);
}


bool
communication_interfaces__msg__DoubleMessage__Sequence__init(communication_interfaces__msg__DoubleMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  communication_interfaces__msg__DoubleMessage * data = NULL;
  if (size) {
    data = (communication_interfaces__msg__DoubleMessage *)calloc(size, sizeof(communication_interfaces__msg__DoubleMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_interfaces__msg__DoubleMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_interfaces__msg__DoubleMessage__fini(&data[i - 1]);
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
communication_interfaces__msg__DoubleMessage__Sequence__fini(communication_interfaces__msg__DoubleMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      communication_interfaces__msg__DoubleMessage__fini(&array->data[i]);
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

communication_interfaces__msg__DoubleMessage__Sequence *
communication_interfaces__msg__DoubleMessage__Sequence__create(size_t size)
{
  communication_interfaces__msg__DoubleMessage__Sequence * array = (communication_interfaces__msg__DoubleMessage__Sequence *)malloc(sizeof(communication_interfaces__msg__DoubleMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = communication_interfaces__msg__DoubleMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
communication_interfaces__msg__DoubleMessage__Sequence__destroy(communication_interfaces__msg__DoubleMessage__Sequence * array)
{
  if (array) {
    communication_interfaces__msg__DoubleMessage__Sequence__fini(array);
  }
  free(array);
}
