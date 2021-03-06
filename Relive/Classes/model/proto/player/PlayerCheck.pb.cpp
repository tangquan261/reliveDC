// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerCheck.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PlayerCheck.pb.h"

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

void protobuf_ShutdownFile_PlayerCheck_2eproto() {
  delete PlayerCheckMsg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_PlayerCheck_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_PlayerCheck_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  PlayerCheckMsg::default_instance_ = new PlayerCheckMsg();
  PlayerCheckMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PlayerCheck_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_PlayerCheck_2eproto_once_);
void protobuf_AddDesc_PlayerCheck_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_PlayerCheck_2eproto_once_,
                 &protobuf_AddDesc_PlayerCheck_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PlayerCheck_2eproto {
  StaticDescriptorInitializer_PlayerCheck_2eproto() {
    protobuf_AddDesc_PlayerCheck_2eproto();
  }
} static_descriptor_initializer_PlayerCheck_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int PlayerCheckMsg::kPlayerIdFieldNumber;
const int PlayerCheckMsg::kKeyFieldNumber;
const int PlayerCheckMsg::kResultFieldNumber;
#endif  // !_MSC_VER

PlayerCheckMsg::PlayerCheckMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void PlayerCheckMsg::InitAsDefaultInstance() {
}

PlayerCheckMsg::PlayerCheckMsg(const PlayerCheckMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void PlayerCheckMsg::SharedCtor() {
  _cached_size_ = 0;
  player_id_ = 0;
  key_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  result_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlayerCheckMsg::~PlayerCheckMsg() {
  SharedDtor();
}

void PlayerCheckMsg::SharedDtor() {
  if (key_ != &::google::protobuf::internal::kEmptyString) {
    delete key_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void PlayerCheckMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PlayerCheckMsg& PlayerCheckMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_PlayerCheck_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_PlayerCheck_2eproto();
#endif
  return *default_instance_;
}

PlayerCheckMsg* PlayerCheckMsg::default_instance_ = NULL;

PlayerCheckMsg* PlayerCheckMsg::New() const {
  return new PlayerCheckMsg;
}

void PlayerCheckMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    player_id_ = 0;
    if (has_key()) {
      if (key_ != &::google::protobuf::internal::kEmptyString) {
        key_->clear();
      }
    }
    result_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool PlayerCheckMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 player_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &player_id_)));
          set_has_player_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_key;
        break;
      }

      // optional string key = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_key:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_result;
        break;
      }

      // optional bool result = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_result:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &result_)));
          set_has_result();
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

void PlayerCheckMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 player_id = 1;
  if (has_player_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->player_id(), output);
  }

  // optional string key = 2;
  if (has_key()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->key(), output);
  }

  // optional bool result = 3;
  if (has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->result(), output);
  }

}

int PlayerCheckMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 player_id = 1;
    if (has_player_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->player_id());
    }

    // optional string key = 2;
    if (has_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->key());
    }

    // optional bool result = 3;
    if (has_result()) {
      total_size += 1 + 1;
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PlayerCheckMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PlayerCheckMsg*>(&from));
}

void PlayerCheckMsg::MergeFrom(const PlayerCheckMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_player_id()) {
      set_player_id(from.player_id());
    }
    if (from.has_key()) {
      set_key(from.key());
    }
    if (from.has_result()) {
      set_result(from.result());
    }
  }
}

void PlayerCheckMsg::CopyFrom(const PlayerCheckMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerCheckMsg::IsInitialized() const {

  return true;
}

void PlayerCheckMsg::Swap(PlayerCheckMsg* other) {
  if (other != this) {
    std::swap(player_id_, other->player_id_);
    std::swap(key_, other->key_);
    std::swap(result_, other->result_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string PlayerCheckMsg::GetTypeName() const {
  return "com.road.yishi.proto.player.PlayerCheckMsg";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)
