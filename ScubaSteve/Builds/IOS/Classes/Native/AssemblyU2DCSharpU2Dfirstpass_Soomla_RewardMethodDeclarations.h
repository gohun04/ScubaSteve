#pragma once

// Soomla.Reward
struct Reward_t40;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t47;
// System.Collections.Generic.List`1<Soomla.Reward>
struct List_1_t77;

// System.Void Soomla.Reward::.ctor(System.String,System.String)
 void Reward__ctor_m234 (Reward_t40 * __this, String_t* ___id, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Reward::.ctor(JSONObject)
 void Reward__ctor_m235 (Reward_t40 * __this, JSONObject_t47 * ___jsonReward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Reward::.cctor()
 void Reward__cctor_m236 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Reward::get_Owned()
 bool Reward_get_Owned_m237 (Reward_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Reward::toJSONObject()
 JSONObject_t47 * Reward_toJSONObject_m238 (Reward_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Reward Soomla.Reward::fromJSONObject(JSONObject)
 Reward_t40 * Reward_fromJSONObject_m239 (Object_t * __this/* static, unused */, JSONObject_t47 * ___rewardObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Reward::Take()
 bool Reward_Take_m240 (Reward_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Reward::CanGive()
 bool Reward_CanGive_m241 (Reward_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Reward::Give()
 bool Reward_Give_m242 (Reward_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Reward::giveInner()
// System.Boolean Soomla.Reward::takeInner()
// Soomla.Reward Soomla.Reward::GetReward(System.String)
 Reward_t40 * Reward_GetReward_m243 (Object_t * __this/* static, unused */, String_t* ___rewardID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Soomla.Reward> Soomla.Reward::GetRewards()
 List_1_t77 * Reward_GetRewards_m244 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
