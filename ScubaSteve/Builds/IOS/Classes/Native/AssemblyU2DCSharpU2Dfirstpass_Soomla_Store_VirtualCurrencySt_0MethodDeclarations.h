#pragma once

// Soomla.Store.VirtualCurrencyStorage
struct VirtualCurrencyStorage_t89;
// Soomla.Store.VirtualItem
struct VirtualItem_t100;

// System.Void Soomla.Store.VirtualCurrencyStorage::.ctor()
 void VirtualCurrencyStorage__ctor_m501 (VirtualCurrencyStorage_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualCurrencyStorage::.cctor()
 void VirtualCurrencyStorage__cctor_m502 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.VirtualCurrencyStorage Soomla.Store.VirtualCurrencyStorage::get_instance()
 VirtualCurrencyStorage_t89 * VirtualCurrencyStorage_get_instance_m503 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorage::GetBalance(Soomla.Store.VirtualItem)
 int32_t VirtualCurrencyStorage_GetBalance_m504 (Object_t * __this/* static, unused */, VirtualItem_t100 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorage::SetBalance(Soomla.Store.VirtualItem,System.Int32)
 int32_t VirtualCurrencyStorage_SetBalance_m505 (Object_t * __this/* static, unused */, VirtualItem_t100 * ___item, int32_t ___balance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorage::SetBalance(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
 int32_t VirtualCurrencyStorage_SetBalance_m506 (Object_t * __this/* static, unused */, VirtualItem_t100 * ___item, int32_t ___balance, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorage::Add(Soomla.Store.VirtualItem,System.Int32)
 int32_t VirtualCurrencyStorage_Add_m507 (Object_t * __this/* static, unused */, VirtualItem_t100 * ___item, int32_t ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorage::Add(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
 int32_t VirtualCurrencyStorage_Add_m508 (Object_t * __this/* static, unused */, VirtualItem_t100 * ___item, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorage::Remove(Soomla.Store.VirtualItem,System.Int32)
 int32_t VirtualCurrencyStorage_Remove_m509 (Object_t * __this/* static, unused */, VirtualItem_t100 * ___item, int32_t ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorage::Remove(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
 int32_t VirtualCurrencyStorage_Remove_m510 (Object_t * __this/* static, unused */, VirtualItem_t100 * ___item, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
