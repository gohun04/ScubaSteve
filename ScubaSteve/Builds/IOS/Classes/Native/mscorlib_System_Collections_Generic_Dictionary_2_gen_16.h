#pragma once
// System.Int32[]
struct Int32U5BU5D_t529;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2706;
// System.Int64[]
struct Int64U5BU5D_t959;
// UnityEngine.WaitForSeconds[]
struct WaitForSecondsU5BU5D_t4650;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t4651;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1242;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,UnityEngine.WaitForSeconds,System.Collections.DictionaryEntry>
struct Transform_1_t4652;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>
struct Dictionary_2_t996  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>::table
	Int32U5BU5D_t529* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>::linkSlots
	LinkU5BU5D_t2706* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>::keySlots
	Int64U5BU5D_t959* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>::valueSlots
	WaitForSecondsU5BU5D_t4650* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>::serialization_info
	SerializationInfo_t1242 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t996_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE_0;
	// System.Single System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR_1;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>::NO_SLOT
	int32_t ___NO_SLOT_2;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>::HASH_FLAG
	int32_t ___HASH_FLAG_3;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.WaitForSeconds>::<>f__am$cacheB
	Transform_1_t4652 * ___U3CU3Ef__am$cacheB_15;
};
