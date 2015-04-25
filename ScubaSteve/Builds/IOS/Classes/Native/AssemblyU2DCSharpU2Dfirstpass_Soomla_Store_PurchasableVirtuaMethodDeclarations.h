#pragma once

// Soomla.Store.PurchasableVirtualItem
struct PurchasableVirtualItem_t106;
// System.String
struct String_t;
// Soomla.Store.PurchaseType
struct PurchaseType_t143;
// JSONObject
struct JSONObject_t47;

// System.Void Soomla.Store.PurchasableVirtualItem::.ctor(System.String,System.String,System.String,Soomla.Store.PurchaseType)
 void PurchasableVirtualItem__ctor_m546 (PurchasableVirtualItem_t106 * __this, String_t* ___name, String_t* ___description, String_t* ___itemId, PurchaseType_t143 * ___purchaseType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.PurchasableVirtualItem::.ctor(JSONObject)
 void PurchasableVirtualItem__ctor_m547 (PurchasableVirtualItem_t106 * __this, JSONObject_t47 * ___jsonItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.PurchasableVirtualItem::CanAfford()
 bool PurchasableVirtualItem_CanAfford_m548 (PurchasableVirtualItem_t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.PurchasableVirtualItem::Buy(System.String)
 void PurchasableVirtualItem_Buy_m549 (PurchasableVirtualItem_t106 * __this, String_t* ___payload, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.PurchasableVirtualItem::canBuy()
// JSONObject Soomla.Store.PurchasableVirtualItem::toJSONObject()
 JSONObject_t47 * PurchasableVirtualItem_toJSONObject_m550 (PurchasableVirtualItem_t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
