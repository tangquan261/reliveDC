// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerSignReq.proto

#ifndef PROTOBUF_PlayerSignReq_2eproto__INCLUDED
#define PROTOBUF_PlayerSignReq_2eproto__INCLUDED

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
void  protobuf_AddDesc_PlayerSignReq_2eproto();
void protobuf_AssignDesc_PlayerSignReq_2eproto();
void protobuf_ShutdownFile_PlayerSignReq_2eproto();

class PlayerSignReqMsg;

// ===================================================================

class PlayerSignReqMsg : public ::google::protobuf::MessageLite {
 public:
  PlayerSignReqMsg();
  virtual ~PlayerSignReqMsg();

  PlayerSignReqMsg(const PlayerSignReqMsg& from);

  inline PlayerSignReqMsg& operator=(const PlayerSignReqMsg& from) {
    CopyFrom(from);
    return *this;
  }

  static const PlayerSignReqMsg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PlayerSignReqMsg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PlayerSignReqMsg* other);

  // implements Message ----------------------------------------------

  PlayerSignReqMsg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PlayerSignReqMsg& from);
  void MergeFrom(const PlayerSignReqMsg& from);
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

  // optional bool optType = 1;
  inline bool has_opttype() const;
  inline void clear_opttype();
  static const int kOptTypeFieldNumber = 1;
  inline bool opttype() const;
  inline void set_opttype(bool value);

  // optional int32 prizeSite = 2;
  inline bool has_prizesite() const;
  inline void clear_prizesite();
  static const int kPrizeSiteFieldNumber = 2;
  inline ::google::protobuf::int32 prizesite() const;
  inline void set_prizesite(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:com.road.yishi.proto.player.PlayerSignReqMsg)
 private:
  inline void set_has_opttype();
  inline void clear_has_opttype();
  inline void set_has_prizesite();
  inline void clear_has_prizesite();

  bool opttype_;
  ::google::protobuf::int32 prizesite_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_PlayerSignReq_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_PlayerSignReq_2eproto();
  #endif
  friend void protobuf_AssignDesc_PlayerSignReq_2eproto();
  friend void protobuf_ShutdownFile_PlayerSignReq_2eproto();

  void InitAsDefaultInstance();
  static PlayerSignReqMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// PlayerSignReqMsg

// optional bool optType = 1;
inline bool PlayerSignReqMsg::has_opttype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PlayerSignReqMsg::set_has_opttype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PlayerSignReqMsg::clear_has_opttype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PlayerSignReqMsg::clear_opttype() {
  opttype_ = false;
  clear_has_opttype();
}
inline bool PlayerSignReqMsg::opttype() const {
  return opttype_;
}
inline void PlayerSignReqMsg::set_opttype(bool value) {
  set_has_opttype();
  opttype_ = value;
}

// optional int32 prizeSite = 2;
inline bool PlayerSignReqMsg::has_prizesite() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PlayerSignReqMsg::set_has_prizesite() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PlayerSignReqMsg::clear_has_prizesite() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PlayerSignReqMsg::clear_prizesite() {
  prizesite_ = 0;
  clear_has_prizesite();
}
inline ::google::protobuf::int32 PlayerSignReqMsg::prizesite() const {
  return prizesite_;
}
inline void PlayerSignReqMsg::set_prizesite(::google::protobuf::int32 value) {
  set_has_prizesite();
  prizesite_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PlayerSignReq_2eproto__INCLUDED