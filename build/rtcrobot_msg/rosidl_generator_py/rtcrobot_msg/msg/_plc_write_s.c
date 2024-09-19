// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rtcrobot_msg:msg/PlcWrite.idl
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
#include "rtcrobot_msg/msg/detail/plc_write__struct.h"
#include "rtcrobot_msg/msg/detail/plc_write__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rtcrobot_msg__msg__plc_write__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("rtcrobot_msg.msg._plc_write.PlcWrite", full_classname_dest, 36) == 0);
  }
  rtcrobot_msg__msg__PlcWrite * ros_message = _ros_message;
  {  // motor_left_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_left_stop");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_left_stop = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motor_left_reset
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_left_reset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_left_reset = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motor_right_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_right_stop");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_right_stop = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motor_right_reset
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_right_reset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_right_reset = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // front_left_lamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_left_lamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_left_lamp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // front_right_lamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_right_lamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_right_lamp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // back_left_lamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "back_left_lamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->back_left_lamp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // back_right_lamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "back_right_lamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->back_right_lamp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_lamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_lamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_lamp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // yellow_lamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "yellow_lamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->yellow_lamp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // green_lamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "green_lamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->green_lamp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // charger
    PyObject * field = PyObject_GetAttrString(_pymsg, "charger");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->charger = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // plc_safety
    PyObject * field = PyObject_GetAttrString(_pymsg, "plc_safety");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plc_safety = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brake_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_on");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brake_on = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tim_forward_in1
    PyObject * field = PyObject_GetAttrString(_pymsg, "tim_forward_in1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tim_forward_in1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tim_forward_in2
    PyObject * field = PyObject_GetAttrString(_pymsg, "tim_forward_in2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tim_forward_in2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tim_forward_in3
    PyObject * field = PyObject_GetAttrString(_pymsg, "tim_forward_in3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tim_forward_in3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tim_forward_in4
    PyObject * field = PyObject_GetAttrString(_pymsg, "tim_forward_in4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tim_forward_in4 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tim_backward_in1
    PyObject * field = PyObject_GetAttrString(_pymsg, "tim_backward_in1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tim_backward_in1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tim_backward_in2
    PyObject * field = PyObject_GetAttrString(_pymsg, "tim_backward_in2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tim_backward_in2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tim_backward_in3
    PyObject * field = PyObject_GetAttrString(_pymsg, "tim_backward_in3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tim_backward_in3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tim_backward_in4
    PyObject * field = PyObject_GetAttrString(_pymsg, "tim_backward_in4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tim_backward_in4 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rtcrobot_msg__msg__plc_write__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlcWrite */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtcrobot_msg.msg._plc_write");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlcWrite");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rtcrobot_msg__msg__PlcWrite * ros_message = (rtcrobot_msg__msg__PlcWrite *)raw_ros_message;
  {  // motor_left_stop
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_left_stop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_left_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_left_reset
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_left_reset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_left_reset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_right_stop
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_right_stop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_right_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_right_reset
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_right_reset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_right_reset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_left_lamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->front_left_lamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_left_lamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_right_lamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->front_right_lamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_right_lamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // back_left_lamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->back_left_lamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "back_left_lamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // back_right_lamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->back_right_lamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "back_right_lamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_lamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_lamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_lamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yellow_lamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->yellow_lamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yellow_lamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // green_lamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->green_lamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "green_lamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charger
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->charger);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charger", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plc_safety
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->plc_safety);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plc_safety", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_on
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brake_on);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tim_forward_in1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tim_forward_in1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tim_forward_in1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tim_forward_in2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tim_forward_in2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tim_forward_in2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tim_forward_in3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tim_forward_in3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tim_forward_in3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tim_forward_in4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tim_forward_in4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tim_forward_in4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tim_backward_in1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tim_backward_in1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tim_backward_in1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tim_backward_in2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tim_backward_in2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tim_backward_in2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tim_backward_in3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tim_backward_in3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tim_backward_in3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tim_backward_in4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tim_backward_in4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tim_backward_in4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
