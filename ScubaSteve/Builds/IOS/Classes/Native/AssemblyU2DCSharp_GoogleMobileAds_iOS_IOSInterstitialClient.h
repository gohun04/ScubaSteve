#pragma once
// GoogleMobileAds.Common.IAdListener
struct IAdListener_t582;
// System.Collections.Generic.Dictionary`2<System.IntPtr,GoogleMobileAds.iOS.IOSBannerClient>
struct Dictionary_2_t597;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// GoogleMobileAds.iOS.IOSInterstitialClient
struct IOSInterstitialClient_t599  : public Object_t
{
	// GoogleMobileAds.Common.IAdListener GoogleMobileAds.iOS.IOSInterstitialClient::listener
	Object_t * ___listener_0;
	// System.IntPtr GoogleMobileAds.iOS.IOSInterstitialClient::interstitialPtr
	IntPtr_t35 ___interstitialPtr_1;
};
struct IOSInterstitialClient_t599_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.IntPtr,GoogleMobileAds.iOS.IOSBannerClient> GoogleMobileAds.iOS.IOSInterstitialClient::bannerClients
	Dictionary_2_t597 * ___bannerClients_2;
};
