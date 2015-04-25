#pragma once
// System.Int32[]
struct Int32U5BU5D_t529;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2706;
// System.String[]
struct StringU5BU5D_t65;
// JSONObject[]
struct JSONObjectU5BU5D_t64;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2839;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1242;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,JSONObject,System.Collections.DictionaryEntry>
struct Transform_1_t3082;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t63  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,JSONObject>::table
	Int32U5BU5D_t529* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,JSONObject>::linkSlots
	LinkU5BU5D_t2706* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,JSONObject>::keySlots
	StringU5BU5D_t65* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,JSONObject>::valueSlots
	JSONObjectU5BU5D_t64* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,JSONObject>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,JSONObject>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,JSONObject>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,JSONObject>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,JSONObject>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,JSONObject>::serialization_info
	SerializationInfo_t1242 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,JSONObject>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t63_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,JSONObject>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE_0;
	// System.Single System.Collections.Generic.Dictionary`2<System.String,JSONObject>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR_1;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,JSONObject>::NO_SLOT
	int32_t ___NO_SLOT_2;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,JSONObject>::HASH_FLAG
	int32_t ___HASH_FLAG_3;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,JSONObject>::<>f__am$cacheB
	Transform_1_t3082 * ___U3CU3Ef__am$cacheB_15;
};
