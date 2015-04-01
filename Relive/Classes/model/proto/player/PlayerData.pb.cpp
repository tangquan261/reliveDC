// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerData.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PlayerData.pb.h"

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

void protobuf_ShutdownFile_PlayerData_2eproto() {
  delete PlayerDataMsg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_PlayerData_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_PlayerData_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  PlayerDataMsg::default_instance_ = new PlayerDataMsg();
  PlayerDataMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PlayerData_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_PlayerData_2eproto_once_);
void protobuf_AddDesc_PlayerData_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_PlayerData_2eproto_once_,
                 &protobuf_AddDesc_PlayerData_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PlayerData_2eproto {
  StaticDescriptorInitializer_PlayerData_2eproto() {
    protobuf_AddDesc_PlayerData_2eproto();
  }
} static_descriptor_initializer_PlayerData_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int PlayerDataMsg::kUserFieldNumber;
const int PlayerDataMsg::kCastleFieldNumber;
const int PlayerDataMsg::kArmyFieldNumber;
const int PlayerDataMsg::kQuestFieldNumber;
const int PlayerDataMsg::kBuildFieldNumber;
const int PlayerDataMsg::kTreeFieldNumber;
const int PlayerDataMsg::kAasFieldNumber;
const int PlayerDataMsg::kSmithFieldNumber;
const int PlayerDataMsg::kBagFieldNumber;
const int PlayerDataMsg::kLeedFieldNumber;
const int PlayerDataMsg::kStarFieldNumber;
const int PlayerDataMsg::kFriendFieldNumber;
const int PlayerDataMsg::kEffectFieldNumber;
const int PlayerDataMsg::kSysFieldNumber;
const int PlayerDataMsg::kOfflineFieldNumber;
const int PlayerDataMsg::kRewardFieldNumber;
const int PlayerDataMsg::kTowerFieldNumber;
const int PlayerDataMsg::kShopFieldNumber;
const int PlayerDataMsg::kChallRewardFieldNumber;
const int PlayerDataMsg::kSnsReqFieldNumber;
const int PlayerDataMsg::kActiveFieldNumber;
const int PlayerDataMsg::kSwitchesFieldNumber;
const int PlayerDataMsg::kSweepFieldNumber;
const int PlayerDataMsg::kQuestionnarieFieldNumber;
const int PlayerDataMsg::kKingContractFieldNumber;
const int PlayerDataMsg::kRebateChargeFieldNumber;
const int PlayerDataMsg::kRebateConsumFieldNumber;
const int PlayerDataMsg::kSumActiveFieldNumber;
const int PlayerDataMsg::kCrossScoreRewardFieldNumber;
const int PlayerDataMsg::kAppellFieldNumber;
const int PlayerDataMsg::kBottleFieldNumber;
const int PlayerDataMsg::kPetChallengeRewardFieldNumber;
#endif  // !_MSC_VER

PlayerDataMsg::PlayerDataMsg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void PlayerDataMsg::InitAsDefaultInstance() {
}

