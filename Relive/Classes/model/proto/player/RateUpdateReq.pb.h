// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RateUpdateReq.proto

#ifndef PROTOBUF_RateUpdateReq_2eproto__INCLUDED
#define PROTOBUF_RateUpdateReq_2eproto__INCLUDED

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
void  protobuf_AddDesc_RateUpdateReq_2eproto();
void protobuf_AssignDesc_RateUpdateReq_2eproto();
void protobuf_ShutdownFile_RateUpdateReq_2eproto();

class RateUpdateReqMsg;

// ===================================================================

class RateUpdateReqMsg : public ::google::protobuf::MessageLite {
 public:
  RateUpdateReqMsg();
  virtual ~RateUpdateReqMsg();

  RateUpdateReqMsg(const RateUpdateReqMsg& from);

  inline RateUpdateReqMsg& operator=(const RateUpdateReqMsg& from) {
    CopyFrom(from);
    return *this;
  }

  static const RateUpdateReqMsg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const RateUpdateReqMsg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(RateUpdateReqMsg* other);

  // implements Message ----------------------------------------------

  RateUpdateReqMsg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const RateUpdateReqMsg& from);
  void MergeFrom(const RateUpdateReqMsg& from);
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

  // optional int32 rate = 1;
  inline bool has_rate() const;
  inline void clear_rate();
  static const int kRateFieldNumber = 1;
  inline ::google::protobuf::int32 rate() const;
  inline void set_rate(::google::protobuf::int32 value);

  // optional int32 begin_time = 2;
  inline bool has_begin_time() const;
  inline void clear_begin_time();
  static const int kBeginTimeFieldNumber = 2;
  inline ::google::protobuf::int32 begin_time() const;
  inline void set_begin_time(::google::protobuf::int32 value);

  // optional int32 end_time = 3;
  inline bool has_end_time() const;
  inline void clear_end_time();
  static const int kEndTimeFieldNumber = 3;
  inline ::google::protobuf::int32 end_time() const;
  inline void set_end_time(::google::protobuf::int32 value);

  // optional string beginDay = 4;
  inline bool has_beginday() const;
  inline void clear_beginday();
  static const int kBeginDayFieldNumber = 4;
  inline const ::std::string& beginday() const;
  inline void set_beginday(const ::std::string& value);
  inline void set_beginday(const char* value);
  inline void set_beginday(const char* value, size_t size);
  inline ::std::string* mutable_beginday();
  inline ::std::string* release_beginday();
  inline void set_allocated_beginday(::std::string* beginday);

  // optional string endDay = 5;
  inline bool has_endday() const;
  inline void clear_endday();
  static const int kEndDayFieldNumber = 5;
  inline const ::std::string& endday() const;
  inline void set_endday(const ::std::string& value);
  inline void set_endday(const char* value);
  inline void set_endday(const char* value, size_t size);
  inline ::std::string* mutable_endday();
  inline ::std::string* release_endday();
  inline void set_allocated_endday(::std::string* endday);

  // optional int32 buffer_type = 6;
  inline bool has_buffer_type() const;
  inline void clear_buffer_type();
  static const int kBufferTypeFieldNumber = 6;
  inline ::google::protobuf::int32 buffer_type() const;
  inline void set_buffer_type(::google::protobuf::int32 value);

  // optional string param1 = 7;
  inline bool has_param1() const;
  inline void clear_param1();
  static const int kParam1FieldNumber = 7;
  inline const ::std::string& param1() const;
  inline void set_param1(const ::std::string& value);
  inline void set_param1(const char* value);
  inline void set_param1(const char* value, size_t size);
  inline ::std::string* mutable_param1();
  inline ::std::string* release_param1();
  inline void set_allocated_param1(::std::string* param1);

  // optional string param2 = 8;
  inline bool has_param2() const;
  inline void clear_param2();
  static const int kParam2FieldNumber = 8;
  inline const ::std::string& param2() const;
  inline void set_param2(const ::std::string& value);
  inline void set_param2(const char* value);
  inline void set_param2(const char* value, size_t size);
  inline ::std::string* mutable_param2();
  inline ::std::string* release_param2();
  inline void set_allocated_param2(::std::string* param2);

  // optional string rate_name = 9;
  inline bool has_rate_name() const;
  inline void clear_rate_name();
  static const int kRateNameFieldNumber = 9;
  inline const ::std::string& rate_name() const;
  inline void set_rate_name(const ::std::string& value);
  inline void set_rate_name(const char* value);
  inline void set_rate_name(const char* value, size_t size);
  inline ::std::string* mutable_rate_name();
  inline ::std::string* release_rate_name();
  inline void set_allocated_rate_name(::std::string* rate_name);

  // optional string rate_desc = 10;
  inline bool has_rate_desc() const;
  inline void clear_rate_desc();
  static const int kRateDescFieldNumber = 10;
  inline const ::std::string& rate_desc() const;
  inline void set_rate_desc(const ::std::string& value);
  inline void set_rate_desc(const char* value);
  inline void set_rate_desc(const char* value, size_t size);
  inline ::std::string* mutable_rate_desc();
  inline ::std::string* release_rate_desc();
  inline void set_allocated_rate_desc(::std::string* rate_desc);

  // @@protoc_insertion_point(class_scope:com.road.yishi.proto.player.RateUpdateReqMsg)
 private:
  inline void set_has_rate();
  inline void clear_has_rate();
  inline void set_has_begin_time();
  inline void clear_has_begin_time();
  inline void set_has_end_time();
  inline void clear_has_end_time();
  inline void set_has_beginday();
  inline void clear_has_beginday();
  inline void set_has_endday();
  inline void clear_has_endday();
  inline void set_has_buffer_type();
  inline void clear_has_buffer_type();
  inline void set_has_param1();
  inline void clear_has_param1();
  inline void set_has_param2();
  inline void clear_has_param2();
  inline void set_has_rate_name();
  inline void clear_has_rate_name();
  inline void set_has_rate_desc();
  inline void clear_has_rate_desc();

  ::google::protobuf::int32 rate_;
  ::google::protobuf::int32 begin_time_;
  ::std::string* beginday_;
  ::google::protobuf::int32 end_time_;
  ::google::protobuf::int32 buffer_type_;
  ::std::string* endday_;
  ::std::string* param1_;
  ::std::string* param2_;
  ::std::string* rate_name_;
  ::std::string* rate_desc_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(10 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_RateUpdateReq_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_RateUpdateReq_2eproto();
  #endif
  friend void protobuf_AssignDesc_RateUpdateReq_2eproto();
  friend void protobuf_ShutdownFile_RateUpdateReq_2eproto();

  void InitAsDefaultInstance();
  static RateUpdateReqMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// RateUpdateReqMsg

// optional int32 rate = 1;
inline bool RateUpdateReqMsg::has_rate() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RateUpdateReqMsg::set_has_rate() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RateUpdateReqMsg::clear_has_rate() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RateUpdateReqMsg::clear_rate() {
  rate_ = 0;
  clear_has_rate();
}
inline ::google::protobuf::int32 RateUpdateReqMsg::rate() const {
  return rate_;
}
inline void RateUpdateReqMsg::set_rate(::google::protobuf::int32 value) {
  set_has_rate();
  rate_ = value;
}

// optional int32 begin_time = 2;
inline bool RateUpdateReqMsg::has_begin_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RateUpdateReqMsg::set_has_begin_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RateUpdateReqMsg::clear_has_begin_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RateUpdateReqMsg::clear_begin_time() {
  begin_time_ = 0;
  clear_has_begin_time();
}
inline ::google::protobuf::int32 RateUpdateReqMsg::begin_time() const {
  return begin_time_;
}
inline void RateUpdateReqMsg::set_begin_time(::google::protobuf::int32 value) {
  set_has_begin_time();
  begin_time_ = value;
}

// optional int32 end_time = 3;
inline bool RateUpdateReqMsg::has_end_time() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RateUpdateReqMsg::set_has_end_time() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RateUpdateReqMsg::clear_has_end_time() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RateUpdateReqMsg::clear_end_time() {
  end_time_ = 0;
  clear_has_end_time();
}
inline ::google::protobuf::int32 RateUpdateReqMsg::end_time() const {
  return end_time_;
}
inline void RateUpdateReqMsg::set_end_time(::google::protobuf::int32 value) {
  set_has_end_time();
  end_time_ = value;
}

// optional string beginDay = 4;
inline bool RateUpdateReqMsg::has_beginday() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RateUpdateReqMsg::set_has_beginday() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RateUpdateReqMsg::clear_has_beginday() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RateUpdateReqMsg::clear_beginday() {
  if (beginday_ != &::google::protobuf::internal::kEmptyString) {
    beginday_->clear();
  }
  clear_has_beginday();
}
inline const ::std::string& RateUpdateReqMsg::beginday() const {
  return *beginday_;
}
inline void RateUpdateReqMsg::set_beginday(const ::std::string& value) {
  set_has_beginday();
  if (beginday_ == &::google::protobuf::internal::kEmptyString) {
    beginday_ = new ::std::string;
  }
  beginday_->assign(value);
}
inline void RateUpdateReqMsg::set_beginday(const char* value) {
  set_has_beginday();
  if (beginday_ == &::google::protobuf::internal::kEmptyString) {
    beginday_ = new ::std::string;
  }
  beginday_->assign(value);
}
inline void RateUpdateReqMsg::set_beginday(const char* value, size_t size) {
  set_has_beginday();
  if (beginday_ == &::google::protobuf::internal::kEmptyString) {
    beginday_ = new ::std::string;
  }
  beginday_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RateUpdateReqMsg::mutable_beginday() {
  set_has_beginday();
  if (beginday_ == &::google::protobuf::internal::kEmptyString) {
    beginday_ = new ::std::string;
  }
  return beginday_;
}
inline ::std::string* RateUpdateReqMsg::release_beginday() {
  clear_has_beginday();
  if (beginday_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = beginday_;
    beginday_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void RateUpdateReqMsg::set_allocated_beginday(::std::string* beginday) {
  if (beginday_ != &::google::protobuf::internal::kEmptyString) {
    delete beginday_;
  }
  if (beginday) {
    set_has_beginday();
    beginday_ = beginday;
  } else {
    clear_has_beginday();
    beginday_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string endDay = 5;
inline bool RateUpdateReqMsg::has_endday() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RateUpdateReqMsg::set_has_endday() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RateUpdateReqMsg::clear_has_endday() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RateUpdateReqMsg::clear_endday() {
  if (endday_ != &::google::protobuf::internal::kEmptyString) {
    endday_->clear();
  }
  clear_has_endday();
}
inline const ::std::string& RateUpdateReqMsg::endday() const {
  return *endday_;
}
inline void RateUpdateReqMsg::set_endday(const ::std::string& value) {
  set_has_endday();
  if (endday_ == &::google::protobuf::internal::kEmptyString) {
    endday_ = new ::std::string;
  }
  endday_->assign(value);
}
inline void RateUpdateReqMsg::set_endday(const char* value) {
  set_has_endday();
  if (endday_ == &::google::protobuf::internal::kEmptyString) {
    endday_ = new ::std::string;
  }
  endday_->assign(value);
}
inline void RateUpdateReqMsg::set_endday(const char* value, size_t size) {
  set_has_endday();
  if (endday_ == &::google::protobuf::internal::kEmptyString) {
    endday_ = new ::std::string;
  }
  endday_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RateUpdateReqMsg::mutable_endday() {
  set_has_endday();
  if (endday_ == &::google::protobuf::internal::kEmptyString) {
    endday_ = new ::std::string;
  }
  return endday_;
}
inline ::std::string* RateUpdateReqMsg::release_endday() {
  clear_has_endday();
  if (endday_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = endday_;
    endday_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void RateUpdateReqMsg::set_allocated_endday(::std::string* endday) {
  if (endday_ != &::google::protobuf::internal::kEmptyString) {
    delete endday_;
  }
  if (endday) {
    set_has_endday();
    endday_ = endday;
  } else {
    clear_has_endday();
    endday_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 buffer_type = 6;
inline bool RateUpdateReqMsg::has_buffer_type() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void RateUpdateReqMsg::set_has_buffer_type() {
  _has_bits_[0] |= 0x00000020u;
}
inline void RateUpdateReqMsg::clear_has_buffer_type() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void RateUpdateReqMsg::clear_buffer_type() {
  buffer_type_ = 0;
  clear_has_buffer_type();
}
inline ::google::protobuf::int32 RateUpdateReqMsg::buffer_type() const {
  return buffer_type_;
}
inline void RateUpdateReqMsg::set_buffer_type(::google::protobuf::int32 value) {
  set_has_buffer_type();
  buffer_type_ = value;
}

// optional string param1 = 7;
inline bool RateUpdateReqMsg::has_param1() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void RateUpdateReqMsg::set_has_param1() {
  _has_bits_[0] |= 0x00000040u;
}
inline void RateUpdateReqMsg::clear_has_param1() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void RateUpdateReqMsg::clear_param1() {
  if (param1_ != &::google::protobuf::internal::kEmptyString) {
    param1_->clear();
  }
  clear_has_param1();
}
inline const ::std::string& RateUpdateReqMsg::param1() const {
  return *param1_;
}
inline void RateUpdateReqMsg::set_param1(const ::std::string& value) {
  set_has_param1();
  if (param1_ == &::google::protobuf::internal::kEmptyString) {
    param1_ = new ::std::string;
  }
  param1_->assign(value);
}
inline void RateUpdateReqMsg::set_param1(const char* value) {
  set_has_param1();
  if (param1_ == &::google::protobuf::internal::kEmptyString) {
    param1_ = new ::std::string;
  }
  param1_->assign(value);
}
inline void RateUpdateReqMsg::set_param1(const char* value, size_t size) {
  set_has_param1();
  if (param1_ == &::google::protobuf::internal::kEmptyString) {
    param1_ = new ::std::string;
  }
  param1_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RateUpdateReqMsg::mutable_param1() {
  set_has_param1();
  if (param1_ == &::google::protobuf::internal::kEmptyString) {
    param1_ = new ::std::string;
  }
  return param1_;
}
inline ::std::string* RateUpdateReqMsg::release_param1() {
  clear_has_param1();
  if (param1_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = param1_;
    param1_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void RateUpdateReqMsg::set_allocated_param1(::std::string* param1) {
  if (param1_ != &::google::protobuf::internal::kEmptyString) {
    delete param1_;
  }
  if (param1) {
    set_has_param1();
    param1_ = param1;
  } else {
    clear_has_param1();
    param1_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string param2 = 8;
inline bool RateUpdateReqMsg::has_param2() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void RateUpdateReqMsg::set_has_param2() {
  _has_bits_[0] |= 0x00000080u;
}
inline void RateUpdateReqMsg::clear_has_param2() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void RateUpdateReqMsg::clear_param2() {
  if (param2_ != &::google::protobuf::internal::kEmptyString) {
    param2_->clear();
  }
  clear_has_param2();
}
inline const ::std::string& RateUpdateReqMsg::param2() const {
  return *param2_;
}
inline void RateUpdateReqMsg::set_param2(const ::std::string& value) {
  set_has_param2();
  if (param2_ == &::google::protobuf::internal::kEmptyString) {
    param2_ = new ::std::string;
  }
  param2_->assign(value);
}
inline void RateUpdateReqMsg::set_param2(const char* value) {
  set_has_param2();
  if (param2_ == &::google::protobuf::internal::kEmptyString) {
    param2_ = new ::std::string;
  }
  param2_->assign(value);
}
inline void RateUpdateReqMsg::set_param2(const char* value, size_t size) {
  set_has_param2();
  if (param2_ == &::google::protobuf::internal::kEmptyString) {
    param2_ = new ::std::string;
  }
  param2_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RateUpdateReqMsg::mutable_param2() {
  set_has_param2();
  if (param2_ == &::google::protobuf::internal::kEmptyString) {
    param2_ = new ::std::string;
  }
  return param2_;
}
inline ::std::string* RateUpdateReqMsg::release_param2() {
  clear_has_param2();
  if (param2_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = param2_;
    param2_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void RateUpdateReqMsg::set_allocated_param2(::std::string* param2) {
  if (param2_ != &::google::protobuf::internal::kEmptyString) {
    delete param2_;
  }
  if (param2) {
    set_has_param2();
    param2_ = param2;
  } else {
    clear_has_param2();
    param2_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string rate_name = 9;
inline bool RateUpdateReqMsg::has_rate_name() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void RateUpdateReqMsg::set_has_rate_name() {
  _has_bits_[0] |= 0x00000100u;
}
inline void RateUpdateReqMsg::clear_has_rate_name() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void RateUpdateReqMsg::clear_rate_name() {
  if (rate_name_ != &::google::protobuf::internal::kEmptyString) {
    rate_name_->clear();
  }
  clear_has_rate_name();
}
inline const ::std::string& RateUpdateReqMsg::rate_name() const {
  return *rate_name_;
}
inline void RateUpdateReqMsg::set_rate_name(const ::std::string& value) {
  set_has_rate_name();
  if (rate_name_ == &::google::protobuf::internal::kEmptyString) {
    rate_name_ = new ::std::string;
  }
  rate_name_->assign(value);
}
inline void RateUpdateReqMsg::set_rate_name(const char* value) {
  set_has_rate_name();
  if (rate_name_ == &::google::protobuf::internal::kEmptyString) {
    rate_name_ = new ::std::string;
  }
  rate_name_->assign(value);
}
inline void RateUpdateReqMsg::set_rate_name(const char* value, size_t size) {
  set_has_rate_name();
  if (rate_name_ == &::google::protobuf::internal::kEmptyString) {
    rate_name_ = new ::std::string;
  }
  rate_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RateUpdateReqMsg::mutable_rate_name() {
  set_has_rate_name();
  if (rate_name_ == &::google::protobuf::internal::kEmptyString) {
    rate_name_ = new ::std::string;
  }
  return rate_name_;
}
inline ::std::string* RateUpdateReqMsg::release_rate_name() {
  clear_has_rate_name();
  if (rate_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = rate_name_;
    rate_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void RateUpdateReqMsg::set_allocated_rate_name(::std::string* rate_name) {
  if (rate_name_ != &::google::protobuf::internal::kEmptyString) {
    delete rate_name_;
  }
  if (rate_name) {
    set_has_rate_name();
    rate_name_ = rate_name;
  } else {
    clear_has_rate_name();
    rate_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string rate_desc = 10;
inline bool RateUpdateReqMsg::has_rate_desc() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void RateUpdateReqMsg::set_has_rate_desc() {
  _has_bits_[0] |= 0x00000200u;
}
inline void RateUpdateReqMsg::clear_has_rate_desc() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void RateUpdateReqMsg::clear_rate_desc() {
  if (rate_desc_ != &::google::protobuf::internal::kEmptyString) {
    rate_desc_->clear();
  }
  clear_has_rate_desc();
}
inline const ::std::string& RateUpdateReqMsg::rate_desc() const {
  return *rate_desc_;
}
inline void RateUpdateReqMsg::set_rate_desc(const ::std::string& value) {
  set_has_rate_desc();
  if (rate_desc_ == &::google::protobuf::internal::kEmptyString) {
    rate_desc_ = new ::std::string;
  }
  rate_desc_->assign(value);
}
inline void RateUpdateReqMsg::set_rate_desc(const char* value) {
  set_has_rate_desc();
  if (rate_desc_ == &::google::protobuf::internal::kEmptyString) {
    rate_desc_ = new ::std::string;
  }
  rate_desc_->assign(value);
}
inline void RateUpdateReqMsg::set_rate_desc(const char* value, size_t size) {
  set_has_rate_desc();
  if (rate_desc_ == &::google::protobuf::internal::kEmptyString) {
    rate_desc_ = new ::std::string;
  }
  rate_desc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RateUpdateReqMsg::mutable_rate_desc() {
  set_has_rate_desc();
  if (rate_desc_ == &::google::protobuf::internal::kEmptyString) {
    rate_desc_ = new ::std::string;
  }
  return rate_desc_;
}
inline ::std::string* RateUpdateReqMsg::release_rate_desc() {
  clear_has_rate_desc();
  if (rate_desc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = rate_desc_;
    rate_desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void RateUpdateReqMsg::set_allocated_rate_desc(::std::string* rate_desc) {
  if (rate_desc_ != &::google::protobuf::internal::kEmptyString) {
    delete rate_desc_;
  }
  if (rate_desc) {
    set_has_rate_desc();
    rate_desc_ = rate_desc;
  } else {
    clear_has_rate_desc();
    rate_desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_RateUpdateReq_2eproto__INCLUDED