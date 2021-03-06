// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChallengeRankReward.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ChallengeRankReward.pb.h"

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

void protobuf_ShutdownFile_ChallengeRankReward_2eproto() {
  delete ChallengeRankRewardMsg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_ChallengeRankReward_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_ChallengeRankReward_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ChallengeRankRewardMsg::default_instance_ = new ChallengeRankRewardMsg();
  ChallengeRankRewardMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ChallengeRankReward_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_ChallengeRankReward_2eproto_once_);
void protobuf_AddDesc_ChallengeRankReward_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_ChallengeRankReward_2eproto_once_,
                 &protobuf_AddDesc_ChallengeRankReward_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ChallengeRankReward_2eproto {
  StaticDescriptorInitializer_ChallengeRankReward_2eproto() {
    protobuf_AddDesc_ChallengeRankReward_2eproto();
  }
} static_descriptor_initializer_ChallengeRankReward_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int ChallengeRankRewardMsg::kIsTakeFieldNumber;
const int ChallengeRankRewardMsg::kParam1FieldNumber;
const int ChallengeRankRewardMsg::kParam2FieldNumber;
const int ChallengeRankRewardMsg::kParam3FieldNumber;
const int ChallengeRankRewardMsg::kParam4FieldNumber;
#endif  // !_MSC_VER

ChallengeRankRewardMsg::ChallengeRankRewardMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ChallengeRankRewardMsg::InitAsDefaultInstance() {
}

ChallengeRankRewardMsg::ChallengeRankRewardMsg(const ChallengeRankRewardMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ChallengeRankRewardMsg::SharedCtor() {
  _cached_size_ = 0;
  is_take_ = false;
  param1_ = 0;
  param2_ = 0;
  param3_ = 0;
  param4_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ChallengeRankRewardMsg::~ChallengeRankRewardMsg() {
  SharedDtor();
}

void ChallengeRankRewardMsg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ChallengeRankRewardMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ChallengeRankRewardMsg& ChallengeRankRewardMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ChallengeRankReward_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ChallengeRankReward_2eproto();
#endif
  return *default_instance_;
}

ChallengeRankRewardMsg* ChallengeRankRewardMsg::default_instance_ = NULL;

ChallengeRankRewardMsg* ChallengeRankRewardMsg::New() const {
  return new ChallengeRankRewardMsg;
}

void ChallengeRankRewardMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    is_take_ = false;
    param1_ = 0;
    param2_ = 0;
    param3_ = 0;
    param4_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ChallengeRankRewardMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool is_take = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_take_)));
          set_has_is_take();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_param1;
        break;
      }

      // optional int32 param1 = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_param1:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &param1_)));
          set_has_param1();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_param2;
        break;
      }

      // optional int32 param2 = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_param2:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &param2_)));
          set_has_param2();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_param3;
        break;
      }

      // optional int32 param3 = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_param3:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &param3_)));
          set_has_param3();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_param4;
        break;
      }

      // optional int32 param4 = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_param4:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &param4_)));
          set_has_param4();
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

void ChallengeRankRewardMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional bool is_take = 1;
  if (has_is_take()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->is_take(), output);
  }

  // optional int32 param1 = 2;
  if (has_param1()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->param1(), output);
  }

  // optional int32 param2 = 3;
  if (has_param2()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->param2(), output);
  }

  // optional int32 param3 = 4;
  if (has_param3()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->param3(), output);
  }

  // optional int32 param4 = 5;
  if (has_param4()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->param4(), output);
  }

}

int ChallengeRankRewardMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool is_take = 1;
    if (has_is_take()) {
      total_size += 1 + 1;
    }

    // optional int32 param1 = 2;
    if (has_param1()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->param1());
    }

    // optional int32 param2 = 3;
    if (has_param2()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->param2());
    }

    // optional int32 param3 = 4;
    if (has_param3()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->param3());
    }

    // optional int32 param4 = 5;
    if (has_param4()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->param4());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ChallengeRankRewardMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ChallengeRankRewardMsg*>(&from));
}

void ChallengeRankRewardMsg::MergeFrom(const ChallengeRankRewardMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_is_take()) {
      set_is_take(from.is_take());
    }
    if (from.has_param1()) {
      set_param1(from.param1());
    }
    if (from.has_param2()) {
      set_param2(from.param2());
    }
    if (from.has_param3()) {
      set_param3(from.param3());
    }
    if (from.has_param4()) {
      set_param4(from.param4());
    }
  }
}

void ChallengeRankRewardMsg::CopyFrom(const ChallengeRankRewardMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChallengeRankRewardMsg::IsInitialized() const {

  return true;
}

void ChallengeRankRewardMsg::Swap(ChallengeRankRewardMsg* other) {
  if (other != this) {
    std::swap(is_take_, other->is_take_);
    std::swap(param1_, other->param1_);
    std::swap(param2_, other->param2_);
    std::swap(param3_, other->param3_);
    std::swap(param4_, other->param4_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ChallengeRankRewardMsg::GetTypeName() const {
  return "com.road.yishi.proto.player.ChallengeRankRewardMsg";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)
