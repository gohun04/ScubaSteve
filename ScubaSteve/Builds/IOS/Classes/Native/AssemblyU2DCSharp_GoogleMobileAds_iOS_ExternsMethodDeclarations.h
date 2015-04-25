#pragma once

// GoogleMobileAds.iOS.Externs
struct Externs_t584;
// System.String
struct String_t;
// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidReceiveAdCallback
struct GADUAdViewDidReceiveAdCallback_t585;
// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback
struct GADUAdViewDidFailToReceiveAdWithErrorCallback_t586;
// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillPresentScreenCallback
struct GADUAdViewWillPresentScreenCallback_t587;
// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillDismissScreenCallback
struct GADUAdViewWillDismissScreenCallback_t588;
// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidDismissScreenCallback
struct GADUAdViewDidDismissScreenCallback_t589;
// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillLeaveApplicationCallback
struct GADUAdViewWillLeaveApplicationCallback_t590;
// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidReceiveAdCallback
struct GADUInterstitialDidReceiveAdCallback_t591;
// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback
struct GADUInterstitialDidFailToReceiveAdWithErrorCallback_t592;
// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillPresentScreenCallback
struct GADUInterstitialWillPresentScreenCallback_t593;
// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillDismissScreenCallback
struct GADUInterstitialWillDismissScreenCallback_t594;
// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidDismissScreenCallback
struct GADUInterstitialDidDismissScreenCallback_t595;
// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillLeaveApplicationCallback
struct GADUInterstitialWillLeaveApplicationCallback_t596;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GoogleMobileAds.iOS.Externs::.ctor()
 void Externs__ctor_m2332 (Externs_t584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateRequest()
 IntPtr_t35 Externs_GADUCreateRequest_m2333 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUAddTestDevice(System.IntPtr,System.String)
 void Externs_GADUAddTestDevice_m2334 (Object_t * __this/* static, unused */, IntPtr_t35 ___request, String_t* ___deviceId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUAddKeyword(System.IntPtr,System.String)
 void Externs_GADUAddKeyword_m2335 (Object_t * __this/* static, unused */, IntPtr_t35 ___request, String_t* ___keyword, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetBirthday(System.IntPtr,System.Int32,System.Int32,System.Int32)
 void Externs_GADUSetBirthday_m2336 (Object_t * __this/* static, unused */, IntPtr_t35 ___request, int32_t ___year, int32_t ___month, int32_t ___day, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetGender(System.IntPtr,System.Int32)
 void Externs_GADUSetGender_m2337 (Object_t * __this/* static, unused */, IntPtr_t35 ___request, int32_t ___genderCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUTagForChildDirectedTreatment(System.IntPtr,System.Boolean)
 void Externs_GADUTagForChildDirectedTreatment_m2338 (Object_t * __this/* static, unused */, IntPtr_t35 ___request, bool ___childDirectedTreatment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetExtra(System.IntPtr,System.String,System.String)
 void Externs_GADUSetExtra_m2339 (Object_t * __this/* static, unused */, IntPtr_t35 ___request, String_t* ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURelease(System.IntPtr)
 void Externs_GADURelease_m2340 (Object_t * __this/* static, unused */, IntPtr_t35 ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateBannerView(System.IntPtr,System.String,System.Int32,System.Int32,System.Int32)
 IntPtr_t35 Externs_GADUCreateBannerView_m2341 (Object_t * __this/* static, unused */, IntPtr_t35 ___bannerClient, String_t* ___adUnitId, int32_t ___width, int32_t ___height, int32_t ___positionAtTop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateSmartBannerView(System.IntPtr,System.String,System.Int32)
 IntPtr_t35 Externs_GADUCreateSmartBannerView_m2342 (Object_t * __this/* static, unused */, IntPtr_t35 ___bannerClient, String_t* ___adUnitId, int32_t ___positionAtTop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetBannerCallbacks(System.IntPtr,GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidReceiveAdCallback,GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback,GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillPresentScreenCallback,GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillDismissScreenCallback,GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidDismissScreenCallback,GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillLeaveApplicationCallback)
 void Externs_GADUSetBannerCallbacks_m2343 (Object_t * __this/* static, unused */, IntPtr_t35 ___bannerView, GADUAdViewDidReceiveAdCallback_t585 * ___adReceivedCallback, GADUAdViewDidFailToReceiveAdWithErrorCallback_t586 * ___adFailedCallback, GADUAdViewWillPresentScreenCallback_t587 * ___willPresentCallback, GADUAdViewWillDismissScreenCallback_t588 * ___willDismissCallback, GADUAdViewDidDismissScreenCallback_t589 * ___didDismissCallback, GADUAdViewWillLeaveApplicationCallback_t590 * ___willLeaveCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUHideBannerView(System.IntPtr)
 void Externs_GADUHideBannerView_m2344 (Object_t * __this/* static, unused */, IntPtr_t35 ___bannerView, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUShowBannerView(System.IntPtr)
 void Externs_GADUShowBannerView_m2345 (Object_t * __this/* static, unused */, IntPtr_t35 ___bannerView, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURemoveBannerView(System.IntPtr)
 void Externs_GADURemoveBannerView_m2346 (Object_t * __this/* static, unused */, IntPtr_t35 ___bannerView, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURequestBannerAd(System.IntPtr,System.IntPtr)
 void Externs_GADURequestBannerAd_m2347 (Object_t * __this/* static, unused */, IntPtr_t35 ___bannerView, IntPtr_t35 ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateInterstitial(System.IntPtr,System.String)
 IntPtr_t35 Externs_GADUCreateInterstitial_m2348 (Object_t * __this/* static, unused */, IntPtr_t35 ___interstitialClient, String_t* ___adUnitId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetInterstitialCallbacks(System.IntPtr,GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidReceiveAdCallback,GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback,GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillPresentScreenCallback,GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillDismissScreenCallback,GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidDismissScreenCallback,GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillLeaveApplicationCallback)
 void Externs_GADUSetInterstitialCallbacks_m2349 (Object_t * __this/* static, unused */, IntPtr_t35 ___interstitial, GADUInterstitialDidReceiveAdCallback_t591 * ___adReceivedCallback, GADUInterstitialDidFailToReceiveAdWithErrorCallback_t592 * ___adFailedCallback, GADUInterstitialWillPresentScreenCallback_t593 * ___willPresentCallback, GADUInterstitialWillDismissScreenCallback_t594 * ___willDismissCallback, GADUInterstitialDidDismissScreenCallback_t595 * ___didDismissCallback, GADUInterstitialWillLeaveApplicationCallback_t596 * ___willLeaveCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.iOS.Externs::GADUInterstitialReady(System.IntPtr)
 bool Externs_GADUInterstitialReady_m2350 (Object_t * __this/* static, unused */, IntPtr_t35 ___interstitial, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUShowInterstitial(System.IntPtr)
 void Externs_GADUShowInterstitial_m2351 (Object_t * __this/* static, unused */, IntPtr_t35 ___interstitial, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURequestInterstitial(System.IntPtr,System.IntPtr)
 void Externs_GADURequestInterstitial_m2352 (Object_t * __this/* static, unused */, IntPtr_t35 ___interstitial, IntPtr_t35 ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
