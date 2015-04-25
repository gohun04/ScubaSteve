#pragma once

// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t570;
// System.Collections.Generic.List`1<System.String>
struct List_1_t60;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t125;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t41;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t564;
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<GoogleMobileAds.Api.Gender>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.Nullable`1<System.Boolean>
#include "mscorlib_System_Nullable_1_gen_1.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// GoogleMobileAds.Api.Gender
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_Gender.h"

// System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor()
 void Builder__ctor_m2234 (Builder_t570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddKeyword(System.String)
 Builder_t570 * Builder_AddKeyword_m2235 (Builder_t570 * __this, String_t* ___keyword, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddTestDevice(System.String)
 Builder_t570 * Builder_AddTestDevice_m2236 (Builder_t570 * __this, String_t* ___deviceId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build()
 AdRequest_t564 * Builder_Build_m2237 (Builder_t570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::SetBirthday(System.DateTime)
 Builder_t570 * Builder_SetBirthday_m2238 (Builder_t570 * __this, DateTime_t45  ___birthday, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::SetGender(GoogleMobileAds.Api.Gender)
 Builder_t570 * Builder_SetGender_m2239 (Builder_t570 * __this, int32_t ___gender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::TagForChildDirectedTreatment(System.Boolean)
 Builder_t570 * Builder_TagForChildDirectedTreatment_m2240 (Builder_t570 * __this, bool ___tagForChildDirectedTreatment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddExtra(System.String,System.String)
 Builder_t570 * Builder_AddExtra_m2241 (Builder_t570 * __this, String_t* ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::get_TestDevices()
 List_1_t60 * Builder_get_TestDevices_m2242 (Builder_t570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::get_Keywords()
 HashSet_1_t125 * Builder_get_Keywords_m2243 (Builder_t570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest/Builder::get_Birthday()
 Nullable_1_t571  Builder_get_Birthday_m2244 (Builder_t570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest/Builder::get_Gender()
 Nullable_1_t572  Builder_get_Gender_m2245 (Builder_t570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest/Builder::get_ChildDirectedTreatmentTag()
 Nullable_1_t573  Builder_get_ChildDirectedTreatmentTag_m2246 (Builder_t570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::get_Extras()
 Dictionary_2_t41 * Builder_get_Extras_m2247 (Builder_t570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
