// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerOrder.proto

#ifndef PROTOBUF_PlayerOrder_2eproto__INCLUDED
#define PROTOBUF_PlayerOrder_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace road {
namespace yishi {
namespace proto {
namespace player {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_PlayerOrder_2eproto();
void protobuf_AssignDesc_PlayerOrder_2eproto();
void protobuf_ShutdownFile_PlayerOrder_2eproto();

class PlayerOrderMsg;

// ===================================================================

class PlayerOrderMsg : public ::google::protobuf::MessageLite {
 public:
  PlayerOrderMsg();
  virtual ~PlayerOrderMsg();

  PlayerOrderMsg(const PlayerOrderMsg& from);

  inline PlayerOrderMsg& operator=(const PlayerOrderMsg& from) {
    CopyFrom(from);
    return *this;
  }

  static const PlayerOrderMsg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PlayerOrderMsg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PlayerOrderMsg* other);

  // implements Message ----------------------------------------------

  PlayerOrderMsg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PlayerOrderMsg& from);
  void MergeFrom(const PlayerOrderMsg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 player_id = 1;
  inline bool has_player_id() const;
  inline void clear_player_id();
  static const int kPlayerIdFieldNumber = 1;
  inline ::google::protobuf::int32 player_id() const;
  inline void set_player_id(::google::protobuf::int32 value);

  // optional int32 fight_capacity_order = 2;
  inline bool has_fight_capacity_order() const;
  inline void clear_fight_capacity_order();
  static const int kFightCapacityOrderFieldNumber = 2;
  inline ::google::protobuf::int32 fight_capacity_order() const;
  inline void set_fight_capacity_order(::google::protobuf::int32 value);

  // optional int32 geste_Order = 3;
  inline bool has_geste_order() const;
  inline void clear_geste_order();
  static const int kGesteOrderFieldNumber = 3;
  inline ::google::protobuf::int32 geste_order() const;
  inline void set_geste_order(::google::protobuf::int32 value);

  // optional int32 charm_Order = 4;
  inline bool has_charm_order() const;
  inline void clear_charm_order();
  static const int kCharmOrderFieldNumber = 4;
  inline ::google::protobuf::int32 charm_order() const;
  inline void set_charm_order(::google::protobuf::int32 value);

  // optional int32 soul_score_Order = 5;
  inline bool has_soul_score_order() const;
  inline void clear_soul_score_order();
  static const int kSoulScoreOrderFieldNumber = 5;
  inline ::google::protobuf::int32 soul_score_order() const;
  inline void set_soul_score_order(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:com.road.yishi.proto.player.PlayerOrderMsg)
 private:
  inline void set_has_player_id();
  inline void clear_has_player_id();
  inline void set_has_fight_capacity_order();
  inline void clear_has_fight_capacity_order();
  inline void set_has_geste_order();
  inline void clear_has_geste_order();
  inline void set_has_charm_order();
  inline void clear_has_charm_order();
  inline void set_has_soul_score_order();
  inline void clear_has_soul_score_order();

  ::google::protobuf::int32 player_id_;
  ::google::protobuf::int32 fight_capacity_order_;
  ::google::protobuf::int32 geste_order_;
  ::google::protobuf::int32 charm_order_;
  ::google::protobuf::int32 soul_score_order_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_PlayerOrder_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_PlayerOrder_2eproto();
  #endif
  friend void protobuf_AssignDesc_PlayerOrder_2eproto();
  friend void protobuf_ShutdownFile_PlayerOrder_2eproto();

  void InitAsDefaultInstance();
  static PlayerOrderMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// PlayerOrderMsg

// optional int32 player_id = 1;
inline bool PlayerOrderMsg::has_player_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PlayerOrderMsg::set_has_player_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PlayerOrderMsg::clear_has_player_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PlayerOrderMsg::clear_player_id() {
  player_id_ = 0;
  clear_has_player_id();
}
inline ::google::protobuf::int32 PlayerOrderMsg::player_id() const {
  return player_id_;
}
inline void PlayerOrderMsg::set_player_id(::google::protobuf::int32 value) {
  set_has_player_id();
  player_id_ = value;
}

// optional int32 fight_capacity_order = 2;
inline bool PlayerOrderMsg::has_fight_capacity_order() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PlayerOrderMsg::set_has_fight_capacity_order() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PlayerOrderMsg::clear_has_fight_capacity_order() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PlayerOrderMsg::clear_fight_capacity_order() {
  fight_capacity_order_ = 0;
  clear_has_fight_capacity_order();
}
inline ::google::protobuf::int32 PlayerOrderMsg::fight_capacity_order() const {
  return fight_capacity_order_;
}
inline void PlayerOrderMsg::set_fight_capacity_order(::google::protobuf::int32 value) {
  set_has_fight_capacity_order();
  fight_capacity_order_ = value;
}

// optional int32 geste_Order = 3;
inline bool PlayerOrderMsg::has_geste_order() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PlayerOrderMsg::set_has_geste_order() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PlayerOrderMsg::clear_has_geste_order() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PlayerOrderMsg::clear_geste_order() {
  geste_order_ = 0;
  clear_has_geste_order();
}
inline ::google::protobuf::int32 PlayerOrderMsg::geste_order() const {
  return geste_order_;
}
inline void PlayerOrderMsg::set_geste_order(::google::protobuf::int32 value) {
  set_has_geste_order();
  geste_order_ = value;
}

// optional int32 charm_Order = 4;
inline bool PlayerOrderMsg::has_charm_order() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PlayerOrderMsg::set_has_charm_order() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PlayerOrderMsg::clear_has_charm_order() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PlayerOrderMsg::clear_charm_order() {
  charm_order_ = 0;
  clear_has_charm_order();
}
inline ::google::protobuf::int32 PlayerOrderMsg::charm_order() const {
  return charm_order_;
}
inline void PlayerOrderMsg::set_charm_order(::google::protobuf::int32 value) {
  set_has_charm_order();
  charm_order_ = value;
}

// optional int32 soul_score_Order = 5;
inline bool PlayerOrderMsg::has_soul_score_order() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PlayerOrderMsg::set_has_soul_score_order() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PlayerOrderMsg::clear_has_soul_score_order() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PlayerOrderMsg::clear_soul_score_order() {
  soul_score_order_ = 0;
  clear_has_soul_score_order();
}
inline ::google::protobuf::int32 PlayerOrderMsg::soul_score_order() const {
  return soul_score_order_;
}
inline void PlayerOrderMsg::set_soul_score_order(::google::protobuf::int32 value) {
  set_has_soul_score_order();
  soul_score_order_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PlayerOrder_2eproto__INCLUDED
