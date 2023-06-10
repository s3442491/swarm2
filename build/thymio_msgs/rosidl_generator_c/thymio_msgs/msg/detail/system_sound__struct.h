// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from thymio_msgs:msg/SystemSound.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__SYSTEM_SOUND__STRUCT_H_
#define THYMIO_MSGS__MSG__DETAIL__SYSTEM_SOUND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STOP'.
enum
{
  thymio_msgs__msg__SystemSound__STOP = -1
};

/// Constant 'STARTUP'.
enum
{
  thymio_msgs__msg__SystemSound__STARTUP = 0
};

/// Constant 'SHUTDOWN'.
enum
{
  thymio_msgs__msg__SystemSound__SHUTDOWN = 1
};

/// Constant 'ARROW_BUTTON'.
enum
{
  thymio_msgs__msg__SystemSound__ARROW_BUTTON = 2
};

/// Constant 'CENTRAL_BUTTON'.
enum
{
  thymio_msgs__msg__SystemSound__CENTRAL_BUTTON = 3
};

/// Constant 'FREE_FALL'.
enum
{
  thymio_msgs__msg__SystemSound__FREE_FALL = 4
};

/// Constant 'COLLISION'.
enum
{
  thymio_msgs__msg__SystemSound__COLLISION = 5
};

/// Constant 'TARGET_OK'.
enum
{
  thymio_msgs__msg__SystemSound__TARGET_OK = 6
};

/// Constant 'TARGET_DETECT'.
enum
{
  thymio_msgs__msg__SystemSound__TARGET_DETECT = 7
};

// Struct defined in msg/SystemSound in the package thymio_msgs.
typedef struct thymio_msgs__msg__SystemSound
{
  int8_t sound;
} thymio_msgs__msg__SystemSound;

// Struct for a sequence of thymio_msgs__msg__SystemSound.
typedef struct thymio_msgs__msg__SystemSound__Sequence
{
  thymio_msgs__msg__SystemSound * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} thymio_msgs__msg__SystemSound__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // THYMIO_MSGS__MSG__DETAIL__SYSTEM_SOUND__STRUCT_H_
