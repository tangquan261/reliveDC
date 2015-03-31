// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Appells.proto

#ifndef PROTOBUF_Appells_2eproto__INCLUDED
#define PROTOBUF_Appells_2eproto__INCLUDED

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
void  protobuf_AddDesc_Appells_2eproto();
void protobuf_AssignDesc_Appells_2eproto();
void protobuf_ShutdownFile_Appells_2eproto();

class AppellsMsg;
class AppellInfoMsg;

// ===================================================================

class AppellsMsg : public ::google::protobuf::MessageLite {
 public:
  AppellsMsg();
  virtual ~AppellsMsg();

  AppellsMsg(const AppellsMsg& from);

  inline AppellsMsg& operator=(const AppellsMsg& from) {
    CopyFrom(from);
    return *this;
  }

  static const AppellsMsg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const AppellsMsg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(AppellsMsg* other);

  // implements Message ----------------------------------------------

  AppellsMsg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const AppellsMsg& from);
  void MergeFrom(const AppellsMsg& from);
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

  // repeated .com.road.yishi.proto.player.AppellInfoMsg appells = 1;
  inline int appells_size() const;
  inline void clear_appells();
  static const int kAppellsFieldNumber = 1;
  inline const ::com::road::yishi::proto::player::AppellInfoMsg& appells(int index) const;
  inline ::com::road::yishi::proto::player::AppellInfoMsg* mutable_appells(int index);
  inline ::com::road::yishi::proto::player::AppellInfoMsg* add_appells();
  inline const ::google::protobuf::RepeatedPtrField< ::com::road::yishi::proto::player::AppellInfoMsg >&
      appells() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::road::yishi::proto::player::AppellInfoMsg >*
      mutable_appells();

  // @@protoc_insertion_point(class_scope:com.road.yishi.proto.player.AppellsMsg)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::road::yishi::proto::player::AppellInfoMsg > appells_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_Appells_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_Appells_2eproto();
  #endif
  friend void protobuf_AssignDesc_Appells_2eproto();
  friend void protobuf_ShutdownFile_Appells_2eproto();

  void InitAsDefaultInstance();
  static AppellsMsg* default_instance_;
};
// -------------------------------------------------------------------

class AppellInfoMsg : public ::google::protobuf::MessageLite {
 public:
  AppellInfoMsg();
  virtual ~AppellInfoMsg();

  AppellInfoMsg(const AppellInfoMsg& from);

  inline AppellInfoMsg& operator=(const AppellInfoMsg& from) {
    CopyFrom(from);
    return *this;
  }

  static const AppellInfoMsg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const AppellInfoMsg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(AppellInfoMsg* other);

  // implements Message ----------------------------------------------

  AppellInfoMsg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const AppellInfoMsg& from);
  void MergeFrom(const AppellInfoMsg& from);
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

  // optional int32 appellId = 1;
  inline bool has_appellid() const;
  inline void clear_appellid();
  static const int kAppellIdFieldNumber = 1;
  inline ::google::protobuf::int32 appellid() const;
  inline void set_appellid(::google::protobuf::int32 value);

  // optional bool isGet = 2;
  inline bool has_isget() const;
  inline void clear_isget();
  static const int kIsGetFieldNumber = 2;
  inline bool isget() const;
  inline void set_isget(bool value);

  // optional string value = 3;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 3;
  inline const ::std::string& value() const;
  inline void set_value(const ::std::string& value);
  inline void set_value(const char* value);
  inline void set_value(const char* value, size_t size);
  inline ::std::string* mutable_value();
  inline ::std::string* release_value();
  inline void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:com.road.yishi.proto.player.AppellInfoMsg)
 private:
  inline void set_has_appellid();
  inline void clear_has_appellid();
  inline void set_has_isget();
  inline void clear_has_isget();
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::int32 appellid_;
  bool isget_;
  ::std::string* value_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_Appells_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_Appells_2eproto();
  #endif
  friend void protobuf_AssignDesc_Appells_2eproto();
  friend void protobuf_ShutdownFile_Appells_2eproto();

  void InitAsDefaultInstance();
  static AppellInfoMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// AppellsMsg

// repeated .com.road.yishi.proto.player.AppellInfoMsg appells = 1;
inline int AppellsMsg::appells_size() const {
  return appells_.size();
}
inline void AppellsMsg::clear_appells() {
  appells_.Clear();
}
inline const ::com::road::yishi::proto::player::AppellInfoMsg& AppellsMsg::appells(int index) const {
  return appells_.Get(index);
}
inline ::com::road::yishi::proto::player::AppellInfoMsg* AppellsMsg::mutable_appells(int index) {
  return appells_.Mutable(index);
}
inline ::com::road::yishi::proto::player::AppellInfoMsg* AppellsMsg::add_appells() {
  return appells_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::road::yishi::proto::player::AppellInfoMsg >&
AppellsMsg::appells() const {
  return appells_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::road::yishi::proto::player::AppellInfoMsg >*
AppellsMsg::mutable_appells() {
  return &appells_;
}

// -------------------------------------------------------------------

// AppellInfoMsg

// optional int32 appellId = 1;
inline bool AppellInfoMsg::has_appellid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AppellInfoMsg::set_has_appellid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AppellInfoMsg::clear_has_appellid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AppellInfoMsg::clear_appellid() {
  appellid_ = 0;
  clear_has_appellid();
}
inline ::google::protobuf::int32 AppellInfoMsg::appellid() const {
  return appellid_;
}
inline void AppellInfoMsg::set_appellid(::google::protobuf::int32 value) {
  set_has_appellid();
  appellid_ = value;
}

// optional bool isGet = 2;
inline bool AppellInfoMsg::has_isget() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AppellInfoMsg::set_has_isget() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AppellInfoMsg::clear_has_isget() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AppellInfoMsg::clear_isget() {
  isget_ = false;
  clear_has_isget();
}
inline bool AppellInfoMsg::isget() const {
  return isget_;
}
inline void AppellInfoMsg::set_isget(bool value) {
  set_has_isget();
  isget_ = value;
}

// optional string value = 3;
inline bool AppellInfoMsg::has_value() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AppellInfoMsg::set_has_value() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AppellInfoMsg::clear_has_value() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AppellInfoMsg::clear_value() {
  if (value_ != &::google::protobuf::internal::kEmptyString) {
    value_->clear();
  }
  clear_has_value();
}
inline const ::std::string& AppellInfoMsg::value() const {
  return *value_;
}
inline void AppellInfoMsg::set_value(const ::std::string& value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void AppellInfoMsg::set_value(const char* value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void AppellInfoMsg::set_value(const char* value, size_t size) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* AppellInfoMsg::mutable_value() {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  return value_;
}
inline ::std::string* AppellInfoMsg::release_value() {
  clear_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = value_;
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void AppellInfoMsg::set_allocated_value(::std::string* value) {
  if (value_ != &::google::protobuf::internal::kEmptyString) {
    delete value_;
  }
  if (value) {
    set_has_value();
    value_ = value;
  } else {
    clear_has_value();
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Appells_2eproto__INCLUDED
