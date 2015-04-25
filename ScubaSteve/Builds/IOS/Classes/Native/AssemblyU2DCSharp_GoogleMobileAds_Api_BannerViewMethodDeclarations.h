#pragma once

// GoogleMobileAds.Api.BannerView
struct BannerView_t578;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdSize
struct AdSize_t574;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t576;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t577;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t564;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t565;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t566;
// GoogleMobileAds.Api.AdPosition
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdPosition.h"

// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
 void BannerView__ctor_m2261 (BannerView_t578 * __this, String_t* ___adUnitId, AdSize_t574 * ___adSize, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_AdLoaded(System.EventHandler`1<System.EventArgs>)
 void BannerView_add_AdLoaded_m2262 (BannerView_t578 * __this, EventHandler_1_t576 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_AdLoaded(System.EventHandler`1<System.EventArgs>)
 void BannerView_remove_AdLoaded_m2263 (BannerView_t578 * __this, EventHandler_1_t576 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_AdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
 void BannerView_add_AdFailedToLoad_m2264 (BannerView_t578 * __this, EventHandler_1_t577 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_AdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
 void BannerView_remove_AdFailedToLoad_m2265 (BannerView_t578 * __this, EventHandler_1_t577 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_AdOpened(System.EventHandler`1<System.EventArgs>)
 void BannerView_add_AdOpened_m2266 (BannerView_t578 * __this, EventHandler_1_t576 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_AdOpened(System.EventHandler`1<System.EventArgs>)
 void BannerView_remove_AdOpened_m2267 (BannerView_t578 * __this, EventHandler_1_t576 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_AdClosing(System.EventHandler`1<System.EventArgs>)
 void BannerView_add_AdClosing_m2268 (BannerView_t578 * __this, EventHandler_1_t576 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_AdClosing(System.EventHandler`1<System.EventArgs>)
 void BannerView_remove_AdClosing_m2269 (BannerView_t578 * __this, EventHandler_1_t576 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_AdClosed(System.EventHandler`1<System.EventArgs>)
 void BannerView_add_AdClosed_m2270 (BannerView_t578 * __this, EventHandler_1_t576 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_AdClosed(System.EventHandler`1<System.EventArgs>)
 void BannerView_remove_AdClosed_m2271 (BannerView_t578 * __this, EventHandler_1_t576 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_AdLeftApplication(System.EventHandler`1<System.EventArgs>)
 void BannerView_add_AdLeftApplication_m2272 (BannerView_t578 * __this, EventHandler_1_t576 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_AdLeftApplication(System.EventHandler`1<System.EventArgs>)
 void BannerView_remove_AdLeftApplication_m2273 (BannerView_t578 * __this, EventHandler_1_t576 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::GoogleMobileAds.Common.IAdListener.FireAdLoaded()
 void BannerView_GoogleMobileAds_Common_IAdListener_FireAdLoaded_m2274 (BannerView_t578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::GoogleMobileAds.Common.IAdListener.FireAdFailedToLoad(System.String)
 void BannerView_GoogleMobileAds_Common_IAdListener_FireAdFailedToLoad_m2275 (BannerView_t578 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::GoogleMobileAds.Common.IAdListener.FireAdOpened()
 void BannerView_GoogleMobileAds_Common_IAdListener_FireAdOpened_m2276 (BannerView_t578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::GoogleMobileAds.Common.IAdListener.FireAdClosing()
 void BannerView_GoogleMobileAds_Common_IAdListener_FireAdClosing_m2277 (BannerView_t578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::GoogleMobileAds.Common.IAdListener.FireAdClosed()
 void BannerView_GoogleMobileAds_Common_IAdListener_FireAdClosed_m2278 (BannerView_t578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::GoogleMobileAds.Common.IAdListener.FireAdLeftApplication()
 void BannerView_GoogleMobileAds_Common_IAdListener_FireAdLeftApplication_m2279 (BannerView_t578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
 void BannerView_LoadAd_m2280 (BannerView_t578 * __this, AdRequest_t564 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::Hide()
 void BannerView_Hide_m2281 (BannerView_t578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::Show()
 void BannerView_Show_m2282 (BannerView_t578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
 void BannerView_Destroy_m2283 (BannerView_t578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<AdLoaded>m__0(System.Object,System.EventArgs)
 void BannerView_U3CAdLoadedU3Em__0_m2284 (Object_t * __this/* static, unused */, Object_t * p0, EventArgs_t565 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<AdFailedToLoad>m__1(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
 void BannerView_U3CAdFailedToLoadU3Em__1_m2285 (Object_t * __this/* static, unused */, Object_t * p0, AdFailedToLoadEventArgs_t566 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<AdOpened>m__2(System.Object,System.EventArgs)
 void BannerView_U3CAdOpenedU3Em__2_m2286 (Object_t * __this/* static, unused */, Object_t * p0, EventArgs_t565 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<AdClosing>m__3(System.Object,System.EventArgs)
 void BannerView_U3CAdClosingU3Em__3_m2287 (Object_t * __this/* static, unused */, Object_t * p0, EventArgs_t565 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<AdClosed>m__4(System.Object,System.EventArgs)
 void BannerView_U3CAdClosedU3Em__4_m2288 (Object_t * __this/* static, unused */, Object_t * p0, EventArgs_t565 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<AdLeftApplication>m__5(System.Object,System.EventArgs)
 void BannerView_U3CAdLeftApplicationU3Em__5_m2289 (Object_t * __this/* static, unused */, Object_t * p0, EventArgs_t565 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
