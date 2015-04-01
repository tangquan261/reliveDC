// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AppellExchange.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "AppellExchange.pb.h"

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

void protobuf_ShutdownFile_AppellExchange_2eproto() {
  delete AppellExchangeMsg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_AppellExchange_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_AppellExchange_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  AppellExchangeMsg::default_instance_ = new AppellExchangeMsg();
  AppellExchangeMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_AppellExchange_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_AppellExchange_2eproto_once_);
void protobuf_AddDesc_AppellExchange_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_AppellExchange_2eproto_once_,
                 &protobuf_AddDesc_AppellExchange_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_AppellExchange_2eproto {
  StaticDescriptorInitializer_AppellExchange_2eproto() {
    protobuf_AddDesc_AppellExchange_2eproto();
  }
} static_descriptor_initializer_AppellExchange_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int AppellExchangeMsg::kAppellIdFieldNumber;
const int AppellExchangeMsg::kLookFieldNumber;
#endif  // !_MSC_VER

AppellExchangeMsg::AppellExchangeMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void AppellExchangeMsg::InitAsDefaultInstance() {
}

AppellExchangeMsg::AppellExchangeMsg(const AppellExchangeMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void AppellExchangeMsg::SharedCtor() {
  _cached_size_ = 0;
  appellid_ = 0;
  look_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AppellExchangeMsg::~AppellExchangeMsg() {
  SharedDtor();
}

void AppellExchangeMsg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void AppellExchangeMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AppellExchangeMsg& AppellExchangeMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_AppellExchange_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_AppellExchange_2eproto();
#endif
  return *default_instance_;
}

AppellExchangeMsg* AppellExchangeMsg::default_instance_ = NULL;

AppellExchangeMsg* AppellExchangeMsg::New() const {
  return new AppellExchangeMsg;
}

void AppellExchangeMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    appellid_ = 0;
    look_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool AppellExchangeMsg::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_look;
        break;
      }

      // optional bool look = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_look:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &look_)));
          set_has_look();
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

void AppellExchangeMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 appellId = 1;
  if (has_appellid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->appellid(), output);
  }

  // optional bool look = 2;
  if (has_look()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->look(), output);
  }

}

int AppellExchangeMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 appellId = 1;
    if (has_appellid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->appellid());
    }

    // optional bool look = 2;
    if (has_look()) {
      total_size += 1 + 1;
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AppellExchangeMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AppellExchangeMsg*>(&from));
}

void AppellExchangeMsg::MergeFrom(const AppellExchangeMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_appellid()) {
      set_appellid(from.appellid());
    }
    if (from.has_look()) {
      set_look(from.look());
    }
  }
}

void AppellExchangeMsg::CopyFrom(const AppellExchangeMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AppellExchangeMsg::IsInitialized() const {

  return true;
}

void AppellExchangeMsg::Swap(AppellExchangeMsg* other) {
  if (other != this) {
    std::swap(appellid_, other->appellid_);
    std::swap(look_, other->look_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string AppellExchangeMsg::GetTypeName() const {
  return "com.road.yishi.proto.player.AppellExchangeMsg";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)