#pragma once

// System.Collections.SortedList
struct SortedList_t1666;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1023;
// System.Collections.IComparer
struct IComparer_t1475;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1469;
// System.Array
struct Array_t;
// System.Collections.SortedList/EnumeratorMode
#include "mscorlib_System_Collections_SortedList_EnumeratorMode.h"

// System.Void System.Collections.SortedList::.ctor()
 void SortedList__ctor_m10313 (SortedList_t1666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Int32)
 void SortedList__ctor_m7612 (SortedList_t1666 * __this, int32_t ___initialCapacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer,System.Int32)
 void SortedList__ctor_m10314 (SortedList_t1666 * __this, Object_t * ___comparer, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.cctor()
 void SortedList__cctor_m10315 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList::System.Collections.IEnumerable.GetEnumerator()
 Object_t * SortedList_System_Collections_IEnumerable_GetEnumerator_m10316 (SortedList_t1666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Count()
 int32_t SortedList_get_Count_m7616 (SortedList_t1666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsSynchronized()
 bool SortedList_get_IsSynchronized_m10317 (SortedList_t1666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_SyncRoot()
 Object_t * SortedList_get_SyncRoot_m10318 (SortedList_t1666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsFixedSize()
 bool SortedList_get_IsFixedSize_m10319 (SortedList_t1666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsReadOnly()
 bool SortedList_get_IsReadOnly_m10320 (SortedList_t1666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.SortedList::get_Keys()
 Object_t * SortedList_get_Keys_m10321 (SortedList_t1666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_Item(System.Object)
 Object_t * SortedList_get_Item_m10322 (SortedList_t1666 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Item(System.Object,System.Object)
 void SortedList_set_Item_m10323 (SortedList_t1666 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Capacity()
 int32_t SortedList_get_Capacity_m10324 (SortedList_t1666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Add(System.Object,System.Object)
 void SortedList_Add_m7614 (SortedList_t1666 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::Contains(System.Object)
 bool SortedList_Contains_m10325 (SortedList_t1666 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.SortedList::GetEnumerator()
 Object_t * SortedList_GetEnumerator_m10326 (SortedList_t1666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Remove(System.Object)
 void SortedList_Remove_m10327 (SortedList_t1666 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyTo(System.Array,System.Int32)
 void SortedList_CopyTo_m10328 (SortedList_t1666 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::RemoveAt(System.Int32)
 void SortedList_RemoveAt_m10329 (SortedList_t1666 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::IndexOfKey(System.Object)
 int32_t SortedList_IndexOfKey_m10330 (SortedList_t1666 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::ContainsKey(System.Object)
 bool SortedList_ContainsKey_m7613 (SortedList_t1666 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetByIndex(System.Int32)
 Object_t * SortedList_GetByIndex_m7615 (SortedList_t1666 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetKey(System.Int32)
 Object_t * SortedList_GetKey_m10331 (SortedList_t1666 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::EnsureCapacity(System.Int32,System.Int32)
 void SortedList_EnsureCapacity_m10332 (SortedList_t1666 * __this, int32_t ___n, int32_t ___free, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::PutImpl(System.Object,System.Object,System.Boolean)
 void SortedList_PutImpl_m10333 (SortedList_t1666 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetImpl(System.Object)
 Object_t * SortedList_GetImpl_m10334 (SortedList_t1666 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::InitTable(System.Int32,System.Boolean)
 void SortedList_InitTable_m10335 (SortedList_t1666 * __this, int32_t ___capacity, bool ___forceSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyToArray(System.Array,System.Int32,System.Collections.SortedList/EnumeratorMode)
 void SortedList_CopyToArray_m10336 (SortedList_t1666 * __this, Array_t * ___arr, int32_t ___i, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::Find(System.Object)
 int32_t SortedList_Find_m10337 (SortedList_t1666 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
