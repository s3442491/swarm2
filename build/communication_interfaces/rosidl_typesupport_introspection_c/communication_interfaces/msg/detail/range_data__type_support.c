// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from communication_interfaces:msg/RangeData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "communication_interfaces/msg/detail/range_data__rosidl_typesupport_introspection_c.h"
#include "communication_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "communication_interfaces/msg/detail/range_data__functions.h"
#include "communication_interfaces/msg/detail/range_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ranges`
// Member `angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RangeData__rosidl_typesupport_introspection_c__RangeData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication_interfaces__msg__RangeData__init(message_memory);
}

void RangeData__rosidl_typesupport_introspection_c__RangeData_fini_function(void * message_memory)
{
  communication_interfaces__msg__RangeData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RangeData__rosidl_typesupport_introspection_c__RangeData_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces__msg__RangeData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ranges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces__msg__RangeData, ranges),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces__msg__RangeData, angles),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RangeData__rosidl_typesupport_introspection_c__RangeData_message_members = {
  "communication_interfaces__msg",  // message namespace
  "RangeData",  // message name
  3,  // number of fields
  sizeof(communication_interfaces__msg__RangeData),
  RangeData__rosidl_typesupport_introspection_c__RangeData_message_member_array,  // message members
  RangeData__rosidl_typesupport_introspection_c__RangeData_init_function,  // function to initialize message memory (memory has to be allocated)
  RangeData__rosidl_typesupport_introspection_c__RangeData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RangeData__rosidl_typesupport_introspection_c__RangeData_message_type_support_handle = {
  0,
  &RangeData__rosidl_typesupport_introspection_c__RangeData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces, msg, RangeData)() {
  RangeData__rosidl_typesupport_introspection_c__RangeData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!RangeData__rosidl_typesupport_introspection_c__RangeData_message_type_support_handle.typesupport_identifier) {
    RangeData__rosidl_typesupport_introspection_c__RangeData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RangeData__rosidl_typesupport_introspection_c__RangeData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
