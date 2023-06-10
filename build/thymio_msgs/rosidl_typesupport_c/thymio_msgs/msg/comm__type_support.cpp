// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from thymio_msgs:msg/Comm.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "thymio_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "thymio_msgs/msg/detail/comm__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace thymio_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Comm_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Comm_type_support_ids_t;

static const _Comm_type_support_ids_t _Comm_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Comm_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Comm_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Comm_type_support_symbol_names_t _Comm_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, thymio_msgs, msg, Comm)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, thymio_msgs, msg, Comm)),
  }
};

typedef struct _Comm_type_support_data_t
{
  void * data[2];
} _Comm_type_support_data_t;

static _Comm_type_support_data_t _Comm_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Comm_message_typesupport_map = {
  2,
  "thymio_msgs",
  &_Comm_message_typesupport_ids.typesupport_identifier[0],
  &_Comm_message_typesupport_symbol_names.symbol_name[0],
  &_Comm_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Comm_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Comm_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace thymio_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_thymio_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, thymio_msgs, msg, Comm)() {
  return &::thymio_msgs::msg::rosidl_typesupport_c::Comm_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
