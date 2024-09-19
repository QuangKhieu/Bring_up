# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtcrobot_msg:msg/RobotStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'error'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotStatus(type):
    """Metaclass of message 'RobotStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MODE_NONE': 0,
        'MAPPING': 1,
        'NAVIGATION': 2,
        'MANUAL': 3,
        'IDLE': 0,
        'RUN': 1,
        'PAUSE': 2,
        'CHARGE': 3,
        'ERROR_NONE': 0,
        'BUMPER': 1,
        'EMG': 2,
        'MASTER_ON': 3,
        'MOTOR_LEFT': 4,
        'MOTOR_RIGHT': 5,
        'OUT_OF_MAP': 6,
        'DOCK_TIMEOUT': 7,
        'OBSTACLE': 8,
        'BATTERY_LOW': 9,
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
                'rtcrobot_msg.msg.RobotStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODE_NONE': cls.__constants['MODE_NONE'],
            'MAPPING': cls.__constants['MAPPING'],
            'NAVIGATION': cls.__constants['NAVIGATION'],
            'MANUAL': cls.__constants['MANUAL'],
            'IDLE': cls.__constants['IDLE'],
            'RUN': cls.__constants['RUN'],
            'PAUSE': cls.__constants['PAUSE'],
            'CHARGE': cls.__constants['CHARGE'],
            'ERROR_NONE': cls.__constants['ERROR_NONE'],
            'BUMPER': cls.__constants['BUMPER'],
            'EMG': cls.__constants['EMG'],
            'MASTER_ON': cls.__constants['MASTER_ON'],
            'MOTOR_LEFT': cls.__constants['MOTOR_LEFT'],
            'MOTOR_RIGHT': cls.__constants['MOTOR_RIGHT'],
            'OUT_OF_MAP': cls.__constants['OUT_OF_MAP'],
            'DOCK_TIMEOUT': cls.__constants['DOCK_TIMEOUT'],
            'OBSTACLE': cls.__constants['OBSTACLE'],
            'BATTERY_LOW': cls.__constants['BATTERY_LOW'],
        }

    @property
    def MODE_NONE(self):
        """Message constant 'MODE_NONE'."""
        return Metaclass_RobotStatus.__constants['MODE_NONE']

    @property
    def MAPPING(self):
        """Message constant 'MAPPING'."""
        return Metaclass_RobotStatus.__constants['MAPPING']

    @property
    def NAVIGATION(self):
        """Message constant 'NAVIGATION'."""
        return Metaclass_RobotStatus.__constants['NAVIGATION']

    @property
    def MANUAL(self):
        """Message constant 'MANUAL'."""
        return Metaclass_RobotStatus.__constants['MANUAL']

    @property
    def IDLE(self):
        """Message constant 'IDLE'."""
        return Metaclass_RobotStatus.__constants['IDLE']

    @property
    def RUN(self):
        """Message constant 'RUN'."""
        return Metaclass_RobotStatus.__constants['RUN']

    @property
    def PAUSE(self):
        """Message constant 'PAUSE'."""
        return Metaclass_RobotStatus.__constants['PAUSE']

    @property
    def CHARGE(self):
        """Message constant 'CHARGE'."""
        return Metaclass_RobotStatus.__constants['CHARGE']

    @property
    def ERROR_NONE(self):
        """Message constant 'ERROR_NONE'."""
        return Metaclass_RobotStatus.__constants['ERROR_NONE']

    @property
    def BUMPER(self):
        """Message constant 'BUMPER'."""
        return Metaclass_RobotStatus.__constants['BUMPER']

    @property
    def EMG(self):
        """Message constant 'EMG'."""
        return Metaclass_RobotStatus.__constants['EMG']

    @property
    def MASTER_ON(self):
        """Message constant 'MASTER_ON'."""
        return Metaclass_RobotStatus.__constants['MASTER_ON']

    @property
    def MOTOR_LEFT(self):
        """Message constant 'MOTOR_LEFT'."""
        return Metaclass_RobotStatus.__constants['MOTOR_LEFT']

    @property
    def MOTOR_RIGHT(self):
        """Message constant 'MOTOR_RIGHT'."""
        return Metaclass_RobotStatus.__constants['MOTOR_RIGHT']

    @property
    def OUT_OF_MAP(self):
        """Message constant 'OUT_OF_MAP'."""
        return Metaclass_RobotStatus.__constants['OUT_OF_MAP']

    @property
    def DOCK_TIMEOUT(self):
        """Message constant 'DOCK_TIMEOUT'."""
        return Metaclass_RobotStatus.__constants['DOCK_TIMEOUT']

    @property
    def OBSTACLE(self):
        """Message constant 'OBSTACLE'."""
        return Metaclass_RobotStatus.__constants['OBSTACLE']

    @property
    def BATTERY_LOW(self):
        """Message constant 'BATTERY_LOW'."""
        return Metaclass_RobotStatus.__constants['BATTERY_LOW']


class RobotStatus(metaclass=Metaclass_RobotStatus):
    """
    Message class 'RobotStatus'.

    Constants:
      MODE_NONE
      MAPPING
      NAVIGATION
      MANUAL
      IDLE
      RUN
      PAUSE
      CHARGE
      ERROR_NONE
      BUMPER
      EMG
      MASTER_ON
      MOTOR_LEFT
      MOTOR_RIGHT
      OUT_OF_MAP
      DOCK_TIMEOUT
      OBSTACLE
      BATTERY_LOW
    """

    __slots__ = [
        '_header',
        '_mode',
        '_sub_mode',
        '_error',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'mode': 'uint8',
        'sub_mode': 'uint8',
        'error': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.mode = kwargs.get('mode', int())
        self.sub_mode = kwargs.get('sub_mode', int())
        self.error = array.array('B', kwargs.get('error', []))

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
        if self.header != other.header:
            return False
        if self.mode != other.mode:
            return False
        if self.sub_mode != other.sub_mode:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def sub_mode(self):
        """Message field 'sub_mode'."""
        return self._sub_mode

    @sub_mode.setter
    def sub_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sub_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sub_mode' field must be an unsigned integer in [0, 255]"
        self._sub_mode = value

    @builtins.property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'error' array.array() must have the type code of 'B'"
            self._error = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'error' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._error = array.array('B', value)
