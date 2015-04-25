#pragma once

// Soomla.SequenceReward
struct SequenceReward_t44;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Soomla.Reward>
struct List_1_t77;
// JSONObject
struct JSONObject_t47;
// Soomla.Reward
struct Reward_t40;

// System.Void Soomla.SequenceReward::.ctor(System.String,System.String,System.Collections.Generic.List`1<Soomla.Reward>)
 void SequenceReward__ctor_m245 (SequenceReward_t44 * __this, String_t* ___id, String_t* ___name, List_1_t77 * ___rewards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.SequenceReward::.ctor(JSONObject)
 void SequenceReward__ctor_m246 (SequenceReward_t44 * __this, JSONObject_t47 * ___jsonReward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.SequenceReward::.cctor()
 void SequenceReward__cctor_m247 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.SequenceReward::toJSONObject()
 JSONObject_t47 * SequenceReward_toJSONObject_m248 (SequenceReward_t44 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Reward Soomla.SequenceReward::GetLastGivenReward()
 Reward_t40 * SequenceReward_GetLastGivenReward_m249 (SequenceReward_t44 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.SequenceReward::HasMoreToGive()
 bool SequenceReward_HasMoreToGive_m250 (SequenceReward_t44 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.SequenceReward::ForceNextRewardToGive(Soomla.Reward)
 bool SequenceReward_ForceNextRewardToGive_m251 (SequenceReward_t44 * __this, Reward_t40 * ___reward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.SequenceReward::giveInner()
 bool SequenceReward_giveInner_m252 (SequenceReward_t44 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.SequenceReward::takeInner()
 bool SequenceReward_takeInner_m253 (SequenceReward_t44 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
