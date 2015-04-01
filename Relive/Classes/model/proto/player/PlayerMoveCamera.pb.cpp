// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerMoveCamera.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PlayerMoveCamera.pb.h"

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

void protobuf_ShutdownFile_PlayerMoveCamera_2eproto() {
  delete PlayerMoveCameraMsg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_PlayerMoveCamera_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_PlayerMoveCamera_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  PlayerMoveCameraMsg::default_instance_ = new PlayerMoveCameraMsg();
  PlayerMoveCameraMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PlayerMoveCamera_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_PlayerMoveCamera_2eproto_once_);
void protobuf_AddDesc_PlayerMoveCamera_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_PlayerMoveCamera_2eproto_once_,
                 &protobuf_AddDesc_PlayerMoveCamera_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PlayerMoveCamera_2eproto {
  StaticDescriptorInitializer_PlayerMoveCamera_2eproto() {
    protobuf_AddDesc_PlayerMoveCamera_2eproto();
  }
} static_descriptor_initializer_PlayerMoveCamera_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int PlayerMoveCameraMsg::kSceneFieldNumber;
const int PlayerMoveCameraMsg::kTargetXFieldNumber;
const int PlayerMoveCameraMsg::kTargetYFieldNumber;
const int PlayerMoveCameraMsg::kDelayFieldNumber;
#endif  // !_MSC_VER

PlayerMoveCameraMsg::PlayerMoveCameraMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void PlayerMoveCameraMsg::InitAsDefaultInstance() {
}

PlayerMoveCameraMsg::PlayerMoveCameraMsg(const PlayerMoveCameraMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void PlayerMoveCameraMsg::SharedCtor() {
  _cached_size_ = 0;
  scene_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  target_x_ = 0;
  target_y_ = 0;
  delay_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlayerMoveCameraMsg::~PlayerMoveCameraMsg() {
  SharedDtor();
}

void PlayerMoveCameraMsg::SharedDtor() {
  if (scene_ != &::google::protobuf::internal::kEmptyString) {
    delete scene_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void PlayerMoveCameraMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PlayerMoveCameraMsg& PlayerMoveCameraMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_PlayerMoveCamera_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_PlayerMoveCamera_2eproto();
#endif
  return *default_instance_;
}

PlayerMoveCameraMsg* PlayerMoveCameraMsg::default_instance_ = NULL;

PlayerMoveCameraMsg* PlayerMoveCameraMsg::New() const {
  return new PlayerMoveCameraMsg;
}

void PlayerMoveCameraMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_scene()) {
      if (scene_ != &::google::protobuf::internal::kEmptyString) {
        scene_->clear();
      }
    }
    target_x_ = 0;
    target_y_ = 0;
    delay_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool PlayerMoveCameraMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string scene = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_scene()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_target_x;
        break;
      }

      // optional int32 target_x = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_target_x:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &target_x_)));
          set_has_target_x();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_target_y;
        break;
      }

      // optional int32 target_y = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_target_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &target_y_)));
          set_has_target_y();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_delay;
        break;
      }

      // optional int32 delay = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_delay:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &delay_)));
          set_has_delay();
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

void PlayerMoveCameraMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string scene = 1;
  if (has_scene()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->scene(), output);
  }

  // optional int32 target_x = 2;
  if (has_target_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->target_x(), output);
  }

  // optional int32 target_y = 3;
  if (has_target_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->target_y(), output);
  }

  // optional int32 delay = 4;
  if (has_delay()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->delay(), output);
  }

}

int PlayerMoveCameraMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string scene = 1;
    if (has_scene()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->scene());
    }

    // optional int32 target_x = 2;
    if (has_target_x()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->target_x());
    }

    // optional int32 target_y = 3;
    if (has_target_y()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->target_y());
    }

    // optional int32 delay = 4;
    if (has_delay()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->delay());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PlayerMoveCameraMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PlayerMoveCameraMsg*>(&from));
}

void PlayerMoveCameraMsg::MergeFrom(const PlayerMoveCameraMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_scene()) {
      set_scene(from.scene());
    }
    if (from.has_target_x()) {
      set_target_x(from.target_x());
    }
    if (from.has_target_y()) {
      set_target_y(from.target_y());
    }
    if (from.has_delay()) {
      set_delay(from.delay());
    }
  }
}

void PlayerMoveCameraMsg::CopyFrom(const PlayerMoveCameraMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerMoveCameraMsg::IsInitialized() const {

  return true;
}

void PlayerMoveCameraMsg::Swap(PlayerMoveCameraMsg* other) {
  if (other != this) {
    std::swap(scene_, other->scene_);
    std::swap(target_x_, other->target_x_);
    std::swap(target_y_, other->target_y_);
    std::swap(delay_, other->delay_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string PlayerMoveCameraMsg::GetTypeName() const {
  return "com.road.yishi.proto.player.PlayerMoveCameraMsg";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)