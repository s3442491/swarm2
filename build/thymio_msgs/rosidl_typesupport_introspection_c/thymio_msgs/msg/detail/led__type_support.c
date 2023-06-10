// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from thymio_msgs:msg/Led.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "thymio_msgs/msg/detail/led__rosidl_typesupport_introspection_c.h"
#include "thymio_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "thymio_msgs/msg/detail/led__functions.h"
#include "thymio_msgs/msg/detail/led__struct.h"


// Include directives for member types
// Member `values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Led__rosidl_typesupport_introspection_c__Led_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  thymio_msgs__msg__Led__init(message_memory);
}

void Led__rosidl_typesupport_introspection_c__Led_fini_function(void * message_memory)
{
  thymio_msgs__msg__Led__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Led__rosidl_typesupport_introspection_c__Led_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs__msg__Led, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs__msg__Led, values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Led__rosidl_typesupport_introspection_c__Led_message_members = {
  "thymio_msgs__msg",  // message namespace
  "Led",  // message name
  2,  // number of fields
  sizeof(thymio_msgs__msg__Led),
  Led__rosidl_typesupport_introspection_c__Led_message_member_array,  // message members
  Led__rosidl_typesupport_introspection_c__Led_init_function,  // function to initialize message memory (memory has to be allocated)
  Led__rosidl_typesupport_introspection_c__Led_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Led__rosidl_typesupport_introspection_c__Led_message_type_support_handle = {
  0,
  &Led__rosidl_typesupport_introspection_c__Led_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_thymio_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, thymio_msgs, msg, Led)() {
  if (!Led__rosidl_typesupport_introspection_c__Led_message_type_support_handle.typesupport_identifier) {
    Led__rosidl_typesupport_introspection_c__Led_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Led__rosidl_typesupport_introspection_c__Led_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
