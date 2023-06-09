// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from communication_interfaces:msg/FloatArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "communication_interfaces/msg/detail/float_array__rosidl_typesupport_introspection_c.h"
#include "communication_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "communication_interfaces/msg/detail/float_array__functions.h"
#include "communication_interfaces/msg/detail/float_array__struct.h"


// Include directives for member types
// Member `floats`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FloatArray__rosidl_typesupport_introspection_c__FloatArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication_interfaces__msg__FloatArray__init(message_memory);
}

void FloatArray__rosidl_typesupport_introspection_c__FloatArray_fini_function(void * message_memory)
{
  communication_interfaces__msg__FloatArray__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FloatArray__rosidl_typesupport_introspection_c__FloatArray_message_member_array[1] = {
  {
    "floats",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces__msg__FloatArray, floats),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FloatArray__rosidl_typesupport_introspection_c__FloatArray_message_members = {
  "communication_interfaces__msg",  // message namespace
  "FloatArray",  // message name
  1,  // number of fields
  sizeof(communication_interfaces__msg__FloatArray),
  FloatArray__rosidl_typesupport_introspection_c__FloatArray_message_member_array,  // message members
  FloatArray__rosidl_typesupport_introspection_c__FloatArray_init_function,  // function to initialize message memory (memory has to be allocated)
  FloatArray__rosidl_typesupport_introspection_c__FloatArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FloatArray__rosidl_typesupport_introspection_c__FloatArray_message_type_support_handle = {
  0,
  &FloatArray__rosidl_typesupport_introspection_c__FloatArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces, msg, FloatArray)() {
  if (!FloatArray__rosidl_typesupport_introspection_c__FloatArray_message_type_support_handle.typesupport_identifier) {
    FloatArray__rosidl_typesupport_introspection_c__FloatArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FloatArray__rosidl_typesupport_introspection_c__FloatArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
