#pragma once
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t58;
// System.Collections.Generic.List`1<JSONObject>
struct List_1_t59;
// System.Collections.Generic.List`1<System.String>
struct List_1_t60;
// System.Diagnostics.Stopwatch
struct Stopwatch_t61;
// NullCheckable
#include "AssemblyU2DCSharpU2Dfirstpass_NullCheckable.h"
// JSONObject/Type
#include "AssemblyU2DCSharpU2Dfirstpass_JSONObject_Type.h"
// JSONObject
struct JSONObject_t47  : public NullCheckable_t62
{
	// JSONObject/Type JSONObject::type
	int32_t ___type_6;
	// System.Collections.Generic.List`1<JSONObject> JSONObject::list
	List_1_t59 * ___list_7;
	// System.Collections.Generic.List`1<System.String> JSONObject::keys
	List_1_t60 * ___keys_8;
	// System.String JSONObject::str
	String_t* ___str_9;
	// System.Single JSONObject::n
	float ___n_10;
	// System.Boolean JSONObject::b
	bool ___b_11;
};
struct JSONObject_t47_StaticFields{
	// System.Int32 JSONObject::MAX_DEPTH
	int32_t ___MAX_DEPTH_0;
	// System.String JSONObject::INFINITY
	String_t* ___INFINITY_1;
	// System.String JSONObject::NEGINFINITY
	String_t* ___NEGINFINITY_2;
	// System.String JSONObject::NaN
	String_t* ___NaN_3;
	// System.Single JSONObject::maxFrameTime
	float ___maxFrameTime_4;
	// System.Char[] JSONObject::WHITESPACE
	CharU5BU5D_t58* ___WHITESPACE_5;
	// System.Diagnostics.Stopwatch JSONObject::printWatch
	Stopwatch_t61 * ___printWatch_12;
};
