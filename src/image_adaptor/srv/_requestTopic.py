"""autogenerated by genmsg_py from requestTopicRequest.msg. Do not edit."""
import roslib.message
import struct


class requestTopicRequest(roslib.message.Message):
  _md5sum = "649216dbe3b2606914f2eb065f7f6dab"
  _type = "image_adaptor/requestTopicRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int64 nImages
string sourceTopic
string responseTopic

"""
  __slots__ = ['nImages','sourceTopic','responseTopic']
  _slot_types = ['int64','string','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.
    
    The available fields are:
       nImages,sourceTopic,responseTopic
    
    @param args: complete set of field values, in .msg order
    @param kwds: use keyword arguments corresponding to message field names
    to set specific fields. 
    """
    if args or kwds:
      super(requestTopicRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.nImages is None:
        self.nImages = 0
      if self.sourceTopic is None:
        self.sourceTopic = ''
      if self.responseTopic is None:
        self.responseTopic = ''
    else:
      self.nImages = 0
      self.sourceTopic = ''
      self.responseTopic = ''

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
      buff.write(_struct_q.pack(self.nImages))
      _x = self.sourceTopic
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.responseTopic
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
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
      (self.nImages,) = _struct_q.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.sourceTopic = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.responseTopic = str[start:end]
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
      buff.write(_struct_q.pack(self.nImages))
      _x = self.sourceTopic
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.responseTopic
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
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
      (self.nImages,) = _struct_q.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.sourceTopic = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.responseTopic = str[start:end]
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

_struct_I = roslib.message.struct_I
_struct_q = struct.Struct("<q")
"""autogenerated by genmsg_py from requestTopicResponse.msg. Do not edit."""
import roslib.message
import struct


class requestTopicResponse(roslib.message.Message):
  _md5sum = "6de314e2dc76fbff2b6244a6ad70b68d"
  _type = "image_adaptor/requestTopicResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string response



"""
  __slots__ = ['response']
  _slot_types = ['string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.
    
    The available fields are:
       response
    
    @param args: complete set of field values, in .msg order
    @param kwds: use keyword arguments corresponding to message field names
    to set specific fields. 
    """
    if args or kwds:
      super(requestTopicResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.response is None:
        self.response = ''
    else:
      self.response = ''

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
      _x = self.response
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
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
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.response = str[start:end]
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
      _x = self.response
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
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
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.response = str[start:end]
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

_struct_I = roslib.message.struct_I
class requestTopic(roslib.message.ServiceDefinition):
  _type          = 'image_adaptor/requestTopic'
  _md5sum = 'b817ce56db2701eab6ea62d45b0f064b'
  _request_class  = requestTopicRequest
  _response_class = requestTopicResponse