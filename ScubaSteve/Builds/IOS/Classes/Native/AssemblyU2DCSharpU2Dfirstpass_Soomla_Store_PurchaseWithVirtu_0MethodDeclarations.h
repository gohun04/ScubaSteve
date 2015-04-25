#pragma once

// Soomla.Store.PurchaseWithVirtualItem
struct PurchaseWithVirtualItem_t155;
// System.String
struct String_t;
// Soomla.Store.VirtualItem
struct VirtualItem_t100;

// System.Void Soomla.Store.PurchaseWithVirtualItem::.ctor(System.String,System.Int32)
 void PurchaseWithVirtualItem__ctor_m639 (PurchaseWithVirtualItem_t155 * __this, String_t* ___targetItemId, int32_t ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.PurchaseWithVirtualItem::Buy(System.String)
 void PurchaseWithVirtualItem_Buy_m640 (PurchaseWithVirtualItem_t155 * __this, String_t* ___payload, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.PurchaseWithVirtualItem::CanAfford()
 bool PurchaseWithVirtualItem_CanAfford_m641 (PurchaseWithVirtualItem_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.VirtualItem Soomla.Store.PurchaseWithVirtualItem::getTargetVirtualItem()
 VirtualItem_t100 * PurchaseWithVirtualItem_getTargetVirtualItem_m642 (PurchaseWithVirtualItem_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.PurchaseWithVirtualItem::checkTargetBalance(Soomla.Store.VirtualItem)
 bool PurchaseWithVirtualItem_checkTargetBalance_m643 (PurchaseWithVirtualItem_t155 * __this, VirtualItem_t100 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
