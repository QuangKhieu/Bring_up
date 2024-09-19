# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtcrobot_msg:msg/PlcRead.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlcRead(type):
    """Metaclass of message 'PlcRead'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rtcrobot_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rtcrobot_msg.msg.PlcRead')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__plc_read
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__plc_read
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__plc_read
            cls._TYPE_SUPPORT = module.type_support_msg__msg__plc_read
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__plc_read

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlcRead(metaclass=Metaclass_PlcRead):
    """Message class 'PlcRead'."""

    __slots__ = [
        '_bumper',
        '_sensor_check_product',
        '_emo_forward',
        '_emo_backward',
        '_auto_switch',
        '_manual_switch',
        '_motor_left_out1',
        '_motor_left_out2',
        '_motor_right_out1',
        '_motor_right_out2',
        '_start_btn',
        '_stop_btn',
        '_reset_btn',
        '_he_forward_out',
        '_he_forward_er',
        '_he_backward_out',
        '_he_backward_er',
    ]

    _fields_and_field_types = {
        'bumper': 'uint8',
        'sensor_check_product': 'uint8',
        'emo_forward': 'uint8',
        'emo_backward': 'uint8',
        'auto_switch': 'uint8',
        'manual_switch': 'uint8',
        'motor_left_out1': 'uint8',
        'motor_left_out2': 'uint8',
        'motor_right_out1': 'uint8',
        'motor_right_out2': 'uint8',
        'start_btn': 'uint8',
        'stop_btn': 'uint8',
        'reset_btn': 'uint8',
        'he_forward_out': 'uint8',
        'he_forward_er': 'uint8',
        'he_backward_out': 'uint8',
        'he_backward_er': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bumper = kwargs.get('bumper', int())
        self.sensor_check_product = kwargs.get('sensor_check_product', int())
        self.emo_forward = kwargs.get('emo_forward', int())
        self.emo_backward = kwargs.get('emo_backward', int())
        self.auto_switch = kwargs.get('auto_switch', int())
        self.manual_switch = kwargs.get('manual_switch', int())
        self.motor_left_out1 = kwargs.get('motor_left_out1', int())
        self.motor_left_out2 = kwargs.get('motor_left_out2', int())
        self.motor_right_out1 = kwargs.get('motor_right_out1', int())
        self.motor_right_out2 = kwargs.get('motor_right_out2', int())
        self.start_btn = kwargs.get('start_btn', int())
        self.stop_btn = kwargs.get('stop_btn', int())
        self.reset_btn = kwargs.get('reset_btn', int())
        self.he_forward_out = kwargs.get('he_forward_out', int())
        self.he_forward_er = kwargs.get('he_forward_er', int())
        self.he_backward_out = kwargs.get('he_backward_out', int())
        self.he_backward_er = kwargs.get('he_backward_er', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.bumper != other.bumper:
            return False
        if self.sensor_check_product != other.sensor_check_product:
            return False
        if self.emo_forward != other.emo_forward:
            return False
        if self.emo_backward != other.emo_backward:
            return False
        if self.auto_switch != other.auto_switch:
            return False
        if self.manual_switch != other.manual_switch:
            return False
        if self.motor_left_out1 != other.motor_left_out1:
            return False
        if self.motor_left_out2 != other.motor_left_out2:
            return False
        if self.motor_right_out1 != other.motor_right_out1:
            return False
        if self.motor_right_out2 != other.motor_right_out2:
            return False
        if self.start_btn != other.start_btn:
            return False
        if self.stop_btn != other.stop_btn:
            return False
        if self.reset_btn != other.reset_btn:
            return False
        if self.he_forward_out != other.he_forward_out:
            return False
        if self.he_forward_er != other.he_forward_er:
            return False
        if self.he_backward_out != other.he_backward_out:
            return False
        if self.he_backward_er != other.he_backward_er:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bumper(self):
        """Message field 'bumper'."""
        return self._bumper

    @bumper.setter
    def bumper(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bumper' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bumper' field must be an unsigned integer in [0, 255]"
        self._bumper = value

    @builtins.property
    def sensor_check_product(self):
        """Message field 'sensor_check_product'."""
        return self._sensor_check_product

    @sensor_check_product.setter
    def sensor_check_product(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_check_product' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sensor_check_product' field must be an unsigned integer in [0, 255]"
        self._sensor_check_product = value

    @builtins.property
    def emo_forward(self):
        """Message field 'emo_forward'."""
        return self._emo_forward

    @emo_forward.setter
    def emo_forward(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emo_forward' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'emo_forward' field must be an unsigned integer in [0, 255]"
        self._emo_forward = value

    @builtins.property
    def emo_backward(self):
        """Message field 'emo_backward'."""
        return self._emo_backward

    @emo_backward.setter
    def emo_backward(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emo_backward' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'emo_backward' field must be an unsigned integer in [0, 255]"
        self._emo_backward = value

    @builtins.property
    def auto_switch(self):
        """Message field 'auto_switch'."""
        return self._auto_switch

    @auto_switch.setter
    def auto_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'auto_switch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'auto_switch' field must be an unsigned integer in [0, 255]"
        self._auto_switch = value

    @builtins.property
    def manual_switch(self):
        """Message field 'manual_switch'."""
        return self._manual_switch

    @manual_switch.setter
    def manual_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'manual_switch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'manual_switch' field must be an unsigned integer in [0, 255]"
        self._manual_switch = value

    @builtins.property
    def motor_left_out1(self):
        """Message field 'motor_left_out1'."""
        return self._motor_left_out1

    @motor_left_out1.setter
    def motor_left_out1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_left_out1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_left_out1' field must be an unsigned integer in [0, 255]"
        self._motor_left_out1 = value

    @builtins.property
    def motor_left_out2(self):
        """Message field 'motor_left_out2'."""
        return self._motor_left_out2

    @motor_left_out2.setter
    def motor_left_out2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_left_out2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_left_out2' field must be an unsigned integer in [0, 255]"
        self._motor_left_out2 = value

    @builtins.property
    def motor_right_out1(self):
        """Message field 'motor_right_out1'."""
        return self._motor_right_out1

    @motor_right_out1.setter
    def motor_right_out1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_right_out1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_right_out1' field must be an unsigned integer in [0, 255]"
        self._motor_right_out1 = value

    @builtins.property
    def motor_right_out2(self):
        """Message field 'motor_right_out2'."""
        return self._motor_right_out2

    @motor_right_out2.setter
    def motor_right_out2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_right_out2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_right_out2' field must be an unsigned integer in [0, 255]"
        self._motor_right_out2 = value

    @builtins.property
    def start_btn(self):
        """Message field 'start_btn'."""
        return self._start_btn

    @start_btn.setter
    def start_btn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_btn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'start_btn' field must be an unsigned integer in [0, 255]"
        self._start_btn = value

    @builtins.property
    def stop_btn(self):
        """Message field 'stop_btn'."""
        return self._stop_btn

    @stop_btn.setter
    def stop_btn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stop_btn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stop_btn' field must be an unsigned integer in [0, 255]"
        self._stop_btn = value

    @builtins.property
    def reset_btn(self):
        """Message field 'reset_btn'."""
        return self._reset_btn

    @reset_btn.setter
    def reset_btn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reset_btn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reset_btn' field must be an unsigned integer in [0, 255]"
        self._reset_btn = value

    @builtins.property
    def he_forward_out(self):
        """Message field 'he_forward_out'."""
        return self._he_forward_out

    @he_forward_out.setter
    def he_forward_out(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'he_forward_out' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'he_forward_out' field must be an unsigned integer in [0, 255]"
        self._he_forward_out = value

    @builtins.property
    def he_forward_er(self):
        """Message field 'he_forward_er'."""
        return self._he_forward_er

    @he_forward_er.setter
    def he_forward_er(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'he_forward_er' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'he_forward_er' field must be an unsigned integer in [0, 255]"
        self._he_forward_er = value

    @builtins.property
    def he_backward_out(self):
        """Message field 'he_backward_out'."""
        return self._he_backward_out

    @he_backward_out.setter
    def he_backward_out(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'he_backward_out' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'he_backward_out' field must be an unsigned integer in [0, 255]"
        self._he_backward_out = value

    @builtins.property
    def he_backward_er(self):
        """Message field 'he_backward_er'."""
        return self._he_backward_er

    @he_backward_er.setter
    def he_backward_er(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'he_backward_er' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'he_backward_er' field must be an unsigned integer in [0, 255]"
        self._he_backward_er = value
