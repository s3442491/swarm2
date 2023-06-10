// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from thymio_msgs:msg/LedGesture.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__LED_GESTURE__STRUCT_H_
#define THYMIO_MSGS__MSG__DETAIL__LED_GESTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFF'.
enum
{
  thymio_msgs__msg__LedGesture__OFF = 0
};

/// Constant 'WAVE'.
enum
{
  thymio_msgs__msg__LedGesture__WAVE = 1
};

/// Constant 'RECT'.
enum
{
  thymio_msgs__msg__LedGesture__RECT = 0
};

/// Constant 'HARMONIC'.
enum
{
  thymio_msgs__msg__LedGesture__HARMONIC = 1
};

/// Constant 'CIRCLE'.
enum
{
  thymio_msgs__msg__LedGesture__CIRCLE = 0
};

/// Constant 'PROXIMITY'.
enum
{
  thymio_msgs__msg__LedGesture__PROXIMITY = 1
};

/// Constant 'BUTTONS'.
enum
{
  thymio_msgs__msg__LedGesture__BUTTONS = 2
};

// Include directives for member types
// Member 'mask'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/LedGesture in the package thymio_msgs.
typedef struct thymio_msgs__msg__LedGesture
{
  uint8_t gesture;
  uint8_t wave;
  uint8_t leds;
  float period;
  uint16_t length;
  uint8_t mirror;
  rosidl_runtime_c__boolean__Sequence mask;
} thymio_msgs__msg__LedGesture;

// Struct for a sequence of thymio_msgs__msg__LedGesture.
typedef struct thymio_msgs__msg__LedGesture__Sequence
{
  thymio_msgs__msg__LedGesture * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} thymio_msgs__msg__LedGesture__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // THYMIO_MSGS__MSG__DETAIL__LED_GESTURE__STRUCT_H_
