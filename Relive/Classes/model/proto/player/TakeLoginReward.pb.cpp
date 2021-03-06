// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TakeLoginReward.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "TakeLoginReward.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace road {
namespace yishi {
namespace proto {
namespace player {

void protobuf_ShutdownFile_TakeLoginReward_2eproto() {
  delete TakeLoginReward::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_TakeLoginReward_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_TakeLoginReward_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  TakeLoginReward::default_instance_ = new TakeLoginReward();
  TakeLoginReward::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_TakeLoginReward_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_TakeLoginReward_2eproto_once_);
void protobuf_AddDesc_TakeLoginReward_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_TakeLoginReward_2eproto_once_,
                 &protobuf_AddDesc_TakeLoginReward_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_TakeLoginReward_2eproto {
  StaticDescriptorInitializer_TakeLoginReward_2eproto() {
    protobuf_AddDesc_TakeLoginReward_2eproto();
  }
} static_descriptor_initializer_TakeLoginReward_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int TakeLoginReward::kIndexFieldNumber;
#endif  // !_MSC_VER

TakeLoginReward::TakeLoginReward()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void TakeLoginReward::InitAsDefaultInstance() {
}

TakeLoginReward::TakeLoginReward(const TakeLoginReward& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void TakeLoginReward::SharedCtor() {
  _cached_size_ = 0;
  index_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TakeLoginReward::~TakeLoginReward() {
  SharedDtor();
}

void TakeLoginReward::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void TakeLoginReward::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const TakeLoginReward& TakeLoginReward::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_TakeLoginReward_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_TakeLoginReward_2eproto();
#endif
  return *default_instance_;
}

TakeLoginReward* TakeLoginReward::default_instance_ = NULL;

TakeLoginReward* TakeLoginReward::New() const {
  return new TakeLoginReward;
}

void TakeLoginReward::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    index_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool TakeLoginReward::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 index = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &index_)));
          set_has_index();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void TakeLoginReward::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 index = 1;
  if (has_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->index(), output);
  }

}

int TakeLoginReward::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 index = 1;
    if (has_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->index());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TakeLoginReward::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const TakeLoginReward*>(&from));
}

void TakeLoginReward::MergeFrom(const TakeLoginReward& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_index()) {
      set_index(from.index());
    }
  }
}

void TakeLoginReward::CopyFrom(const TakeLoginReward& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TakeLoginReward::IsInitialized() const {

  return true;
}

void TakeLoginReward::Swap(TakeLoginReward* other) {
  if (other != this) {
    std::swap(index_, other->index_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string TakeLoginReward::GetTypeName() const {
  return "com.road.yishi.proto.player.TakeLoginReward";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)
