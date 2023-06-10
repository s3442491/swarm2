// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from thymio_msgs:msg/SystemSound.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "thymio_msgs/msg/detail/system_sound__rosidl_typesupport_introspection_c.h"
#include "thymio_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "thymio_msgs/msg/detail/system_sound__functions.h"
#include "thymio_msgs/msg/detail/system_sound__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SystemSound__rosidl_typesupport_introspection_c__SystemSound_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  thymio_msgs__msg__SystemSound__init(message_memory);
}

void SystemSound__rosidl_typesupport_introspection_c__SystemSound_fini_function(void * message_memory)
{
  thymio_msgs__msg__SystemSound__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SystemSound__rosidl_typesupport_introspection_c__SystemSound_message_member_array[1] = {
  {
    "sound",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs__msg__SystemSound, sound),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SystemSound__rosidl_typesupport_introspection_c__SystemSound_message_members = {
  "thymio_msgs__msg",  // message namespace
  "SystemSound",  // message name
  1,  // number of fields
  sizeof(thymio_msgs__msg__SystemSound),
  SystemSound__rosidl_typesupport_introspection_c__SystemSound_message_member_array,  // message members
  SystemSound__rosidl_typesupport_introspection_c__SystemSound_init_function,  // function to initialize message memory (memory has to be allocated)
  SystemSound__rosidl_typesupport_introspection_c__SystemSound_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SystemSound__rosidl_typesupport_introspection_c__SystemSound_message_type_support_handle = {
  0,
  &SystemSound__rosidl_typesupport_introspection_c__SystemSound_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_thymio_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, thymio_msgs, msg, SystemSound)() {
  if (!SystemSound__rosidl_typesupport_introspection_c__SystemSound_message_type_support_handle.typesupport_identifier) {
    SystemSound__rosidl_typesupport_introspection_c__SystemSound_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SystemSound__rosidl_typesupport_introspection_c__SystemSound_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
