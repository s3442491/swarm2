// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from thymio_msgs:msg/SystemSound.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "thymio_msgs/msg/detail/system_sound__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace thymio_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SystemSound_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) thymio_msgs::msg::SystemSound(_init);
}

void SystemSound_fini_function(void * message_memory)
{
  auto typed_message = static_cast<thymio_msgs::msg::SystemSound *>(message_memory);
  typed_message->~SystemSound();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SystemSound_message_member_array[1] = {
  {
    "sound",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs::msg::SystemSound, sound),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SystemSound_message_members = {
  "thymio_msgs::msg",  // message namespace
  "SystemSound",  // message name
  1,  // number of fields
  sizeof(thymio_msgs::msg::SystemSound),
  SystemSound_message_member_array,  // message members
  SystemSound_init_function,  // function to initialize message memory (memory has to be allocated)
  SystemSound_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SystemSound_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SystemSound_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace thymio_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<thymio_msgs::msg::SystemSound>()
{
  return &::thymio_msgs::msg::rosidl_typesupport_introspection_cpp::SystemSound_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, thymio_msgs, msg, SystemSound)() {
  return &::thymio_msgs::msg::rosidl_typesupport_introspection_cpp::SystemSound_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
