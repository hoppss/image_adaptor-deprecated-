"""autogenerated by genmsg_py from floatValueRequest.msg. Do not edit."""
import roslib.message
import struct


class floatValueRequest(roslib.message.Message):
  _md5sum = "c227d4349cf529b4be4678e08adc1c18"
  _type = "image_adaptor/floatValueRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float64 topicName

"""
  __slots__ = ['topicName']
  _slot_types = ['float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.
    
    The available fields are:
       topicName
    
    @param args: complete set of field values, in .msg order
    @param kwds: use keyword arguments corresponding to message field names
    to set specific fields. 
    """
    if args or kwds:
      super(floatValueRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.topicName is None:
        self.topicName = 0.
    else:
      self.topicName = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    @param buff: buffer
    @type  buff: StringIO
    """
    try:
      buff.write(_struct_d.pack(self.topicName))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    @param str: byte array of serialized message
    @type  str: str
    """
    try:
      end = 0
      start = end
      end += 8
      (self.topicName,) = _struct_d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    @param buff: buffer
    @type  buff: StringIO
    @param numpy: numpy python module
    @type  numpy module
    """
    try:
      buff.write(_struct_d.pack(self.topicName))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    @param str: byte array of serialized message
    @type  str: str
    @param numpy: numpy python module
    @type  numpy: module
    """
    try:
      end = 0
      start = end
      end += 8
      (self.topicName,) = _struct_d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

_struct_I = roslib.message.struct_I
_struct_d = struct.Struct("<d")
"""autogenerated by genmsg_py from floatValueResponse.msg. Do not edit."""
import roslib.message
import struct


class floatValueResponse(roslib.message.Message):
  _md5sum = "d9f398dc4b493295e20e622dec7ec153"
  _type = "image_adaptor/floatValueResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float64 topicValue


"""
  __slots__ = ['topicValue']
  _slot_types = ['float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.
    
    The available fields are:
       topicValue
    
    @param args: complete set of field values, in .msg order
    @param kwds: use keyword arguments corresponding to message field names
    to set specific fields. 
    """
    if args or kwds:
      super(floatValueResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.topicValue is None:
        self.topicValue = 0.
    else:
      self.topicValue = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    @param buff: buffer
    @type  buff: StringIO
    """
    try:
      buff.write(_struct_d.pack(self.topicValue))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    @param str: byte array of serialized message
    @type  str: str
    """
    try:
      end = 0
      start = end
      end += 8
      (self.topicValue,) = _struct_d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    @param buff: buffer
    @type  buff: StringIO
    @param numpy: numpy python module
    @type  numpy module
    """
    try:
      buff.write(_struct_d.pack(self.topicValue))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    @param str: byte array of serialized message
    @type  str: str
    @param numpy: numpy python module
    @type  numpy: module
    """
    try:
      end = 0
      start = end
      end += 8
      (self.topicValue,) = _struct_d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

_struct_I = roslib.message.struct_I
_struct_d = struct.Struct("<d")
class floatValue(roslib.message.ServiceDefinition):
  _type          = 'image_adaptor/floatValue'
  _md5sum = '8d0cfd91e471fc5abc16032475606a03'
  _request_class  = floatValueRequest
  _response_class = floatValueResponse
