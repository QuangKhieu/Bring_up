// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rtcrobot_msg:msg/MotorData.idl
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
#include "rtcrobot_msg/msg/detail/motor_data__struct.h"
#include "rtcrobot_msg/msg/detail/motor_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rtcrobot_msg__msg__motor_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("rtcrobot_msg.msg._motor_data.MotorData", full_classname_dest, 38) == 0);
  }
  rtcrobot_msg__msg__MotorData * ros_message = _ros_message;
  {  // connect
    PyObject * field = PyObject_GetAttrString(_pymsg, "connect");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->connect = (Py_True == field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // enc
    PyObject * field = PyObject_GetAttrString(_pymsg, "enc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->enc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err
    PyObject * field = PyObject_GetAttrString(_pymsg, "err");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->err = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rtcrobot_msg__msg__motor_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtcrobot_msg.msg._motor_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rtcrobot_msg__msg__MotorData * ros_message = (rtcrobot_msg__msg__MotorData *)raw_ros_message;
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
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->enc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->err);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
