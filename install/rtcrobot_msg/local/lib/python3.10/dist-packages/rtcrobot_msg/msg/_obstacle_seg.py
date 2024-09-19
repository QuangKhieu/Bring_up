# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtcrobot_msg:msg/ObstacleSeg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObstacleSeg(type):
    """Metaclass of message 'ObstacleSeg'."""

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
                'rtcrobot_msg.msg.ObstacleSeg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacle_seg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacle_seg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacle_seg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacle_seg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacle_seg

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObstacleSeg(metaclass=Metaclass_ObstacleSeg):
    """Message class 'ObstacleSeg'."""

    __slots__ = [
        '_first_point',
        '_last_point',
    ]

    _fields_and_field_types = {
        'first_point': 'geometry_msgs/Point',
        'last_point': 'geometry_msgs/Point',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.first_point = kwargs.get('first_point', Point())
        from geometry_msgs.msg import Point
        self.last_point = kwargs.get('last_point', Point())

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
        if self.first_point != other.first_point:
            return False
        if self.last_point != other.last_point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def first_point(self):
        """Message field 'first_point'."""
        return self._first_point

    @first_point.setter
    def first_point(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'first_point' field must be a sub message of type 'Point'"
        self._first_point = value

    @builtins.property
    def last_point(self):
        """Message field 'last_point'."""
        return self._last_point

    @last_point.setter
    def last_point(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'last_point' field must be a sub message of type 'Point'"
        self._last_point = value
