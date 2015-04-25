#pragma once

// GoogleMobileAds.Common.DummyClient
struct DummyClient_t581;
// GoogleMobileAds.Common.IAdListener
struct IAdListener_t582;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdSize
struct AdSize_t574;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t564;
// GoogleMobileAds.Api.AdPosition
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdPosition.h"

// System.Void GoogleMobileAds.Common.DummyClient::.ctor(GoogleMobileAds.Common.IAdListener)
 void DummyClient__ctor_m2319 (DummyClient_t581 * __this, Object_t * ___listener, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
 void DummyClient_CreateBannerView_m2320 (DummyClient_t581 * __this, String_t* ___adUnitId, AdSize_t574 * ___adSize, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::LoadAd(GoogleMobileAds.Api.AdRequest)
 void DummyClient_LoadAd_m2321 (DummyClient_t581 * __this, AdRequest_t564 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::ShowBannerView()
 void DummyClient_ShowBannerView_m2322 (DummyClient_t581 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::HideBannerView()
 void DummyClient_HideBannerView_m2323 (DummyClient_t581 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::DestroyBannerView()
 void DummyClient_DestroyBannerView_m2324 (DummyClient_t581 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::CreateInterstitialAd(System.String)
 void DummyClient_CreateInterstitialAd_m2325 (DummyClient_t581 * __this, String_t* ___adUnitId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.Common.DummyClient::IsLoaded()
 bool DummyClient_IsLoaded_m2326 (DummyClient_t581 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::ShowInterstitial()
 void DummyClient_ShowInterstitial_m2327 (DummyClient_t581 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::DestroyInterstitial()
 void DummyClient_DestroyInterstitial_m2328 (DummyClient_t581 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
