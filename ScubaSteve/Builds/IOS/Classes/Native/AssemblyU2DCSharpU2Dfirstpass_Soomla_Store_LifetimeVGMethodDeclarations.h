#pragma once

// Soomla.Store.LifetimeVG
struct LifetimeVG_t147;
// System.String
struct String_t;
// Soomla.Store.PurchaseType
struct PurchaseType_t143;
// JSONObject
struct JSONObject_t47;

// System.Void Soomla.Store.LifetimeVG::.ctor(System.String,System.String,System.String,Soomla.Store.PurchaseType)
 void LifetimeVG__ctor_m592 (LifetimeVG_t147 * __this, String_t* ___name, String_t* ___description, String_t* ___itemId, PurchaseType_t143 * ___purchaseType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.LifetimeVG::.ctor(JSONObject)
 void LifetimeVG__ctor_m593 (LifetimeVG_t147 * __this, JSONObject_t47 * ___jsonVg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.LifetimeVG::.cctor()
 void LifetimeVG__cctor_m594 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.LifetimeVG::toJSONObject()
 JSONObject_t47 * LifetimeVG_toJSONObject_m595 (LifetimeVG_t147 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.LifetimeVG::Give(System.Int32,System.Boolean)
 int32_t LifetimeVG_Give_m596 (LifetimeVG_t147 * __this, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.LifetimeVG::Take(System.Int32,System.Boolean)
 int32_t LifetimeVG_Take_m597 (LifetimeVG_t147 * __this, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.LifetimeVG::canBuy()
 bool LifetimeVG_canBuy_m598 (LifetimeVG_t147 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
