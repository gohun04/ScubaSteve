#pragma once
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t123;
// System.Collections.Generic.Dictionary`2<System.String,Soomla.Store.StoreInventory/LocalUpgrade>
struct Dictionary_2_t124;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t125;
// System.Object
#include "mscorlib_System_Object.h"
// Soomla.Store.StoreInventory
struct StoreInventory_t126  : public Object_t
{
};
struct StoreInventory_t126_StaticFields{
	// System.String Soomla.Store.StoreInventory::TAG
	String_t* ___TAG_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Soomla.Store.StoreInventory::localItemBalances
	Dictionary_2_t123 * ___localItemBalances_1;
	// System.Collections.Generic.Dictionary`2<System.String,Soomla.Store.StoreInventory/LocalUpgrade> Soomla.Store.StoreInventory::localUpgrades
	Dictionary_2_t124 * ___localUpgrades_2;
	// System.Collections.Generic.HashSet`1<System.String> Soomla.Store.StoreInventory::localEquippedGoods
	HashSet_1_t125 * ___localEquippedGoods_3;
};
