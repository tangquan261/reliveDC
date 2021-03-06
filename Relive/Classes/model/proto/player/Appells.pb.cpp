// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Appells.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Appells.pb.h"

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

void protobuf_ShutdownFile_Appells_2eproto() {
  delete AppellsMsg::default_instance_;
  delete AppellInfoMsg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_Appells_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_Appells_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  AppellsMsg::default_instance_ = new AppellsMsg();
  AppellInfoMsg::default_instance_ = new AppellInfoMsg();
  AppellsMsg::default_instance_->InitAsDefaultInstance();
  AppellInfoMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Appells_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_Appells_2eproto_once_);
void protobuf_AddDesc_Appells_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_Appells_2eproto_once_,
                 &protobuf_AddDesc_Appells_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Appells_2eproto {
  StaticDescriptorInitializer_Appells_2eproto() {
    protobuf_AddDesc_Appells_2eproto();
  }
} static_descriptor_initializer_Appells_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int AppellsMsg::kAppellsFieldNumber;
#endif  // !_MSC_VER

AppellsMsg::AppellsMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void AppellsMsg::InitAsDefaultInstance() {
}

AppellsMsg::AppellsMsg(const AppellsMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void AppellsMsg::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AppellsMsg::~AppellsMsg() {
  SharedDtor();
}

void AppellsMsg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void AppellsMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AppellsMsg& AppellsMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_Appells_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_Appells_2eproto();
#endif
  return *default_instance_;
}

AppellsMsg* AppellsMsg::default_instance_ = NULL;

AppellsMsg* AppellsMsg::New() const {
  return new AppellsMsg;
}

void AppellsMsg::Clear() {
  appells_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool AppellsMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.road.yishi.proto.player.AppellInfoMsg appells = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_appells:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_appells()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_appells;
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

void AppellsMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.road.yishi.proto.player.AppellInfoMsg appells = 1;
  for (int i = 0; i < this->appells_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->appells(i), output);
  }

}

int AppellsMsg::ByteSize() const {
  int total_size = 0;

  // repeated .com.road.yishi.proto.player.AppellInfoMsg appells = 1;
  total_size += 1 * this->appells_size();
  for (int i = 0; i < this->appells_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->appells(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AppellsMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AppellsMsg*>(&from));
}

void AppellsMsg::MergeFrom(const AppellsMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  appells_.MergeFrom(from.appells_);
}

void AppellsMsg::CopyFrom(const AppellsMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AppellsMsg::IsInitialized() const {

  return true;
}

void AppellsMsg::Swap(AppellsMsg* other) {
  if (other != this) {
    appells_.Swap(&other->appells_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string AppellsMsg::GetTypeName() const {
  return "com.road.yishi.proto.player.AppellsMsg";
}


// ===================================================================

#ifndef _MSC_VER
const int AppellInfoMsg::kAppellIdFieldNumber;
const int AppellInfoMsg::kIsGetFieldNumber;
const int AppellInfoMsg::kValueFieldNumber;
#endif  // !_MSC_VER

AppellInfoMsg::AppellInfoMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void AppellInfoMsg::InitAsDefaultInstance() {
}

AppellInfoMsg::AppellInfoMsg(const AppellInfoMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void AppellInfoMsg::SharedCtor() {
  _cached_size_ = 0;
  appellid_ = 0;
  isget_ = false;
  value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AppellInfoMsg::~AppellInfoMsg() {
  SharedDtor();
}

void AppellInfoMsg::SharedDtor() {
  if (value_ != &::google::protobuf::internal::kEmptyString) {
    delete value_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void AppellInfoMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AppellInfoMsg& AppellInfoMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_Appells_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_Appells_2eproto();
#endif
  return *default_instance_;
}

AppellInfoMsg* AppellInfoMsg::default_instance_ = NULL;

AppellInfoMsg* AppellInfoMsg::New() const {
  return new AppellInfoMsg;
}

void AppellInfoMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    appellid_ = 0;
    isget_ = false;
    if (has_value()) {
      if (value_ != &::google::protobuf::internal::kEmptyString) {
        value_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool AppellInfoMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 appellId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &appellid_)));
          set_has_appellid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_isGet;
        break;
      }

      // optional bool isGet = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_isGet:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isget_)));
          set_has_isget();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_value;
        break;
      }

      // optional string value = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
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

void AppellInfoMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 appellId = 1;
  if (has_appellid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->appellid(), output);
  }

  // optional bool isGet = 2;
  if (has_isget()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->isget(), output);
  }

  // optional string value = 3;
  if (has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->value(), output);
  }

}

int AppellInfoMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 appellId = 1;
    if (has_appellid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->appellid());
    }

    // optional bool isGet = 2;
    if (has_isget()) {
      total_size += 1 + 1;
    }

    // optional string value = 3;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->value());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AppellInfoMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AppellInfoMsg*>(&from));
}

void AppellInfoMsg::MergeFrom(const AppellInfoMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_appellid()) {
      set_appellid(from.appellid());
    }
    if (from.has_isget()) {
      set_isget(from.isget());
    }
    if (from.has_value()) {
      set_value(from.value());
    }
  }
}

void AppellInfoMsg::CopyFrom(const AppellInfoMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AppellInfoMsg::IsInitialized() const {

  return true;
}

void AppellInfoMsg::Swap(AppellInfoMsg* other) {
  if (other != this) {
    std::swap(appellid_, other->appellid_);
    std::swap(isget_, other->isget_);
    std::swap(value_, other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string AppellInfoMsg::GetTypeName() const {
  return "com.road.yishi.proto.player.AppellInfoMsg";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)
