#pragma once
// GoogleMobileAds.Common.IGoogleMobileAdsInterstitialClient
struct IGoogleMobileAdsInterstitialClient_t580;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t576;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t577;
// System.Object
#include "mscorlib_System_Object.h"
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t562  : public Object_t
{
	// GoogleMobileAds.Common.IGoogleMobileAdsInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	Object_t * ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::AdLoaded
	EventHandler_1_t576 * ___AdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::AdFailedToLoad
	EventHandler_1_t577 * ___AdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::AdOpened
	EventHandler_1_t576 * ___AdOpened_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::AdClosing
	EventHandler_1_t576 * ___AdClosing_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::AdClosed
	EventHandler_1_t576 * ___AdClosed_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::AdLeftApplication
	EventHandler_1_t576 * ___AdLeftApplication_6;
};
struct InterstitialAd_t562_StaticFields{
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cache7
	EventHandler_1_t576 * ___U3CU3Ef__am$cache7_7;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cache8
	EventHandler_1_t577 * ___U3CU3Ef__am$cache8_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cache9
	EventHandler_1_t576 * ___U3CU3Ef__am$cache9_9;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cacheA
	EventHandler_1_t576 * ___U3CU3Ef__am$cacheA_10;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cacheB
	EventHandler_1_t576 * ___U3CU3Ef__am$cacheB_11;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cacheC
	EventHandler_1_t576 * ___U3CU3Ef__am$cacheC_12;
};
