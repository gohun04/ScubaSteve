#pragma once
// GoogleMobileAds.Common.IAdListener
struct IAdListener_t582;
// System.Collections.Generic.Dictionary`2<System.IntPtr,GoogleMobileAds.iOS.IOSBannerClient>
struct Dictionary_2_t597;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// GoogleMobileAds.iOS.IOSBannerClient
struct IOSBannerClient_t598  : public Object_t
{
	// GoogleMobileAds.Common.IAdListener GoogleMobileAds.iOS.IOSBannerClient::listener
	Object_t * ___listener_0;
	// System.IntPtr GoogleMobileAds.iOS.IOSBannerClient::bannerViewPtr
	IntPtr_t35 ___bannerViewPtr_1;
};
struct IOSBannerClient_t598_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.IntPtr,GoogleMobileAds.iOS.IOSBannerClient> GoogleMobileAds.iOS.IOSBannerClient::bannerClients
	Dictionary_2_t597 * ___bannerClients_2;
};
