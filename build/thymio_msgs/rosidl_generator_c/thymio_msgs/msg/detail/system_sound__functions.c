// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from thymio_msgs:msg/SystemSound.idl
// generated code does not contain a copyright notice
#include "thymio_msgs/msg/detail/system_sound__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
thymio_msgs__msg__SystemSound__init(thymio_msgs__msg__SystemSound * msg)
{
  if (!msg) {
    return false;
  }
  // sound
  return true;
}

void
thymio_msgs__msg__SystemSound__fini(thymio_msgs__msg__SystemSound * msg)
{
  if (!msg) {
    return;
  }
  // sound
}

thymio_msgs__msg__SystemSound *
thymio_msgs__msg__SystemSound__create()
{
  thymio_msgs__msg__SystemSound * msg = (thymio_msgs__msg__SystemSound *)malloc(sizeof(thymio_msgs__msg__SystemSound));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(thymio_msgs__msg__SystemSound));
  bool success = thymio_msgs__msg__SystemSound__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
thymio_msgs__msg__SystemSound__destroy(thymio_msgs__msg__SystemSound * msg)
{
  if (msg) {
    thymio_msgs__msg__SystemSound__fini(msg);
  }
  free(msg);
}


bool
thymio_msgs__msg__SystemSound__Sequence__init(thymio_msgs__msg__SystemSound__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  thymio_msgs__msg__SystemSound * data = NULL;
  if (size) {
    data = (thymio_msgs__msg__SystemSound *)calloc(size, sizeof(thymio_msgs__msg__SystemSound));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = thymio_msgs__msg__SystemSound__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        thymio_msgs__msg__SystemSound__fini(&data[i - 1]);
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
thymio_msgs__msg__SystemSound__Sequence__fini(thymio_msgs__msg__SystemSound__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      thymio_msgs__msg__SystemSound__fini(&array->data[i]);
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

thymio_msgs__msg__SystemSound__Sequence *
thymio_msgs__msg__SystemSound__Sequence__create(size_t size)
{
  thymio_msgs__msg__SystemSound__Sequence * array = (thymio_msgs__msg__SystemSound__Sequence *)malloc(sizeof(thymio_msgs__msg__SystemSound__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = thymio_msgs__msg__SystemSound__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
thymio_msgs__msg__SystemSound__Sequence__destroy(thymio_msgs__msg__SystemSound__Sequence * array)
{
  if (array) {
    thymio_msgs__msg__SystemSound__Sequence__fini(array);
  }
  free(array);
}
