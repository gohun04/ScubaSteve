#pragma once

// Soomla.Schedule
struct Schedule_t71;
// System.Collections.Generic.List`1<Soomla.Schedule/DateTimeRange>
struct List_1_t70;
// JSONObject
struct JSONObject_t47;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Soomla.Schedule/Recurrence
#include "AssemblyU2DCSharpU2Dfirstpass_Soomla_Schedule_Recurrence.h"

// System.Void Soomla.Schedule::.ctor(System.Int32)
 void Schedule__ctor_m184 (Schedule_t71 * __this, int32_t ___activationLimit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Schedule::.ctor(System.DateTime,System.DateTime,Soomla.Schedule/Recurrence,System.Int32)
 void Schedule__ctor_m185 (Schedule_t71 * __this, DateTime_t45  ___startTime, DateTime_t45  ___endTime, int32_t ___recurrence, int32_t ___activationLimit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Schedule::.ctor(System.Collections.Generic.List`1<Soomla.Schedule/DateTimeRange>,Soomla.Schedule/Recurrence,System.Int32)
 void Schedule__ctor_m186 (Schedule_t71 * __this, List_1_t70 * ___timeRanges, int32_t ___recurrence, int32_t ___activationLimit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Schedule::.ctor(JSONObject)
 void Schedule__ctor_m187 (Schedule_t71 * __this, JSONObject_t47 * ___jsonSched, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Schedule::.cctor()
 void Schedule__cctor_m188 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Schedule Soomla.Schedule::AnyTimeOnce()
 Schedule_t71 * Schedule_AnyTimeOnce_m189 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Schedule Soomla.Schedule::AnyTimeLimited(System.Int32)
 Schedule_t71 * Schedule_AnyTimeLimited_m190 (Object_t * __this/* static, unused */, int32_t ___activationLimit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Schedule Soomla.Schedule::AnyTimeUnLimited()
 Schedule_t71 * Schedule_AnyTimeUnLimited_m191 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Schedule::toJSONObject()
 JSONObject_t47 * Schedule_toJSONObject_m192 (Schedule_t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Schedule::Approve(System.Int32)
 bool Schedule_Approve_m193 (Schedule_t71 * __this, int32_t ___activationTimes, MethodInfo* method) IL2CPP_METHOD_ATTR;
