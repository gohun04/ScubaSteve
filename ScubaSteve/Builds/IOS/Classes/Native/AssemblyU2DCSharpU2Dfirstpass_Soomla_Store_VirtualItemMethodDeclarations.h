#pragma once

// Soomla.Store.VirtualItem
struct VirtualItem_t100;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t47;
// System.Object
struct Object_t;

// System.Void Soomla.Store.VirtualItem::.ctor(System.String,System.String,System.String)
 void VirtualItem__ctor_m554 (VirtualItem_t100 * __this, String_t* ___name, String_t* ___description, String_t* ___itemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualItem::.ctor(JSONObject)
 void VirtualItem__ctor_m555 (VirtualItem_t100 * __this, JSONObject_t47 * ___jsonItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Soomla.Store.VirtualItem::get_ItemId()
 String_t* VirtualItem_get_ItemId_m556 (VirtualItem_t100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualItem::set_ItemId(System.String)
 void VirtualItem_set_ItemId_m557 (VirtualItem_t100 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.VirtualItem::Equals(System.Object)
 bool VirtualItem_Equals_m558 (VirtualItem_t100 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItem::GetHashCode()
 int32_t VirtualItem_GetHashCode_m559 (VirtualItem_t100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItem::Give(System.Int32)
 int32_t VirtualItem_Give_m560 (VirtualItem_t100 * __this, int32_t ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItem::Give(System.Int32,System.Boolean)
// System.Int32 Soomla.Store.VirtualItem::Take(System.Int32)
 int32_t VirtualItem_Take_m561 (VirtualItem_t100 * __this, int32_t ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItem::Take(System.Int32,System.Boolean)
// System.Int32 Soomla.Store.VirtualItem::ResetBalance(System.Int32)
 int32_t VirtualItem_ResetBalance_m562 (VirtualItem_t100 * __this, int32_t ___balance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItem::ResetBalance(System.Int32,System.Boolean)
// System.Int32 Soomla.Store.VirtualItem::GetBalance()
// System.Void Soomla.Store.VirtualItem::Save(System.Boolean)
 void VirtualItem_Save_m563 (VirtualItem_t100 * __this, bool ___saveToDB, MethodInfo* method) IL2CPP_METHOD_ATTR;
