#pragma once

// Soomla.Store.StoreInventory
struct StoreInventory_t126;
// System.String
struct String_t;
// Soomla.Store.VirtualGood
struct VirtualGood_t102;
// Soomla.Store.UpgradeVG
struct UpgradeVG_t103;
// Soomla.Store.EquippableVG
struct EquippableVG_t104;
// Soomla.Store.VirtualCurrency
struct VirtualCurrency_t105;

// System.Void Soomla.Store.StoreInventory::.ctor()
 void StoreInventory__ctor_m455 (StoreInventory_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::.cctor()
 void StoreInventory__cctor_m456 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.StoreInventory::CanAfford(System.String)
 bool StoreInventory_CanAfford_m457 (Object_t * __this/* static, unused */, String_t* ___itemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::BuyItem(System.String)
 void StoreInventory_BuyItem_m458 (Object_t * __this/* static, unused */, String_t* ___itemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::BuyItem(System.String,System.String)
 void StoreInventory_BuyItem_m459 (Object_t * __this/* static, unused */, String_t* ___itemId, String_t* ___payload, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.StoreInventory::GetItemBalance(System.String)
 int32_t StoreInventory_GetItemBalance_m460 (Object_t * __this/* static, unused */, String_t* ___itemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::GiveItem(System.String,System.Int32)
 void StoreInventory_GiveItem_m461 (Object_t * __this/* static, unused */, String_t* ___itemId, int32_t ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::TakeItem(System.String,System.Int32)
 void StoreInventory_TakeItem_m462 (Object_t * __this/* static, unused */, String_t* ___itemId, int32_t ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::EquipVirtualGood(System.String)
 void StoreInventory_EquipVirtualGood_m463 (Object_t * __this/* static, unused */, String_t* ___goodItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::UnEquipVirtualGood(System.String)
 void StoreInventory_UnEquipVirtualGood_m464 (Object_t * __this/* static, unused */, String_t* ___goodItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.StoreInventory::IsVirtualGoodEquipped(System.String)
 bool StoreInventory_IsVirtualGoodEquipped_m465 (Object_t * __this/* static, unused */, String_t* ___goodItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.StoreInventory::GetGoodUpgradeLevel(System.String)
 int32_t StoreInventory_GetGoodUpgradeLevel_m466 (Object_t * __this/* static, unused */, String_t* ___goodItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Soomla.Store.StoreInventory::GetGoodCurrentUpgrade(System.String)
 String_t* StoreInventory_GetGoodCurrentUpgrade_m467 (Object_t * __this/* static, unused */, String_t* ___goodItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::UpgradeGood(System.String)
 void StoreInventory_UpgradeGood_m468 (Object_t * __this/* static, unused */, String_t* ___goodItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::RemoveGoodUpgrades(System.String)
 void StoreInventory_RemoveGoodUpgrades_m469 (Object_t * __this/* static, unused */, String_t* ___goodItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::RefreshLocalInventory()
 void StoreInventory_RefreshLocalInventory_m470 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::RefreshOnGoodUpgrade(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG)
 void StoreInventory_RefreshOnGoodUpgrade_m471 (Object_t * __this/* static, unused */, VirtualGood_t102 * ___vg, UpgradeVG_t103 * ___uvg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::RefreshOnGoodEquipped(Soomla.Store.EquippableVG)
 void StoreInventory_RefreshOnGoodEquipped_m472 (Object_t * __this/* static, unused */, EquippableVG_t104 * ___equippable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::RefreshOnGoodUnEquipped(Soomla.Store.EquippableVG)
 void StoreInventory_RefreshOnGoodUnEquipped_m473 (Object_t * __this/* static, unused */, EquippableVG_t104 * ___equippable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::RefreshOnCurrencyBalanceChanged(Soomla.Store.VirtualCurrency,System.Int32,System.Int32)
 void StoreInventory_RefreshOnCurrencyBalanceChanged_m474 (Object_t * __this/* static, unused */, VirtualCurrency_t105 * ___virtualCurrency, int32_t ___balance, int32_t ___amountAdded, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::RefreshOnGoodBalanceChanged(Soomla.Store.VirtualGood,System.Int32,System.Int32)
 void StoreInventory_RefreshOnGoodBalanceChanged_m475 (Object_t * __this/* static, unused */, VirtualGood_t102 * ___good, int32_t ___balance, int32_t ___amountAdded, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::UpdateLocalBalance(System.String,System.Int32)
 void StoreInventory_UpdateLocalBalance_m476 (Object_t * __this/* static, unused */, String_t* ___itemId, int32_t ___balance, MethodInfo* method) IL2CPP_METHOD_ATTR;
