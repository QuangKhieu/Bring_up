// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rtcrobot_msg:msg/PlcRead.idl
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
#include "rtcrobot_msg/msg/detail/plc_read__struct.h"
#include "rtcrobot_msg/msg/detail/plc_read__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rtcrobot_msg__msg__plc_read__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("rtcrobot_msg.msg._plc_read.PlcRead", full_classname_dest, 34) == 0);
  }
  rtcrobot_msg__msg__PlcRead * ros_message = _ros_message;
  {  // bumper
    PyObject * field = PyObject_GetAttrString(_pymsg, "bumper");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bumper = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sensor_check_product
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_check_product");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor_check_product = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // emo_forward
    PyObject * field = PyObject_GetAttrString(_pymsg, "emo_forward");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emo_forward = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // emo_backward
    PyObject * field = PyObject_GetAttrString(_pymsg, "emo_backward");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emo_backward = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // auto_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->auto_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // manual_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "manual_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->manual_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motor_left_out1
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_left_out1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_left_out1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motor_left_out2
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_left_out2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_left_out2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motor_right_out1
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_right_out1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_right_out1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motor_right_out2
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_right_out2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_right_out2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // start_btn
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_btn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->start_btn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stop_btn
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_btn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stop_btn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reset_btn
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_btn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reset_btn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // he_forward_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "he_forward_out");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->he_forward_out = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // he_forward_er
    PyObject * field = PyObject_GetAttrString(_pymsg, "he_forward_er");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->he_forward_er = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // he_backward_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "he_backward_out");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->he_backward_out = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // he_backward_er
    PyObject * field = PyObject_GetAttrString(_pymsg, "he_backward_er");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->he_backward_er = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rtcrobot_msg__msg__plc_read__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlcRead */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtcrobot_msg.msg._plc_read");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlcRead");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rtcrobot_msg__msg__PlcRead * ros_message = (rtcrobot_msg__msg__PlcRead *)raw_ros_message;
  {  // bumper
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bumper);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bumper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_check_product
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensor_check_product);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_check_product", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emo_forward
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->emo_forward);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emo_forward", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emo_backward
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->emo_backward);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emo_backward", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->auto_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // manual_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->manual_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "manual_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_left_out1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_left_out1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_left_out1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_left_out2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_left_out2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_left_out2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_right_out1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_right_out1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_right_out1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_right_out2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_right_out2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_right_out2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_btn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->start_btn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_btn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_btn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stop_btn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_btn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_btn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reset_btn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_btn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // he_forward_out
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->he_forward_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "he_forward_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // he_forward_er
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->he_forward_er);
    {
      int rc = PyObject_SetAttrString(_pymessage, "he_forward_er", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // he_backward_out
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->he_backward_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "he_backward_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // he_backward_er
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->he_backward_er);
    {
      int rc = PyObject_SetAttrString(_pymessage, "he_backward_er", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
