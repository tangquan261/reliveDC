// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BoxMsg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "BoxMsg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace road {
namespace yishi {
namespace proto {
namespace box {

namespace {

const ::google::protobuf::Descriptor* BoxMsg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BoxMsg_reflection_ = NULL;
const ::google::protobuf::Descriptor* BoxStarMsg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BoxStarMsg_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_BoxMsg_2eproto() {
  protobuf_AddDesc_BoxMsg_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "BoxMsg.proto");
  GOOGLE_CHECK(file != NULL);
  BoxMsg_descriptor_ = file->message_type(0);
  static const int BoxMsg_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoxMsg, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoxMsg, grade_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoxMsg, operate_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoxMsg, timerun_),
  };
  BoxMsg_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BoxMsg_descriptor_,
      BoxMsg::default_instance_,
      BoxMsg_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoxMsg, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoxMsg, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BoxMsg));
  BoxStarMsg_descriptor_ = file->message_type(1);
  static const int BoxStarMsg_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoxStarMsg, timerun_),
  };
  BoxStarMsg_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BoxStarMsg_descriptor_,
      BoxStarMsg::default_instance_,
      BoxStarMsg_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoxStarMsg, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoxStarMsg, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BoxStarMsg));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_BoxMsg_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BoxMsg_descriptor_, &BoxMsg::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BoxStarMsg_descriptor_, &BoxStarMsg::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_BoxMsg_2eproto() {
  delete BoxMsg::default_instance_;
  delete BoxMsg_reflection_;
  delete BoxStarMsg::default_instance_;
  delete BoxStarMsg_reflection_;
}

void protobuf_AddDesc_BoxMsg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014BoxMsg.proto\022\030com.road.yishi.proto.box"
    "\"G\n\006BoxMsg\022\014\n\004time\030\001 \001(\005\022\r\n\005grade\030\002 \001(\005\022"
    "\017\n\007operate\030\003 \001(\010\022\017\n\007timerun\030\004 \001(\005\"\035\n\nBox"
    "StarMsg\022\017\n\007timerun\030\001 \001(\005B$\n\025com.road.yis"
    "hi.pb.boxB\013BoxMsgProto", 182);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "BoxMsg.proto", &protobuf_RegisterTypes);
  BoxMsg::default_instance_ = new BoxMsg();
  BoxStarMsg::default_instance_ = new BoxStarMsg();
  BoxMsg::default_instance_->InitAsDefaultInstance();
  BoxStarMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_BoxMsg_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_BoxMsg_2eproto {
  StaticDescriptorInitializer_BoxMsg_2eproto() {
    protobuf_AddDesc_BoxMsg_2eproto();
  }
} static_descriptor_initializer_BoxMsg_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BoxMsg::kTimeFieldNumber;
const int BoxMsg::kGradeFieldNumber;
const int BoxMsg::kOperateFieldNumber;
const int BoxMsg::kTimerunFieldNumber;
#endif  // !_MSC_VER

BoxMsg::BoxMsg()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BoxMsg::InitAsDefaultInstance() {
}

BoxMsg::BoxMsg(const BoxMsg& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BoxMsg::SharedCtor() {
  _cached_size_ = 0;
  time_ = 0;
  grade_ = 0;
  operate_ = false;
  timerun_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BoxMsg::~BoxMsg() {
  SharedDtor();
}

void BoxMsg::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BoxMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BoxMsg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BoxMsg_descriptor_;
}

const BoxMsg& BoxMsg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_BoxMsg_2eproto();
  return *default_instance_;
}

BoxMsg* BoxMsg::default_instance_ = NULL;

BoxMsg* BoxMsg::New() const {
  return new BoxMsg;
}

void BoxMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    time_ = 0;
    grade_ = 0;
    operate_ = false;
    timerun_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BoxMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 time = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &time_)));
          set_has_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_grade;
        break;
      }

      // optional int32 grade = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_grade:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &grade_)));
          set_has_grade();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_operate;
        break;
      }

      // optional bool operate = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_operate:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &operate_)));
          set_has_operate();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_timerun;
        break;
      }

      // optional int32 timerun = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_timerun:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &timerun_)));
          set_has_timerun();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void BoxMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 time = 1;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->time(), output);
  }

  // optional int32 grade = 2;
  if (has_grade()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->grade(), output);
  }

  // optional bool operate = 3;
  if (has_operate()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->operate(), output);
  }

  // optional int32 timerun = 4;
  if (has_timerun()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->timerun(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BoxMsg::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 time = 1;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->time(), target);
  }

  // optional int32 grade = 2;
  if (has_grade()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->grade(), target);
  }

  // optional bool operate = 3;
  if (has_operate()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->operate(), target);
  }

  // optional int32 timerun = 4;
  if (has_timerun()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->timerun(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BoxMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 time = 1;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->time());
    }

    // optional int32 grade = 2;
    if (has_grade()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->grade());
    }

    // optional bool operate = 3;
    if (has_operate()) {
      total_size += 1 + 1;
    }

    // optional int32 timerun = 4;
    if (has_timerun()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->timerun());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BoxMsg::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BoxMsg* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BoxMsg*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BoxMsg::MergeFrom(const BoxMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_time()) {
      set_time(from.time());
    }
    if (from.has_grade()) {
      set_grade(from.grade());
    }
    if (from.has_operate()) {
      set_operate(from.operate());
    }
    if (from.has_timerun()) {
      set_timerun(from.timerun());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BoxMsg::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BoxMsg::CopyFrom(const BoxMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BoxMsg::IsInitialized() const {

  return true;
}

void BoxMsg::Swap(BoxMsg* other) {
  if (other != this) {
    std::swap(time_, other->time_);
    std::swap(grade_, other->grade_);
    std::swap(operate_, other->operate_);
    std::swap(timerun_, other->timerun_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BoxMsg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BoxMsg_descriptor_;
  metadata.reflection = BoxMsg_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int BoxStarMsg::kTimerunFieldNumber;
#endif  // !_MSC_VER

BoxStarMsg::BoxStarMsg()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BoxStarMsg::InitAsDefaultInstance() {
}

BoxStarMsg::BoxStarMsg(const BoxStarMsg& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BoxStarMsg::SharedCtor() {
  _cached_size_ = 0;
  timerun_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BoxStarMsg::~BoxStarMsg() {
  SharedDtor();
}

void BoxStarMsg::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BoxStarMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BoxStarMsg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BoxStarMsg_descriptor_;
}

const BoxStarMsg& BoxStarMsg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_BoxMsg_2eproto();
  return *default_instance_;
}

BoxStarMsg* BoxStarMsg::default_instance_ = NULL;

BoxStarMsg* BoxStarMsg::New() const {
  return new BoxStarMsg;
}

void BoxStarMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    timerun_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BoxStarMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 timerun = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &timerun_)));
          set_has_timerun();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void BoxStarMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 timerun = 1;
  if (has_timerun()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->timerun(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BoxStarMsg::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 timerun = 1;
  if (has_timerun()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->timerun(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BoxStarMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 timerun = 1;
    if (has_timerun()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->timerun());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BoxStarMsg::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BoxStarMsg* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BoxStarMsg*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BoxStarMsg::MergeFrom(const BoxStarMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_timerun()) {
      set_timerun(from.timerun());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BoxStarMsg::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BoxStarMsg::CopyFrom(const BoxStarMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BoxStarMsg::IsInitialized() const {

  return true;
}

void BoxStarMsg::Swap(BoxStarMsg* other) {
  if (other != this) {
    std::swap(timerun_, other->timerun_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BoxStarMsg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BoxStarMsg_descriptor_;
  metadata.reflection = BoxStarMsg_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace box
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)
