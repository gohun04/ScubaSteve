#pragma once

// Soomla.Store.VirtualItemStorage
struct VirtualItemStorage_t140;
// Soomla.Store.VirtualItem
struct VirtualItem_t100;

// System.Void Soomla.Store.VirtualItemStorage::.ctor()
 void VirtualItemStorage__ctor_m537 (VirtualItemStorage_t140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualItemStorage::.cctor()
 void VirtualItemStorage__cctor_m538 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItemStorage::_getBalance(Soomla.Store.VirtualItem)
 int32_t VirtualItemStorage__getBalance_m539 (VirtualItemStorage_t140 * __this, VirtualItem_t100 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItemStorage::_setBalance(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
 int32_t VirtualItemStorage__setBalance_m540 (VirtualItemStorage_t140 * __this, VirtualItem_t100 * ___item, int32_t ___balance, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItemStorage::_add(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
 int32_t VirtualItemStorage__add_m541 (VirtualItemStorage_t140 * __this, VirtualItem_t100 * ___item, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItemStorage::_remove(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
 int32_t VirtualItemStorage__remove_m542 (VirtualItemStorage_t140 * __this, VirtualItem_t100 * ___item, int32_t ___amount, bool ___notify, MethodInfo* method) IL2CPP_METHOD_ATTR;
