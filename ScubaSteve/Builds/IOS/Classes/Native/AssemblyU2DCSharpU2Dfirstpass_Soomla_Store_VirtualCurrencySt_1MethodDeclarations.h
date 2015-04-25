#pragma once

// Soomla.Store.VirtualCurrencyStorageIOS
struct VirtualCurrencyStorageIOS_t99;
// System.String
struct String_t;
// Soomla.Store.VirtualItem
struct VirtualItem_t100;

// System.Void Soomla.Store.VirtualCurrencyStorageIOS::.ctor()
 void VirtualCurrencyStorageIOS__ctor_m314 (VirtualCurrencyStorageIOS_t99 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorageIOS::vcStorage_GetBalance(System.String,System.Int32&)
 int32_t VirtualCurrencyStorageIOS_vcStorage_GetBalance_m315 (Object_t * __this/* static, unused */, String_t* ___itemId, int32_t* ___outBalance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorageIOS::vcStorage_SetBalance(System.String,System.Int32,System.Boolean,System.Int32&)
 int32_t VirtualCurrencyStorageIOS_vcStorage_SetBalance_m316 (Object_t * __this/* static, unused */, String_t* ___itemId, int32_t ___balance, bool ___notify, int32_t* ___outBalance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorageIOS::vcStorage_Add(System.String,System.Int32,System.Boolean,System.Int32&)
 int32_t VirtualCurrencyStorageIOS_vcStorage_Add_m317 (Object_t * __this/* static, unused */, String_t* ___itemId, int32_t ___amount, bool ___notify, int32_t* ___outBalance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorageIOS::vcStorage_Remove(System.String,System.Int32,System.Boolean,System.Int32&)
 int32_t VirtualCurrencyStorageIOS_vcStorage_Remove_m318 (Object_t * __this/* static, unused */, String_t* ___itemId, int32_t ___amount, bool ___notify, int32_t* ___outBalance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorageIOS::_getBalance(Soomla.Store.VirtualItem)
 int32_t VirtualCurrencyStorageIOS__getBalance_m319 (VirtualCurrencyStorageIOS_t99 * __this, VirtualItem_t100 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorageIOS::_setBalance(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
 int32_t VirtualCurrencyStorageIOS__setBalance_m320 (VirtualCurrencyStorageIOS_t99 * __this, VirtualItem_t100 * ___item, int32_t ___balance, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorageIOS::_add(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
 int32_t VirtualCurrencyStorageIOS__add_m321 (VirtualCurrencyStorageIOS_t99 * __this, VirtualItem_t100 * ___item, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorageIOS::_remove(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
 int32_t VirtualCurrencyStorageIOS__remove_m322 (VirtualCurrencyStorageIOS_t99 * __this, VirtualItem_t100 * ___item, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
