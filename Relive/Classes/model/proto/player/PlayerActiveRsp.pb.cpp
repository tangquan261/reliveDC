// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerActiveRsp.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PlayerActiveRsp.pb.h"

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

void protobuf_ShutdownFile_PlayerActiveRsp_2eproto() {
  delete PlayerActiveRspMsg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_PlayerActiveRsp_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_PlayerActiveRsp_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  PlayerActiveRspMsg::default_instance_ = new PlayerActiveRspMsg();
  PlayerActiveRspMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PlayerActiveRsp_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_PlayerActiveRsp_2eproto_once_);
void protobuf_AddDesc_PlayerActiveRsp_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_PlayerActiveRsp_2eproto_once_,
                 &protobuf_AddDesc_PlayerActiveRsp_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PlayerActiveRsp_2eproto {
  StaticDescriptorInitializer_PlayerActiveRsp_2eproto() {
    protobuf_AddDesc_PlayerActiveRsp_2eproto();
  }
} static_descriptor_initializer_PlayerActiveRsp_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int PlayerActiveRspMsg::kResultFieldNumber;
const int PlayerActiveRspMsg::kActiveidFieldNumber;
#endif  // !_MSC_VER

PlayerActiveRspMsg::PlayerActiveRspMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void PlayerActiveRspMsg::InitAsDefaultInstance() {
}

PlayerActiveRspMsg::PlayerActiveRspMsg(const PlayerActiveRspMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void PlayerActiveRspMsg::SharedCtor() {
  _cached_size_ = 0;
  result_ = 0;
  activeid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlayerActiveRspMsg::~PlayerActiveRspMsg() {
  SharedDtor();
}

void PlayerActiveRspMsg::SharedDtor() {
  if (activeid_ != &::google::protobuf::internal::kEmptyString) {
    delete activeid_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void PlayerActiveRspMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PlayerActiveRspMsg& PlayerActiveRspMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_PlayerActiveRsp_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_PlayerActiveRsp_2eproto();
#endif
  return *default_instance_;
}

PlayerActiveRspMsg* PlayerActiveRspMsg::default_instance_ = NULL;

PlayerActiveRspMsg* PlayerActiveRspMsg::New() const {
  return new PlayerActiveRspMsg;
}

void PlayerActiveRspMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    result_ = 0;
    if (has_activeid()) {
      if (activeid_ != &::google::protobuf::internal::kEmptyString) {
        activeid_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool PlayerActiveRspMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 result = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &result_)));
          set_has_result();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_activeid;
        break;
      }

      // optional string activeid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_activeid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_activeid()));
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

void PlayerActiveRspMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 result = 1;
  if (has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->result(), output);
  }

  // optional string activeid = 2;
  if (has_activeid()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->activeid(), output);
  }

}

int PlayerActiveRspMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 result = 1;
    if (has_result()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->result());
    }

    // optional string activeid = 2;
    if (has_activeid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->activeid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PlayerActiveRspMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PlayerActiveRspMsg*>(&from));
}

void PlayerActiveRspMsg::MergeFrom(const PlayerActiveRspMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_result()) {
      set_result(from.result());
    }
    if (from.has_activeid()) {
      set_activeid(from.activeid());
    }
  }
}

void PlayerActiveRspMsg::CopyFrom(const PlayerActiveRspMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerActiveRspMsg::IsInitialized() const {

  return true;
}

void PlayerActiveRspMsg::Swap(PlayerActiveRspMsg* other) {
  if (other != this) {
    std::swap(result_, other->result_);
    std::swap(activeid_, other->activeid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string PlayerActiveRspMsg::GetTypeName() const {
  return "com.road.yishi.proto.player.PlayerActiveRspMsg";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)