PlayerDataMsg::PlayerDataMsg(const PlayerDataMsg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void PlayerDataMsg::SharedCtor() {
  _cached_size_ = 0;
  user_ = false;
  castle_ = false;
  army_ = false;
  quest_ = false;
  build_ = false;
  tree_ = false;
  aas_ = false;
  smith_ = false;
  bag_ = false;
  leed_ = false;
  star_ = false;
  friend__ = false;
  effect_ = false;
  sys_ = false;
  offline_ = false;
  reward_ = false;
  tower_ = false;
  shop_ = false;
  chall_reward_ = false;
  sns_req_ = false;
  active_ = false;
  switches_ = false;
  sweep_ = false;
  questionnarie_ = false;
  king_contract_ = false;
  rebate_charge_ = false;
  rebate_consum_ = false;
  sum_active_ = false;
  cross_score_reward_ = false;
  appell_ = false;
  bottle_ = false;
  pet_challenge_reward_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlayerDataMsg::~PlayerDataMsg() {
  SharedDtor();
}

void PlayerDataMsg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void PlayerDataMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PlayerDataMsg& PlayerDataMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_PlayerData_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_PlayerData_2eproto();
#endif
  return *default_instance_;
}

PlayerDataMsg* PlayerDataMsg::default_instance_ = NULL;

PlayerDataMsg* PlayerDataMsg::New() const {
  return new PlayerDataMsg;
}

void PlayerDataMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    user_ = false;
    castle_ = false;
    army_ = false;
    quest_ = false;
    build_ = false;
    tree_ = false;
    aas_ = false;
    smith_ = false;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    bag_ = false;
    leed_ = false;
    star_ = false;
    friend__ = false;
    effect_ = false;
    sys_ = false;
    offline_ = false;
    reward_ = false;
  }
  if (_has_bits_[16 / 32] & (0xffu << (16 % 32))) {
    tower_ = false;
    shop_ = false;
    chall_reward_ = false;
    sns_req_ = false;
    active_ = false;
    switches_ = false;
    sweep_ = false;
    questionnarie_ = false;
  }
  if (_has_bits_[24 / 32] & (0xffu << (24 % 32))) {
    king_contract_ = false;
    rebate_charge_ = false;
    rebate_consum_ = false;
    sum_active_ = false;
    cross_score_reward_ = false;
    appell_ = false;
    bottle_ = false;
    pet_challenge_reward_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool PlayerDataMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool user = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &user_)));
          set_has_user();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_castle;
        break;
      }

      // optional bool castle = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_castle:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &castle_)));
          set_has_castle();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_army;
        break;
      }

      // optional bool army = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_army:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &army_)));
          set_has_army();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_quest;
        break;
      }

      // optional bool quest = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_quest:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &quest_)));
          set_has_quest();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_build;
        break;
      }

      // optional bool build = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_build:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &build_)));
          set_has_build();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_tree;
        break;
      }

      // optional bool tree = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_tree:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &tree_)));
          set_has_tree();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_aas;
        break;
      }

      // optional bool aas = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_aas:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &aas_)));
          set_has_aas();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_smith;
        break;
      }

      // optional bool smith = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_smith:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &smith_)));
          set_has_smith();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_bag;
        break;
      }

      // optional bool bag = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_bag:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bag_)));
          set_has_bag();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_leed;
        break;
      }

      // optional bool leed = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_leed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &leed_)));
          set_has_leed();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_star;
        break;
      }

      // optional bool star = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_star:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &star_)));
          set_has_star();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_friend;
        break;
      }

      // optional bool friend = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_friend:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &friend__)));
          set_has_friend_();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(104)) goto parse_effect;
        break;
      }

      // optional bool effect = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_effect:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &effect_)));
          set_has_effect();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(112)) goto parse_sys;
        break;
      }

      // optional bool sys = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sys:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &sys_)));
          set_has_sys();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(120)) goto parse_offline;
        break;
      }

      // optional bool offline = 15;
      case 15: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_offline:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &offline_)));
          set_has_offline();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(128)) goto parse_reward;
        break;
      }

      // optional bool reward = 16;
      case 16: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_reward:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &reward_)));
          set_has_reward();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(136)) goto parse_tower;
        break;
      }

      // optional bool tower = 17;
      case 17: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_tower:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &tower_)));
          set_has_tower();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(144)) goto parse_shop;
        break;
      }

      // optional bool shop = 18;
      case 18: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_shop:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &shop_)));
          set_has_shop();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(152)) goto parse_chall_reward;
        break;
      }

      // optional bool chall_reward = 19;
      case 19: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_chall_reward:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &chall_reward_)));
          set_has_chall_reward();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(160)) goto parse_sns_req;
        break;
      }

      // optional bool sns_req = 20;
      case 20: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sns_req:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &sns_req_)));
          set_has_sns_req();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(168)) goto parse_active;
        break;
      }

      // optional bool active = 21;
      case 21: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_active:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &active_)));
          set_has_active();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(176)) goto parse_switches;
        break;
      }

      // optional bool switches = 22;
      case 22: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_switches:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &switches_)));
          set_has_switches();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(184)) goto parse_sweep;
        break;
      }

      // optional bool sweep = 23;
      case 23: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sweep:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &sweep_)));
          set_has_sweep();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(192)) goto parse_questionnarie;
        break;
      }

      // optional bool questionnarie = 24;
      case 24: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_questionnarie:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &questionnarie_)));
          set_has_questionnarie();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(200)) goto parse_king_contract;
        break;
      }

      // optional bool king_contract = 25;
      case 25: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_king_contract:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &king_contract_)));
          set_has_king_contract();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(208)) goto parse_rebate_charge;
        break;
      }

      // optional bool rebate_charge = 26;
      case 26: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rebate_charge:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &rebate_charge_)));
          set_has_rebate_charge();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(216)) goto parse_rebate_consum;
        break;
      }

      // optional bool rebate_consum = 27;
      case 27: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rebate_consum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &rebate_consum_)));
          set_has_rebate_consum();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(224)) goto parse_sum_active;
        break;
      }

      // optional bool sum_active = 28;
      case 28: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sum_active:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &sum_active_)));
          set_has_sum_active();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(232)) goto parse_cross_score_reward;
        break;
      }

      // optional bool cross_score_reward = 29;
      case 29: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_cross_score_reward:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &cross_score_reward_)));
          set_has_cross_score_reward();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(240)) goto parse_appell;
        break;
      }

      // optional bool appell = 30;
      case 30: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_appell:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &appell_)));
          set_has_appell();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(248)) goto parse_bottle;
        break;
      }

      // optional bool bottle = 31;
      case 31: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_bottle:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bottle_)));
          set_has_bottle();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(256)) goto parse_pet_challenge_reward;
        break;
      }

      // optional bool pet_challenge_reward = 32;
      case 32: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_pet_challenge_reward:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &pet_challenge_reward_)));
          set_has_pet_challenge_reward();
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

void PlayerDataMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional bool user = 1;
  if (has_user()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->user(), output);
  }

  // optional bool castle = 2;
  if (has_castle()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->castle(), output);
  }

  // optional bool army = 3;
  if (has_army()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->army(), output);
  }

  // optional bool quest = 4;
  if (has_quest()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->quest(), output);
  }

  // optional bool build = 5;
  if (has_build()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->build(), output);
  }

  // optional bool tree = 6;
  if (has_tree()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->tree(), output);
  }

  // optional bool aas = 7;
  if (has_aas()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->aas(), output);
  }

  // optional bool smith = 8;
  if (has_smith()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->smith(), output);
  }

  // optional bool bag = 9;
  if (has_bag()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(9, this->bag(), output);
  }

  // optional bool leed = 10;
  if (has_leed()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(10, this->leed(), output);
  }

  // optional bool star = 11;
  if (has_star()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->star(), output);
  }

  // optional bool friend = 12;
  if (has_friend_()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(12, this->friend_(), output);
  }

  // optional bool effect = 13;
  if (has_effect()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(13, this->effect(), output);
  }

  // optional bool sys = 14;
  if (has_sys()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(14, this->sys(), output);
  }

  // optional bool offline = 15;
  if (has_offline()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(15, this->offline(), output);
  }

  // optional bool reward = 16;
  if (has_reward()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(16, this->reward(), output);
  }

  // optional bool tower = 17;
  if (has_tower()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(17, this->tower(), output);
  }

  // optional bool shop = 18;
  if (has_shop()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(18, this->shop(), output);
  }

  // optional bool chall_reward = 19;
  if (has_chall_reward()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(19, this->chall_reward(), output);
  }

  // optional bool sns_req = 20;
  if (has_sns_req()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(20, this->sns_req(), output);
  }

  // optional bool active = 21;
  if (has_active()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(21, this->active(), output);
  }

  // optional bool switches = 22;
  if (has_switches()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(22, this->switches(), output);
  }

  // optional bool sweep = 23;
  if (has_sweep()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(23, this->sweep(), output);
  }

  // optional bool questionnarie = 24;
  if (has_questionnarie()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(24, this->questionnarie(), output);
  }

  // optional bool king_contract = 25;
  if (has_king_contract()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(25, this->king_contract(), output);
  }

  // optional bool rebate_charge = 26;
  if (has_rebate_charge()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(26, this->rebate_charge(), output);
  }

  // optional bool rebate_consum = 27;
  if (has_rebate_consum()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(27, this->rebate_consum(), output);
  }

  // optional bool sum_active = 28;
  if (has_sum_active()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(28, this->sum_active(), output);
  }

  // optional bool cross_score_reward = 29;
  if (has_cross_score_reward()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(29, this->cross_score_reward(), output);
  }

  // optional bool appell = 30;
  if (has_appell()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(30, this->appell(), output);
  }

  // optional bool bottle = 31;
  if (has_bottle()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(31, this->bottle(), output);
  }

  // optional bool pet_challenge_reward = 32;
  if (has_pet_challenge_reward()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(32, this->pet_challenge_reward(), output);
  }

}

int PlayerDataMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool user = 1;
    if (has_user()) {
      total_size += 1 + 1;
    }

    // optional bool castle = 2;
    if (has_castle()) {
      total_size += 1 + 1;
    }

    // optional bool army = 3;
    if (has_army()) {
      total_size += 1 + 1;
    }

    // optional bool quest = 4;
    if (has_quest()) {
      total_size += 1 + 1;
    }

    // optional bool build = 5;
    if (has_build()) {
      total_size += 1 + 1;
    }

    // optional bool tree = 6;
    if (has_tree()) {
      total_size += 1 + 1;
    }

    // optional bool aas = 7;
    if (has_aas()) {
      total_size += 1 + 1;
    }

    // optional bool smith = 8;
    if (has_smith()) {
      total_size += 1 + 1;
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional bool bag = 9;
    if (has_bag()) {
      total_size += 1 + 1;
    }

    // optional bool leed = 10;
    if (has_leed()) {
      total_size += 1 + 1;
    }

    // optional bool star = 11;
    if (has_star()) {
      total_size += 1 + 1;
    }

    // optional bool friend = 12;
    if (has_friend_()) {
      total_size += 1 + 1;
    }

    // optional bool effect = 13;
    if (has_effect()) {
      total_size += 1 + 1;
    }

    // optional bool sys = 14;
    if (has_sys()) {
      total_size += 1 + 1;
    }

    // optional bool offline = 15;
    if (has_offline()) {
      total_size += 1 + 1;
    }

    // optional bool reward = 16;
    if (has_reward()) {
      total_size += 2 + 1;
    }

  }
  if (_has_bits_[16 / 32] & (0xffu << (16 % 32))) {
    // optional bool tower = 17;
    if (has_tower()) {
      total_size += 2 + 1;
    }

    // optional bool shop = 18;
    if (has_shop()) {
      total_size += 2 + 1;
    }

    // optional bool chall_reward = 19;
    if (has_chall_reward()) {
      total_size += 2 + 1;
    }

    // optional bool sns_req = 20;
    if (has_sns_req()) {
      total_size += 2 + 1;
    }

    // optional bool active = 21;
    if (has_active()) {
      total_size += 2 + 1;
    }

    // optional bool switches = 22;
    if (has_switches()) {
      total_size += 2 + 1;
    }

    // optional bool sweep = 23;
    if (has_sweep()) {
      total_size += 2 + 1;
    }

    // optional bool questionnarie = 24;
    if (has_questionnarie()) {
      total_size += 2 + 1;
    }

  }
  if (_has_bits_[24 / 32] & (0xffu << (24 % 32))) {
    // optional bool king_contract = 25;
    if (has_king_contract()) {
      total_size += 2 + 1;
    }

    // optional bool rebate_charge = 26;
    if (has_rebate_charge()) {
      total_size += 2 + 1;
    }

    // optional bool rebate_consum = 27;
    if (has_rebate_consum()) {
      total_size += 2 + 1;
    }

    // optional bool sum_active = 28;
    if (has_sum_active()) {
      total_size += 2 + 1;
    }

    // optional bool cross_score_reward = 29;
    if (has_cross_score_reward()) {
      total_size += 2 + 1;
    }

    // optional bool appell = 30;
    if (has_appell()) {
      total_size += 2 + 1;
    }

    // optional bool bottle = 31;
    if (has_bottle()) {
      total_size += 2 + 1;
    }

    // optional bool pet_challenge_reward = 32;
    if (has_pet_challenge_reward()) {
      total_size += 2 + 1;
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PlayerDataMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PlayerDataMsg*>(&from));
}

