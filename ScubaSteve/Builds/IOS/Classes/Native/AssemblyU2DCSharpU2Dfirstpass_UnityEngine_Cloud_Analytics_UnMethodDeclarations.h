#pragma once

// UnityEngine.Cloud.Analytics.UnityAnalytics
struct UnityAnalytics_t168;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t169;
// UnityEngine.Cloud.Analytics.IUnityAnalyticsSession
struct IUnityAnalyticsSession_t170;
// UnityEngine.Cloud.Analytics.AnalyticsResult
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_Cloud_Analytics_An.h"
// UnityEngine.Cloud.Analytics.LogLevel
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_Cloud_Analytics_Lo.h"
// UnityEngine.Cloud.Analytics.SexEnum
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_Cloud_Analytics_Se.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"

// UnityEngine.Cloud.Analytics.AnalyticsResult UnityEngine.Cloud.Analytics.UnityAnalytics::StartSDK(System.String)
 int32_t UnityAnalytics_StartSDK_m676 (Object_t * __this/* static, unused */, String_t* ___appId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Analytics.UnityAnalytics::SetLogLevel(UnityEngine.Cloud.Analytics.LogLevel,System.Boolean)
 void UnityAnalytics_SetLogLevel_m677 (Object_t * __this/* static, unused */, int32_t ___logLevel, bool ___enableLogging, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Analytics.AnalyticsResult UnityEngine.Cloud.Analytics.UnityAnalytics::SetUserId(System.String)
 int32_t UnityAnalytics_SetUserId_m678 (Object_t * __this/* static, unused */, String_t* ___userId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Analytics.AnalyticsResult UnityEngine.Cloud.Analytics.UnityAnalytics::SetUserGender(UnityEngine.Cloud.Analytics.SexEnum)
 int32_t UnityAnalytics_SetUserGender_m679 (Object_t * __this/* static, unused */, int32_t ___gender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Analytics.AnalyticsResult UnityEngine.Cloud.Analytics.UnityAnalytics::SetUserBirthYear(System.Int32)
 int32_t UnityAnalytics_SetUserBirthYear_m680 (Object_t * __this/* static, unused */, int32_t ___birthYear, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Analytics.AnalyticsResult UnityEngine.Cloud.Analytics.UnityAnalytics::Transaction(System.String,System.Decimal,System.String)
 int32_t UnityAnalytics_Transaction_m681 (Object_t * __this/* static, unused */, String_t* ___productId, Decimal_t171  ___amount, String_t* ___currency, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Analytics.AnalyticsResult UnityEngine.Cloud.Analytics.UnityAnalytics::Transaction(System.String,System.Decimal,System.String,System.String,System.String)
 int32_t UnityAnalytics_Transaction_m682 (Object_t * __this/* static, unused */, String_t* ___productId, Decimal_t171  ___amount, String_t* ___currency, String_t* ___receiptPurchaseData, String_t* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Analytics.AnalyticsResult UnityEngine.Cloud.Analytics.UnityAnalytics::CustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 int32_t UnityAnalytics_CustomEvent_m683 (Object_t * __this/* static, unused */, String_t* ___customEventName, Object_t* ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Analytics.IUnityAnalyticsSession UnityEngine.Cloud.Analytics.UnityAnalytics::GetSingleton()
 Object_t * UnityAnalytics_GetSingleton_m684 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
