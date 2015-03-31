// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerOrder.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PlayerOrder.pb.h"

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

void protobuf_ShutdownFile_PlayerOrder_2eproto() {
  delete PlayerOrderMsg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_PlayerOrder_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_PlayerOrder_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  PlayerOrderMsg::default_instance_ = new PlayerOrderMsg();
  PlayerOrderMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PlayerOrder_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_PlayerOrder_2eproto_once_);
void protobuf_AddDesc_PlayerOrder_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_PlayerOrder_2eproto_once_,
                 &protobuf_AddDesc_PlayerOrder_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PlayerOrder_2eproto {
  StaticDescriptorInitializer_PlayerOrder_2eproto() {
    protobuf_AddDesc_PlayerOrder_2eproto();
  }
} static_descriptor_initializer_PlayerOrder_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int PlayerOrderMsg::kPlayerIdFieldNumber;
const int PlayerOrderMsg::kFightCapacityOrderFieldNumber;
const int PlayerOrderMsg::kGesteOrderFieldNumber;
const int PlayerOrderMsg::kCharmOrderFieldNumber;
const int PlayerOrderMsg::kSoulScoreOrderFieldNumber;
#endif  // !_MSC_VER

PlayerOrderMsg::PlayerOrderMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void PlayerOrderMsg::InitAsDefaultInstance() {
}

PlayerOrderMsg::PlayerOrderMsg(const PlayerOrderMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void PlayerOrderMsg::SharedCtor() {
  _cached_size_ = 0;
  player_id_ = 0;
  fight_capacity_order_ = 0;
  geste_order_ = 0;
  charm_order_ = 0;
  soul_score_order_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlayerOrderMsg::~PlayerOrderMsg() {
  SharedDtor();
}

void PlayerOrderMsg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void PlayerOrderMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PlayerOrderMsg& PlayerOrderMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_PlayerOrder_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_PlayerOrder_2eproto();
#endif
  return *default_instance_;
}

PlayerOrderMsg* PlayerOrderMsg::default_instance_ = NULL;

PlayerOrderMsg* PlayerOrderMsg::New() const {
  return new PlayerOrderMsg;
}

void PlayerOrderMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    player_id_ = 0;
    fight_capacity_order_ = 0;
    geste_order_ = 0;
    charm_order_ = 0;
    soul_score_order_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool PlayerOrderMsg::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_fight_capacity_order;
        break;
      }

      // optional int32 fight_capacity_order = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_fight_capacity_order:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &fight_capacity_order_)));
          set_has_fight_capacity_order();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_geste_Order;
        break;
      }

      // optional int32 geste_Order = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_geste_Order:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &geste_order_)));
          set_has_geste_order();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_charm_Order;
        break;
      }

      // optional int32 charm_Order = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_charm_Order:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &charm_order_)));
          set_has_charm_order();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_soul_score_Order;
        break;
      }

      // optional int32 soul_score_Order = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_soul_score_Order:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &soul_score_order_)));
          set_has_soul_score_order();
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

void PlayerOrderMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 player_id = 1;
  if (has_player_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->player_id(), output);
  }

  // optional int32 fight_capacity_order = 2;
  if (has_fight_capacity_order()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->fight_capacity_order(), output);
  }

  // optional int32 geste_Order = 3;
  if (has_geste_order()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->geste_order(), output);
  }

  // optional int32 charm_Order = 4;
  if (has_charm_order()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->charm_order(), output);
  }

  // optional int32 soul_score_Order = 5;
  if (has_soul_score_order()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->soul_score_order(), output);
  }

}

int PlayerOrderMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 player_id = 1;
    if (has_player_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->player_id());
    }

    // optional int32 fight_capacity_order = 2;
    if (has_fight_capacity_order()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->fight_capacity_order());
    }

    // optional int32 geste_Order = 3;
    if (has_geste_order()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->geste_order());
    }

    // optional int32 charm_Order = 4;
    if (has_charm_order()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->charm_order());
    }

    // optional int32 soul_score_Order = 5;
    if (has_soul_score_order()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->soul_score_order());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PlayerOrderMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PlayerOrderMsg*>(&from));
}

void PlayerOrderMsg::MergeFrom(const PlayerOrderMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_player_id()) {
      set_player_id(from.player_id());
    }
    if (from.has_fight_capacity_order()) {
      set_fight_capacity_order(from.fight_capacity_order());
    }
    if (from.has_geste_order()) {
      set_geste_order(from.geste_order());
    }
    if (from.has_charm_order()) {
      set_charm_order(from.charm_order());
    }
    if (from.has_soul_score_order()) {
      set_soul_score_order(from.soul_score_order());
    }
  }
}

void PlayerOrderMsg::CopyFrom(const PlayerOrderMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerOrderMsg::IsInitialized() const {

  return true;
}

void PlayerOrderMsg::Swap(PlayerOrderMsg* other) {
  if (other != this) {
    std::swap(player_id_, other->player_id_);
    std::swap(fight_capacity_order_, other->fight_capacity_order_);
    std::swap(geste_order_, other->geste_order_);
    std::swap(charm_order_, other->charm_order_);
    std::swap(soul_score_order_, other->soul_score_order_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string PlayerOrderMsg::GetTypeName() const {
  return "com.road.yishi.proto.player.PlayerOrderMsg";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)
