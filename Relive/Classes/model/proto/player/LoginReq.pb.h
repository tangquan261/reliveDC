// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LoginReq.proto

#ifndef PROTOBUF_LoginReq_2eproto__INCLUDED
#define PROTOBUF_LoginReq_2eproto__INCLUDED

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
void  protobuf_AddDesc_LoginReq_2eproto();
void protobuf_AssignDesc_LoginReq_2eproto();
void protobuf_ShutdownFile_LoginReq_2eproto();

class LoginReqMsg;

// ===================================================================

class LoginReqMsg : public ::google::protobuf::MessageLite {
 public:
  LoginReqMsg();
  virtual ~LoginReqMsg();

  LoginReqMsg(const LoginReqMsg& from);

  inline LoginReqMsg& operator=(const LoginReqMsg& from) {
    CopyFrom(from);
    return *this;
  }

  static const LoginReqMsg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const LoginReqMsg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(LoginReqMsg* other);

  // implements Message ----------------------------------------------

  LoginReqMsg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const LoginReqMsg& from);
  void MergeFrom(const LoginReqMsg& from);
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

  // optional string key = 2;
  inline bool has_key() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 2;
  inline const ::std::string& key() const;
  inline void set_key(const ::std::string& value);
  inline void set_key(const char* value);
  inline void set_key(const char* value, size_t size);
  inline ::std::string* mutable_key();
  inline ::std::string* release_key();
  inline void set_allocated_key(::std::string* key);

  // repeated int32 ekeys = 3;
  inline int ekeys_size() const;
  inline void clear_ekeys();
  static const int kEkeysFieldNumber = 3;
  inline ::google::protobuf::int32 ekeys(int index) const;
  inline void set_ekeys(int index, ::google::protobuf::int32 value);
  inline void add_ekeys(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      ekeys() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_ekeys();

  // @@protoc_insertion_point(class_scope:com.road.yishi.proto.player.LoginReqMsg)
 private:
  inline void set_has_player_id();
  inline void clear_has_player_id();
  inline void set_has_key();
  inline void clear_has_key();

  ::std::string* key_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > ekeys_;
  ::google::protobuf::int32 player_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_LoginReq_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_LoginReq_2eproto();
  #endif
  friend void protobuf_AssignDesc_LoginReq_2eproto();
  friend void protobuf_ShutdownFile_LoginReq_2eproto();

  void InitAsDefaultInstance();
  static LoginReqMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// LoginReqMsg

// optional int32 player_id = 1;
inline bool LoginReqMsg::has_player_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LoginReqMsg::set_has_player_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LoginReqMsg::clear_has_player_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LoginReqMsg::clear_player_id() {
  player_id_ = 0;
  clear_has_player_id();
}
inline ::google::protobuf::int32 LoginReqMsg::player_id() const {
  return player_id_;
}
inline void LoginReqMsg::set_player_id(::google::protobuf::int32 value) {
  set_has_player_id();
  player_id_ = value;
}

// optional string key = 2;
inline bool LoginReqMsg::has_key() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LoginReqMsg::set_has_key() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LoginReqMsg::clear_has_key() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LoginReqMsg::clear_key() {
  if (key_ != &::google::protobuf::internal::kEmptyString) {
    key_->clear();
  }
  clear_has_key();
}
inline const ::std::string& LoginReqMsg::key() const {
  return *key_;
}
inline void LoginReqMsg::set_key(const ::std::string& value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    key_ = new ::std::string;
  }
  key_->assign(value);
}
inline void LoginReqMsg::set_key(const char* value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    key_ = new ::std::string;
  }
  key_->assign(value);
}
inline void LoginReqMsg::set_key(const char* value, size_t size) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    key_ = new ::std::string;
  }
  key_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginReqMsg::mutable_key() {
  set_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    key_ = new ::std::string;
  }
  return key_;
}
inline ::std::string* LoginReqMsg::release_key() {
  clear_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = key_;
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginReqMsg::set_allocated_key(::std::string* key) {
  if (key_ != &::google::protobuf::internal::kEmptyString) {
    delete key_;
  }
  if (key) {
    set_has_key();
    key_ = key;
  } else {
    clear_has_key();
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated int32 ekeys = 3;
inline int LoginReqMsg::ekeys_size() const {
  return ekeys_.size();
}
inline void LoginReqMsg::clear_ekeys() {
  ekeys_.Clear();
}
inline ::google::protobuf::int32 LoginReqMsg::ekeys(int index) const {
  return ekeys_.Get(index);
}
inline void LoginReqMsg::set_ekeys(int index, ::google::protobuf::int32 value) {
  ekeys_.Set(index, value);
}
inline void LoginReqMsg::add_ekeys(::google::protobuf::int32 value) {
  ekeys_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
LoginReqMsg::ekeys() const {
  return ekeys_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
LoginReqMsg::mutable_ekeys() {
  return &ekeys_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_LoginReq_2eproto__INCLUDED
