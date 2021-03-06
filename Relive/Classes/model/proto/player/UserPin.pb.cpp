// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserPin.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "UserPin.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace road {
namespace yishi {
namespace proto {
namespace player {

void protobuf_ShutdownFile_UserPin_2eproto() {
  delete UserPin::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_UserPin_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_UserPin_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  UserPin::default_instance_ = new UserPin();
  UserPin::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_UserPin_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_UserPin_2eproto_once_);
void protobuf_AddDesc_UserPin_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_UserPin_2eproto_once_,
                 &protobuf_AddDesc_UserPin_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_UserPin_2eproto {
  StaticDescriptorInitializer_UserPin_2eproto() {
    protobuf_AddDesc_UserPin_2eproto();
  }
} static_descriptor_initializer_UserPin_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int UserPin::kPinFieldNumber;
#endif  // !_MSC_VER

UserPin::UserPin()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void UserPin::InitAsDefaultInstance() {
}

UserPin::UserPin(const UserPin& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void UserPin::SharedCtor() {
  _cached_size_ = 0;
  pin_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserPin::~UserPin() {
  SharedDtor();
}

void UserPin::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void UserPin::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const UserPin& UserPin::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_UserPin_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_UserPin_2eproto();
#endif
  return *default_instance_;
}

UserPin* UserPin::default_instance_ = NULL;

UserPin* UserPin::New() const {
  return new UserPin;
}

void UserPin::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    pin_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool UserPin::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 pin = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &pin_)));
          set_has_pin();
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void UserPin::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 pin = 1;
  if (has_pin()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->pin(), output);
  }

}

int UserPin::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 pin = 1;
    if (has_pin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->pin());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UserPin::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const UserPin*>(&from));
}

void UserPin::MergeFrom(const UserPin& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_pin()) {
      set_pin(from.pin());
    }
  }
}

void UserPin::CopyFrom(const UserPin& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserPin::IsInitialized() const {

  return true;
}

void UserPin::Swap(UserPin* other) {
  if (other != this) {
    std::swap(pin_, other->pin_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string UserPin::GetTypeName() const {
  return "com.road.yishi.proto.player.UserPin";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)
