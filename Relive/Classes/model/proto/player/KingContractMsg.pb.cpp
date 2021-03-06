// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: KingContractMsg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "KingContractMsg.pb.h"

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

void protobuf_ShutdownFile_KingContractMsg_2eproto() {
  delete KingContractMsg::default_instance_;
  delete KingContractInfoMsg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_KingContractMsg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_KingContractMsg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  KingContractMsg::default_instance_ = new KingContractMsg();
  KingContractInfoMsg::default_instance_ = new KingContractInfoMsg();
  KingContractMsg::default_instance_->InitAsDefaultInstance();
  KingContractInfoMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_KingContractMsg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_KingContractMsg_2eproto_once_);
void protobuf_AddDesc_KingContractMsg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_KingContractMsg_2eproto_once_,
                 &protobuf_AddDesc_KingContractMsg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_KingContractMsg_2eproto {
  StaticDescriptorInitializer_KingContractMsg_2eproto() {
    protobuf_AddDesc_KingContractMsg_2eproto();
  }
} static_descriptor_initializer_KingContractMsg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int KingContractMsg::kKingContractInfosFieldNumber;
#endif  // !_MSC_VER

KingContractMsg::KingContractMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void KingContractMsg::InitAsDefaultInstance() {
}

KingContractMsg::KingContractMsg(const KingContractMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void KingContractMsg::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

KingContractMsg::~KingContractMsg() {
  SharedDtor();
}

void KingContractMsg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void KingContractMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const KingContractMsg& KingContractMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_KingContractMsg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_KingContractMsg_2eproto();
#endif
  return *default_instance_;
}

KingContractMsg* KingContractMsg::default_instance_ = NULL;

KingContractMsg* KingContractMsg::New() const {
  return new KingContractMsg;
}

void KingContractMsg::Clear() {
  kingcontractinfos_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool KingContractMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.road.yishi.proto.player.KingContractInfoMsg kingContractInfos = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_kingContractInfos:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_kingcontractinfos()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_kingContractInfos;
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

void KingContractMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.road.yishi.proto.player.KingContractInfoMsg kingContractInfos = 1;
  for (int i = 0; i < this->kingcontractinfos_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->kingcontractinfos(i), output);
  }

}

int KingContractMsg::ByteSize() const {
  int total_size = 0;

  // repeated .com.road.yishi.proto.player.KingContractInfoMsg kingContractInfos = 1;
  total_size += 1 * this->kingcontractinfos_size();
  for (int i = 0; i < this->kingcontractinfos_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->kingcontractinfos(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void KingContractMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const KingContractMsg*>(&from));
}

void KingContractMsg::MergeFrom(const KingContractMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  kingcontractinfos_.MergeFrom(from.kingcontractinfos_);
}

void KingContractMsg::CopyFrom(const KingContractMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KingContractMsg::IsInitialized() const {

  return true;
}

void KingContractMsg::Swap(KingContractMsg* other) {
  if (other != this) {
    kingcontractinfos_.Swap(&other->kingcontractinfos_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string KingContractMsg::GetTypeName() const {
  return "com.road.yishi.proto.player.KingContractMsg";
}


// ===================================================================

#ifndef _MSC_VER
const int KingContractInfoMsg::kContractIdFieldNumber;
const int KingContractInfoMsg::kEndDataFieldNumber;
#endif  // !_MSC_VER

KingContractInfoMsg::KingContractInfoMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void KingContractInfoMsg::InitAsDefaultInstance() {
}

KingContractInfoMsg::KingContractInfoMsg(const KingContractInfoMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void KingContractInfoMsg::SharedCtor() {
  _cached_size_ = 0;
  contractid_ = 0;
  enddata_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

KingContractInfoMsg::~KingContractInfoMsg() {
  SharedDtor();
}

void KingContractInfoMsg::SharedDtor() {
  if (enddata_ != &::google::protobuf::internal::kEmptyString) {
    delete enddata_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void KingContractInfoMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const KingContractInfoMsg& KingContractInfoMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_KingContractMsg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_KingContractMsg_2eproto();
#endif
  return *default_instance_;
}

KingContractInfoMsg* KingContractInfoMsg::default_instance_ = NULL;

KingContractInfoMsg* KingContractInfoMsg::New() const {
  return new KingContractInfoMsg;
}

void KingContractInfoMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    contractid_ = 0;
    if (has_enddata()) {
      if (enddata_ != &::google::protobuf::internal::kEmptyString) {
        enddata_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool KingContractInfoMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 contractId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &contractid_)));
          set_has_contractid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_endData;
        break;
      }

      // optional string endData = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_endData:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_enddata()));
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

void KingContractInfoMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 contractId = 1;
  if (has_contractid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->contractid(), output);
  }

  // optional string endData = 2;
  if (has_enddata()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->enddata(), output);
  }

}

int KingContractInfoMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 contractId = 1;
    if (has_contractid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->contractid());
    }

    // optional string endData = 2;
    if (has_enddata()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->enddata());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void KingContractInfoMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const KingContractInfoMsg*>(&from));
}

void KingContractInfoMsg::MergeFrom(const KingContractInfoMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_contractid()) {
      set_contractid(from.contractid());
    }
    if (from.has_enddata()) {
      set_enddata(from.enddata());
    }
  }
}

void KingContractInfoMsg::CopyFrom(const KingContractInfoMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KingContractInfoMsg::IsInitialized() const {

  return true;
}

void KingContractInfoMsg::Swap(KingContractInfoMsg* other) {
  if (other != this) {
    std::swap(contractid_, other->contractid_);
    std::swap(enddata_, other->enddata_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string KingContractInfoMsg::GetTypeName() const {
  return "com.road.yishi.proto.player.KingContractInfoMsg";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)
