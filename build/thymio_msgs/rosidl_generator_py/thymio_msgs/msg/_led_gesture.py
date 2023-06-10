# generated from rosidl_generator_py/resource/_idl.py.em
# with input from thymio_msgs:msg/LedGesture.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LedGesture(type):
    """Metaclass of message 'LedGesture'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OFF': 0,
        'WAVE': 1,
        'RECT': 0,
        'HARMONIC': 1,
        'CIRCLE': 0,
        'PROXIMITY': 1,
        'BUTTONS': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('thymio_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'thymio_msgs.msg.LedGesture')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__led_gesture
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__led_gesture
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__led_gesture
            cls._TYPE_SUPPORT = module.type_support_msg__msg__led_gesture
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__led_gesture

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OFF': cls.__constants['OFF'],
            'WAVE': cls.__constants['WAVE'],
            'RECT': cls.__constants['RECT'],
            'HARMONIC': cls.__constants['HARMONIC'],
            'CIRCLE': cls.__constants['CIRCLE'],
            'PROXIMITY': cls.__constants['PROXIMITY'],
            'BUTTONS': cls.__constants['BUTTONS'],
        }

    @property
    def OFF(self):
        """Message constant 'OFF'."""
        return Metaclass_LedGesture.__constants['OFF']

    @property
    def WAVE(self):
        """Message constant 'WAVE'."""
        return Metaclass_LedGesture.__constants['WAVE']

    @property
    def RECT(self):
        """Message constant 'RECT'."""
        return Metaclass_LedGesture.__constants['RECT']

    @property
    def HARMONIC(self):
        """Message constant 'HARMONIC'."""
        return Metaclass_LedGesture.__constants['HARMONIC']

    @property
    def CIRCLE(self):
        """Message constant 'CIRCLE'."""
        return Metaclass_LedGesture.__constants['CIRCLE']

    @property
    def PROXIMITY(self):
        """Message constant 'PROXIMITY'."""
        return Metaclass_LedGesture.__constants['PROXIMITY']

    @property
    def BUTTONS(self):
        """Message constant 'BUTTONS'."""
        return Metaclass_LedGesture.__constants['BUTTONS']


class LedGesture(metaclass=Metaclass_LedGesture):
    """
    Message class 'LedGesture'.

    Constants:
      OFF
      WAVE
      RECT
      HARMONIC
      CIRCLE
      PROXIMITY
      BUTTONS
    """

    __slots__ = [
        '_gesture',
        '_wave',
        '_leds',
        '_period',
        '_length',
        '_mirror',
        '_mask',
    ]

    _fields_and_field_types = {
        'gesture': 'uint8',
        'wave': 'uint8',
        'leds': 'uint8',
        'period': 'float',
        'length': 'uint16',
        'mirror': 'uint8',
        'mask': 'sequence<boolean>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.gesture = kwargs.get('gesture', int())
        self.wave = kwargs.get('wave', int())
        self.leds = kwargs.get('leds', int())
        self.period = kwargs.get('period', float())
        self.length = kwargs.get('length', int())
        self.mirror = kwargs.get('mirror', int())
        self.mask = kwargs.get('mask', [])

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
        if self.gesture != other.gesture:
            return False
        if self.wave != other.wave:
            return False
        if self.leds != other.leds:
            return False
        if self.period != other.period:
            return False
        if self.length != other.length:
            return False
        if self.mirror != other.mirror:
            return False
        if self.mask != other.mask:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def gesture(self):
        """Message field 'gesture'."""
        return self._gesture

    @gesture.setter
    def gesture(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gesture' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gesture' field must be an unsigned integer in [0, 255]"
        self._gesture = value

    @property
    def wave(self):
        """Message field 'wave'."""
        return self._wave

    @wave.setter
    def wave(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wave' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'wave' field must be an unsigned integer in [0, 255]"
        self._wave = value

    @property
    def leds(self):
        """Message field 'leds'."""
        return self._leds

    @leds.setter
    def leds(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'leds' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'leds' field must be an unsigned integer in [0, 255]"
        self._leds = value

    @property
    def period(self):
        """Message field 'period'."""
        return self._period

    @period.setter
    def period(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'period' field must be of type 'float'"
        self._period = value

    @property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'length' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'length' field must be an unsigned integer in [0, 65535]"
        self._length = value

    @property
    def mirror(self):
        """Message field 'mirror'."""
        return self._mirror

    @mirror.setter
    def mirror(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mirror' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mirror' field must be an unsigned integer in [0, 255]"
        self._mirror = value

    @property
    def mask(self):
        """Message field 'mask'."""
        return self._mask

    @mask.setter
    def mask(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'mask' field must be a set or sequence and each value of type 'bool'"
        self._mask = value
