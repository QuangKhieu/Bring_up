# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtcrobot_msg:msg/PlcWrite.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlcWrite(type):
    """Metaclass of message 'PlcWrite'."""

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
                'rtcrobot_msg.msg.PlcWrite')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__plc_write
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__plc_write
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__plc_write
            cls._TYPE_SUPPORT = module.type_support_msg__msg__plc_write
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__plc_write

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlcWrite(metaclass=Metaclass_PlcWrite):
    """Message class 'PlcWrite'."""

    __slots__ = [
        '_motor_left_stop',
        '_motor_left_reset',
        '_motor_right_stop',
        '_motor_right_reset',
        '_front_left_lamp',
        '_front_right_lamp',
        '_back_left_lamp',
        '_back_right_lamp',
        '_red_lamp',
        '_yellow_lamp',
        '_green_lamp',
        '_charger',
        '_plc_safety',
        '_brake_on',
        '_tim_forward_in1',
        '_tim_forward_in2',
        '_tim_forward_in3',
        '_tim_forward_in4',
        '_tim_backward_in1',
        '_tim_backward_in2',
        '_tim_backward_in3',
        '_tim_backward_in4',
    ]

    _fields_and_field_types = {
        'motor_left_stop': 'uint8',
        'motor_left_reset': 'uint8',
        'motor_right_stop': 'uint8',
        'motor_right_reset': 'uint8',
        'front_left_lamp': 'uint8',
        'front_right_lamp': 'uint8',
        'back_left_lamp': 'uint8',
        'back_right_lamp': 'uint8',
        'red_lamp': 'uint8',
        'yellow_lamp': 'uint8',
        'green_lamp': 'uint8',
        'charger': 'uint8',
        'plc_safety': 'uint8',
        'brake_on': 'uint8',
        'tim_forward_in1': 'uint8',
        'tim_forward_in2': 'uint8',
        'tim_forward_in3': 'uint8',
        'tim_forward_in4': 'uint8',
        'tim_backward_in1': 'uint8',
        'tim_backward_in2': 'uint8',
        'tim_backward_in3': 'uint8',
        'tim_backward_in4': 'uint8',
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
        self.motor_left_stop = kwargs.get('motor_left_stop', int())
        self.motor_left_reset = kwargs.get('motor_left_reset', int())
        self.motor_right_stop = kwargs.get('motor_right_stop', int())
        self.motor_right_reset = kwargs.get('motor_right_reset', int())
        self.front_left_lamp = kwargs.get('front_left_lamp', int())
        self.front_right_lamp = kwargs.get('front_right_lamp', int())
        self.back_left_lamp = kwargs.get('back_left_lamp', int())
        self.back_right_lamp = kwargs.get('back_right_lamp', int())
        self.red_lamp = kwargs.get('red_lamp', int())
        self.yellow_lamp = kwargs.get('yellow_lamp', int())
        self.green_lamp = kwargs.get('green_lamp', int())
        self.charger = kwargs.get('charger', int())
        self.plc_safety = kwargs.get('plc_safety', int())
        self.brake_on = kwargs.get('brake_on', int())
        self.tim_forward_in1 = kwargs.get('tim_forward_in1', int())
        self.tim_forward_in2 = kwargs.get('tim_forward_in2', int())
        self.tim_forward_in3 = kwargs.get('tim_forward_in3', int())
        self.tim_forward_in4 = kwargs.get('tim_forward_in4', int())
        self.tim_backward_in1 = kwargs.get('tim_backward_in1', int())
        self.tim_backward_in2 = kwargs.get('tim_backward_in2', int())
        self.tim_backward_in3 = kwargs.get('tim_backward_in3', int())
        self.tim_backward_in4 = kwargs.get('tim_backward_in4', int())

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
        if self.motor_left_stop != other.motor_left_stop:
            return False
        if self.motor_left_reset != other.motor_left_reset:
            return False
        if self.motor_right_stop != other.motor_right_stop:
            return False
        if self.motor_right_reset != other.motor_right_reset:
            return False
        if self.front_left_lamp != other.front_left_lamp:
            return False
        if self.front_right_lamp != other.front_right_lamp:
            return False
        if self.back_left_lamp != other.back_left_lamp:
            return False
        if self.back_right_lamp != other.back_right_lamp:
            return False
        if self.red_lamp != other.red_lamp:
            return False
        if self.yellow_lamp != other.yellow_lamp:
            return False
        if self.green_lamp != other.green_lamp:
            return False
        if self.charger != other.charger:
            return False
        if self.plc_safety != other.plc_safety:
            return False
        if self.brake_on != other.brake_on:
            return False
        if self.tim_forward_in1 != other.tim_forward_in1:
            return False
        if self.tim_forward_in2 != other.tim_forward_in2:
            return False
        if self.tim_forward_in3 != other.tim_forward_in3:
            return False
        if self.tim_forward_in4 != other.tim_forward_in4:
            return False
        if self.tim_backward_in1 != other.tim_backward_in1:
            return False
        if self.tim_backward_in2 != other.tim_backward_in2:
            return False
        if self.tim_backward_in3 != other.tim_backward_in3:
            return False
        if self.tim_backward_in4 != other.tim_backward_in4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motor_left_stop(self):
        """Message field 'motor_left_stop'."""
        return self._motor_left_stop

    @motor_left_stop.setter
    def motor_left_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_left_stop' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_left_stop' field must be an unsigned integer in [0, 255]"
        self._motor_left_stop = value

    @builtins.property
    def motor_left_reset(self):
        """Message field 'motor_left_reset'."""
        return self._motor_left_reset

    @motor_left_reset.setter
    def motor_left_reset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_left_reset' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_left_reset' field must be an unsigned integer in [0, 255]"
        self._motor_left_reset = value

    @builtins.property
    def motor_right_stop(self):
        """Message field 'motor_right_stop'."""
        return self._motor_right_stop

    @motor_right_stop.setter
    def motor_right_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_right_stop' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_right_stop' field must be an unsigned integer in [0, 255]"
        self._motor_right_stop = value

    @builtins.property
    def motor_right_reset(self):
        """Message field 'motor_right_reset'."""
        return self._motor_right_reset

    @motor_right_reset.setter
    def motor_right_reset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_right_reset' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_right_reset' field must be an unsigned integer in [0, 255]"
        self._motor_right_reset = value

    @builtins.property
    def front_left_lamp(self):
        """Message field 'front_left_lamp'."""
        return self._front_left_lamp

    @front_left_lamp.setter
    def front_left_lamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_left_lamp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'front_left_lamp' field must be an unsigned integer in [0, 255]"
        self._front_left_lamp = value

    @builtins.property
    def front_right_lamp(self):
        """Message field 'front_right_lamp'."""
        return self._front_right_lamp

    @front_right_lamp.setter
    def front_right_lamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_right_lamp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'front_right_lamp' field must be an unsigned integer in [0, 255]"
        self._front_right_lamp = value

    @builtins.property
    def back_left_lamp(self):
        """Message field 'back_left_lamp'."""
        return self._back_left_lamp

    @back_left_lamp.setter
    def back_left_lamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'back_left_lamp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'back_left_lamp' field must be an unsigned integer in [0, 255]"
        self._back_left_lamp = value

    @builtins.property
    def back_right_lamp(self):
        """Message field 'back_right_lamp'."""
        return self._back_right_lamp

    @back_right_lamp.setter
    def back_right_lamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'back_right_lamp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'back_right_lamp' field must be an unsigned integer in [0, 255]"
        self._back_right_lamp = value

    @builtins.property
    def red_lamp(self):
        """Message field 'red_lamp'."""
        return self._red_lamp

    @red_lamp.setter
    def red_lamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_lamp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'red_lamp' field must be an unsigned integer in [0, 255]"
        self._red_lamp = value

    @builtins.property
    def yellow_lamp(self):
        """Message field 'yellow_lamp'."""
        return self._yellow_lamp

    @yellow_lamp.setter
    def yellow_lamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yellow_lamp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'yellow_lamp' field must be an unsigned integer in [0, 255]"
        self._yellow_lamp = value

    @builtins.property
    def green_lamp(self):
        """Message field 'green_lamp'."""
        return self._green_lamp

    @green_lamp.setter
    def green_lamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'green_lamp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'green_lamp' field must be an unsigned integer in [0, 255]"
        self._green_lamp = value

    @builtins.property
    def charger(self):
        """Message field 'charger'."""
        return self._charger

    @charger.setter
    def charger(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'charger' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'charger' field must be an unsigned integer in [0, 255]"
        self._charger = value

    @builtins.property
    def plc_safety(self):
        """Message field 'plc_safety'."""
        return self._plc_safety

    @plc_safety.setter
    def plc_safety(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plc_safety' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'plc_safety' field must be an unsigned integer in [0, 255]"
        self._plc_safety = value

    @builtins.property
    def brake_on(self):
        """Message field 'brake_on'."""
        return self._brake_on

    @brake_on.setter
    def brake_on(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake_on' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brake_on' field must be an unsigned integer in [0, 255]"
        self._brake_on = value

    @builtins.property
    def tim_forward_in1(self):
        """Message field 'tim_forward_in1'."""
        return self._tim_forward_in1

    @tim_forward_in1.setter
    def tim_forward_in1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tim_forward_in1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tim_forward_in1' field must be an unsigned integer in [0, 255]"
        self._tim_forward_in1 = value

    @builtins.property
    def tim_forward_in2(self):
        """Message field 'tim_forward_in2'."""
        return self._tim_forward_in2

    @tim_forward_in2.setter
    def tim_forward_in2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tim_forward_in2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tim_forward_in2' field must be an unsigned integer in [0, 255]"
        self._tim_forward_in2 = value

    @builtins.property
    def tim_forward_in3(self):
        """Message field 'tim_forward_in3'."""
        return self._tim_forward_in3

    @tim_forward_in3.setter
    def tim_forward_in3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tim_forward_in3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tim_forward_in3' field must be an unsigned integer in [0, 255]"
        self._tim_forward_in3 = value

    @builtins.property
    def tim_forward_in4(self):
        """Message field 'tim_forward_in4'."""
        return self._tim_forward_in4

    @tim_forward_in4.setter
    def tim_forward_in4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tim_forward_in4' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tim_forward_in4' field must be an unsigned integer in [0, 255]"
        self._tim_forward_in4 = value

    @builtins.property
    def tim_backward_in1(self):
        """Message field 'tim_backward_in1'."""
        return self._tim_backward_in1

    @tim_backward_in1.setter
    def tim_backward_in1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tim_backward_in1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tim_backward_in1' field must be an unsigned integer in [0, 255]"
        self._tim_backward_in1 = value

    @builtins.property
    def tim_backward_in2(self):
        """Message field 'tim_backward_in2'."""
        return self._tim_backward_in2

    @tim_backward_in2.setter
    def tim_backward_in2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tim_backward_in2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tim_backward_in2' field must be an unsigned integer in [0, 255]"
        self._tim_backward_in2 = value

    @builtins.property
    def tim_backward_in3(self):
        """Message field 'tim_backward_in3'."""
        return self._tim_backward_in3

    @tim_backward_in3.setter
    def tim_backward_in3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tim_backward_in3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tim_backward_in3' field must be an unsigned integer in [0, 255]"
        self._tim_backward_in3 = value

    @builtins.property
    def tim_backward_in4(self):
        """Message field 'tim_backward_in4'."""
        return self._tim_backward_in4

    @tim_backward_in4.setter
    def tim_backward_in4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tim_backward_in4' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tim_backward_in4' field must be an unsigned integer in [0, 255]"
        self._tim_backward_in4 = value
