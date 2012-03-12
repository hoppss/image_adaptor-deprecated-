/* Auto-generated by genmsg_cpp for file /home/super/ros_workspace/image_adaptor/srv/intValue.srv */
#ifndef IMAGE_ADAPTOR_SERVICE_INTVALUE_H
#define IMAGE_ADAPTOR_SERVICE_INTVALUE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace image_adaptor
{
template <class ContainerAllocator>
struct intValueRequest_ {
  typedef intValueRequest_<ContainerAllocator> Type;

  intValueRequest_()
  : topicName()
  {
  }

  intValueRequest_(const ContainerAllocator& _alloc)
  : topicName(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topicName_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  topicName;


private:
  static const char* __s_getDataType_() { return "image_adaptor/intValueRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "74b3306276d42621c8d9905fba018178"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "b4ff20cbbd0167fab6a2a28f981b5e97"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "string topicName\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, topicName);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, topicName);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(topicName);
    return size;
  }

  typedef boost::shared_ptr< ::image_adaptor::intValueRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::image_adaptor::intValueRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct intValueRequest
typedef  ::image_adaptor::intValueRequest_<std::allocator<void> > intValueRequest;

typedef boost::shared_ptr< ::image_adaptor::intValueRequest> intValueRequestPtr;
typedef boost::shared_ptr< ::image_adaptor::intValueRequest const> intValueRequestConstPtr;


template <class ContainerAllocator>
struct intValueResponse_ {
  typedef intValueResponse_<ContainerAllocator> Type;

  intValueResponse_()
  : topicValue(0)
  {
  }

  intValueResponse_(const ContainerAllocator& _alloc)
  : topicValue(0)
  {
  }

  typedef int64_t _topicValue_type;
  int64_t topicValue;


private:
  static const char* __s_getDataType_() { return "image_adaptor/intValueResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "34b94d300bb95e77459cbba2516c56da"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "b4ff20cbbd0167fab6a2a28f981b5e97"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "int64 topicValue\n\
\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, topicValue);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, topicValue);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(topicValue);
    return size;
  }

  typedef boost::shared_ptr< ::image_adaptor::intValueResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::image_adaptor::intValueResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct intValueResponse
typedef  ::image_adaptor::intValueResponse_<std::allocator<void> > intValueResponse;

typedef boost::shared_ptr< ::image_adaptor::intValueResponse> intValueResponsePtr;
typedef boost::shared_ptr< ::image_adaptor::intValueResponse const> intValueResponseConstPtr;

struct intValue
{

typedef intValueRequest Request;
typedef intValueResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct intValue
} // namespace image_adaptor

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::image_adaptor::intValueRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::image_adaptor::intValueRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::image_adaptor::intValueRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "74b3306276d42621c8d9905fba018178";
  }

  static const char* value(const  ::image_adaptor::intValueRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x74b3306276d42621ULL;
  static const uint64_t static_value2 = 0xc8d9905fba018178ULL;
};

template<class ContainerAllocator>
struct DataType< ::image_adaptor::intValueRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "image_adaptor/intValueRequest";
  }

  static const char* value(const  ::image_adaptor::intValueRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::image_adaptor::intValueRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string topicName\n\
\n\
";
  }

  static const char* value(const  ::image_adaptor::intValueRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::image_adaptor::intValueResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::image_adaptor::intValueResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::image_adaptor::intValueResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "34b94d300bb95e77459cbba2516c56da";
  }

  static const char* value(const  ::image_adaptor::intValueResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x34b94d300bb95e77ULL;
  static const uint64_t static_value2 = 0x459cbba2516c56daULL;
};

template<class ContainerAllocator>
struct DataType< ::image_adaptor::intValueResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "image_adaptor/intValueResponse";
  }

  static const char* value(const  ::image_adaptor::intValueResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::image_adaptor::intValueResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int64 topicValue\n\
\n\
\n\
";
  }

  static const char* value(const  ::image_adaptor::intValueResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::image_adaptor::intValueResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::image_adaptor::intValueRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.topicName);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct intValueRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::image_adaptor::intValueResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.topicValue);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct intValueResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<image_adaptor::intValue> {
  static const char* value() 
  {
    return "b4ff20cbbd0167fab6a2a28f981b5e97";
  }

  static const char* value(const image_adaptor::intValue&) { return value(); } 
};

template<>
struct DataType<image_adaptor::intValue> {
  static const char* value() 
  {
    return "image_adaptor/intValue";
  }

  static const char* value(const image_adaptor::intValue&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<image_adaptor::intValueRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b4ff20cbbd0167fab6a2a28f981b5e97";
  }

  static const char* value(const image_adaptor::intValueRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<image_adaptor::intValueRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "image_adaptor/intValue";
  }

  static const char* value(const image_adaptor::intValueRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<image_adaptor::intValueResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b4ff20cbbd0167fab6a2a28f981b5e97";
  }

  static const char* value(const image_adaptor::intValueResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<image_adaptor::intValueResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "image_adaptor/intValue";
  }

  static const char* value(const image_adaptor::intValueResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // IMAGE_ADAPTOR_SERVICE_INTVALUE_H

