#pragma once

// Soomla.Store.SoomlaStore
struct SoomlaStore_t83;
// Soomla.Store.IStoreAssets
struct IStoreAssets_t98;
// System.String
struct String_t;

// System.Void Soomla.Store.SoomlaStore::.ctor()
 void SoomlaStore__ctor_m344 (SoomlaStore_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::.cctor()
 void SoomlaStore__cctor_m345 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.SoomlaStore Soomla.Store.SoomlaStore::get_instance()
 SoomlaStore_t83 * SoomlaStore_get_instance_m346 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.SoomlaStore::Initialize(Soomla.Store.IStoreAssets)
 bool SoomlaStore_Initialize_m347 (Object_t * __this/* static, unused */, Object_t * ___storeAssets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::BuyMarketItem(System.String,System.String)
 void SoomlaStore_BuyMarketItem_m348 (Object_t * __this/* static, unused */, String_t* ___productId, String_t* ___payload, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::RefreshInventory()
 void SoomlaStore_RefreshInventory_m349 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::RefreshMarketItemsDetails()
 void SoomlaStore_RefreshMarketItemsDetails_m350 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::RestoreTransactions()
 void SoomlaStore_RestoreTransactions_m351 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.SoomlaStore::TransactionsAlreadyRestored()
 bool SoomlaStore_TransactionsAlreadyRestored_m352 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::StartIabServiceInBg()
 void SoomlaStore_StartIabServiceInBg_m353 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::StopIabServiceInBg()
 void SoomlaStore_StopIabServiceInBg_m354 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::_loadBillingService()
 void SoomlaStore__loadBillingService_m355 (SoomlaStore_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::_buyMarketItem(System.String,System.String)
 void SoomlaStore__buyMarketItem_m356 (SoomlaStore_t83 * __this, String_t* ___productId, String_t* ___payload, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::_refreshInventory()
 void SoomlaStore__refreshInventory_m357 (SoomlaStore_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::_restoreTransactions()
 void SoomlaStore__restoreTransactions_m358 (SoomlaStore_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::_refreshMarketItemsDetails()
 void SoomlaStore__refreshMarketItemsDetails_m359 (SoomlaStore_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.SoomlaStore::_transactionsAlreadyRestored()
 bool SoomlaStore__transactionsAlreadyRestored_m360 (SoomlaStore_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::_startIabServiceInBg()
 void SoomlaStore__startIabServiceInBg_m361 (SoomlaStore_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::_stopIabServiceInBg()
 void SoomlaStore__stopIabServiceInBg_m362 (SoomlaStore_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.SoomlaStore::get_Initialized()
 bool SoomlaStore_get_Initialized_m363 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::set_Initialized(System.Boolean)
 void SoomlaStore_set_Initialized_m364 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
