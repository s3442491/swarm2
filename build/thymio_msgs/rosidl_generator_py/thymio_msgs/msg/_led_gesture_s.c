// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from thymio_msgs:msg/LedGesture.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "thymio_msgs/msg/detail/led_gesture__struct.h"
#include "thymio_msgs/msg/detail/led_gesture__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool thymio_msgs__msg__led_gesture__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("thymio_msgs.msg._led_gesture.LedGesture", full_classname_dest, 39) == 0);
  }
  thymio_msgs__msg__LedGesture * ros_message = _ros_message;
  {  // gesture
    PyObject * field = PyObject_GetAttrString(_pymsg, "gesture");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gesture = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // wave
    PyObject * field = PyObject_GetAttrString(_pymsg, "wave");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wave = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // leds
    PyObject * field = PyObject_GetAttrString(_pymsg, "leds");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->leds = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // period
    PyObject * field = PyObject_GetAttrString(_pymsg, "period");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->period = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->length = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mirror
    PyObject * field = PyObject_GetAttrString(_pymsg, "mirror");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mirror = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mask
    PyObject * field = PyObject_GetAttrString(_pymsg, "mask");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'mask'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&(ros_message->mask), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create boolean__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    bool * dest = ros_message->mask.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyBool_Check(item));
      bool tmp = (item == Py_True);
      memcpy(&dest[i], &tmp, sizeof(bool));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * thymio_msgs__msg__led_gesture__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LedGesture */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("thymio_msgs.msg._led_gesture");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LedGesture");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  thymio_msgs__msg__LedGesture * ros_message = (thymio_msgs__msg__LedGesture *)raw_ros_message;
  {  // gesture
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gesture);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gesture", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wave
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wave);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wave", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leds
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->leds);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // period
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->period);
    {
      int rc = PyObject_SetAttrString(_pymessage, "period", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mirror
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mirror);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mirror", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mask
    PyObject * field = NULL;
    size_t size = ros_message->mask.size;
    bool * src = ros_message->mask.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "mask", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
