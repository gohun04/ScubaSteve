#pragma once

// Soomla.Store.StoreEvents/StoreEventPusher
struct StoreEventPusher_t85;
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

// System.Void Soomla.Store.StoreEvents/StoreEventPusher::.ctor()
 void StoreEventPusher__ctor_m365 (StoreEventPusher_t85 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventSoomlaStoreInitialized()
 void StoreEventPusher_PushEventSoomlaStoreInitialized_m366 (StoreEventPusher_t85 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventUnexpectedStoreError(System.String)
 void StoreEventPusher_PushEventUnexpectedStoreError_m367 (StoreEventPusher_t85 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventOnCurrencyBalanceChanged(Soomla.Store.VirtualCurrency,System.Int32,System.Int32)
 void StoreEventPusher_PushEventOnCurrencyBalanceChanged_m368 (StoreEventPusher_t85 * __this, VirtualCurrency_t105 * ___currency, int32_t ___balance, int32_t ___amountAdded, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventOnGoodBalanceChanged(Soomla.Store.VirtualGood,System.Int32,System.Int32)
 void StoreEventPusher_PushEventOnGoodBalanceChanged_m369 (StoreEventPusher_t85 * __this, VirtualGood_t102 * ___good, int32_t ___balance, int32_t ___amountAdded, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventOnGoodEquipped(Soomla.Store.EquippableVG)
 void StoreEventPusher_PushEventOnGoodEquipped_m370 (StoreEventPusher_t85 * __this, EquippableVG_t104 * ___good, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventOnGoodUnequipped(Soomla.Store.EquippableVG)
 void StoreEventPusher_PushEventOnGoodUnequipped_m371 (StoreEventPusher_t85 * __this, EquippableVG_t104 * ___good, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventOnGoodUpgrade(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG)
 void StoreEventPusher_PushEventOnGoodUpgrade_m372 (StoreEventPusher_t85 * __this, VirtualGood_t102 * ___good, UpgradeVG_t103 * ___upgrade, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventOnItemPurchased(Soomla.Store.PurchasableVirtualItem,System.String)
 void StoreEventPusher_PushEventOnItemPurchased_m373 (StoreEventPusher_t85 * __this, PurchasableVirtualItem_t106 * ___item, String_t* ___payload, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventOnItemPurchaseStarted(Soomla.Store.PurchasableVirtualItem)
 void StoreEventPusher_PushEventOnItemPurchaseStarted_m374 (StoreEventPusher_t85 * __this, PurchasableVirtualItem_t106 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventSoomlaStoreInitialized(System.String)
 void StoreEventPusher__pushEventSoomlaStoreInitialized_m375 (StoreEventPusher_t85 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventUnexpectedStoreError(System.String)
 void StoreEventPusher__pushEventUnexpectedStoreError_m376 (StoreEventPusher_t85 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventCurrencyBalanceChanged(System.String)
 void StoreEventPusher__pushEventCurrencyBalanceChanged_m377 (StoreEventPusher_t85 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventGoodBalanceChanged(System.String)
 void StoreEventPusher__pushEventGoodBalanceChanged_m378 (StoreEventPusher_t85 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventGoodEquipped(System.String)
 void StoreEventPusher__pushEventGoodEquipped_m379 (StoreEventPusher_t85 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventGoodUnequipped(System.String)
 void StoreEventPusher__pushEventGoodUnequipped_m380 (StoreEventPusher_t85 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventGoodUpgrade(System.String)
 void StoreEventPusher__pushEventGoodUpgrade_m381 (StoreEventPusher_t85 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventItemPurchased(System.String)
 void StoreEventPusher__pushEventItemPurchased_m382 (StoreEventPusher_t85 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventItemPurchaseStarted(System.String)
 void StoreEventPusher__pushEventItemPurchaseStarted_m383 (StoreEventPusher_t85 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
