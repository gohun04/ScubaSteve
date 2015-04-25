#pragma once

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t2405;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t959;
// System.String[]
struct StringU5BU5D_t65;
// System.Globalization.DaylightTime
struct DaylightTime_t2014;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
 void CurrentSystemTimeZone__ctor_m13147 (CurrentSystemTimeZone_t2405 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
 void CurrentSystemTimeZone__ctor_m13148 (CurrentSystemTimeZone_t2405 * __this, int64_t ___lnow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
 void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m13149 (CurrentSystemTimeZone_t2405 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
 bool CurrentSystemTimeZone_GetTimeZoneData_m13150 (Object_t * __this/* static, unused */, int32_t ___year, Int64U5BU5D_t959** ___data, StringU5BU5D_t65** ___names, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
 DaylightTime_t2014 * CurrentSystemTimeZone_GetDaylightChanges_m13151 (CurrentSystemTimeZone_t2405 * __this, int32_t ___year, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
 TimeSpan_t438  CurrentSystemTimeZone_GetUtcOffset_m13152 (CurrentSystemTimeZone_t2405 * __this, DateTime_t45  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
 void CurrentSystemTimeZone_OnDeserialization_m13153 (CurrentSystemTimeZone_t2405 * __this, DaylightTime_t2014 * ___dlt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
 DaylightTime_t2014 * CurrentSystemTimeZone_GetDaylightTimeFromData_m13154 (CurrentSystemTimeZone_t2405 * __this, Int64U5BU5D_t959* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
