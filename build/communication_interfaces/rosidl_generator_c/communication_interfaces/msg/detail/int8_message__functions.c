// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication_interfaces:msg/Int8Message.idl
// generated code does not contain a copyright notice
#include "communication_interfaces/msg/detail/int8_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
communication_interfaces__msg__Int8Message__init(communication_interfaces__msg__Int8Message * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
communication_interfaces__msg__Int8Message__fini(communication_interfaces__msg__Int8Message * msg)
{
  if (!msg) {
    return;
  }
  // data
}

communication_interfaces__msg__Int8Message *
communication_interfaces__msg__Int8Message__create()
{
  communication_interfaces__msg__Int8Message * msg = (communication_interfaces__msg__Int8Message *)malloc(sizeof(communication_interfaces__msg__Int8Message));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_interfaces__msg__Int8Message));
  bool success = communication_interfaces__msg__Int8Message__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
communication_interfaces__msg__Int8Message__destroy(communication_interfaces__msg__Int8Message * msg)
{
  if (msg) {
    communication_interfaces__msg__Int8Message__fini(msg);
  }
  free(msg);
}


bool
communication_interfaces__msg__Int8Message__Sequence__init(communication_interfaces__msg__Int8Message__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  communication_interfaces__msg__Int8Message * data = NULL;
  if (size) {
    data = (communication_interfaces__msg__Int8Message *)calloc(size, sizeof(communication_interfaces__msg__Int8Message));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_interfaces__msg__Int8Message__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_interfaces__msg__Int8Message__fini(&data[i - 1]);
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
communication_interfaces__msg__Int8Message__Sequence__fini(communication_interfaces__msg__Int8Message__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      communication_interfaces__msg__Int8Message__fini(&array->data[i]);
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

communication_interfaces__msg__Int8Message__Sequence *
communication_interfaces__msg__Int8Message__Sequence__create(size_t size)
{
  communication_interfaces__msg__Int8Message__Sequence * array = (communication_interfaces__msg__Int8Message__Sequence *)malloc(sizeof(communication_interfaces__msg__Int8Message__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = communication_interfaces__msg__Int8Message__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
communication_interfaces__msg__Int8Message__Sequence__destroy(communication_interfaces__msg__Int8Message__Sequence * array)
{
  if (array) {
    communication_interfaces__msg__Int8Message__Sequence__fini(array);
  }
  free(array);
}
