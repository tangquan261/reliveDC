// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerSignReq.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PlayerSignReq.pb.h"

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

void protobuf_ShutdownFile_PlayerSignReq_2eproto() {
  delete PlayerSignReqMsg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_PlayerSignReq_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_PlayerSignReq_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  PlayerSignReqMsg::default_instance_ = new PlayerSignReqMsg();
  PlayerSignReqMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PlayerSignReq_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_PlayerSignReq_2eproto_once_);
void protobuf_AddDesc_PlayerSignReq_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_PlayerSignReq_2eproto_once_,
                 &protobuf_AddDesc_PlayerSignReq_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PlayerSignReq_2eproto {
  StaticDescriptorInitializer_PlayerSignReq_2eproto() {
    protobuf_AddDesc_PlayerSignReq_2eproto();
  }
} static_descriptor_initializer_PlayerSignReq_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int PlayerSignReqMsg::kOptTypeFieldNumber;
const int PlayerSignReqMsg::kPrizeSiteFieldNumber;
#endif  // !_MSC_VER

PlayerSignReqMsg::PlayerSignReqMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void PlayerSignReqMsg::InitAsDefaultInstance() {
}

PlayerSignReqMsg::PlayerSignReqMsg(const PlayerSignReqMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void PlayerSignReqMsg::SharedCtor() {
  _cached_size_ = 0;
  opttype_ = false;
  prizesite_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlayerSignReqMsg::~PlayerSignReqMsg() {
  SharedDtor();
}

void PlayerSignReqMsg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void PlayerSignReqMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PlayerSignReqMsg& PlayerSignReqMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_PlayerSignReq_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_PlayerSignReq_2eproto();
#endif
  return *default_instance_;
}

PlayerSignReqMsg* PlayerSignReqMsg::default_instance_ = NULL;

PlayerSignReqMsg* PlayerSignReqMsg::New() const {
  return new PlayerSignReqMsg;
}

void PlayerSignReqMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    opttype_ = false;
    prizesite_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool PlayerSignReqMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool optType = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &opttype_)));
          set_has_opttype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_prizeSite;
        break;
      }

      // optional int32 prizeSite = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_prizeSite:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &prizesite_)));
          set_has_prizesite();
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

void PlayerSignReqMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional bool optType = 1;
  if (has_opttype()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->opttype(), output);
  }

  // optional int32 prizeSite = 2;
  if (has_prizesite()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->prizesite(), output);
  }

}

int PlayerSignReqMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool optType = 1;
    if (has_opttype()) {
      total_size += 1 + 1;
    }

    // optional int32 prizeSite = 2;
    if (has_prizesite()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->prizesite());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PlayerSignReqMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PlayerSignReqMsg*>(&from));
}

void PlayerSignReqMsg::MergeFrom(const PlayerSignReqMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_opttype()) {
      set_opttype(from.opttype());
    }
    if (from.has_prizesite()) {
      set_prizesite(from.prizesite());
    }
  }
}

void PlayerSignReqMsg::CopyFrom(const PlayerSignReqMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerSignReqMsg::IsInitialized() const {

  return true;
}

void PlayerSignReqMsg::Swap(PlayerSignReqMsg* other) {
  if (other != this) {
    std::swap(opttype_, other->opttype_);
    std::swap(prizesite_, other->prizesite_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string PlayerSignReqMsg::GetTypeName() const {
  return "com.road.yishi.proto.player.PlayerSignReqMsg";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)
