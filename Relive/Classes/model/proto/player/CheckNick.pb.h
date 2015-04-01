// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CheckNick.proto

#ifndef PROTOBUF_CheckNick_2eproto__INCLUDED
#define PROTOBUF_CheckNick_2eproto__INCLUDED

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
void  protobuf_AddDesc_CheckNick_2eproto();
void protobuf_AssignDesc_CheckNick_2eproto();
void protobuf_ShutdownFile_CheckNick_2eproto();

class CheckNickMsg;

// ===================================================================

class CheckNickMsg : public ::google::protobuf::MessageLite {
 public:
  CheckNickMsg();
  virtual ~CheckNickMsg();

  CheckNickMsg(const CheckNickMsg& from);

  inline CheckNickMsg& operator=(const CheckNickMsg& from) {
    CopyFrom(from);
    return *this;
  }

  static const CheckNickMsg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CheckNickMsg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CheckNickMsg* other);

  // implements Message ----------------------------------------------

  CheckNickMsg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CheckNickMsg& from);
  void MergeFrom(const CheckNickMsg& from);
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

  // optional string nick_name = 2;
  inline bool has_nick_name() const;
  inline void clear_nick_name();
  static const int kNickNameFieldNumber = 2;
  inline const ::std::string& nick_name() const;
  inline void set_nick_name(const ::std::string& value);
  inline void set_nick_name(const char* value);
  inline void set_nick_name(const char* value, size_t size);
  inline ::std::string* mutable_nick_name();
  inline ::std::string* release_nick_name();
  inline void set_allocated_nick_name(::std::string* nick_name);

  // @@protoc_insertion_point(class_scope:com.road.yishi.proto.player.CheckNickMsg)
 private:
  inline void set_has_player_id();
  inline void clear_has_player_id();
  inline void set_has_nick_name();
  inline void clear_has_nick_name();

  ::std::string* nick_name_;
  ::google::protobuf::int32 player_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_CheckNick_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_CheckNick_2eproto();
  #endif
  friend void protobuf_AssignDesc_CheckNick_2eproto();
  friend void protobuf_ShutdownFile_CheckNick_2eproto();

  void InitAsDefaultInstance();
  static CheckNickMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// CheckNickMsg

// optional int32 player_id = 1;
inline bool CheckNickMsg::has_player_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CheckNickMsg::set_has_player_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CheckNickMsg::clear_has_player_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CheckNickMsg::clear_player_id() {
  player_id_ = 0;
  clear_has_player_id();
}
inline ::google::protobuf::int32 CheckNickMsg::player_id() const {
  return player_id_;
}
inline void CheckNickMsg::set_player_id(::google::protobuf::int32 value) {
  set_has_player_id();
  player_id_ = value;
}

// optional string nick_name = 2;
inline bool CheckNickMsg::has_nick_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CheckNickMsg::set_has_nick_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CheckNickMsg::clear_has_nick_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CheckNickMsg::clear_nick_name() {
  if (nick_name_ != &::google::protobuf::internal::kEmptyString) {
    nick_name_->clear();
  }
  clear_has_nick_name();
}
inline const ::std::string& CheckNickMsg::nick_name() const {
  return *nick_name_;
}
inline void CheckNickMsg::set_nick_name(const ::std::string& value) {
  set_has_nick_name();
  if (nick_name_ == &::google::protobuf::internal::kEmptyString) {
    nick_name_ = new ::std::string;
  }
  nick_name_->assign(value);
}
inline void CheckNickMsg::set_nick_name(const char* value) {
  set_has_nick_name();
  if (nick_name_ == &::google::protobuf::internal::kEmptyString) {
    nick_name_ = new ::std::string;
  }
  nick_name_->assign(value);
}
inline void CheckNickMsg::set_nick_name(const char* value, size_t size) {
  set_has_nick_name();
  if (nick_name_ == &::google::protobuf::internal::kEmptyString) {
    nick_name_ = new ::std::string;
  }
  nick_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CheckNickMsg::mutable_nick_name() {
  set_has_nick_name();
  if (nick_name_ == &::google::protobuf::internal::kEmptyString) {
    nick_name_ = new ::std::string;
  }
  return nick_name_;
}
inline ::std::string* CheckNickMsg::release_nick_name() {
  clear_has_nick_name();
  if (nick_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = nick_name_;
    nick_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CheckNickMsg::set_allocated_nick_name(::std::string* nick_name) {
  if (nick_name_ != &::google::protobuf::internal::kEmptyString) {
    delete nick_name_;
  }
  if (nick_name) {
    set_has_nick_name();
    nick_name_ = nick_name;
  } else {
    clear_has_nick_name();
    nick_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CheckNick_2eproto__INCLUDED