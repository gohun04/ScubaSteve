#pragma once
// System.String
struct String_t;
// Soomla.Store.StoreEvents
struct StoreEvents_t110;
// Soomla.Store.StoreEvents/StoreEventPusher
struct StoreEventPusher_t85;
// Soomla.Store.StoreEvents/Action
struct Action_t108;
// System.Action`3<Soomla.Store.VirtualCurrency,System.Int32,System.Int32>
struct Action_3_t111;
// System.Action`3<Soomla.Store.VirtualGood,System.Int32,System.Int32>
struct Action_3_t112;
// System.Action`1<Soomla.Store.EquippableVG>
struct Action_1_t113;
// System.Action`2<Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG>
struct Action_2_t114;
// System.Action`2<Soomla.Store.PurchasableVirtualItem,System.String>
struct Action_2_t115;
// System.Action`1<Soomla.Store.PurchasableVirtualItem>
struct Action_1_t116;
// System.Action`3<Soomla.Store.PurchasableVirtualItem,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Action_3_t117;
// System.Action`1<System.Boolean>
struct Action_1_t118;
// System.Action`1<System.String>
struct Action_1_t119;
// System.Action`1<System.Collections.Generic.List`1<Soomla.Store.MarketItem>>
struct Action_1_t120;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Soomla.Store.StoreEvents
struct StoreEvents_t110  : public MonoBehaviour_t39
{
};
struct StoreEvents_t110_StaticFields{
	// System.String Soomla.Store.StoreEvents::TAG
	String_t* ___TAG_2;
	// Soomla.Store.StoreEvents Soomla.Store.StoreEvents::Instance
	StoreEvents_t110 * ___Instance_3;
	// Soomla.Store.StoreEvents/StoreEventPusher Soomla.Store.StoreEvents::sep
	StoreEventPusher_t85 * ___sep_4;
	// Soomla.Store.StoreEvents/Action Soomla.Store.StoreEvents::OnBillingNotSupported
	Action_t108 * ___OnBillingNotSupported_5;
	// Soomla.Store.StoreEvents/Action Soomla.Store.StoreEvents::OnBillingSupported
	Action_t108 * ___OnBillingSupported_6;
	// System.Action`3<Soomla.Store.VirtualCurrency,System.Int32,System.Int32> Soomla.Store.StoreEvents::OnCurrencyBalanceChanged
	Action_3_t111 * ___OnCurrencyBalanceChanged_7;
	// System.Action`3<Soomla.Store.VirtualGood,System.Int32,System.Int32> Soomla.Store.StoreEvents::OnGoodBalanceChanged
	Action_3_t112 * ___OnGoodBalanceChanged_8;
	// System.Action`1<Soomla.Store.EquippableVG> Soomla.Store.StoreEvents::OnGoodEquipped
	Action_1_t113 * ___OnGoodEquipped_9;
	// System.Action`1<Soomla.Store.EquippableVG> Soomla.Store.StoreEvents::OnGoodUnEquipped
	Action_1_t113 * ___OnGoodUnEquipped_10;
	// System.Action`2<Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG> Soomla.Store.StoreEvents::OnGoodUpgrade
	Action_2_t114 * ___OnGoodUpgrade_11;
	// System.Action`2<Soomla.Store.PurchasableVirtualItem,System.String> Soomla.Store.StoreEvents::OnItemPurchased
	Action_2_t115 * ___OnItemPurchased_12;
	// System.Action`1<Soomla.Store.PurchasableVirtualItem> Soomla.Store.StoreEvents::OnItemPurchaseStarted
	Action_1_t116 * ___OnItemPurchaseStarted_13;
	// System.Action`1<Soomla.Store.PurchasableVirtualItem> Soomla.Store.StoreEvents::OnMarketPurchaseCancelled
	Action_1_t116 * ___OnMarketPurchaseCancelled_14;
	// System.Action`3<Soomla.Store.PurchasableVirtualItem,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>> Soomla.Store.StoreEvents::OnMarketPurchase
	Action_3_t117 * ___OnMarketPurchase_15;
	// System.Action`1<Soomla.Store.PurchasableVirtualItem> Soomla.Store.StoreEvents::OnMarketPurchaseStarted
	Action_1_t116 * ___OnMarketPurchaseStarted_16;
	// System.Action`1<Soomla.Store.PurchasableVirtualItem> Soomla.Store.StoreEvents::OnMarketRefund
	Action_1_t116 * ___OnMarketRefund_17;
	// System.Action`1<System.Boolean> Soomla.Store.StoreEvents::OnRestoreTransactionsFinished
	Action_1_t118 * ___OnRestoreTransactionsFinished_18;
	// Soomla.Store.StoreEvents/Action Soomla.Store.StoreEvents::OnRestoreTransactionsStarted
	Action_t108 * ___OnRestoreTransactionsStarted_19;
	// Soomla.Store.StoreEvents/Action Soomla.Store.StoreEvents::OnMarketItemsRefreshStarted
	Action_t108 * ___OnMarketItemsRefreshStarted_20;
	// System.Action`1<System.String> Soomla.Store.StoreEvents::OnMarketItemsRefreshFailed
	Action_1_t119 * ___OnMarketItemsRefreshFailed_21;
	// System.Action`1<System.Collections.Generic.List`1<Soomla.Store.MarketItem>> Soomla.Store.StoreEvents::OnMarketItemsRefreshFinished
	Action_1_t120 * ___OnMarketItemsRefreshFinished_22;
	// System.Action`1<System.String> Soomla.Store.StoreEvents::OnUnexpectedErrorInStore
	Action_1_t119 * ___OnUnexpectedErrorInStore_23;
	// Soomla.Store.StoreEvents/Action Soomla.Store.StoreEvents::OnSoomlaStoreInitialized
	Action_t108 * ___OnSoomlaStoreInitialized_24;
	// Soomla.Store.StoreEvents/Action Soomla.Store.StoreEvents::<>f__am$cache16
	Action_t108 * ___U3CU3Ef__am$cache16_25;
	// Soomla.Store.StoreEvents/Action Soomla.Store.StoreEvents::<>f__am$cache17
	Action_t108 * ___U3CU3Ef__am$cache17_26;
	// System.Action`3<Soomla.Store.VirtualCurrency,System.Int32,System.Int32> Soomla.Store.StoreEvents::<>f__am$cache18
	Action_3_t111 * ___U3CU3Ef__am$cache18_27;
	// System.Action`3<Soomla.Store.VirtualGood,System.Int32,System.Int32> Soomla.Store.StoreEvents::<>f__am$cache19
	Action_3_t112 * ___U3CU3Ef__am$cache19_28;
	// System.Action`1<Soomla.Store.EquippableVG> Soomla.Store.StoreEvents::<>f__am$cache1A
	Action_1_t113 * ___U3CU3Ef__am$cache1A_29;
	// System.Action`1<Soomla.Store.EquippableVG> Soomla.Store.StoreEvents::<>f__am$cache1B
	Action_1_t113 * ___U3CU3Ef__am$cache1B_30;
	// System.Action`2<Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG> Soomla.Store.StoreEvents::<>f__am$cache1C
	Action_2_t114 * ___U3CU3Ef__am$cache1C_31;
	// System.Action`2<Soomla.Store.PurchasableVirtualItem,System.String> Soomla.Store.StoreEvents::<>f__am$cache1D
	Action_2_t115 * ___U3CU3Ef__am$cache1D_32;
	// System.Action`1<Soomla.Store.PurchasableVirtualItem> Soomla.Store.StoreEvents::<>f__am$cache1E
	Action_1_t116 * ___U3CU3Ef__am$cache1E_33;
	// System.Action`1<Soomla.Store.PurchasableVirtualItem> Soomla.Store.StoreEvents::<>f__am$cache1F
	Action_1_t116 * ___U3CU3Ef__am$cache1F_34;
	// System.Action`3<Soomla.Store.PurchasableVirtualItem,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>> Soomla.Store.StoreEvents::<>f__am$cache20
	Action_3_t117 * ___U3CU3Ef__am$cache20_35;
	// System.Action`1<Soomla.Store.PurchasableVirtualItem> Soomla.Store.StoreEvents::<>f__am$cache21
	Action_1_t116 * ___U3CU3Ef__am$cache21_36;
	// System.Action`1<Soomla.Store.PurchasableVirtualItem> Soomla.Store.StoreEvents::<>f__am$cache22
	Action_1_t116 * ___U3CU3Ef__am$cache22_37;
	// System.Action`1<System.Boolean> Soomla.Store.StoreEvents::<>f__am$cache23
	Action_1_t118 * ___U3CU3Ef__am$cache23_38;
	// Soomla.Store.StoreEvents/Action Soomla.Store.StoreEvents::<>f__am$cache24
	Action_t108 * ___U3CU3Ef__am$cache24_39;
	// Soomla.Store.StoreEvents/Action Soomla.Store.StoreEvents::<>f__am$cache25
	Action_t108 * ___U3CU3Ef__am$cache25_40;
	// System.Action`1<System.String> Soomla.Store.StoreEvents::<>f__am$cache26
	Action_1_t119 * ___U3CU3Ef__am$cache26_41;
	// System.Action`1<System.Collections.Generic.List`1<Soomla.Store.MarketItem>> Soomla.Store.StoreEvents::<>f__am$cache27
	Action_1_t120 * ___U3CU3Ef__am$cache27_42;
	// System.Action`1<System.String> Soomla.Store.StoreEvents::<>f__am$cache28
	Action_1_t119 * ___U3CU3Ef__am$cache28_43;
	// Soomla.Store.StoreEvents/Action Soomla.Store.StoreEvents::<>f__am$cache29
	Action_t108 * ___U3CU3Ef__am$cache29_44;
};
