#pragma once

// Soomla.Store.VirtualGoodsStorageIOS
struct VirtualGoodsStorageIOS_t101;
// System.String
struct String_t;
// Soomla.Store.VirtualGood
struct VirtualGood_t102;
// Soomla.Store.UpgradeVG
struct UpgradeVG_t103;
// Soomla.Store.EquippableVG
struct EquippableVG_t104;
// Soomla.Store.VirtualItem
struct VirtualItem_t100;

// System.Void Soomla.Store.VirtualGoodsStorageIOS::.ctor()
 void VirtualGoodsStorageIOS__ctor_m323 (VirtualGoodsStorageIOS_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_RemoveUpgrades(System.String,System.Boolean)
 int32_t VirtualGoodsStorageIOS_vgStorage_RemoveUpgrades_m324 (Object_t * __this/* static, unused */, String_t* ___itemId, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_AssignCurrentUpgrade(System.String,System.String,System.Boolean)
 int32_t VirtualGoodsStorageIOS_vgStorage_AssignCurrentUpgrade_m325 (Object_t * __this/* static, unused */, String_t* ___itemId, String_t* ___upgradeItemId, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_GetCurrentUpgrade(System.String,System.String&)
 int32_t VirtualGoodsStorageIOS_vgStorage_GetCurrentUpgrade_m326 (Object_t * __this/* static, unused */, String_t* ___itemId, String_t** ___outItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_IsEquipped(System.String,System.Boolean&)
 int32_t VirtualGoodsStorageIOS_vgStorage_IsEquipped_m327 (Object_t * __this/* static, unused */, String_t* ___itemId, bool* ___outResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_Equip(System.String,System.Boolean)
 int32_t VirtualGoodsStorageIOS_vgStorage_Equip_m328 (Object_t * __this/* static, unused */, String_t* ___itemId, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_UnEquip(System.String,System.Boolean)
 int32_t VirtualGoodsStorageIOS_vgStorage_UnEquip_m329 (Object_t * __this/* static, unused */, String_t* ___itemId, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_GetBalance(System.String,System.Int32&)
 int32_t VirtualGoodsStorageIOS_vgStorage_GetBalance_m330 (Object_t * __this/* static, unused */, String_t* ___itemId, int32_t* ___outBalance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_SetBalance(System.String,System.Int32,System.Boolean,System.Int32&)
 int32_t VirtualGoodsStorageIOS_vgStorage_SetBalance_m331 (Object_t * __this/* static, unused */, String_t* ___itemId, int32_t ___balance, bool ___notify, int32_t* ___outBalance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_Add(System.String,System.Int32,System.Boolean,System.Int32&)
 int32_t VirtualGoodsStorageIOS_vgStorage_Add_m332 (Object_t * __this/* static, unused */, String_t* ___itemId, int32_t ___amount, bool ___notify, int32_t* ___outBalance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_Remove(System.String,System.Int32,System.Boolean,System.Int32&)
 int32_t VirtualGoodsStorageIOS_vgStorage_Remove_m333 (Object_t * __this/* static, unused */, String_t* ___itemId, int32_t ___amount, bool ___notify, int32_t* ___outBalance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorageIOS::_removeUpgrades(Soomla.Store.VirtualGood,System.Boolean)
 void VirtualGoodsStorageIOS__removeUpgrades_m334 (VirtualGoodsStorageIOS_t101 * __this, VirtualGood_t102 * ___good, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorageIOS::_assignCurrentUpgrade(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG,System.Boolean)
 void VirtualGoodsStorageIOS__assignCurrentUpgrade_m335 (VirtualGoodsStorageIOS_t101 * __this, VirtualGood_t102 * ___good, UpgradeVG_t103 * ___upgradeVG, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.UpgradeVG Soomla.Store.VirtualGoodsStorageIOS::_getCurrentUpgrade(Soomla.Store.VirtualGood)
 UpgradeVG_t103 * VirtualGoodsStorageIOS__getCurrentUpgrade_m336 (VirtualGoodsStorageIOS_t101 * __this, VirtualGood_t102 * ___good, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.VirtualGoodsStorageIOS::_isEquipped(Soomla.Store.EquippableVG)
 bool VirtualGoodsStorageIOS__isEquipped_m337 (VirtualGoodsStorageIOS_t101 * __this, EquippableVG_t104 * ___good, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorageIOS::_equip(Soomla.Store.EquippableVG,System.Boolean)
 void VirtualGoodsStorageIOS__equip_m338 (VirtualGoodsStorageIOS_t101 * __this, EquippableVG_t104 * ___good, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorageIOS::_unequip(Soomla.Store.EquippableVG,System.Boolean)
 void VirtualGoodsStorageIOS__unequip_m339 (VirtualGoodsStorageIOS_t101 * __this, EquippableVG_t104 * ___good, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::_getBalance(Soomla.Store.VirtualItem)
 int32_t VirtualGoodsStorageIOS__getBalance_m340 (VirtualGoodsStorageIOS_t101 * __this, VirtualItem_t100 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::_setBalance(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
 int32_t VirtualGoodsStorageIOS__setBalance_m341 (VirtualGoodsStorageIOS_t101 * __this, VirtualItem_t100 * ___item, int32_t ___balance, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::_add(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
 int32_t VirtualGoodsStorageIOS__add_m342 (VirtualGoodsStorageIOS_t101 * __this, VirtualItem_t100 * ___item, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::_remove(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
 int32_t VirtualGoodsStorageIOS__remove_m343 (VirtualGoodsStorageIOS_t101 * __this, VirtualItem_t100 * ___item, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
