#pragma once
// System.String
struct String_t;
// Soomla.Store.StoreInfo
struct StoreInfo_t87;
// System.Collections.Generic.Dictionary`2<System.String,Soomla.Store.VirtualItem>
struct Dictionary_2_t127;
// System.Collections.Generic.Dictionary`2<System.String,Soomla.Store.PurchasableVirtualItem>
struct Dictionary_2_t128;
// System.Collections.Generic.Dictionary`2<System.String,Soomla.Store.VirtualCategory>
struct Dictionary_2_t129;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Soomla.Store.UpgradeVG>>
struct Dictionary_2_t130;
// System.Collections.Generic.List`1<Soomla.Store.VirtualCurrency>
struct List_1_t131;
// System.Collections.Generic.List`1<Soomla.Store.VirtualCurrencyPack>
struct List_1_t132;
// System.Collections.Generic.List`1<Soomla.Store.VirtualGood>
struct List_1_t133;
// System.Collections.Generic.List`1<Soomla.Store.VirtualCategory>
struct List_1_t134;
// System.Func`2<Soomla.Store.UpgradeVG,System.Boolean>
struct Func_2_t135;
// System.Object
#include "mscorlib_System_Object.h"
// Soomla.Store.StoreInfo
struct StoreInfo_t87  : public Object_t
{
};
struct StoreInfo_t87_StaticFields{
	// System.String Soomla.Store.StoreInfo::TAG
	String_t* ___TAG_0;
	// Soomla.Store.StoreInfo Soomla.Store.StoreInfo::_instance
	StoreInfo_t87 * ____instance_1;
	// System.Collections.Generic.Dictionary`2<System.String,Soomla.Store.VirtualItem> Soomla.Store.StoreInfo::VirtualItems
	Dictionary_2_t127 * ___VirtualItems_2;
	// System.Collections.Generic.Dictionary`2<System.String,Soomla.Store.PurchasableVirtualItem> Soomla.Store.StoreInfo::PurchasableItems
	Dictionary_2_t128 * ___PurchasableItems_3;
	// System.Collections.Generic.Dictionary`2<System.String,Soomla.Store.VirtualCategory> Soomla.Store.StoreInfo::GoodsCategories
	Dictionary_2_t129 * ___GoodsCategories_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Soomla.Store.UpgradeVG>> Soomla.Store.StoreInfo::GoodsUpgrades
	Dictionary_2_t130 * ___GoodsUpgrades_5;
	// System.Collections.Generic.List`1<Soomla.Store.VirtualCurrency> Soomla.Store.StoreInfo::Currencies
	List_1_t131 * ___Currencies_6;
	// System.Collections.Generic.List`1<Soomla.Store.VirtualCurrencyPack> Soomla.Store.StoreInfo::CurrencyPacks
	List_1_t132 * ___CurrencyPacks_7;
	// System.Collections.Generic.List`1<Soomla.Store.VirtualGood> Soomla.Store.StoreInfo::Goods
	List_1_t133 * ___Goods_8;
	// System.Collections.Generic.List`1<Soomla.Store.VirtualCategory> Soomla.Store.StoreInfo::Categories
	List_1_t134 * ___Categories_9;
	// System.Func`2<Soomla.Store.UpgradeVG,System.Boolean> Soomla.Store.StoreInfo::<>f__am$cache9
	Func_2_t135 * ___U3CU3Ef__am$cache9_10;
	// System.Func`2<Soomla.Store.UpgradeVG,System.Boolean> Soomla.Store.StoreInfo::<>f__am$cacheA
	Func_2_t135 * ___U3CU3Ef__am$cacheA_11;
};
