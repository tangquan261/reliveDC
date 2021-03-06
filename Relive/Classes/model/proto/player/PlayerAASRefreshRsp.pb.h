// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerAASRefreshRsp.proto

#ifndef PROTOBUF_PlayerAASRefreshRsp_2eproto__INCLUDED
#define PROTOBUF_PlayerAASRefreshRsp_2eproto__INCLUDED

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
void  protobuf_AddDesc_PlayerAASRefreshRsp_2eproto();
void protobuf_AssignDesc_PlayerAASRefreshRsp_2eproto();
void protobuf_ShutdownFile_PlayerAASRefreshRsp_2eproto();

class PlayerAASRefreshMsg;

// ===================================================================

class PlayerAASRefreshMsg : public ::google::protobuf::MessageLite {
 public:
  PlayerAASRefreshMsg();
  virtual ~PlayerAASRefreshMsg();

  PlayerAASRefreshMsg(const PlayerAASRefreshMsg& from);

  inline PlayerAASRefreshMsg& operator=(const PlayerAASRefreshMsg& from) {
    CopyFrom(from);
    return *this;
  }

  static const PlayerAASRefreshMsg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PlayerAASRefreshMsg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PlayerAASRefreshMsg* other);

  // implements Message ----------------------------------------------

  PlayerAASRefreshMsg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PlayerAASRefreshMsg& from);
  void MergeFrom(const PlayerAASRefreshMsg& from);
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

  // optional int32 aasOnlineTime = 1;
  inline bool has_aasonlinetime() const;
  inline void clear_aasonlinetime();
  static const int kAasOnlineTimeFieldNumber = 1;
  inline ::google::protobuf::int32 aasonlinetime() const;
  inline void set_aasonlinetime(::google::protobuf::int32 value);

  // optional bool isCloseAAS = 2;
  inline bool has_iscloseaas() const;
  inline void clear_iscloseaas();
  static const int kIsCloseAASFieldNumber = 2;
  inline bool iscloseaas() const;
  inline void set_iscloseaas(bool value);

  // optional bool sysSwitch = 3;
  inline bool has_sysswitch() const;
  inline void clear_sysswitch();
  static const int kSysSwitchFieldNumber = 3;
  inline bool sysswitch() const;
  inline void set_sysswitch(bool value);

  // @@protoc_insertion_point(class_scope:com.road.yishi.proto.player.PlayerAASRefreshMsg)
 private:
  inline void set_has_aasonlinetime();
  inline void clear_has_aasonlinetime();
  inline void set_has_iscloseaas();
  inline void clear_has_iscloseaas();
  inline void set_has_sysswitch();
  inline void clear_has_sysswitch();

  ::google::protobuf::int32 aasonlinetime_;
  bool iscloseaas_;
  bool sysswitch_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_PlayerAASRefreshRsp_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_PlayerAASRefreshRsp_2eproto();
  #endif
  friend void protobuf_AssignDesc_PlayerAASRefreshRsp_2eproto();
  friend void protobuf_ShutdownFile_PlayerAASRefreshRsp_2eproto();

  void InitAsDefaultInstance();
  static PlayerAASRefreshMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// PlayerAASRefreshMsg

// optional int32 aasOnlineTime = 1;
inline bool PlayerAASRefreshMsg::has_aasonlinetime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PlayerAASRefreshMsg::set_has_aasonlinetime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PlayerAASRefreshMsg::clear_has_aasonlinetime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PlayerAASRefreshMsg::clear_aasonlinetime() {
  aasonlinetime_ = 0;
  clear_has_aasonlinetime();
}
inline ::google::protobuf::int32 PlayerAASRefreshMsg::aasonlinetime() const {
  return aasonlinetime_;
}
inline void PlayerAASRefreshMsg::set_aasonlinetime(::google::protobuf::int32 value) {
  set_has_aasonlinetime();
  aasonlinetime_ = value;
}

// optional bool isCloseAAS = 2;
inline bool PlayerAASRefreshMsg::has_iscloseaas() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PlayerAASRefreshMsg::set_has_iscloseaas() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PlayerAASRefreshMsg::clear_has_iscloseaas() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PlayerAASRefreshMsg::clear_iscloseaas() {
  iscloseaas_ = false;
  clear_has_iscloseaas();
}
inline bool PlayerAASRefreshMsg::iscloseaas() const {
  return iscloseaas_;
}
inline void PlayerAASRefreshMsg::set_iscloseaas(bool value) {
  set_has_iscloseaas();
  iscloseaas_ = value;
}

// optional bool sysSwitch = 3;
inline bool PlayerAASRefreshMsg::has_sysswitch() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PlayerAASRefreshMsg::set_has_sysswitch() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PlayerAASRefreshMsg::clear_has_sysswitch() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PlayerAASRefreshMsg::clear_sysswitch() {
  sysswitch_ = false;
  clear_has_sysswitch();
}
inline bool PlayerAASRefreshMsg::sysswitch() const {
  return sysswitch_;
}
inline void PlayerAASRefreshMsg::set_sysswitch(bool value) {
  set_has_sysswitch();
  sysswitch_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PlayerAASRefreshRsp_2eproto__INCLUDED
