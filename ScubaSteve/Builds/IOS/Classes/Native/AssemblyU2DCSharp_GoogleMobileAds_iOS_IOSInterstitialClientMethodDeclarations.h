#pragma once

// GoogleMobileAds.iOS.IOSInterstitialClient
struct IOSInterstitialClient_t599;
// GoogleMobileAds.Common.IAdListener
struct IAdListener_t582;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t564;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::.ctor(GoogleMobileAds.Common.IAdListener)
 void IOSInterstitialClient__ctor_m2416 (IOSInterstitialClient_t599 * __this, Object_t * ___listener, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.IOSInterstitialClient::get_InterstitialPtr()
 IntPtr_t35 IOSInterstitialClient_get_InterstitialPtr_m2417 (IOSInterstitialClient_t599 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::set_InterstitialPtr(System.IntPtr)
 void IOSInterstitialClient_set_InterstitialPtr_m2418 (IOSInterstitialClient_t599 * __this, IntPtr_t35 ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::CreateInterstitialAd(System.String)
 void IOSInterstitialClient_CreateInterstitialAd_m2419 (IOSInterstitialClient_t599 * __this, String_t* ___adUnitId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::LoadAd(GoogleMobileAds.Api.AdRequest)
 void IOSInterstitialClient_LoadAd_m2420 (IOSInterstitialClient_t599 * __this, AdRequest_t564 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.iOS.IOSInterstitialClient::IsLoaded()
 bool IOSInterstitialClient_IsLoaded_m2421 (IOSInterstitialClient_t599 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::ShowInterstitial()
 void IOSInterstitialClient_ShowInterstitial_m2422 (IOSInterstitialClient_t599 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::DestroyInterstitial()
 void IOSInterstitialClient_DestroyInterstitial_m2423 (IOSInterstitialClient_t599 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::InterstitialDidReceiveAdCallback(System.IntPtr)
 void IOSInterstitialClient_InterstitialDidReceiveAdCallback_m2424 (Object_t * __this/* static, unused */, IntPtr_t35 ___interstitialClient, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::InterstitialDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
 void IOSInterstitialClient_InterstitialDidFailToReceiveAdWithErrorCallback_m2425 (Object_t * __this/* static, unused */, IntPtr_t35 ___interstitialClient, String_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::InterstitialWillPresentScreenCallback(System.IntPtr)
 void IOSInterstitialClient_InterstitialWillPresentScreenCallback_m2426 (Object_t * __this/* static, unused */, IntPtr_t35 ___interstitialClient, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::InterstitialWillDismissScreenCallback(System.IntPtr)
 void IOSInterstitialClient_InterstitialWillDismissScreenCallback_m2427 (Object_t * __this/* static, unused */, IntPtr_t35 ___interstitialClient, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::InterstitialDidDismissScreenCallback(System.IntPtr)
 void IOSInterstitialClient_InterstitialDidDismissScreenCallback_m2428 (Object_t * __this/* static, unused */, IntPtr_t35 ___interstitialClient, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::InterstitialWillLeaveApplicationCallback(System.IntPtr)
 void IOSInterstitialClient_InterstitialWillLeaveApplicationCallback_m2429 (Object_t * __this/* static, unused */, IntPtr_t35 ___interstitialClient, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.iOS.IOSInterstitialClient GoogleMobileAds.iOS.IOSInterstitialClient::IntPtrToInterstitialClient(System.IntPtr)
 IOSInterstitialClient_t599 * IOSInterstitialClient_IntPtrToInterstitialClient_m2430 (Object_t * __this/* static, unused */, IntPtr_t35 ___interstitialClient, MethodInfo* method) IL2CPP_METHOD_ATTR;
