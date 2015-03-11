// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BoxMsg.proto

#ifndef PROTOBUF_BoxMsg_2eproto__INCLUDED
#define PROTOBUF_BoxMsg_2eproto__INCLUDED

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
namespace box {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_BoxMsg_2eproto();
void protobuf_AssignDesc_BoxMsg_2eproto();
void protobuf_ShutdownFile_BoxMsg_2eproto();

class BoxMsg;
class BoxStarMsg;

// ===================================================================

class BoxMsg : public ::google::protobuf::MessageLite {
 public:
  BoxMsg();
  virtual ~BoxMsg();

  BoxMsg(const BoxMsg& from);

  inline BoxMsg& operator=(const BoxMsg& from) {
    CopyFrom(from);
    return *this;
  }

  static const BoxMsg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const BoxMsg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(BoxMsg* other);

  // implements Message ----------------------------------------------

  BoxMsg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const BoxMsg& from);
  void MergeFrom(const BoxMsg& from);
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

  // optional int32 time = 1;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 1;
  inline ::google::protobuf::int32 time() const;
  inline void set_time(::google::protobuf::int32 value);

  // optional int32 grade = 2;
  inline bool has_grade() const;
  inline void clear_grade();
  static const int kGradeFieldNumber = 2;
  inline ::google::protobuf::int32 grade() const;
  inline void set_grade(::google::protobuf::int32 value);

  // optional bool operate = 3;
  inline bool has_operate() const;
  inline void clear_operate();
  static const int kOperateFieldNumber = 3;
  inline bool operate() const;
  inline void set_operate(bool value);

  // optional int32 timerun = 4;
  inline bool has_timerun() const;
  inline void clear_timerun();
  static const int kTimerunFieldNumber = 4;
  inline ::google::protobuf::int32 timerun() const;
  inline void set_timerun(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:com.road.yishi.proto.box.BoxMsg)
 private:
  inline void set_has_time();
  inline void clear_has_time();
  inline void set_has_grade();
  inline void clear_has_grade();
  inline void set_has_operate();
  inline void clear_has_operate();
  inline void set_has_timerun();
  inline void clear_has_timerun();

  ::google::protobuf::int32 time_;
  ::google::protobuf::int32 grade_;
  bool operate_;
  ::google::protobuf::int32 timerun_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_BoxMsg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_BoxMsg_2eproto();
  #endif
  friend void protobuf_AssignDesc_BoxMsg_2eproto();
  friend void protobuf_ShutdownFile_BoxMsg_2eproto();

  void InitAsDefaultInstance();
  static BoxMsg* default_instance_;
};
// -------------------------------------------------------------------

class BoxStarMsg : public ::google::protobuf::MessageLite {
 public:
  BoxStarMsg();
  virtual ~BoxStarMsg();

  BoxStarMsg(const BoxStarMsg& from);

  inline BoxStarMsg& operator=(const BoxStarMsg& from) {
    CopyFrom(from);
    return *this;
  }

  static const BoxStarMsg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const BoxStarMsg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(BoxStarMsg* other);

  // implements Message ----------------------------------------------

  BoxStarMsg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const BoxStarMsg& from);
  void MergeFrom(const BoxStarMsg& from);
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

  // optional int32 timerun = 1;
  inline bool has_timerun() const;
  inline void clear_timerun();
  static const int kTimerunFieldNumber = 1;
  inline ::google::protobuf::int32 timerun() const;
  inline void set_timerun(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:com.road.yishi.proto.box.BoxStarMsg)
 private:
  inline void set_has_timerun();
  inline void clear_has_timerun();

  ::google::protobuf::int32 timerun_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_BoxMsg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_BoxMsg_2eproto();
  #endif
  friend void protobuf_AssignDesc_BoxMsg_2eproto();
  friend void protobuf_ShutdownFile_BoxMsg_2eproto();

  void InitAsDefaultInstance();
  static BoxStarMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// BoxMsg

// optional int32 time = 1;
inline bool BoxMsg::has_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BoxMsg::set_has_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BoxMsg::clear_has_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BoxMsg::clear_time() {
  time_ = 0;
  clear_has_time();
}
inline ::google::protobuf::int32 BoxMsg::time() const {
  return time_;
}
inline void BoxMsg::set_time(::google::protobuf::int32 value) {
  set_has_time();
  time_ = value;
}

// optional int32 grade = 2;
inline bool BoxMsg::has_grade() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BoxMsg::set_has_grade() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BoxMsg::clear_has_grade() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BoxMsg::clear_grade() {
  grade_ = 0;
  clear_has_grade();
}
inline ::google::protobuf::int32 BoxMsg::grade() const {
  return grade_;
}
inline void BoxMsg::set_grade(::google::protobuf::int32 value) {
  set_has_grade();
  grade_ = value;
}

// optional bool operate = 3;
inline bool BoxMsg::has_operate() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BoxMsg::set_has_operate() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BoxMsg::clear_has_operate() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BoxMsg::clear_operate() {
  operate_ = false;
  clear_has_operate();
}
inline bool BoxMsg::operate() const {
  return operate_;
}
inline void BoxMsg::set_operate(bool value) {
  set_has_operate();
  operate_ = value;
}

// optional int32 timerun = 4;
inline bool BoxMsg::has_timerun() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BoxMsg::set_has_timerun() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BoxMsg::clear_has_timerun() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BoxMsg::clear_timerun() {
  timerun_ = 0;
  clear_has_timerun();
}
inline ::google::protobuf::int32 BoxMsg::timerun() const {
  return timerun_;
}
inline void BoxMsg::set_timerun(::google::protobuf::int32 value) {
  set_has_timerun();
  timerun_ = value;
}

// -------------------------------------------------------------------

// BoxStarMsg

// optional int32 timerun = 1;
inline bool BoxStarMsg::has_timerun() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BoxStarMsg::set_has_timerun() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BoxStarMsg::clear_has_timerun() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BoxStarMsg::clear_timerun() {
  timerun_ = 0;
  clear_has_timerun();
}
inline ::google::protobuf::int32 BoxStarMsg::timerun() const {
  return timerun_;
}
inline void BoxStarMsg::set_timerun(::google::protobuf::int32 value) {
  set_has_timerun();
  timerun_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace box
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_BoxMsg_2eproto__INCLUDED
