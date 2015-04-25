#pragma once

// Soomla.RewardStorage
struct RewardStorage_t4;
// Soomla.Reward
struct Reward_t40;
// Soomla.SequenceReward
struct SequenceReward_t44;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Soomla.RewardStorage::.ctor()
 void RewardStorage__ctor_m207 (RewardStorage_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorage::.cctor()
 void RewardStorage__cctor_m208 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.RewardStorage Soomla.RewardStorage::get_instance()
 RewardStorage_t4 * RewardStorage_get_instance_m209 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorage::SetRewardStatus(Soomla.Reward,System.Boolean)
 void RewardStorage_SetRewardStatus_m210 (Object_t * __this/* static, unused */, Reward_t40 * ___reward, bool ___give, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorage::SetRewardStatus(Soomla.Reward,System.Boolean,System.Boolean)
 void RewardStorage_SetRewardStatus_m211 (Object_t * __this/* static, unused */, Reward_t40 * ___reward, bool ___give, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.RewardStorage::IsRewardGiven(Soomla.Reward)
 bool RewardStorage_IsRewardGiven_m212 (Object_t * __this/* static, unused */, Reward_t40 * ___reward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.RewardStorage::GetTimesGiven(Soomla.Reward)
 int32_t RewardStorage_GetTimesGiven_m213 (Object_t * __this/* static, unused */, Reward_t40 * ___reward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Soomla.RewardStorage::GetLastGivenTime(Soomla.Reward)
 DateTime_t45  RewardStorage_GetLastGivenTime_m214 (Object_t * __this/* static, unused */, Reward_t40 * ___reward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.RewardStorage::GetLastSeqIdxGiven(Soomla.SequenceReward)
 int32_t RewardStorage_GetLastSeqIdxGiven_m215 (Object_t * __this/* static, unused */, SequenceReward_t44 * ___reward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorage::SetLastSeqIdxGiven(Soomla.SequenceReward,System.Int32)
 void RewardStorage_SetLastSeqIdxGiven_m216 (Object_t * __this/* static, unused */, SequenceReward_t44 * ___reward, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.RewardStorage::_getLastSeqIdxGiven(Soomla.SequenceReward)
 int32_t RewardStorage__getLastSeqIdxGiven_m217 (RewardStorage_t4 * __this, SequenceReward_t44 * ___seqReward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorage::_setLastSeqIdxGiven(Soomla.SequenceReward,System.Int32)
 void RewardStorage__setLastSeqIdxGiven_m218 (RewardStorage_t4 * __this, SequenceReward_t44 * ___seqReward, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorage::_setTimesGiven(Soomla.Reward,System.Boolean,System.Boolean)
 void RewardStorage__setTimesGiven_m219 (RewardStorage_t4 * __this, Reward_t40 * ___reward, bool ___up, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.RewardStorage::_getTimesGiven(Soomla.Reward)
 int32_t RewardStorage__getTimesGiven_m220 (RewardStorage_t4 * __this, Reward_t40 * ___reward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Soomla.RewardStorage::_getLastGivenTime(Soomla.Reward)
 DateTime_t45  RewardStorage__getLastGivenTime_m221 (RewardStorage_t4 * __this, Reward_t40 * ___reward, MethodInfo* method) IL2CPP_METHOD_ATTR;
