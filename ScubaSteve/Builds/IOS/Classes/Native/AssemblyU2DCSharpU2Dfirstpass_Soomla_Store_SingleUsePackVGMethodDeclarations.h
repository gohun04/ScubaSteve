#pragma once

// Soomla.Store.SingleUsePackVG
struct SingleUsePackVG_t148;
// System.String
struct String_t;
// Soomla.Store.PurchaseType
struct PurchaseType_t143;
// JSONObject
struct JSONObject_t47;

// System.Void Soomla.Store.SingleUsePackVG::.ctor(System.String,System.Int32,System.String,System.String,System.String,Soomla.Store.PurchaseType)
 void SingleUsePackVG__ctor_m599 (SingleUsePackVG_t148 * __this, String_t* ___goodItemId, int32_t ___amount, String_t* ___name, String_t* ___description, String_t* ___itemId, PurchaseType_t143 * ___purchaseType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SingleUsePackVG::.ctor(JSONObject)
 void SingleUsePackVG__ctor_m600 (SingleUsePackVG_t148 * __this, JSONObject_t47 * ___jsonItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SingleUsePackVG::.cctor()
 void SingleUsePackVG__cctor_m601 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.SingleUsePackVG::toJSONObject()
 JSONObject_t47 * SingleUsePackVG_toJSONObject_m602 (SingleUsePackVG_t148 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.SingleUsePackVG::Give(System.Int32,System.Boolean)
 int32_t SingleUsePackVG_Give_m603 (SingleUsePackVG_t148 * __this, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.SingleUsePackVG::Take(System.Int32,System.Boolean)
 int32_t SingleUsePackVG_Take_m604 (SingleUsePackVG_t148 * __this, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.SingleUsePackVG::ResetBalance(System.Int32,System.Boolean)
 int32_t SingleUsePackVG_ResetBalance_m605 (SingleUsePackVG_t148 * __this, int32_t ___balance, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.SingleUsePackVG::GetBalance()
 int32_t SingleUsePackVG_GetBalance_m606 (SingleUsePackVG_t148 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.SingleUsePackVG::canBuy()
 bool SingleUsePackVG_canBuy_m607 (SingleUsePackVG_t148 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
