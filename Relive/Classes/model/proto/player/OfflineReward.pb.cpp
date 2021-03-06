// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OfflineReward.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "OfflineReward.pb.h"

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

void protobuf_ShutdownFile_OfflineReward_2eproto() {
  delete OfflineRewardMsg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_OfflineReward_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_OfflineReward_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  OfflineRewardMsg::default_instance_ = new OfflineRewardMsg();
  OfflineRewardMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_OfflineReward_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_OfflineReward_2eproto_once_);
void protobuf_AddDesc_OfflineReward_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_OfflineReward_2eproto_once_,
                 &protobuf_AddDesc_OfflineReward_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_OfflineReward_2eproto {
  StaticDescriptorInitializer_OfflineReward_2eproto() {
    protobuf_AddDesc_OfflineReward_2eproto();
  }
} static_descriptor_initializer_OfflineReward_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int OfflineRewardMsg::kOfflineTimeFieldNumber;
const int OfflineRewardMsg::kGpCountFieldNumber;
const int OfflineRewardMsg::kRateCountFieldNumber;
#endif  // !_MSC_VER

OfflineRewardMsg::OfflineRewardMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void OfflineRewardMsg::InitAsDefaultInstance() {
}

OfflineRewardMsg::OfflineRewardMsg(const OfflineRewardMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void OfflineRewardMsg::SharedCtor() {
  _cached_size_ = 0;
  offline_time_ = 0;
  gp_count_ = 0;
  rate_count_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OfflineRewardMsg::~OfflineRewardMsg() {
  SharedDtor();
}

void OfflineRewardMsg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void OfflineRewardMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const OfflineRewardMsg& OfflineRewardMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_OfflineReward_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_OfflineReward_2eproto();
#endif
  return *default_instance_;
}

OfflineRewardMsg* OfflineRewardMsg::default_instance_ = NULL;

OfflineRewardMsg* OfflineRewardMsg::New() const {
  return new OfflineRewardMsg;
}

void OfflineRewardMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    offline_time_ = 0;
    gp_count_ = 0;
    rate_count_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool OfflineRewardMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 offline_time = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &offline_time_)));
          set_has_offline_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_gp_count;
        break;
      }

      // optional int32 gp_count = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_gp_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &gp_count_)));
          set_has_gp_count();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_rate_count;
        break;
      }

      // optional int32 rate_count = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rate_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rate_count_)));
          set_has_rate_count();
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

void OfflineRewardMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 offline_time = 1;
  if (has_offline_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->offline_time(), output);
  }

  // optional int32 gp_count = 2;
  if (has_gp_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->gp_count(), output);
  }

  // optional int32 rate_count = 3;
  if (has_rate_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->rate_count(), output);
  }

}

int OfflineRewardMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 offline_time = 1;
    if (has_offline_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->offline_time());
    }

    // optional int32 gp_count = 2;
    if (has_gp_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->gp_count());
    }

    // optional int32 rate_count = 3;
    if (has_rate_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rate_count());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OfflineRewardMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const OfflineRewardMsg*>(&from));
}

void OfflineRewardMsg::MergeFrom(const OfflineRewardMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_offline_time()) {
      set_offline_time(from.offline_time());
    }
    if (from.has_gp_count()) {
      set_gp_count(from.gp_count());
    }
    if (from.has_rate_count()) {
      set_rate_count(from.rate_count());
    }
  }
}

void OfflineRewardMsg::CopyFrom(const OfflineRewardMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OfflineRewardMsg::IsInitialized() const {

  return true;
}

void OfflineRewardMsg::Swap(OfflineRewardMsg* other) {
  if (other != this) {
    std::swap(offline_time_, other->offline_time_);
    std::swap(gp_count_, other->gp_count_);
    std::swap(rate_count_, other->rate_count_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string OfflineRewardMsg::GetTypeName() const {
  return "com.road.yishi.proto.player.OfflineRewardMsg";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)
