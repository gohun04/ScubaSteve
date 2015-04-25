#pragma once
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t60;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t125;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t41;
// System.Object
#include "mscorlib_System_Object.h"
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<GoogleMobileAds.Api.Gender>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.Nullable`1<System.Boolean>
#include "mscorlib_System_Nullable_1_gen_1.h"
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t564  : public Object_t
{
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest::testDevices
	List_1_t60 * ___testDevices_2;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::keywords
	HashSet_1_t125 * ___keywords_3;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest::birthday
	Nullable_1_t571  ___birthday_4;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest::gender
	Nullable_1_t572  ___gender_5;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest::tagForChildDirectedTreatment
	Nullable_1_t573  ___tagForChildDirectedTreatment_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::extras
	Dictionary_2_t41 * ___extras_7;
};
