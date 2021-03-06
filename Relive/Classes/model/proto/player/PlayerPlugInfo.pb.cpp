// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerPlugInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PlayerPlugInfo.pb.h"

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

void protobuf_ShutdownFile_PlayerPlugInfo_2eproto() {
  delete PlayerPlugInfoMsg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_PlayerPlugInfo_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_PlayerPlugInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  PlayerPlugInfoMsg::default_instance_ = new PlayerPlugInfoMsg();
  PlayerPlugInfoMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PlayerPlugInfo_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_PlayerPlugInfo_2eproto_once_);
void protobuf_AddDesc_PlayerPlugInfo_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_PlayerPlugInfo_2eproto_once_,
                 &protobuf_AddDesc_PlayerPlugInfo_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PlayerPlugInfo_2eproto {
  StaticDescriptorInitializer_PlayerPlugInfo_2eproto() {
    protobuf_AddDesc_PlayerPlugInfo_2eproto();
  }
} static_descriptor_initializer_PlayerPlugInfo_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int PlayerPlugInfoMsg::kIpFieldNumber;
const int PlayerPlugInfoMsg::kUserIdFieldNumber;
const int PlayerPlugInfoMsg::kUserNameFieldNumber;
const int PlayerPlugInfoMsg::kSendTimeFieldNumber;
const int PlayerPlugInfoMsg::kExtFieldNumber;
const int PlayerPlugInfoMsg::kSignFieldNumber;
#endif  // !_MSC_VER

PlayerPlugInfoMsg::PlayerPlugInfoMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void PlayerPlugInfoMsg::InitAsDefaultInstance() {
}

PlayerPlugInfoMsg::PlayerPlugInfoMsg(const PlayerPlugInfoMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void PlayerPlugInfoMsg::SharedCtor() {
  _cached_size_ = 0;
  ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  user_id_ = 0;
  user_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  send_time_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ext_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  sign_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlayerPlugInfoMsg::~PlayerPlugInfoMsg() {
  SharedDtor();
}

void PlayerPlugInfoMsg::SharedDtor() {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    delete ip_;
  }
  if (user_name_ != &::google::protobuf::internal::kEmptyString) {
    delete user_name_;
  }
  if (send_time_ != &::google::protobuf::internal::kEmptyString) {
    delete send_time_;
  }
  if (ext_ != &::google::protobuf::internal::kEmptyString) {
    delete ext_;
  }
  if (sign_ != &::google::protobuf::internal::kEmptyString) {
    delete sign_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void PlayerPlugInfoMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PlayerPlugInfoMsg& PlayerPlugInfoMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_PlayerPlugInfo_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_PlayerPlugInfo_2eproto();
#endif
  return *default_instance_;
}

PlayerPlugInfoMsg* PlayerPlugInfoMsg::default_instance_ = NULL;

PlayerPlugInfoMsg* PlayerPlugInfoMsg::New() const {
  return new PlayerPlugInfoMsg;
}

void PlayerPlugInfoMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_ip()) {
      if (ip_ != &::google::protobuf::internal::kEmptyString) {
        ip_->clear();
      }
    }
    user_id_ = 0;
    if (has_user_name()) {
      if (user_name_ != &::google::protobuf::internal::kEmptyString) {
        user_name_->clear();
      }
    }
    if (has_send_time()) {
      if (send_time_ != &::google::protobuf::internal::kEmptyString) {
        send_time_->clear();
      }
    }
    if (has_ext()) {
      if (ext_ != &::google::protobuf::internal::kEmptyString) {
        ext_->clear();
      }
    }
    if (has_sign()) {
      if (sign_ != &::google::protobuf::internal::kEmptyString) {
        sign_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool PlayerPlugInfoMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string ip = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_user_id;
        break;
      }

      // optional int32 user_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_user_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &user_id_)));
          set_has_user_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_user_name;
        break;
      }

      // optional string user_name = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_user_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_user_name()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_send_time;
        break;
      }

      // optional string send_time = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_send_time:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_send_time()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_ext;
        break;
      }

      // optional string ext = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ext:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ext()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_sign;
        break;
      }

      // optional string sign = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_sign:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sign()));
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

void PlayerPlugInfoMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string ip = 1;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->ip(), output);
  }

  // optional int32 user_id = 2;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->user_id(), output);
  }

  // optional string user_name = 3;
  if (has_user_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->user_name(), output);
  }

  // optional string send_time = 4;
  if (has_send_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->send_time(), output);
  }

  // optional string ext = 5;
  if (has_ext()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->ext(), output);
  }

  // optional string sign = 6;
  if (has_sign()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->sign(), output);
  }

}

int PlayerPlugInfoMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string ip = 1;
    if (has_ip()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ip());
    }

    // optional int32 user_id = 2;
    if (has_user_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->user_id());
    }

    // optional string user_name = 3;
    if (has_user_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->user_name());
    }

    // optional string send_time = 4;
    if (has_send_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->send_time());
    }

    // optional string ext = 5;
    if (has_ext()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ext());
    }

    // optional string sign = 6;
    if (has_sign()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sign());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PlayerPlugInfoMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PlayerPlugInfoMsg*>(&from));
}

void PlayerPlugInfoMsg::MergeFrom(const PlayerPlugInfoMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ip()) {
      set_ip(from.ip());
    }
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
    if (from.has_user_name()) {
      set_user_name(from.user_name());
    }
    if (from.has_send_time()) {
      set_send_time(from.send_time());
    }
    if (from.has_ext()) {
      set_ext(from.ext());
    }
    if (from.has_sign()) {
      set_sign(from.sign());
    }
  }
}

void PlayerPlugInfoMsg::CopyFrom(const PlayerPlugInfoMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerPlugInfoMsg::IsInitialized() const {

  return true;
}

void PlayerPlugInfoMsg::Swap(PlayerPlugInfoMsg* other) {
  if (other != this) {
    std::swap(ip_, other->ip_);
    std::swap(user_id_, other->user_id_);
    std::swap(user_name_, other->user_name_);
    std::swap(send_time_, other->send_time_);
    std::swap(ext_, other->ext_);
    std::swap(sign_, other->sign_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string PlayerPlugInfoMsg::GetTypeName() const {
  return "com.road.yishi.proto.player.PlayerPlugInfoMsg";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)
