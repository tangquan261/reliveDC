// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerAASRefreshRsp.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PlayerAASRefreshRsp.pb.h"

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

void protobuf_ShutdownFile_PlayerAASRefreshRsp_2eproto() {
  delete PlayerAASRefreshMsg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_PlayerAASRefreshRsp_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_PlayerAASRefreshRsp_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  PlayerAASRefreshMsg::default_instance_ = new PlayerAASRefreshMsg();
  PlayerAASRefreshMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PlayerAASRefreshRsp_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_PlayerAASRefreshRsp_2eproto_once_);
void protobuf_AddDesc_PlayerAASRefreshRsp_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_PlayerAASRefreshRsp_2eproto_once_,
                 &protobuf_AddDesc_PlayerAASRefreshRsp_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PlayerAASRefreshRsp_2eproto {
  StaticDescriptorInitializer_PlayerAASRefreshRsp_2eproto() {
    protobuf_AddDesc_PlayerAASRefreshRsp_2eproto();
  }
} static_descriptor_initializer_PlayerAASRefreshRsp_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int PlayerAASRefreshMsg::kAasOnlineTimeFieldNumber;
const int PlayerAASRefreshMsg::kIsCloseAASFieldNumber;
const int PlayerAASRefreshMsg::kSysSwitchFieldNumber;
#endif  // !_MSC_VER

PlayerAASRefreshMsg::PlayerAASRefreshMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void PlayerAASRefreshMsg::InitAsDefaultInstance() {
}

PlayerAASRefreshMsg::PlayerAASRefreshMsg(const PlayerAASRefreshMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void PlayerAASRefreshMsg::SharedCtor() {
  _cached_size_ = 0;
  aasonlinetime_ = 0;
  iscloseaas_ = false;
  sysswitch_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlayerAASRefreshMsg::~PlayerAASRefreshMsg() {
  SharedDtor();
}

void PlayerAASRefreshMsg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void PlayerAASRefreshMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PlayerAASRefreshMsg& PlayerAASRefreshMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_PlayerAASRefreshRsp_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_PlayerAASRefreshRsp_2eproto();
#endif
  return *default_instance_;
}

PlayerAASRefreshMsg* PlayerAASRefreshMsg::default_instance_ = NULL;

PlayerAASRefreshMsg* PlayerAASRefreshMsg::New() const {
  return new PlayerAASRefreshMsg;
}

void PlayerAASRefreshMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    aasonlinetime_ = 0;
    iscloseaas_ = false;
    sysswitch_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool PlayerAASRefreshMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 aasOnlineTime = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &aasonlinetime_)));
          set_has_aasonlinetime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_isCloseAAS;
        break;
      }

      // optional bool isCloseAAS = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_isCloseAAS:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &iscloseaas_)));
          set_has_iscloseaas();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_sysSwitch;
        break;
      }

      // optional bool sysSwitch = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sysSwitch:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &sysswitch_)));
          set_has_sysswitch();
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

void PlayerAASRefreshMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 aasOnlineTime = 1;
  if (has_aasonlinetime()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->aasonlinetime(), output);
  }

  // optional bool isCloseAAS = 2;
  if (has_iscloseaas()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->iscloseaas(), output);
  }

  // optional bool sysSwitch = 3;
  if (has_sysswitch()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->sysswitch(), output);
  }

}

int PlayerAASRefreshMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 aasOnlineTime = 1;
    if (has_aasonlinetime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->aasonlinetime());
    }

    // optional bool isCloseAAS = 2;
    if (has_iscloseaas()) {
      total_size += 1 + 1;
    }

    // optional bool sysSwitch = 3;
    if (has_sysswitch()) {
      total_size += 1 + 1;
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PlayerAASRefreshMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PlayerAASRefreshMsg*>(&from));
}

void PlayerAASRefreshMsg::MergeFrom(const PlayerAASRefreshMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_aasonlinetime()) {
      set_aasonlinetime(from.aasonlinetime());
    }
    if (from.has_iscloseaas()) {
      set_iscloseaas(from.iscloseaas());
    }
    if (from.has_sysswitch()) {
      set_sysswitch(from.sysswitch());
    }
  }
}

void PlayerAASRefreshMsg::CopyFrom(const PlayerAASRefreshMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerAASRefreshMsg::IsInitialized() const {

  return true;
}

void PlayerAASRefreshMsg::Swap(PlayerAASRefreshMsg* other) {
  if (other != this) {
    std::swap(aasonlinetime_, other->aasonlinetime_);
    std::swap(iscloseaas_, other->iscloseaas_);
    std::swap(sysswitch_, other->sysswitch_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string PlayerAASRefreshMsg::GetTypeName() const {
  return "com.road.yishi.proto.player.PlayerAASRefreshMsg";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)