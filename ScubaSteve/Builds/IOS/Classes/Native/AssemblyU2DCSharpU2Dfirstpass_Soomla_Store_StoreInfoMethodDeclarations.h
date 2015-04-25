#pragma once

// Soomla.Store.StoreInfo
struct StoreInfo_t87;
// Soomla.Store.IStoreAssets
struct IStoreAssets_t98;
// Soomla.Store.VirtualItem
struct VirtualItem_t100;
// System.String
struct String_t;
// Soomla.Store.PurchasableVirtualItem
struct PurchasableVirtualItem_t106;
// Soomla.Store.VirtualCategory
struct VirtualCategory_t136;
// Soomla.Store.UpgradeVG
struct UpgradeVG_t103;
// System.Collections.Generic.List`1<Soomla.Store.UpgradeVG>
struct List_1_t137;
// System.Collections.Generic.List`1<Soomla.Store.VirtualItem>
struct List_1_t138;
// JSONObject
struct JSONObject_t47;

// System.Void Soomla.Store.StoreInfo::.ctor()
 void StoreInfo__ctor_m477 (StoreInfo_t87 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::.cctor()
 void StoreInfo__cctor_m478 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.StoreInfo Soomla.Store.StoreInfo::get_instance()
 StoreInfo_t87 * StoreInfo_get_instance_m479 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::SetStoreAssets(Soomla.Store.IStoreAssets)
 void StoreInfo_SetStoreAssets_m480 (Object_t * __this/* static, unused */, Object_t * ___storeAssets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.VirtualItem Soomla.Store.StoreInfo::GetItemByItemId(System.String)
 VirtualItem_t100 * StoreInfo_GetItemByItemId_m481 (Object_t * __this/* static, unused */, String_t* ___itemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.PurchasableVirtualItem Soomla.Store.StoreInfo::GetPurchasableItemWithProductId(System.String)
 PurchasableVirtualItem_t106 * StoreInfo_GetPurchasableItemWithProductId_m482 (Object_t * __this/* static, unused */, String_t* ___productId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.VirtualCategory Soomla.Store.StoreInfo::GetCategoryForVirtualGood(System.String)
 VirtualCategory_t136 * StoreInfo_GetCategoryForVirtualGood_m483 (Object_t * __this/* static, unused */, String_t* ___goodItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.UpgradeVG Soomla.Store.StoreInfo::GetFirstUpgradeForVirtualGood(System.String)
 UpgradeVG_t103 * StoreInfo_GetFirstUpgradeForVirtualGood_m484 (Object_t * __this/* static, unused */, String_t* ___goodItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.UpgradeVG Soomla.Store.StoreInfo::GetLastUpgradeForVirtualGood(System.String)
 UpgradeVG_t103 * StoreInfo_GetLastUpgradeForVirtualGood_m485 (Object_t * __this/* static, unused */, String_t* ___goodItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Soomla.Store.UpgradeVG> Soomla.Store.StoreInfo::GetUpgradesForVirtualGood(System.String)
 List_1_t137 * StoreInfo_GetUpgradesForVirtualGood_m486 (Object_t * __this/* static, unused */, String_t* ___goodItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::Save()
 void StoreInfo_Save_m487 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::Save(Soomla.Store.VirtualItem,System.Boolean)
 void StoreInfo_Save_m488 (Object_t * __this/* static, unused */, VirtualItem_t100 * ___virtualItem, bool ___saveToDB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::Save(System.Collections.Generic.List`1<Soomla.Store.VirtualItem>,System.Boolean)
 void StoreInfo_Save_m489 (Object_t * __this/* static, unused */, List_1_t138 * ___virtualItems, bool ___saveToDB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::_setStoreAssets(Soomla.Store.IStoreAssets)
 void StoreInfo__setStoreAssets_m490 (StoreInfo_t87 * __this, Object_t * ___storeAssets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::loadNativeFromDB()
 void StoreInfo_loadNativeFromDB_m491 (StoreInfo_t87 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Soomla.Store.StoreInfo::IStoreAssetsToJSON(Soomla.Store.IStoreAssets)
 String_t* StoreInfo_IStoreAssetsToJSON_m492 (Object_t * __this/* static, unused */, Object_t * ___storeAssets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::initializeFromDB()
 void StoreInfo_initializeFromDB_m493 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::fromJSONObject(JSONObject)
 void StoreInfo_fromJSONObject_m494 (Object_t * __this/* static, unused */, JSONObject_t47 * ___storeJSON, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::updateAggregatedLists()
 void StoreInfo_updateAggregatedLists_m495 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::replaceVirtualItem(Soomla.Store.VirtualItem)
 void StoreInfo_replaceVirtualItem_m496 (Object_t * __this/* static, unused */, VirtualItem_t100 * ___virtualItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.StoreInfo::toJSONObject()
 JSONObject_t47 * StoreInfo_toJSONObject_m497 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Soomla.Store.StoreInfo::keyMetaStoreInfo()
 String_t* StoreInfo_keyMetaStoreInfo_m498 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.StoreInfo::<GetFirstUpgradeForVirtualGood>m__21(Soomla.Store.UpgradeVG)
 bool StoreInfo_U3CGetFirstUpgradeForVirtualGoodU3Em__21_m499 (Object_t * __this/* static, unused */, UpgradeVG_t103 * ___up, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.StoreInfo::<GetLastUpgradeForVirtualGood>m__22(Soomla.Store.UpgradeVG)
 bool StoreInfo_U3CGetLastUpgradeForVirtualGoodU3Em__22_m500 (Object_t * __this/* static, unused */, UpgradeVG_t103 * ___up, MethodInfo* method) IL2CPP_METHOD_ATTR;
