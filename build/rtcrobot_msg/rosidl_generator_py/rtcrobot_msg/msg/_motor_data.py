# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtcrobot_msg:msg/MotorData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorData(type):
    """Metaclass of message 'MotorData'."""

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
                'rtcrobot_msg.msg.MotorData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorData(metaclass=Metaclass_MotorData):
    """Message class 'MotorData'."""

    __slots__ = [
        '_connect',
        '_speed',
        '_enc',
        '_err',
        '_status',
    ]

    _fields_and_field_types = {
        'connect': 'boolean',
        'speed': 'double',
        'enc': 'double',
        'err': 'int64',
        'status': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.connect = kwargs.get('connect', bool())
        self.speed = kwargs.get('speed', float())
        self.enc = kwargs.get('enc', float())
        self.err = kwargs.get('err', int())
        self.status = kwargs.get('status', int())

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
        if self.connect != other.connect:
            return False
        if self.speed != other.speed:
            return False
        if self.enc != other.enc:
            return False
        if self.err != other.err:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def connect(self):
        """Message field 'connect'."""
        return self._connect

    @connect.setter
    def connect(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'connect' field must be of type 'bool'"
        self._connect = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed = value

    @builtins.property
    def enc(self):
        """Message field 'enc'."""
        return self._enc

    @enc.setter
    def enc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'enc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'enc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._enc = value

    @builtins.property
    def err(self):
        """Message field 'err'."""
        return self._err

    @err.setter
    def err(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'err' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'err' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._err = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'status' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._status = value