void PlayerDataMsg::MergeFrom(const PlayerDataMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_user()) {
      set_user(from.user());
    }
    if (from.has_castle()) {
      set_castle(from.castle());
    }
    if (from.has_army()) {
      set_army(from.army());
    }
    if (from.has_quest()) {
      set_quest(from.quest());
    }
    if (from.has_build()) {
      set_build(from.build());
    }
    if (from.has_tree()) {
      set_tree(from.tree());
    }
    if (from.has_aas()) {
      set_aas(from.aas());
    }
    if (from.has_smith()) {
      set_smith(from.smith());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_bag()) {
      set_bag(from.bag());
    }
    if (from.has_leed()) {
      set_leed(from.leed());
    }
    if (from.has_star()) {
      set_star(from.star());
    }
    if (from.has_friend_()) {
      set_friend_(from.friend_());
    }
    if (from.has_effect()) {
      set_effect(from.effect());
    }
    if (from.has_sys()) {
      set_sys(from.sys());
    }
    if (from.has_offline()) {
      set_offline(from.offline());
    }
    if (from.has_reward()) {
      set_reward(from.reward());
    }
  }
  if (from._has_bits_[16 / 32] & (0xffu << (16 % 32))) {
    if (from.has_tower()) {
      set_tower(from.tower());
    }
    if (from.has_shop()) {
      set_shop(from.shop());
    }
    if (from.has_chall_reward()) {
      set_chall_reward(from.chall_reward());
    }
    if (from.has_sns_req()) {
      set_sns_req(from.sns_req());
    }
    if (from.has_active()) {
      set_active(from.active());
    }
    if (from.has_switches()) {
      set_switches(from.switches());
    }
    if (from.has_sweep()) {
      set_sweep(from.sweep());
    }
    if (from.has_questionnarie()) {
      set_questionnarie(from.questionnarie());
    }
  }
  if (from._has_bits_[24 / 32] & (0xffu << (24 % 32))) {
    if (from.has_king_contract()) {
      set_king_contract(from.king_contract());
    }
    if (from.has_rebate_charge()) {
      set_rebate_charge(from.rebate_charge());
    }
    if (from.has_rebate_consum()) {
      set_rebate_consum(from.rebate_consum());
    }
    if (from.has_sum_active()) {
      set_sum_active(from.sum_active());
    }
    if (from.has_cross_score_reward()) {
      set_cross_score_reward(from.cross_score_reward());
    }
    if (from.has_appell()) {
      set_appell(from.appell());
    }
    if (from.has_bottle()) {
      set_bottle(from.bottle());
    }
    if (from.has_pet_challenge_reward()) {
      set_pet_challenge_reward(from.pet_challenge_reward());
    }
  }
}

void PlayerDataMsg::CopyFrom(const PlayerDataMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerDataMsg::IsInitialized() const {

  return true;
}

void PlayerDataMsg::Swap(PlayerDataMsg* other) {
  if (other != this) {
    std::swap(user_, other->user_);
    std::swap(castle_, other->castle_);
    std::swap(army_, other->army_);
    std::swap(quest_, other->quest_);
    std::swap(build_, other->build_);
    std::swap(tree_, other->tree_);
    std::swap(aas_, other->aas_);
    std::swap(smith_, other->smith_);
    std::swap(bag_, other->bag_);
    std::swap(leed_, other->leed_);
    std::swap(star_, other->star_);
    std::swap(friend__, other->friend__);
    std::swap(effect_, other->effect_);
    std::swap(sys_, other->sys_);
    std::swap(offline_, other->offline_);
    std::swap(reward_, other->reward_);
    std::swap(tower_, other->tower_);
    std::swap(shop_, other->shop_);
    std::swap(chall_reward_, other->chall_reward_);
    std::swap(sns_req_, other->sns_req_);
    std::swap(active_, other->active_);
    std::swap(switches_, other->switches_);
    std::swap(sweep_, other->sweep_);
    std::swap(questionnarie_, other->questionnarie_);
    std::swap(king_contract_, other->king_contract_);
    std::swap(rebate_charge_, other->rebate_charge_);
    std::swap(rebate_consum_, other->rebate_consum_);
    std::swap(sum_active_, other->sum_active_);
    std::swap(cross_score_reward_, other->cross_score_reward_);
    std::swap(appell_, other->appell_);
    std::swap(bottle_, other->bottle_);
    std::swap(pet_challenge_reward_, other->pet_challenge_reward_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string PlayerDataMsg::GetTypeName() const {
  return "com.road.yishi.proto.player.PlayerDataMsg";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace player
}  // namespace proto
}  // namespace yishi
}  // namespace road
}  // namespace com

// @@protoc_insertion_point(global_scope)