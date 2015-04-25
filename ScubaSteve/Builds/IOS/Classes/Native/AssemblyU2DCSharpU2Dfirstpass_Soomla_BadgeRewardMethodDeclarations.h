#pragma once

// Soomla.BadgeReward
struct BadgeReward_t76;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t47;

// System.Void Soomla.BadgeReward::.ctor(System.String,System.String)
 void BadgeReward__ctor_m222 (BadgeReward_t76 * __this, String_t* ___id, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.BadgeReward::.ctor(System.String,System.String,System.String)
 void BadgeReward__ctor_m223 (BadgeReward_t76 * __this, String_t* ___id, String_t* ___name, String_t* ___iconUrl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.BadgeReward::.ctor(JSONObject)
 void BadgeReward__ctor_m224 (BadgeReward_t76 * __this, JSONObject_t47 * ___jsonReward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.BadgeReward::toJSONObject()
 JSONObject_t47 * BadgeReward_toJSONObject_m225 (BadgeReward_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.BadgeReward::giveInner()
 bool BadgeReward_giveInner_m226 (BadgeReward_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.BadgeReward::takeInner()
 bool BadgeReward_takeInner_m227 (BadgeReward_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
