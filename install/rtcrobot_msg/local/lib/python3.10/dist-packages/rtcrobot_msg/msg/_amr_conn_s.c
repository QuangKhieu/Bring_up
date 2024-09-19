// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rtcrobot_msg:msg/AmrConn.idl
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
#include "rtcrobot_msg/msg/detail/amr_conn__struct.h"
#include "rtcrobot_msg/msg/detail/amr_conn__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rtcrobot_msg__msg__amr_conn__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("rtcrobot_msg.msg._amr_conn.AmrConn", full_classname_dest, 34) == 0);
  }
  rtcrobot_msg__msg__AmrConn * ros_message = _ros_message;
  {  // ip
    PyObject * field = PyObject_GetAttrString(_pymsg, "ip");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->ip, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // connect
    PyObject * field = PyObject_GetAttrString(_pymsg, "connect");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->connect = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rtcrobot_msg__msg__amr_conn__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AmrConn */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtcrobot_msg.msg._amr_conn");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AmrConn");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rtcrobot_msg__msg__AmrConn * ros_message = (rtcrobot_msg__msg__AmrConn *)raw_ros_message;
  {  // ip
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->ip.data,
      strlen(ros_message->ip.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connect
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->connect ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
