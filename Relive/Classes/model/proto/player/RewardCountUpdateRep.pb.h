// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RewardCountUpdateRep.proto

#ifndef PROTOBUF_RewardCountUpdateRep_2eproto__INCLUDED
#define PROTOBUF_RewardCountUpdateRep_2eproto__INCLUDED

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
void  protobuf_AddDesc_RewardCountUpdateRep_2eproto();
void protobuf_AssignDesc_RewardCountUpdateRep_2eproto();
void protobuf_ShutdownFile_RewardCountUpdateRep_2eproto();

class RewardCountUpdateRepMsg;

// ===================================================================

class RewardCountUpdateRepMsg : public ::google::protobuf::MessageLite {
 public:
  RewardCountUpdateRepMsg();
  virtual ~RewardCountUpdateRepMsg();

  RewardCountUpdateRepMsg(const RewardCountUpdateRepMsg& from);

  inline RewardCountUpdateRepMsg& operator=(const RewardCountUpdateRepMsg& from) {
    CopyFrom(from);
    return *this;
  }

  static const RewardCountUpdateRepMsg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const RewardCountUpdateRepMsg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(RewardCountUpdateRepMsg* other);

  // implements Message ----------------------------------------------

  RewardCountUpdateRepMsg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const RewardCountUpdateRepMsg& from);
  void MergeFrom(const RewardCountUpdateRepMsg& from);
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

  // optional int32 reward_count = 1;
  inline bool has_reward_count() const;
  inline void clear_reward_count();
  static const int kRewardCountFieldNumber = 1;
  inline ::google::protobuf::int32 reward_count() const;
  inline void set_reward_count(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:com.road.yishi.proto.player.RewardCountUpdateRepMsg)
 private:
  inline void set_has_reward_count();
  inline void clear_has_reward_count();

  ::google::protobuf::int32 reward_count_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_RewardCountUpdateRep_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_RewardCountUpdateRep_2eproto();
  #endif
  friend void protobuf_AssignDesc_RewardCountUpdateRep_2eproto();
  friend void protobuf_ShutdownFile_RewardCountUpdateRep_2eproto();

  void InitAsDefaultInstance();
  static RewardCountUpdateRepMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// RewardCountUpdateRepMsg

// optional int32 reward_count = 1;
inline bool RewardCountUpdateRepMsg::has_reward_count() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RewardCountUpdateRepMsg::set_has_reward_count() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RewardCountUpdateRepMsg::clear_has_reward_count() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RewardCountUpdateRepMsg::clear_reward_count() {
  reward_count_ = 0;
  clear_has_reward_count();
}
inline ::google::protobuf::int32 RewardCountUpdateRepMsg::reward_count() const {
  return reward_count_;
}
inline void RewardCountUpdateRepMsg::set_reward_count(::google::protobuf::int32 value) {
  set_has_reward_count();
  reward_count_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_RewardCountUpdateRep_2eproto__INCLUDED
