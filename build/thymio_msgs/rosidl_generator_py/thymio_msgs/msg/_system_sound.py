# generated from rosidl_generator_py/resource/_idl.py.em
# with input from thymio_msgs:msg/SystemSound.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SystemSound(type):
    """Metaclass of message 'SystemSound'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STOP': -1,
        'STARTUP': 0,
        'SHUTDOWN': 1,
        'ARROW_BUTTON': 2,
        'CENTRAL_BUTTON': 3,
        'FREE_FALL': 4,
        'COLLISION': 5,
        'TARGET_OK': 6,
        'TARGET_DETECT': 7,
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
                'thymio_msgs.msg.SystemSound')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__system_sound
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__system_sound
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__system_sound
            cls._TYPE_SUPPORT = module.type_support_msg__msg__system_sound
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__system_sound

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STOP': cls.__constants['STOP'],
            'STARTUP': cls.__constants['STARTUP'],
            'SHUTDOWN': cls.__constants['SHUTDOWN'],
            'ARROW_BUTTON': cls.__constants['ARROW_BUTTON'],
            'CENTRAL_BUTTON': cls.__constants['CENTRAL_BUTTON'],
            'FREE_FALL': cls.__constants['FREE_FALL'],
            'COLLISION': cls.__constants['COLLISION'],
            'TARGET_OK': cls.__constants['TARGET_OK'],
            'TARGET_DETECT': cls.__constants['TARGET_DETECT'],
        }

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_SystemSound.__constants['STOP']

    @property
    def STARTUP(self):
        """Message constant 'STARTUP'."""
        return Metaclass_SystemSound.__constants['STARTUP']

    @property
    def SHUTDOWN(self):
        """Message constant 'SHUTDOWN'."""
        return Metaclass_SystemSound.__constants['SHUTDOWN']

    @property
    def ARROW_BUTTON(self):
        """Message constant 'ARROW_BUTTON'."""
        return Metaclass_SystemSound.__constants['ARROW_BUTTON']

    @property
    def CENTRAL_BUTTON(self):
        """Message constant 'CENTRAL_BUTTON'."""
        return Metaclass_SystemSound.__constants['CENTRAL_BUTTON']

    @property
    def FREE_FALL(self):
        """Message constant 'FREE_FALL'."""
        return Metaclass_SystemSound.__constants['FREE_FALL']

    @property
    def COLLISION(self):
        """Message constant 'COLLISION'."""
        return Metaclass_SystemSound.__constants['COLLISION']

    @property
    def TARGET_OK(self):
        """Message constant 'TARGET_OK'."""
        return Metaclass_SystemSound.__constants['TARGET_OK']

    @property
    def TARGET_DETECT(self):
        """Message constant 'TARGET_DETECT'."""
        return Metaclass_SystemSound.__constants['TARGET_DETECT']


class SystemSound(metaclass=Metaclass_SystemSound):
    """
    Message class 'SystemSound'.

    Constants:
      STOP
      STARTUP
      SHUTDOWN
      ARROW_BUTTON
      CENTRAL_BUTTON
      FREE_FALL
      COLLISION
      TARGET_OK
      TARGET_DETECT
    """

    __slots__ = [
        '_sound',
    ]

    _fields_and_field_types = {
        'sound': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sound = kwargs.get('sound', int())

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
        if self.sound != other.sound:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def sound(self):
        """Message field 'sound'."""
        return self._sound

    @sound.setter
    def sound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sound' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'sound' field must be an integer in [-128, 127]"
        self._sound = value
