#pragma once

// Soomla.Store.VirtualCurrency
struct VirtualCurrency_t105;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t47;

// System.Void Soomla.Store.VirtualCurrency::.ctor(System.String,System.String,System.String)
 void VirtualCurrency__ctor_m564 (VirtualCurrency_t105 * __this, String_t* ___name, String_t* ___description, String_t* ___itemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualCurrency::.ctor(JSONObject)
 void VirtualCurrency__ctor_m565 (VirtualCurrency_t105 * __this, JSONObject_t47 * ___jsonVc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.VirtualCurrency::toJSONObject()
 JSONObject_t47 * VirtualCurrency_toJSONObject_m566 (VirtualCurrency_t105 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrency::Give(System.Int32,System.Boolean)
 int32_t VirtualCurrency_Give_m567 (VirtualCurrency_t105 * __this, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrency::Take(System.Int32,System.Boolean)
 int32_t VirtualCurrency_Take_m568 (VirtualCurrency_t105 * __this, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrency::ResetBalance(System.Int32,System.Boolean)
 int32_t VirtualCurrency_ResetBalance_m569 (VirtualCurrency_t105 * __this, int32_t ___balance, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrency::GetBalance()
 int32_t VirtualCurrency_GetBalance_m570 (VirtualCurrency_t105 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
