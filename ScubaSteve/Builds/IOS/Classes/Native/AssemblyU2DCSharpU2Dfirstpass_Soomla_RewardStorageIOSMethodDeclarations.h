#pragma once

// Soomla.RewardStorageIOS
struct RewardStorageIOS_t43;
// System.String
struct String_t;
// Soomla.SequenceReward
struct SequenceReward_t44;
// Soomla.Reward
struct Reward_t40;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Soomla.RewardStorageIOS::.ctor()
 void RewardStorageIOS__ctor_m51 (RewardStorageIOS_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Soomla.RewardStorageIOS::rewardStorage_GetLastGivenTimeMillis(System.String)
 int64_t RewardStorageIOS_rewardStorage_GetLastGivenTimeMillis_m52 (Object_t * __this/* static, unused */, String_t* ___rewardId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.RewardStorageIOS::rewardStorage_GetTimesGiven(System.String)
 int32_t RewardStorageIOS_rewardStorage_GetTimesGiven_m53 (Object_t * __this/* static, unused */, String_t* ___rewardId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorageIOS::rewardStorage_SetTimesGiven(System.String,System.Boolean,System.Boolean)
 void RewardStorageIOS_rewardStorage_SetTimesGiven_m54 (Object_t * __this/* static, unused */, String_t* ___rewardId, bool ___up, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.RewardStorageIOS::rewardStorage_GetLastSeqIdxGiven(System.String)
 int32_t RewardStorageIOS_rewardStorage_GetLastSeqIdxGiven_m55 (Object_t * __this/* static, unused */, String_t* ___rewardId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorageIOS::rewardStorage_SetLastSeqIdxGiven(System.String,System.Int32)
 void RewardStorageIOS_rewardStorage_SetLastSeqIdxGiven_m56 (Object_t * __this/* static, unused */, String_t* ___rewardId, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.RewardStorageIOS::_getLastSeqIdxGiven(Soomla.SequenceReward)
 int32_t RewardStorageIOS__getLastSeqIdxGiven_m57 (RewardStorageIOS_t43 * __this, SequenceReward_t44 * ___seqReward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorageIOS::_setLastSeqIdxGiven(Soomla.SequenceReward,System.Int32)
 void RewardStorageIOS__setLastSeqIdxGiven_m58 (RewardStorageIOS_t43 * __this, SequenceReward_t44 * ___seqReward, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorageIOS::_setTimesGiven(Soomla.Reward,System.Boolean,System.Boolean)
 void RewardStorageIOS__setTimesGiven_m59 (RewardStorageIOS_t43 * __this, Reward_t40 * ___reward, bool ___up, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.RewardStorageIOS::_getTimesGiven(Soomla.Reward)
 int32_t RewardStorageIOS__getTimesGiven_m60 (RewardStorageIOS_t43 * __this, Reward_t40 * ___reward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Soomla.RewardStorageIOS::_getLastGivenTime(Soomla.Reward)
 DateTime_t45  RewardStorageIOS__getLastGivenTime_m61 (RewardStorageIOS_t43 * __this, Reward_t40 * ___reward, MethodInfo* method) IL2CPP_METHOD_ATTR;
