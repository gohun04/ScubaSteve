#pragma once

// Soomla.Store.UpgradeVG
struct UpgradeVG_t103;
// System.String
struct String_t;
// Soomla.Store.PurchaseType
struct PurchaseType_t143;
// JSONObject
struct JSONObject_t47;

// System.Void Soomla.Store.UpgradeVG::.ctor(System.String,System.String,System.String,System.String,System.String,System.String,Soomla.Store.PurchaseType)
 void UpgradeVG__ctor_m614 (UpgradeVG_t103 * __this, String_t* ___goodItemId, String_t* ___nextItemId, String_t* ___prevItemId, String_t* ___name, String_t* ___description, String_t* ___itemId, PurchaseType_t143 * ___purchaseType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.UpgradeVG::.ctor(JSONObject)
 void UpgradeVG__ctor_m615 (UpgradeVG_t103 * __this, JSONObject_t47 * ___jsonItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.UpgradeVG::.cctor()
 void UpgradeVG__cctor_m616 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.UpgradeVG::toJSONObject()
 JSONObject_t47 * UpgradeVG_toJSONObject_m617 (UpgradeVG_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.UpgradeVG::canBuy()
 bool UpgradeVG_canBuy_m618 (UpgradeVG_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.UpgradeVG::Give(System.Int32,System.Boolean)
 int32_t UpgradeVG_Give_m619 (UpgradeVG_t103 * __this, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.UpgradeVG::Take(System.Int32,System.Boolean)
 int32_t UpgradeVG_Take_m620 (UpgradeVG_t103 * __this, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
