// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: KingContractBuyMsg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "KingContractBuyMsg.pb.h"

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

void protobuf_ShutdownFile_KingContractBuyMsg_2eproto() {
  delete KingContractBuyMsg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_KingContractBuyMsg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_KingContractBuyMsg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  KingContractBuyMsg::default_instance_ = new KingContractBuyMsg();
  KingContractBuyMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_KingContractBuyMsg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_KingContractBuyMsg_2eproto_once_);
void protobuf_AddDesc_KingContractBuyMsg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_KingContractBuyMsg_2eproto_once_,
                 &protobuf_AddDesc_KingContractBuyMsg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_KingContractBuyMsg_2eproto {
  StaticDescriptorInitializer_KingContractBuyMsg_2eproto() {
    protobuf_AddDesc_KingContractBuyMsg_2eproto();
  }
} static_descriptor_initializer_KingContractBuyMsg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int KingContractBuyMsg::kIdsFieldNumber;
const int KingContractBuyMsg::kUseFieldNumber;
const int KingContractBuyMsg::kFriendIdFieldNumber;
const int KingContractBuyMsg::kFriendnameFieldNumber;
#endif  // !_MSC_VER

KingContractBuyMsg::KingContractBuyMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void KingContractBuyMsg::InitAsDefaultInstance() {
}

KingContractBuyMsg::KingContractBuyMsg(const KingContractBuyMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void KingContractBuyMsg::SharedCtor() {
  _cached_size_ = 0;
  use_ = false;
  friendid_ = 0;
  friendname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

KingContractBuyMsg::~KingContractBuyMsg() {
  SharedDtor();
}

void KingContractBuyMsg::SharedDtor() {
  if (friendname_ != &::google::protobuf::internal::kEmptyString) {
    delete friendname_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void KingContractBuyMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const KingContractBuyMsg& KingContractBuyMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_KingContractBuyMsg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_KingContractBuyMsg_2eproto();
#endif
  return *default_instance_;
}

KingContractBuyMsg* KingContractBuyMsg::default_instance_ = NULL;

KingContractBuyMsg* KingContractBuyMsg::New() const {
  return new KingContractBuyMsg;
}

void KingContractBuyMsg::Clear() {
  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    use_ = false;
    friendid_ = 0;
    if (has_friendname()) {
      if (friendname_ != &::google::protobuf::internal::kEmptyString) {
        friendname_->clear();
      }
    }
  }
  ids_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool KingContractBuyMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 ids = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ids:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 8, input, this->mutable_ids())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_ids())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(8)) goto parse_ids;
        if (input->ExpectTag(16)) goto parse_use;
        break;
      }

      // optional bool use = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_use:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &use_)));
          set_has_use();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_friendId;
        break;
      }

      // optional int32 friendId = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_friendId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &friendid_)));
          set_has_friendid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_friendname;
        break;
      }

      // optional string friendname = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_friendname:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_friendname()));
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

void KingContractBuyMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated int32 ids = 1;
  for (int i = 0; i < this->ids_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      1, this->ids(i), output);
  }

  // optional bool use = 2;
  if (has_use()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->use(), output);
  }

  // optional int32 friendId = 3;
  if (has_friendid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->friendid(), output);
  }

  // optional string friendname = 4;
  if (has_friendname()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->friendname(), output);
  }

}

int KingContractBuyMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    // optional bool use = 2;
    if (has_use()) {
      total_size += 1 + 1;
    }

    // optional int32 friendId = 3;
    if (has_friendid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->friendid());
    }

    // optional string friendname = 4;
    if (has_friendname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->friendname());
    }

  }
  // repeated int32 ids = 1;
  {
    int data_size = 0;
    for (int i = 0; i < this->ids_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->ids(i));
    }
    total_size += 1 * this->ids_size() + data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void KingContractBuyMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const KingContractBuyMsg*>(&from));
}

void KingContractBuyMsg::MergeFrom(const KingContractBuyMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  ids_.MergeFrom(from.ids_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_use()) {
      set_use(from.use());
    }
    if (from.has_friendid()) {
      set_friendid(from.friendid());
    }
    if (from.has_friendname()) {
      set_friendname(from.friendname());
    }
  }
}

void KingContractBuyMsg::CopyFrom(const KingContractBuyMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KingContractBuyMsg::IsInitialized() const {

  return true;
}

void KingContractBuyMsg::Swap(KingContractBuyMsg* other) {
  if (other != this) {
    ids_.Swap(&other->ids_);
    std::swap(use_, other->use_);
    std::swap(friendid_, other->friendid_);
    std::swap(friendname_, other->friendname_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string KingContractBuyMsg::GetTypeName() const {
  return "com.road.yishi.proto.player.KingContractBuyMsg";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)
