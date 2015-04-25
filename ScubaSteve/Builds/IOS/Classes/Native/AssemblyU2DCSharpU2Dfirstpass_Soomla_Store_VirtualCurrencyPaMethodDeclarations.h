#pragma once

// Soomla.Store.VirtualCurrencyPack
struct VirtualCurrencyPack_t145;
// System.String
struct String_t;
// Soomla.Store.PurchaseType
struct PurchaseType_t143;
// JSONObject
struct JSONObject_t47;

// System.Void Soomla.Store.VirtualCurrencyPack::.ctor(System.String,System.String,System.String,System.Int32,System.String,Soomla.Store.PurchaseType)
 void VirtualCurrencyPack__ctor_m571 (VirtualCurrencyPack_t145 * __this, String_t* ___name, String_t* ___description, String_t* ___itemId, int32_t ___currencyAmount, String_t* ___currencyItemId, PurchaseType_t143 * ___purchaseType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualCurrencyPack::.ctor(JSONObject)
 void VirtualCurrencyPack__ctor_m572 (VirtualCurrencyPack_t145 * __this, JSONObject_t47 * ___jsonItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualCurrencyPack::.cctor()
 void VirtualCurrencyPack__cctor_m573 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.VirtualCurrencyPack::toJSONObject()
 JSONObject_t47 * VirtualCurrencyPack_toJSONObject_m574 (VirtualCurrencyPack_t145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyPack::Give(System.Int32,System.Boolean)
 int32_t VirtualCurrencyPack_Give_m575 (VirtualCurrencyPack_t145 * __this, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyPack::Take(System.Int32,System.Boolean)
 int32_t VirtualCurrencyPack_Take_m576 (VirtualCurrencyPack_t145 * __this, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyPack::ResetBalance(System.Int32,System.Boolean)
 int32_t VirtualCurrencyPack_ResetBalance_m577 (VirtualCurrencyPack_t145 * __this, int32_t ___balance, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyPack::GetBalance()
 int32_t VirtualCurrencyPack_GetBalance_m578 (VirtualCurrencyPack_t145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.VirtualCurrencyPack::canBuy()
 bool VirtualCurrencyPack_canBuy_m579 (VirtualCurrencyPack_t145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
