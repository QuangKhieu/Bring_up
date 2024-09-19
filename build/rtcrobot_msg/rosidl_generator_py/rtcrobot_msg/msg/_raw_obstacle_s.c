// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rtcrobot_msg:msg/RawObstacle.idl
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
#include "rtcrobot_msg/msg/detail/raw_obstacle__struct.h"
#include "rtcrobot_msg/msg/detail/raw_obstacle__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "rtcrobot_msg/msg/detail/obstacle_cir__functions.h"
#include "rtcrobot_msg/msg/detail/obstacle_seg__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool rtcrobot_msg__msg__obstacle_cir__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rtcrobot_msg__msg__obstacle_cir__convert_to_py(void * raw_ros_message);
bool rtcrobot_msg__msg__obstacle_seg__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rtcrobot_msg__msg__obstacle_seg__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rtcrobot_msg__msg__raw_obstacle__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("rtcrobot_msg.msg._raw_obstacle.RawObstacle", full_classname_dest, 42) == 0);
  }
  rtcrobot_msg__msg__RawObstacle * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // circles
    PyObject * field = PyObject_GetAttrString(_pymsg, "circles");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'circles'");
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
    if (!rtcrobot_msg__msg__ObstacleCir__Sequence__init(&(ros_message->circles), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rtcrobot_msg__msg__ObstacleCir__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rtcrobot_msg__msg__ObstacleCir * dest = ros_message->circles.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rtcrobot_msg__msg__obstacle_cir__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // segments
    PyObject * field = PyObject_GetAttrString(_pymsg, "segments");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'segments'");
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
    if (!rtcrobot_msg__msg__ObstacleSeg__Sequence__init(&(ros_message->segments), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rtcrobot_msg__msg__ObstacleSeg__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rtcrobot_msg__msg__ObstacleSeg * dest = ros_message->segments.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rtcrobot_msg__msg__obstacle_seg__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rtcrobot_msg__msg__raw_obstacle__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RawObstacle */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtcrobot_msg.msg._raw_obstacle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RawObstacle");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rtcrobot_msg__msg__RawObstacle * ros_message = (rtcrobot_msg__msg__RawObstacle *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circles
    PyObject * field = NULL;
    size_t size = ros_message->circles.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rtcrobot_msg__msg__ObstacleCir * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->circles.data[i]);
      PyObject * pyitem = rtcrobot_msg__msg__obstacle_cir__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "circles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // segments
    PyObject * field = NULL;
    size_t size = ros_message->segments.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rtcrobot_msg__msg__ObstacleSeg * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->segments.data[i]);
      PyObject * pyitem = rtcrobot_msg__msg__obstacle_seg__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "segments", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
