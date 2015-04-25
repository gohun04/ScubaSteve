#pragma once

// Soomla.Store.Example.ExampleEventHandler
struct ExampleEventHandler_t555;
// Soomla.Store.PurchasableVirtualItem
struct PurchasableVirtualItem_t106;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t41;
// Soomla.Store.EquippableVG
struct EquippableVG_t104;
// Soomla.Store.VirtualGood
struct VirtualGood_t102;
// Soomla.Store.UpgradeVG
struct UpgradeVG_t103;
// Soomla.Store.VirtualCurrency
struct VirtualCurrency_t105;

// System.Void Soomla.Store.Example.ExampleEventHandler::.ctor()
 void ExampleEventHandler__ctor_m2170 (ExampleEventHandler_t555 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onMarketPurchase(Soomla.Store.PurchasableVirtualItem,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
 void ExampleEventHandler_onMarketPurchase_m2171 (ExampleEventHandler_t555 * __this, PurchasableVirtualItem_t106 * ___pvi, String_t* ___payload, Dictionary_2_t41 * ___extra, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onMarketRefund(Soomla.Store.PurchasableVirtualItem)
 void ExampleEventHandler_onMarketRefund_m2172 (ExampleEventHandler_t555 * __this, PurchasableVirtualItem_t106 * ___pvi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onItemPurchased(Soomla.Store.PurchasableVirtualItem,System.String)
 void ExampleEventHandler_onItemPurchased_m2173 (ExampleEventHandler_t555 * __this, PurchasableVirtualItem_t106 * ___pvi, String_t* ___payload, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onGoodEquipped(Soomla.Store.EquippableVG)
 void ExampleEventHandler_onGoodEquipped_m2174 (ExampleEventHandler_t555 * __this, EquippableVG_t104 * ___good, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onGoodUnequipped(Soomla.Store.EquippableVG)
 void ExampleEventHandler_onGoodUnequipped_m2175 (ExampleEventHandler_t555 * __this, EquippableVG_t104 * ___good, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onGoodUpgrade(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG)
 void ExampleEventHandler_onGoodUpgrade_m2176 (ExampleEventHandler_t555 * __this, VirtualGood_t102 * ___good, UpgradeVG_t103 * ___currentUpgrade, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onBillingSupported()
 void ExampleEventHandler_onBillingSupported_m2177 (ExampleEventHandler_t555 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onBillingNotSupported()
 void ExampleEventHandler_onBillingNotSupported_m2178 (ExampleEventHandler_t555 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onMarketPurchaseStarted(Soomla.Store.PurchasableVirtualItem)
 void ExampleEventHandler_onMarketPurchaseStarted_m2179 (ExampleEventHandler_t555 * __this, PurchasableVirtualItem_t106 * ___pvi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onItemPurchaseStarted(Soomla.Store.PurchasableVirtualItem)
 void ExampleEventHandler_onItemPurchaseStarted_m2180 (ExampleEventHandler_t555 * __this, PurchasableVirtualItem_t106 * ___pvi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onMarketPurchaseCancelled(Soomla.Store.PurchasableVirtualItem)
 void ExampleEventHandler_onMarketPurchaseCancelled_m2181 (ExampleEventHandler_t555 * __this, PurchasableVirtualItem_t106 * ___pvi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onUnexpectedErrorInStore(System.String)
 void ExampleEventHandler_onUnexpectedErrorInStore_m2182 (ExampleEventHandler_t555 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onCurrencyBalanceChanged(Soomla.Store.VirtualCurrency,System.Int32,System.Int32)
 void ExampleEventHandler_onCurrencyBalanceChanged_m2183 (ExampleEventHandler_t555 * __this, VirtualCurrency_t105 * ___virtualCurrency, int32_t ___balance, int32_t ___amountAdded, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onGoodBalanceChanged(Soomla.Store.VirtualGood,System.Int32,System.Int32)
 void ExampleEventHandler_onGoodBalanceChanged_m2184 (ExampleEventHandler_t555 * __this, VirtualGood_t102 * ___good, int32_t ___balance, int32_t ___amountAdded, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onRestoreTransactionsStarted()
 void ExampleEventHandler_onRestoreTransactionsStarted_m2185 (ExampleEventHandler_t555 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onRestoreTransactionsFinished(System.Boolean)
 void ExampleEventHandler_onRestoreTransactionsFinished_m2186 (ExampleEventHandler_t555 * __this, bool ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onSoomlaStoreInitialized()
 void ExampleEventHandler_onSoomlaStoreInitialized_m2187 (ExampleEventHandler_t555 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
