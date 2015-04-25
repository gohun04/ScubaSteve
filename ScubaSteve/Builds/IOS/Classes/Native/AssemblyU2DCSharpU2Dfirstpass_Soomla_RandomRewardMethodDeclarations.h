#pragma once

// Soomla.RandomReward
struct RandomReward_t78;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Soomla.Reward>
struct List_1_t77;
// JSONObject
struct JSONObject_t47;

// System.Void Soomla.RandomReward::.ctor(System.String,System.String,System.Collections.Generic.List`1<Soomla.Reward>)
 void RandomReward__ctor_m228 (RandomReward_t78 * __this, String_t* ___id, String_t* ___name, List_1_t77 * ___rewards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RandomReward::.ctor(JSONObject)
 void RandomReward__ctor_m229 (RandomReward_t78 * __this, JSONObject_t47 * ___jsonReward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RandomReward::.cctor()
 void RandomReward__cctor_m230 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.RandomReward::toJSONObject()
 JSONObject_t47 * RandomReward_toJSONObject_m231 (RandomReward_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.RandomReward::giveInner()
 bool RandomReward_giveInner_m232 (RandomReward_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.RandomReward::takeInner()
 bool RandomReward_takeInner_m233 (RandomReward_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
