// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "test.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace testMessage {

namespace {

const ::google::protobuf::Descriptor* TestMsg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TestMsg_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_test_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_test_2eproto() {
  protobuf_AddDesc_test_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "test.proto");
  GOOGLE_CHECK(file != NULL);
  TestMsg_descriptor_ = file->message_type(0);
  static const int TestMsg_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMsg, msg_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMsg, send_time_),
  };
  TestMsg_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TestMsg_descriptor_,
      TestMsg::default_instance_,
      TestMsg_offsets_,
      -1,
      -1,
      -1,
      sizeof(TestMsg),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMsg, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMsg, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_test_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TestMsg_descriptor_, &TestMsg::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_test_2eproto() {
  delete TestMsg::default_instance_;
  delete TestMsg_reflection_;
}

void protobuf_AddDesc_test_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_test_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\ntest.proto\022\013testMessage\",\n\007TestMsg\022\016\n\006"
    "msg_id\030\001 \001(\r\022\021\n\tsend_time\030\002 \001(\001b\006proto3", 79);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "test.proto", &protobuf_RegisterTypes);
  TestMsg::default_instance_ = new TestMsg();
  TestMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_test_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_test_2eproto {
  StaticDescriptorInitializer_test_2eproto() {
    protobuf_AddDesc_test_2eproto();
  }
} static_descriptor_initializer_test_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TestMsg::kMsgIdFieldNumber;
const int TestMsg::kSendTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TestMsg::TestMsg()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:testMessage.TestMsg)
}

void TestMsg::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

TestMsg::TestMsg(const TestMsg& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:testMessage.TestMsg)
}

void TestMsg::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  msg_id_ = 0u;
  send_time_ = 0;
}

TestMsg::~TestMsg() {
  // @@protoc_insertion_point(destructor:testMessage.TestMsg)
  SharedDtor();
}

void TestMsg::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TestMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TestMsg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TestMsg_descriptor_;
}

const TestMsg& TestMsg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_test_2eproto();
  return *default_instance_;
}

TestMsg* TestMsg::default_instance_ = NULL;

TestMsg* TestMsg::New(::google::protobuf::Arena* arena) const {
  TestMsg* n = new TestMsg;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TestMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:testMessage.TestMsg)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(TestMsg, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<TestMsg*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(send_time_, msg_id_);

#undef ZR_HELPER_
#undef ZR_

}

bool TestMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:testMessage.TestMsg)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 msg_id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &msg_id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_send_time;
        break;
      }

      // optional double send_time = 2;
      case 2: {
        if (tag == 17) {
         parse_send_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &send_time_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:testMessage.TestMsg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:testMessage.TestMsg)
  return false;
#undef DO_
}

void TestMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:testMessage.TestMsg)
  // optional uint32 msg_id = 1;
  if (this->msg_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->msg_id(), output);
  }

  // optional double send_time = 2;
  if (this->send_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->send_time(), output);
  }

  // @@protoc_insertion_point(serialize_end:testMessage.TestMsg)
}

::google::protobuf::uint8* TestMsg::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:testMessage.TestMsg)
  // optional uint32 msg_id = 1;
  if (this->msg_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->msg_id(), target);
  }

  // optional double send_time = 2;
  if (this->send_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->send_time(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:testMessage.TestMsg)
  return target;
}

int TestMsg::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:testMessage.TestMsg)
  int total_size = 0;

  // optional uint32 msg_id = 1;
  if (this->msg_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->msg_id());
  }

  // optional double send_time = 2;
  if (this->send_time() != 0) {
    total_size += 1 + 8;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TestMsg::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:testMessage.TestMsg)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const TestMsg* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const TestMsg>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:testMessage.TestMsg)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:testMessage.TestMsg)
    MergeFrom(*source);
  }
}

void TestMsg::MergeFrom(const TestMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:testMessage.TestMsg)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.msg_id() != 0) {
    set_msg_id(from.msg_id());
  }
  if (from.send_time() != 0) {
    set_send_time(from.send_time());
  }
}

void TestMsg::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:testMessage.TestMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestMsg::CopyFrom(const TestMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:testMessage.TestMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestMsg::IsInitialized() const {

  return true;
}

void TestMsg::Swap(TestMsg* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TestMsg::InternalSwap(TestMsg* other) {
  std::swap(msg_id_, other->msg_id_);
  std::swap(send_time_, other->send_time_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TestMsg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TestMsg_descriptor_;
  metadata.reflection = TestMsg_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TestMsg

// optional uint32 msg_id = 1;
void TestMsg::clear_msg_id() {
  msg_id_ = 0u;
}
 ::google::protobuf::uint32 TestMsg::msg_id() const {
  // @@protoc_insertion_point(field_get:testMessage.TestMsg.msg_id)
  return msg_id_;
}
 void TestMsg::set_msg_id(::google::protobuf::uint32 value) {
  
  msg_id_ = value;
  // @@protoc_insertion_point(field_set:testMessage.TestMsg.msg_id)
}

// optional double send_time = 2;
void TestMsg::clear_send_time() {
  send_time_ = 0;
}
 double TestMsg::send_time() const {
  // @@protoc_insertion_point(field_get:testMessage.TestMsg.send_time)
  return send_time_;
}
 void TestMsg::set_send_time(double value) {
  
  send_time_ = value;
  // @@protoc_insertion_point(field_set:testMessage.TestMsg.send_time)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace testMessage

// @@protoc_insertion_point(global_scope)
