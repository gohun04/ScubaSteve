#pragma once
// System.String
struct String_t;
// System.Collections.Generic.List`1<Soomla.Schedule/DateTimeRange>
struct List_1_t70;
// System.Object
#include "mscorlib_System_Object.h"
// Soomla.Schedule/Recurrence
#include "AssemblyU2DCSharpU2Dfirstpass_Soomla_Schedule_Recurrence.h"
// Soomla.Schedule
struct Schedule_t71  : public Object_t
{
	// Soomla.Schedule/Recurrence Soomla.Schedule::RequiredRecurrence
	int32_t ___RequiredRecurrence_1;
	// System.Collections.Generic.List`1<Soomla.Schedule/DateTimeRange> Soomla.Schedule::TimeRanges
	List_1_t70 * ___TimeRanges_2;
	// System.Int32 Soomla.Schedule::ActivationLimit
	int32_t ___ActivationLimit_3;
};
struct Schedule_t71_StaticFields{
	// System.String Soomla.Schedule::TAG
	String_t* ___TAG_0;
};
