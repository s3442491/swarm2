// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication_interfaces:msg/StringMessage.idl
// generated code does not contain a copyright notice
#include "communication_interfaces/msg/detail/string_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
communication_interfaces__msg__StringMessage__init(communication_interfaces__msg__StringMessage * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    communication_interfaces__msg__StringMessage__fini(msg);
    return false;
  }
  return true;
}

void
communication_interfaces__msg__StringMessage__fini(communication_interfaces__msg__StringMessage * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

communication_interfaces__msg__StringMessage *
communication_interfaces__msg__StringMessage__create()
{
  communication_interfaces__msg__StringMessage * msg = (communication_interfaces__msg__StringMessage *)malloc(sizeof(communication_interfaces__msg__StringMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_interfaces__msg__StringMessage));
  bool success = communication_interfaces__msg__StringMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
communication_interfaces__msg__StringMessage__destroy(communication_interfaces__msg__StringMessage * msg)
{
  if (msg) {
    communication_interfaces__msg__StringMessage__fini(msg);
  }
  free(msg);
}


bool
communication_interfaces__msg__StringMessage__Sequence__init(communication_interfaces__msg__StringMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  communication_interfaces__msg__StringMessage * data = NULL;
  if (size) {
    data = (communication_interfaces__msg__StringMessage *)calloc(size, sizeof(communication_interfaces__msg__StringMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_interfaces__msg__StringMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_interfaces__msg__StringMessage__fini(&data[i - 1]);
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
communication_interfaces__msg__StringMessage__Sequence__fini(communication_interfaces__msg__StringMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      communication_interfaces__msg__StringMessage__fini(&array->data[i]);
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

communication_interfaces__msg__StringMessage__Sequence *
communication_interfaces__msg__StringMessage__Sequence__create(size_t size)
{
  communication_interfaces__msg__StringMessage__Sequence * array = (communication_interfaces__msg__StringMessage__Sequence *)malloc(sizeof(communication_interfaces__msg__StringMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = communication_interfaces__msg__StringMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
communication_interfaces__msg__StringMessage__Sequence__destroy(communication_interfaces__msg__StringMessage__Sequence * array)
{
  if (array) {
    communication_interfaces__msg__StringMessage__Sequence__fini(array);
  }
  free(array);
}
