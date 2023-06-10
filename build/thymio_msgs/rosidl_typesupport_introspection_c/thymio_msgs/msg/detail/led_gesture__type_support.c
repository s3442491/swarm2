// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from thymio_msgs:msg/LedGesture.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "thymio_msgs/msg/detail/led_gesture__rosidl_typesupport_introspection_c.h"
#include "thymio_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "thymio_msgs/msg/detail/led_gesture__functions.h"
#include "thymio_msgs/msg/detail/led_gesture__struct.h"


// Include directives for member types
// Member `mask`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LedGesture__rosidl_typesupport_introspection_c__LedGesture_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  thymio_msgs__msg__LedGesture__init(message_memory);
}

void LedGesture__rosidl_typesupport_introspection_c__LedGesture_fini_function(void * message_memory)
{
  thymio_msgs__msg__LedGesture__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LedGesture__rosidl_typesupport_introspection_c__LedGesture_message_member_array[7] = {
  {
    "gesture",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs__msg__LedGesture, gesture),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wave",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs__msg__LedGesture, wave),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "leds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs__msg__LedGesture, leds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "period",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs__msg__LedGesture, period),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs__msg__LedGesture, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mirror",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs__msg__LedGesture, mirror),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs__msg__LedGesture, mask),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LedGesture__rosidl_typesupport_introspection_c__LedGesture_message_members = {
  "thymio_msgs__msg",  // message namespace
  "LedGesture",  // message name
  7,  // number of fields
  sizeof(thymio_msgs__msg__LedGesture),
  LedGesture__rosidl_typesupport_introspection_c__LedGesture_message_member_array,  // message members
  LedGesture__rosidl_typesupport_introspection_c__LedGesture_init_function,  // function to initialize message memory (memory has to be allocated)
  LedGesture__rosidl_typesupport_introspection_c__LedGesture_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LedGesture__rosidl_typesupport_introspection_c__LedGesture_message_type_support_handle = {
  0,
  &LedGesture__rosidl_typesupport_introspection_c__LedGesture_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_thymio_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, thymio_msgs, msg, LedGesture)() {
  if (!LedGesture__rosidl_typesupport_introspection_c__LedGesture_message_type_support_handle.typesupport_identifier) {
    LedGesture__rosidl_typesupport_introspection_c__LedGesture_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LedGesture__rosidl_typesupport_introspection_c__LedGesture_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
