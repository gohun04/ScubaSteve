#pragma once

// GoogleMobileAds.iOS.IOSBannerClient
struct IOSBannerClient_t598;
// GoogleMobileAds.Common.IAdListener
struct IAdListener_t582;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdSize
struct AdSize_t574;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t564;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// GoogleMobileAds.Api.AdPosition
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdPosition.h"

// System.Void GoogleMobileAds.iOS.IOSBannerClient::.ctor(GoogleMobileAds.Common.IAdListener)
 void IOSBannerClient__ctor_m2377 (IOSBannerClient_t598 * __this, Object_t * ___listener, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.IOSBannerClient::get_BannerViewPtr()
 IntPtr_t35 IOSBannerClient_get_BannerViewPtr_m2378 (IOSBannerClient_t598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::set_BannerViewPtr(System.IntPtr)
 void IOSBannerClient_set_BannerViewPtr_m2379 (IOSBannerClient_t598 * __this, IntPtr_t35 ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
 void IOSBannerClient_CreateBannerView_m2380 (IOSBannerClient_t598 * __this, String_t* ___adUnitId, AdSize_t574 * ___adSize, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::LoadAd(GoogleMobileAds.Api.AdRequest)
 void IOSBannerClient_LoadAd_m2381 (IOSBannerClient_t598 * __this, AdRequest_t564 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::ShowBannerView()
 void IOSBannerClient_ShowBannerView_m2382 (IOSBannerClient_t598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::HideBannerView()
 void IOSBannerClient_HideBannerView_m2383 (IOSBannerClient_t598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::DestroyBannerView()
 void IOSBannerClient_DestroyBannerView_m2384 (IOSBannerClient_t598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::AdViewDidReceiveAdCallback(System.IntPtr)
 void IOSBannerClient_AdViewDidReceiveAdCallback_m2385 (Object_t * __this/* static, unused */, IntPtr_t35 ___bannerClient, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::AdViewDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
 void IOSBannerClient_AdViewDidFailToReceiveAdWithErrorCallback_m2386 (Object_t * __this/* static, unused */, IntPtr_t35 ___bannerClient, String_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::AdViewWillPresentScreenCallback(System.IntPtr)
 void IOSBannerClient_AdViewWillPresentScreenCallback_m2387 (Object_t * __this/* static, unused */, IntPtr_t35 ___bannerClient, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::AdViewWillDismissScreenCallback(System.IntPtr)
 void IOSBannerClient_AdViewWillDismissScreenCallback_m2388 (Object_t * __this/* static, unused */, IntPtr_t35 ___bannerClient, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::AdViewDidDismissScreenCallback(System.IntPtr)
 void IOSBannerClient_AdViewDidDismissScreenCallback_m2389 (Object_t * __this/* static, unused */, IntPtr_t35 ___bannerClient, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::AdViewWillLeaveApplicationCallback(System.IntPtr)
 void IOSBannerClient_AdViewWillLeaveApplicationCallback_m2390 (Object_t * __this/* static, unused */, IntPtr_t35 ___bannerClient, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.iOS.IOSBannerClient GoogleMobileAds.iOS.IOSBannerClient::IntPtrToBannerClient(System.IntPtr)
 IOSBannerClient_t598 * IOSBannerClient_IntPtrToBannerClient_m2391 (Object_t * __this/* static, unused */, IntPtr_t35 ___bannerClient, MethodInfo* method) IL2CPP_METHOD_ATTR;
