#pragma once

// Soomla.Store.SingleUseVG
struct SingleUseVG_t149;
// System.String
struct String_t;
// Soomla.Store.PurchaseType
struct PurchaseType_t143;
// JSONObject
struct JSONObject_t47;

// System.Void Soomla.Store.SingleUseVG::.ctor(System.String,System.String,System.String,Soomla.Store.PurchaseType)
 void SingleUseVG__ctor_m608 (SingleUseVG_t149 * __this, String_t* ___name, String_t* ___description, String_t* ___itemId, PurchaseType_t143 * ___purchaseType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SingleUseVG::.ctor(JSONObject)
 void SingleUseVG__ctor_m609 (SingleUseVG_t149 * __this, JSONObject_t47 * ___jsonVg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.SingleUseVG::toJSONObject()
 JSONObject_t47 * SingleUseVG_toJSONObject_m610 (SingleUseVG_t149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.SingleUseVG::Give(System.Int32,System.Boolean)
 int32_t SingleUseVG_Give_m611 (SingleUseVG_t149 * __this, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.SingleUseVG::Take(System.Int32,System.Boolean)
 int32_t SingleUseVG_Take_m612 (SingleUseVG_t149 * __this, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.SingleUseVG::canBuy()
 bool SingleUseVG_canBuy_m613 (SingleUseVG_t149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
