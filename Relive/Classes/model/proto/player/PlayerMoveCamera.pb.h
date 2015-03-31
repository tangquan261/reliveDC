// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerMoveCamera.proto

#ifndef PROTOBUF_PlayerMoveCamera_2eproto__INCLUDED
#define PROTOBUF_PlayerMoveCamera_2eproto__INCLUDED

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
void  protobuf_AddDesc_PlayerMoveCamera_2eproto();
void protobuf_AssignDesc_PlayerMoveCamera_2eproto();
void protobuf_ShutdownFile_PlayerMoveCamera_2eproto();

class PlayerMoveCameraMsg;

// ===================================================================

class PlayerMoveCameraMsg : public ::google::protobuf::MessageLite {
 public:
  PlayerMoveCameraMsg();
  virtual ~PlayerMoveCameraMsg();

  PlayerMoveCameraMsg(const PlayerMoveCameraMsg& from);

  inline PlayerMoveCameraMsg& operator=(const PlayerMoveCameraMsg& from) {
    CopyFrom(from);
    return *this;
  }

  static const PlayerMoveCameraMsg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PlayerMoveCameraMsg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PlayerMoveCameraMsg* other);

  // implements Message ----------------------------------------------

  PlayerMoveCameraMsg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PlayerMoveCameraMsg& from);
  void MergeFrom(const PlayerMoveCameraMsg& from);
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

  // optional string scene = 1;
  inline bool has_scene() const;
  inline void clear_scene();
  static const int kSceneFieldNumber = 1;
  inline const ::std::string& scene() const;
  inline void set_scene(const ::std::string& value);
  inline void set_scene(const char* value);
  inline void set_scene(const char* value, size_t size);
  inline ::std::string* mutable_scene();
  inline ::std::string* release_scene();
  inline void set_allocated_scene(::std::string* scene);

  // optional int32 target_x = 2;
  inline bool has_target_x() const;
  inline void clear_target_x();
  static const int kTargetXFieldNumber = 2;
  inline ::google::protobuf::int32 target_x() const;
  inline void set_target_x(::google::protobuf::int32 value);

  // optional int32 target_y = 3;
  inline bool has_target_y() const;
  inline void clear_target_y();
  static const int kTargetYFieldNumber = 3;
  inline ::google::protobuf::int32 target_y() const;
  inline void set_target_y(::google::protobuf::int32 value);

  // optional int32 delay = 4;
  inline bool has_delay() const;
  inline void clear_delay();
  static const int kDelayFieldNumber = 4;
  inline ::google::protobuf::int32 delay() const;
  inline void set_delay(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:com.road.yishi.proto.player.PlayerMoveCameraMsg)
 private:
  inline void set_has_scene();
  inline void clear_has_scene();
  inline void set_has_target_x();
  inline void clear_has_target_x();
  inline void set_has_target_y();
  inline void clear_has_target_y();
  inline void set_has_delay();
  inline void clear_has_delay();

  ::std::string* scene_;
  ::google::protobuf::int32 target_x_;
  ::google::protobuf::int32 target_y_;
  ::google::protobuf::int32 delay_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_PlayerMoveCamera_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_PlayerMoveCamera_2eproto();
  #endif
  friend void protobuf_AssignDesc_PlayerMoveCamera_2eproto();
  friend void protobuf_ShutdownFile_PlayerMoveCamera_2eproto();

  void InitAsDefaultInstance();
  static PlayerMoveCameraMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// PlayerMoveCameraMsg

// optional string scene = 1;
inline bool PlayerMoveCameraMsg::has_scene() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PlayerMoveCameraMsg::set_has_scene() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PlayerMoveCameraMsg::clear_has_scene() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PlayerMoveCameraMsg::clear_scene() {
  if (scene_ != &::google::protobuf::internal::kEmptyString) {
    scene_->clear();
  }
  clear_has_scene();
}
inline const ::std::string& PlayerMoveCameraMsg::scene() const {
  return *scene_;
}
inline void PlayerMoveCameraMsg::set_scene(const ::std::string& value) {
  set_has_scene();
  if (scene_ == &::google::protobuf::internal::kEmptyString) {
    scene_ = new ::std::string;
  }
  scene_->assign(value);
}
inline void PlayerMoveCameraMsg::set_scene(const char* value) {
  set_has_scene();
  if (scene_ == &::google::protobuf::internal::kEmptyString) {
    scene_ = new ::std::string;
  }
  scene_->assign(value);
}
inline void PlayerMoveCameraMsg::set_scene(const char* value, size_t size) {
  set_has_scene();
  if (scene_ == &::google::protobuf::internal::kEmptyString) {
    scene_ = new ::std::string;
  }
  scene_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PlayerMoveCameraMsg::mutable_scene() {
  set_has_scene();
  if (scene_ == &::google::protobuf::internal::kEmptyString) {
    scene_ = new ::std::string;
  }
  return scene_;
}
inline ::std::string* PlayerMoveCameraMsg::release_scene() {
  clear_has_scene();
  if (scene_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = scene_;
    scene_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PlayerMoveCameraMsg::set_allocated_scene(::std::string* scene) {
  if (scene_ != &::google::protobuf::internal::kEmptyString) {
    delete scene_;
  }
  if (scene) {
    set_has_scene();
    scene_ = scene;
  } else {
    clear_has_scene();
    scene_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 target_x = 2;
inline bool PlayerMoveCameraMsg::has_target_x() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PlayerMoveCameraMsg::set_has_target_x() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PlayerMoveCameraMsg::clear_has_target_x() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PlayerMoveCameraMsg::clear_target_x() {
  target_x_ = 0;
  clear_has_target_x();
}
inline ::google::protobuf::int32 PlayerMoveCameraMsg::target_x() const {
  return target_x_;
}
inline void PlayerMoveCameraMsg::set_target_x(::google::protobuf::int32 value) {
  set_has_target_x();
  target_x_ = value;
}

// optional int32 target_y = 3;
inline bool PlayerMoveCameraMsg::has_target_y() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PlayerMoveCameraMsg::set_has_target_y() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PlayerMoveCameraMsg::clear_has_target_y() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PlayerMoveCameraMsg::clear_target_y() {
  target_y_ = 0;
  clear_has_target_y();
}
inline ::google::protobuf::int32 PlayerMoveCameraMsg::target_y() const {
  return target_y_;
}
inline void PlayerMoveCameraMsg::set_target_y(::google::protobuf::int32 value) {
  set_has_target_y();
  target_y_ = value;
}

// optional int32 delay = 4;
inline bool PlayerMoveCameraMsg::has_delay() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PlayerMoveCameraMsg::set_has_delay() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PlayerMoveCameraMsg::clear_has_delay() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PlayerMoveCameraMsg::clear_delay() {
  delay_ = 0;
  clear_has_delay();
}
inline ::google::protobuf::int32 PlayerMoveCameraMsg::delay() const {
  return delay_;
}
inline void PlayerMoveCameraMsg::set_delay(::google::protobuf::int32 value) {
  set_has_delay();
  delay_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PlayerMoveCamera_2eproto__INCLUDED
