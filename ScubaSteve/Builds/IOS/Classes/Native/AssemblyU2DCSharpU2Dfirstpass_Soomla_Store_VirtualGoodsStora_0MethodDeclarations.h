#pragma once

// Soomla.Store.VirtualGoodsStorage
struct VirtualGoodsStorage_t91;
// Soomla.Store.VirtualGood
struct VirtualGood_t102;
// Soomla.Store.UpgradeVG
struct UpgradeVG_t103;
// Soomla.Store.EquippableVG
struct EquippableVG_t104;
// Soomla.Store.VirtualItem
struct VirtualItem_t100;

// System.Void Soomla.Store.VirtualGoodsStorage::.ctor()
 void VirtualGoodsStorage__ctor_m511 (VirtualGoodsStorage_t91 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::.cctor()
 void VirtualGoodsStorage__cctor_m512 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.VirtualGoodsStorage Soomla.Store.VirtualGoodsStorage::get_instance()
 VirtualGoodsStorage_t91 * VirtualGoodsStorage_get_instance_m513 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::RemoveUpgrades(Soomla.Store.VirtualGood)
 void VirtualGoodsStorage_RemoveUpgrades_m514 (Object_t * __this/* static, unused */, VirtualGood_t102 * ___good, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::RemoveUpgrades(Soomla.Store.VirtualGood,System.Boolean)
 void VirtualGoodsStorage_RemoveUpgrades_m515 (Object_t * __this/* static, unused */, VirtualGood_t102 * ___good, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::AssignCurrentUpgrade(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG)
 void VirtualGoodsStorage_AssignCurrentUpgrade_m516 (Object_t * __this/* static, unused */, VirtualGood_t102 * ___good, UpgradeVG_t103 * ___upgradeVG, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::AssignCurrentUpgrade(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG,System.Boolean)
 void VirtualGoodsStorage_AssignCurrentUpgrade_m517 (Object_t * __this/* static, unused */, VirtualGood_t102 * ___good, UpgradeVG_t103 * ___upgradeVG, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.UpgradeVG Soomla.Store.VirtualGoodsStorage::GetCurrentUpgrade(Soomla.Store.VirtualGood)
 UpgradeVG_t103 * VirtualGoodsStorage_GetCurrentUpgrade_m518 (Object_t * __this/* static, unused */, VirtualGood_t102 * ___good, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.VirtualGoodsStorage::IsEquipped(Soomla.Store.EquippableVG)
 bool VirtualGoodsStorage_IsEquipped_m519 (Object_t * __this/* static, unused */, EquippableVG_t104 * ___good, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::Equip(Soomla.Store.EquippableVG)
 void VirtualGoodsStorage_Equip_m520 (Object_t * __this/* static, unused */, EquippableVG_t104 * ___good, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::Equip(Soomla.Store.EquippableVG,System.Boolean)
 void VirtualGoodsStorage_Equip_m521 (Object_t * __this/* static, unused */, EquippableVG_t104 * ___good, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::UnEquip(Soomla.Store.EquippableVG)
 void VirtualGoodsStorage_UnEquip_m522 (Object_t * __this/* static, unused */, EquippableVG_t104 * ___good, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::UnEquip(Soomla.Store.EquippableVG,System.Boolean)
 void VirtualGoodsStorage_UnEquip_m523 (Object_t * __this/* static, unused */, EquippableVG_t104 * ___good, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorage::GetBalance(Soomla.Store.VirtualItem)
 int32_t VirtualGoodsStorage_GetBalance_m524 (Object_t * __this/* static, unused */, VirtualItem_t100 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorage::SetBalance(Soomla.Store.VirtualItem,System.Int32)
 int32_t VirtualGoodsStorage_SetBalance_m525 (Object_t * __this/* static, unused */, VirtualItem_t100 * ___item, int32_t ___balance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorage::SetBalance(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
 int32_t VirtualGoodsStorage_SetBalance_m526 (Object_t * __this/* static, unused */, VirtualItem_t100 * ___item, int32_t ___balance, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorage::Add(Soomla.Store.VirtualItem,System.Int32)
 int32_t VirtualGoodsStorage_Add_m527 (Object_t * __this/* static, unused */, VirtualItem_t100 * ___item, int32_t ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorage::Add(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
 int32_t VirtualGoodsStorage_Add_m528 (Object_t * __this/* static, unused */, VirtualItem_t100 * ___item, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorage::Remove(Soomla.Store.VirtualItem,System.Int32)
 int32_t VirtualGoodsStorage_Remove_m529 (Object_t * __this/* static, unused */, VirtualItem_t100 * ___item, int32_t ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorage::Remove(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
 int32_t VirtualGoodsStorage_Remove_m530 (Object_t * __this/* static, unused */, VirtualItem_t100 * ___item, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::_removeUpgrades(Soomla.Store.VirtualGood,System.Boolean)
 void VirtualGoodsStorage__removeUpgrades_m531 (VirtualGoodsStorage_t91 * __this, VirtualGood_t102 * ___good, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::_assignCurrentUpgrade(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG,System.Boolean)
 void VirtualGoodsStorage__assignCurrentUpgrade_m532 (VirtualGoodsStorage_t91 * __this, VirtualGood_t102 * ___good, UpgradeVG_t103 * ___upgradeVG, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.UpgradeVG Soomla.Store.VirtualGoodsStorage::_getCurrentUpgrade(Soomla.Store.VirtualGood)
 UpgradeVG_t103 * VirtualGoodsStorage__getCurrentUpgrade_m533 (VirtualGoodsStorage_t91 * __this, VirtualGood_t102 * ___good, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.VirtualGoodsStorage::_isEquipped(Soomla.Store.EquippableVG)
 bool VirtualGoodsStorage__isEquipped_m534 (VirtualGoodsStorage_t91 * __this, EquippableVG_t104 * ___good, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::_equip(Soomla.Store.EquippableVG,System.Boolean)
 void VirtualGoodsStorage__equip_m535 (VirtualGoodsStorage_t91 * __this, EquippableVG_t104 * ___good, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::_unequip(Soomla.Store.EquippableVG,System.Boolean)
 void VirtualGoodsStorage__unequip_m536 (VirtualGoodsStorage_t91 * __this, EquippableVG_t104 * ___good, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
