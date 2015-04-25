#pragma once

// Soomla.VirtualItemReward
struct VirtualItemReward_t157;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t47;

// System.Void Soomla.VirtualItemReward::.ctor(System.String,System.String,System.String,System.Int32)
 void VirtualItemReward__ctor_m644 (VirtualItemReward_t157 * __this, String_t* ___rewardId, String_t* ___name, String_t* ___associatedItemId, int32_t ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.VirtualItemReward::.ctor(JSONObject)
 void VirtualItemReward__ctor_m645 (VirtualItemReward_t157 * __this, JSONObject_t47 * ___jsonReward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.VirtualItemReward::.cctor()
 void VirtualItemReward__cctor_m646 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.VirtualItemReward::toJSONObject()
 JSONObject_t47 * VirtualItemReward_toJSONObject_m647 (VirtualItemReward_t157 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.VirtualItemReward::giveInner()
 bool VirtualItemReward_giveInner_m648 (VirtualItemReward_t157 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.VirtualItemReward::takeInner()
 bool VirtualItemReward_takeInner_m649 (VirtualItemReward_t157 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
