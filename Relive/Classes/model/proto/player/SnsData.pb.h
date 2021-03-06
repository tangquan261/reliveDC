// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SnsData.proto

#ifndef PROTOBUF_SnsData_2eproto__INCLUDED
#define PROTOBUF_SnsData_2eproto__INCLUDED

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
void  protobuf_AddDesc_SnsData_2eproto();
void protobuf_AssignDesc_SnsData_2eproto();
void protobuf_ShutdownFile_SnsData_2eproto();

class SnsRspMsg;

// ===================================================================

class SnsRspMsg : public ::google::protobuf::MessageLite {
 public:
  SnsRspMsg();
  virtual ~SnsRspMsg();

  SnsRspMsg(const SnsRspMsg& from);

  inline SnsRspMsg& operator=(const SnsRspMsg& from) {
    CopyFrom(from);
    return *this;
  }

  static const SnsRspMsg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const SnsRspMsg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(SnsRspMsg* other);

  // implements Message ----------------------------------------------

  SnsRspMsg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const SnsRspMsg& from);
  void MergeFrom(const SnsRspMsg& from);
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

  // optional int32 type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional string data = 2;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 2;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const char* value, size_t size);
  inline ::std::string* mutable_data();
  inline ::std::string* release_data();
  inline void set_allocated_data(::std::string* data);

  // optional string md5 = 3;
  inline bool has_md5() const;
  inline void clear_md5();
  static const int kMd5FieldNumber = 3;
  inline const ::std::string& md5() const;
  inline void set_md5(const ::std::string& value);
  inline void set_md5(const char* value);
  inline void set_md5(const char* value, size_t size);
  inline ::std::string* mutable_md5();
  inline ::std::string* release_md5();
  inline void set_allocated_md5(::std::string* md5);

  // optional string site = 4;
  inline bool has_site() const;
  inline void clear_site();
  static const int kSiteFieldNumber = 4;
  inline const ::std::string& site() const;
  inline void set_site(const ::std::string& value);
  inline void set_site(const char* value);
  inline void set_site(const char* value, size_t size);
  inline ::std::string* mutable_site();
  inline ::std::string* release_site();
  inline void set_allocated_site(::std::string* site);

  // @@protoc_insertion_point(class_scope:com.road.yishi.proto.player.SnsRspMsg)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_data();
  inline void clear_has_data();
  inline void set_has_md5();
  inline void clear_has_md5();
  inline void set_has_site();
  inline void clear_has_site();

  ::std::string* data_;
  ::std::string* md5_;
  ::std::string* site_;
  ::google::protobuf::int32 type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_SnsData_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_SnsData_2eproto();
  #endif
  friend void protobuf_AssignDesc_SnsData_2eproto();
  friend void protobuf_ShutdownFile_SnsData_2eproto();

  void InitAsDefaultInstance();
  static SnsRspMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// SnsRspMsg

// optional int32 type = 1;
inline bool SnsRspMsg::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SnsRspMsg::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SnsRspMsg::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SnsRspMsg::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 SnsRspMsg::type() const {
  return type_;
}
inline void SnsRspMsg::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional string data = 2;
inline bool SnsRspMsg::has_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SnsRspMsg::set_has_data() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SnsRspMsg::clear_has_data() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SnsRspMsg::clear_data() {
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    data_->clear();
  }
  clear_has_data();
}
inline const ::std::string& SnsRspMsg::data() const {
  return *data_;
}
inline void SnsRspMsg::set_data(const ::std::string& value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void SnsRspMsg::set_data(const char* value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void SnsRspMsg::set_data(const char* value, size_t size) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SnsRspMsg::mutable_data() {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  return data_;
}
inline ::std::string* SnsRspMsg::release_data() {
  clear_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = data_;
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SnsRspMsg::set_allocated_data(::std::string* data) {
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    delete data_;
  }
  if (data) {
    set_has_data();
    data_ = data;
  } else {
    clear_has_data();
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string md5 = 3;
inline bool SnsRspMsg::has_md5() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SnsRspMsg::set_has_md5() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SnsRspMsg::clear_has_md5() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SnsRspMsg::clear_md5() {
  if (md5_ != &::google::protobuf::internal::kEmptyString) {
    md5_->clear();
  }
  clear_has_md5();
}
inline const ::std::string& SnsRspMsg::md5() const {
  return *md5_;
}
inline void SnsRspMsg::set_md5(const ::std::string& value) {
  set_has_md5();
  if (md5_ == &::google::protobuf::internal::kEmptyString) {
    md5_ = new ::std::string;
  }
  md5_->assign(value);
}
inline void SnsRspMsg::set_md5(const char* value) {
  set_has_md5();
  if (md5_ == &::google::protobuf::internal::kEmptyString) {
    md5_ = new ::std::string;
  }
  md5_->assign(value);
}
inline void SnsRspMsg::set_md5(const char* value, size_t size) {
  set_has_md5();
  if (md5_ == &::google::protobuf::internal::kEmptyString) {
    md5_ = new ::std::string;
  }
  md5_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SnsRspMsg::mutable_md5() {
  set_has_md5();
  if (md5_ == &::google::protobuf::internal::kEmptyString) {
    md5_ = new ::std::string;
  }
  return md5_;
}
inline ::std::string* SnsRspMsg::release_md5() {
  clear_has_md5();
  if (md5_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = md5_;
    md5_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SnsRspMsg::set_allocated_md5(::std::string* md5) {
  if (md5_ != &::google::protobuf::internal::kEmptyString) {
    delete md5_;
  }
  if (md5) {
    set_has_md5();
    md5_ = md5;
  } else {
    clear_has_md5();
    md5_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string site = 4;
inline bool SnsRspMsg::has_site() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SnsRspMsg::set_has_site() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SnsRspMsg::clear_has_site() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SnsRspMsg::clear_site() {
  if (site_ != &::google::protobuf::internal::kEmptyString) {
    site_->clear();
  }
  clear_has_site();
}
inline const ::std::string& SnsRspMsg::site() const {
  return *site_;
}
inline void SnsRspMsg::set_site(const ::std::string& value) {
  set_has_site();
  if (site_ == &::google::protobuf::internal::kEmptyString) {
    site_ = new ::std::string;
  }
  site_->assign(value);
}
inline void SnsRspMsg::set_site(const char* value) {
  set_has_site();
  if (site_ == &::google::protobuf::internal::kEmptyString) {
    site_ = new ::std::string;
  }
  site_->assign(value);
}
inline void SnsRspMsg::set_site(const char* value, size_t size) {
  set_has_site();
  if (site_ == &::google::protobuf::internal::kEmptyString) {
    site_ = new ::std::string;
  }
  site_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SnsRspMsg::mutable_site() {
  set_has_site();
  if (site_ == &::google::protobuf::internal::kEmptyString) {
    site_ = new ::std::string;
  }
  return site_;
}
inline ::std::string* SnsRspMsg::release_site() {
  clear_has_site();
  if (site_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = site_;
    site_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SnsRspMsg::set_allocated_site(::std::string* site) {
  if (site_ != &::google::protobuf::internal::kEmptyString) {
    delete site_;
  }
  if (site) {
    set_has_site();
    site_ = site;
  } else {
    clear_has_site();
    site_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SnsData_2eproto__INCLUDED
