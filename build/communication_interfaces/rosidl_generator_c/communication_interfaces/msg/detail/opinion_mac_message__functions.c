// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication_interfaces:msg/OpinionMACMessage.idl
// generated code does not contain a copyright notice
#include "communication_interfaces/msg/detail/opinion_mac_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `mac`
#include "rosidl_runtime_c/string_functions.h"

bool
communication_interfaces__msg__OpinionMACMessage__init(communication_interfaces__msg__OpinionMACMessage * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // opinion
  // mac
  if (!rosidl_runtime_c__String__init(&msg->mac)) {
    communication_interfaces__msg__OpinionMACMessage__fini(msg);
    return false;
  }
  return true;
}

void
communication_interfaces__msg__OpinionMACMessage__fini(communication_interfaces__msg__OpinionMACMessage * msg)
{
  if (!msg) {
    return;
  }
  // id
  // opinion
  // mac
  rosidl_runtime_c__String__fini(&msg->mac);
}

communication_interfaces__msg__OpinionMACMessage *
communication_interfaces__msg__OpinionMACMessage__create()
{
  communication_interfaces__msg__OpinionMACMessage * msg = (communication_interfaces__msg__OpinionMACMessage *)malloc(sizeof(communication_interfaces__msg__OpinionMACMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_interfaces__msg__OpinionMACMessage));
  bool success = communication_interfaces__msg__OpinionMACMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
communication_interfaces__msg__OpinionMACMessage__destroy(communication_interfaces__msg__OpinionMACMessage * msg)
{
  if (msg) {
    communication_interfaces__msg__OpinionMACMessage__fini(msg);
  }
  free(msg);
}


bool
communication_interfaces__msg__OpinionMACMessage__Sequence__init(communication_interfaces__msg__OpinionMACMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  communication_interfaces__msg__OpinionMACMessage * data = NULL;
  if (size) {
    data = (communication_interfaces__msg__OpinionMACMessage *)calloc(size, sizeof(communication_interfaces__msg__OpinionMACMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_interfaces__msg__OpinionMACMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_interfaces__msg__OpinionMACMessage__fini(&data[i - 1]);
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
communication_interfaces__msg__OpinionMACMessage__Sequence__fini(communication_interfaces__msg__OpinionMACMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      communication_interfaces__msg__OpinionMACMessage__fini(&array->data[i]);
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

communication_interfaces__msg__OpinionMACMessage__Sequence *
communication_interfaces__msg__OpinionMACMessage__Sequence__create(size_t size)
{
  communication_interfaces__msg__OpinionMACMessage__Sequence * array = (communication_interfaces__msg__OpinionMACMessage__Sequence *)malloc(sizeof(communication_interfaces__msg__OpinionMACMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = communication_interfaces__msg__OpinionMACMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
communication_interfaces__msg__OpinionMACMessage__Sequence__destroy(communication_interfaces__msg__OpinionMACMessage__Sequence * array)
{
  if (array) {
    communication_interfaces__msg__OpinionMACMessage__Sequence__fini(array);
  }
  free(array);
}
