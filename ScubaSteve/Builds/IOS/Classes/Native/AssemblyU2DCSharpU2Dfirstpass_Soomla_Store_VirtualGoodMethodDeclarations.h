#pragma once

// Soomla.Store.VirtualGood
struct VirtualGood_t102;
// System.String
struct String_t;
// Soomla.Store.PurchaseType
struct PurchaseType_t143;
// JSONObject
struct JSONObject_t47;

// System.Void Soomla.Store.VirtualGood::.ctor(System.String,System.String,System.String,Soomla.Store.PurchaseType)
 void VirtualGood__ctor_m621 (VirtualGood_t102 * __this, String_t* ___name, String_t* ___description, String_t* ___itemId, PurchaseType_t143 * ___purchaseType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGood::.ctor(JSONObject)
 void VirtualGood__ctor_m622 (VirtualGood_t102 * __this, JSONObject_t47 * ___jsonVg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.VirtualGood::toJSONObject()
 JSONObject_t47 * VirtualGood_toJSONObject_m623 (VirtualGood_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGood::ResetBalance(System.Int32,System.Boolean)
 int32_t VirtualGood_ResetBalance_m624 (VirtualGood_t102 * __this, int32_t ___balance, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGood::GetBalance()
 int32_t VirtualGood_GetBalance_m625 (VirtualGood_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
