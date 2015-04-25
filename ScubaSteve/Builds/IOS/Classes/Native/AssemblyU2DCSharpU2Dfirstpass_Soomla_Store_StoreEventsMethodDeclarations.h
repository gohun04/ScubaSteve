#pragma once

// Soomla.Store.StoreEvents
struct StoreEvents_t110;
// Soomla.Store.StoreEvents/RunLaterDelegate
struct RunLaterDelegate_t107;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.String
struct String_t;
// Soomla.Store.VirtualCurrency
struct VirtualCurrency_t105;
// Soomla.Store.VirtualGood
struct VirtualGood_t102;
// Soomla.Store.EquippableVG
struct EquippableVG_t104;
// Soomla.Store.UpgradeVG
struct UpgradeVG_t103;
// Soomla.Store.PurchasableVirtualItem
struct PurchasableVirtualItem_t106;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t41;
// System.Collections.Generic.List`1<Soomla.Store.MarketItem>
struct List_1_t121;

// System.Void Soomla.Store.StoreEvents::.ctor()
 void StoreEvents__ctor_m398 (StoreEvents_t110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::.cctor()
 void StoreEvents__cctor_m399 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::eventDispatcher_Init()
 void StoreEvents_eventDispatcher_Init_m400 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::Awake()
 void StoreEvents_Awake_m401 (StoreEvents_t110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::RunLater(Soomla.Store.StoreEvents/RunLaterDelegate)
 void StoreEvents_RunLater_m402 (StoreEvents_t110 * __this, RunLaterDelegate_t107 * ___runLaterDelegate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Soomla.Store.StoreEvents::RunLaterPriv(Soomla.Store.StoreEvents/RunLaterDelegate)
 Object_t * StoreEvents_RunLaterPriv_m403 (StoreEvents_t110 * __this, RunLaterDelegate_t107 * ___runLaterDelegate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::Initialize()
 void StoreEvents_Initialize_m404 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onBillingSupported(System.String)
 void StoreEvents_onBillingSupported_m405 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onBillingNotSupported(System.String)
 void StoreEvents_onBillingNotSupported_m406 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onCurrencyBalanceChanged(System.String)
 void StoreEvents_onCurrencyBalanceChanged_m407 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onCurrencyBalanceChanged(System.String,System.Boolean)
 void StoreEvents_onCurrencyBalanceChanged_m408 (StoreEvents_t110 * __this, String_t* ___message, bool ___alsoPush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onGoodBalanceChanged(System.String)
 void StoreEvents_onGoodBalanceChanged_m409 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onGoodBalanceChanged(System.String,System.Boolean)
 void StoreEvents_onGoodBalanceChanged_m410 (StoreEvents_t110 * __this, String_t* ___message, bool ___alsoPush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onGoodEquipped(System.String)
 void StoreEvents_onGoodEquipped_m411 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onGoodEquipped(System.String,System.Boolean)
 void StoreEvents_onGoodEquipped_m412 (StoreEvents_t110 * __this, String_t* ___message, bool ___alsoPush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onGoodUnequipped(System.String)
 void StoreEvents_onGoodUnequipped_m413 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onGoodUnequipped(System.String,System.Boolean)
 void StoreEvents_onGoodUnequipped_m414 (StoreEvents_t110 * __this, String_t* ___message, bool ___alsoPush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onGoodUpgrade(System.String)
 void StoreEvents_onGoodUpgrade_m415 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onGoodUpgrade(System.String,System.Boolean)
 void StoreEvents_onGoodUpgrade_m416 (StoreEvents_t110 * __this, String_t* ___message, bool ___alsoPush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onItemPurchased(System.String)
 void StoreEvents_onItemPurchased_m417 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onItemPurchased(System.String,System.Boolean)
 void StoreEvents_onItemPurchased_m418 (StoreEvents_t110 * __this, String_t* ___message, bool ___alsoPush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onItemPurchaseStarted(System.String)
 void StoreEvents_onItemPurchaseStarted_m419 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onItemPurchaseStarted(System.String,System.Boolean)
 void StoreEvents_onItemPurchaseStarted_m420 (StoreEvents_t110 * __this, String_t* ___message, bool ___alsoPush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onMarketPurchaseCancelled(System.String)
 void StoreEvents_onMarketPurchaseCancelled_m421 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onMarketPurchase(System.String)
 void StoreEvents_onMarketPurchase_m422 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onMarketPurchaseStarted(System.String)
 void StoreEvents_onMarketPurchaseStarted_m423 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onMarketRefund(System.String)
 void StoreEvents_onMarketRefund_m424 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onRestoreTransactionsFinished(System.String)
 void StoreEvents_onRestoreTransactionsFinished_m425 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onRestoreTransactionsStarted(System.String)
 void StoreEvents_onRestoreTransactionsStarted_m426 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onMarketItemsRefreshStarted(System.String)
 void StoreEvents_onMarketItemsRefreshStarted_m427 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onMarketItemsRefreshFailed(System.String)
 void StoreEvents_onMarketItemsRefreshFailed_m428 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onMarketItemsRefreshFinished(System.String)
 void StoreEvents_onMarketItemsRefreshFinished_m429 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onUnexpectedErrorInStore(System.String)
 void StoreEvents_onUnexpectedErrorInStore_m430 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onUnexpectedErrorInStore(System.String,System.Boolean)
 void StoreEvents_onUnexpectedErrorInStore_m431 (StoreEvents_t110 * __this, String_t* ___message, bool ___alsoPush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onSoomlaStoreInitialized(System.String)
 void StoreEvents_onSoomlaStoreInitialized_m432 (StoreEvents_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onSoomlaStoreInitialized(System.String,System.Boolean)
 void StoreEvents_onSoomlaStoreInitialized_m433 (StoreEvents_t110 * __this, String_t* ___message, bool ___alsoPush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnBillingNotSupported>m__D()
 void StoreEvents_U3COnBillingNotSupportedU3Em__D_m434 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnBillingSupported>m__E()
 void StoreEvents_U3COnBillingSupportedU3Em__E_m435 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnCurrencyBalanceChanged>m__F(Soomla.Store.VirtualCurrency,System.Int32,System.Int32)
 void StoreEvents_U3COnCurrencyBalanceChangedU3Em__F_m436 (Object_t * __this/* static, unused */, VirtualCurrency_t105 * p0, int32_t p1, int32_t p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnGoodBalanceChanged>m__10(Soomla.Store.VirtualGood,System.Int32,System.Int32)
 void StoreEvents_U3COnGoodBalanceChangedU3Em__10_m437 (Object_t * __this/* static, unused */, VirtualGood_t102 * p0, int32_t p1, int32_t p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnGoodEquipped>m__11(Soomla.Store.EquippableVG)
 void StoreEvents_U3COnGoodEquippedU3Em__11_m438 (Object_t * __this/* static, unused */, EquippableVG_t104 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnGoodUnEquipped>m__12(Soomla.Store.EquippableVG)
 void StoreEvents_U3COnGoodUnEquippedU3Em__12_m439 (Object_t * __this/* static, unused */, EquippableVG_t104 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnGoodUpgrade>m__13(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG)
 void StoreEvents_U3COnGoodUpgradeU3Em__13_m440 (Object_t * __this/* static, unused */, VirtualGood_t102 * p0, UpgradeVG_t103 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnItemPurchased>m__14(Soomla.Store.PurchasableVirtualItem,System.String)
 void StoreEvents_U3COnItemPurchasedU3Em__14_m441 (Object_t * __this/* static, unused */, PurchasableVirtualItem_t106 * p0, String_t* p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnItemPurchaseStarted>m__15(Soomla.Store.PurchasableVirtualItem)
 void StoreEvents_U3COnItemPurchaseStartedU3Em__15_m442 (Object_t * __this/* static, unused */, PurchasableVirtualItem_t106 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnMarketPurchaseCancelled>m__16(Soomla.Store.PurchasableVirtualItem)
 void StoreEvents_U3COnMarketPurchaseCancelledU3Em__16_m443 (Object_t * __this/* static, unused */, PurchasableVirtualItem_t106 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnMarketPurchase>m__17(Soomla.Store.PurchasableVirtualItem,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
 void StoreEvents_U3COnMarketPurchaseU3Em__17_m444 (Object_t * __this/* static, unused */, PurchasableVirtualItem_t106 * p0, String_t* p1, Dictionary_2_t41 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnMarketPurchaseStarted>m__18(Soomla.Store.PurchasableVirtualItem)
 void StoreEvents_U3COnMarketPurchaseStartedU3Em__18_m445 (Object_t * __this/* static, unused */, PurchasableVirtualItem_t106 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnMarketRefund>m__19(Soomla.Store.PurchasableVirtualItem)
 void StoreEvents_U3COnMarketRefundU3Em__19_m446 (Object_t * __this/* static, unused */, PurchasableVirtualItem_t106 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnRestoreTransactionsFinished>m__1A(System.Boolean)
 void StoreEvents_U3COnRestoreTransactionsFinishedU3Em__1A_m447 (Object_t * __this/* static, unused */, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnRestoreTransactionsStarted>m__1B()
 void StoreEvents_U3COnRestoreTransactionsStartedU3Em__1B_m448 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnMarketItemsRefreshStarted>m__1C()
 void StoreEvents_U3COnMarketItemsRefreshStartedU3Em__1C_m449 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnMarketItemsRefreshFailed>m__1D(System.String)
 void StoreEvents_U3COnMarketItemsRefreshFailedU3Em__1D_m450 (Object_t * __this/* static, unused */, String_t* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnMarketItemsRefreshFinished>m__1E(System.Collections.Generic.List`1<Soomla.Store.MarketItem>)
 void StoreEvents_U3COnMarketItemsRefreshFinishedU3Em__1E_m451 (Object_t * __this/* static, unused */, List_1_t121 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnUnexpectedErrorInStore>m__1F(System.String)
 void StoreEvents_U3COnUnexpectedErrorInStoreU3Em__1F_m452 (Object_t * __this/* static, unused */, String_t* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnSoomlaStoreInitialized>m__20()
 void StoreEvents_U3COnSoomlaStoreInitializedU3Em__20_m453 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
