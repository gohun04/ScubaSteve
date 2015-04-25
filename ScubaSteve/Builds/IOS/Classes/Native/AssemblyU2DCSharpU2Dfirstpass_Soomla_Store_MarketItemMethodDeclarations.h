#pragma once

// Soomla.Store.MarketItem
struct MarketItem_t142;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t47;
// Soomla.Store.MarketItem/Consumable
#include "AssemblyU2DCSharpU2Dfirstpass_Soomla_Store_MarketItem_Consum.h"

// System.Void Soomla.Store.MarketItem::.ctor(System.String,Soomla.Store.MarketItem/Consumable,System.Double)
 void MarketItem__ctor_m543 (MarketItem_t142 * __this, String_t* ___productId, int32_t ___consumable, double ___price, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.MarketItem::.ctor(JSONObject)
 void MarketItem__ctor_m544 (MarketItem_t142 * __this, JSONObject_t47 * ___jsonObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.MarketItem::toJSONObject()
 JSONObject_t47 * MarketItem_toJSONObject_m545 (MarketItem_t142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
