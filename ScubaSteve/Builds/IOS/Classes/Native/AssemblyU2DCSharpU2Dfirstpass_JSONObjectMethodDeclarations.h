#pragma once

// JSONObject
struct JSONObject_t47;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t41;
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t63;
// JSONObject/AddJSONConents
struct AddJSONConents_t48;
// JSONObject[]
struct JSONObjectU5BU5D_t64;
// JSONObject/FieldNotFound
struct FieldNotFound_t49;
// JSONObject/GetFieldResponse
struct GetFieldResponse_t50;
// System.String[]
struct StringU5BU5D_t65;
// System.Collections.IEnumerable
struct IEnumerable_t55;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t66;
// System.Text.StringBuilder
struct StringBuilder_t54;
// UnityEngine.WWWForm
struct WWWForm_t67;
// JSONObject/Type
#include "AssemblyU2DCSharpU2Dfirstpass_JSONObject_Type.h"

// System.Void JSONObject::.ctor(JSONObject/Type)
 void JSONObject__ctor_m98 (JSONObject_t47 * __this, int32_t ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Boolean)
 void JSONObject__ctor_m99 (JSONObject_t47 * __this, bool ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Single)
 void JSONObject__ctor_m100 (JSONObject_t47 * __this, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>)
 void JSONObject__ctor_m101 (JSONObject_t47 * __this, Dictionary_2_t41 * ___dic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,JSONObject>)
 void JSONObject__ctor_m102 (JSONObject_t47 * __this, Dictionary_2_t63 * ___dic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(JSONObject/AddJSONConents)
 void JSONObject__ctor_m103 (JSONObject_t47 * __this, AddJSONConents_t48 * ___content, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(JSONObject[])
 void JSONObject__ctor_m104 (JSONObject_t47 * __this, JSONObjectU5BU5D_t64* ___objs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor()
 void JSONObject__ctor_m105 (JSONObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.String,System.Int32,System.Boolean,System.Boolean)
 void JSONObject__ctor_m106 (JSONObject_t47 * __this, String_t* ___str, int32_t ___maxDepth, bool ___storeExcessLevels, bool ___strict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.cctor()
 void JSONObject__cctor_m107 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_isContainer()
 bool JSONObject_get_isContainer_m108 (JSONObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JSONObject::get_Count()
 int32_t JSONObject_get_Count_m109 (JSONObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JSONObject::get_f()
 float JSONObject_get_f_m110 (JSONObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_nullJO()
 JSONObject_t47 * JSONObject_get_nullJO_m111 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_obj()
 JSONObject_t47 * JSONObject_get_obj_m112 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_arr()
 JSONObject_t47 * JSONObject_get_arr_m113 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::StringObject(System.String)
 JSONObject_t47 * JSONObject_StringObject_m114 (Object_t * __this/* static, unused */, String_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Absorb(JSONObject)
 void JSONObject_Absorb_m115 (JSONObject_t47 * __this, JSONObject_t47 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create()
 JSONObject_t47 * JSONObject_Create_m116 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(JSONObject/Type)
 JSONObject_t47 * JSONObject_Create_m117 (Object_t * __this/* static, unused */, int32_t ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Boolean)
 JSONObject_t47 * JSONObject_Create_m118 (Object_t * __this/* static, unused */, bool ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Single)
 JSONObject_t47 * JSONObject_Create_m119 (Object_t * __this/* static, unused */, float ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Int32)
 JSONObject_t47 * JSONObject_Create_m120 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::CreateStringObject(System.String)
 JSONObject_t47 * JSONObject_CreateStringObject_m121 (Object_t * __this/* static, unused */, String_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::EncodeJsString(System.String)
 String_t* JSONObject_EncodeJsString_m122 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::CreateBakedObject(System.String)
 JSONObject_t47 * JSONObject_CreateBakedObject_m123 (Object_t * __this/* static, unused */, String_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.String,System.Int32,System.Boolean,System.Boolean)
 JSONObject_t47 * JSONObject_Create_m124 (Object_t * __this/* static, unused */, String_t* ___val, int32_t ___maxDepth, bool ___storeExcessLevels, bool ___strict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(JSONObject/AddJSONConents)
 JSONObject_t47 * JSONObject_Create_m125 (Object_t * __this/* static, unused */, AddJSONConents_t48 * ___content, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Collections.Generic.Dictionary`2<System.String,System.String>)
 JSONObject_t47 * JSONObject_Create_m126 (Object_t * __this/* static, unused */, Dictionary_2_t41 * ___dic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Parse(System.String,System.Int32,System.Boolean,System.Boolean)
 void JSONObject_Parse_m127 (JSONObject_t47 * __this, String_t* ___str, int32_t ___maxDepth, bool ___storeExcessLevels, bool ___strict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsNumber()
 bool JSONObject_get_IsNumber_m128 (JSONObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsNull()
 bool JSONObject_get_IsNull_m129 (JSONObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsString()
 bool JSONObject_get_IsString_m130 (JSONObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsBool()
 bool JSONObject_get_IsBool_m131 (JSONObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsArray()
 bool JSONObject_get_IsArray_m132 (JSONObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsObject()
 bool JSONObject_get_IsObject_m133 (JSONObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Boolean)
 void JSONObject_Add_m134 (JSONObject_t47 * __this, bool ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Single)
 void JSONObject_Add_m135 (JSONObject_t47 * __this, float ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Int32)
 void JSONObject_Add_m136 (JSONObject_t47 * __this, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.String)
 void JSONObject_Add_m137 (JSONObject_t47 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(JSONObject/AddJSONConents)
 void JSONObject_Add_m138 (JSONObject_t47 * __this, AddJSONConents_t48 * ___content, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(JSONObject)
 void JSONObject_Add_m139 (JSONObject_t47 * __this, JSONObject_t47 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Boolean)
 void JSONObject_AddField_m140 (JSONObject_t47 * __this, String_t* ___name, bool ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Single)
 void JSONObject_AddField_m141 (JSONObject_t47 * __this, String_t* ___name, float ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Int32)
 void JSONObject_AddField_m142 (JSONObject_t47 * __this, String_t* ___name, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,JSONObject/AddJSONConents)
 void JSONObject_AddField_m143 (JSONObject_t47 * __this, String_t* ___name, AddJSONConents_t48 * ___content, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.String)
 void JSONObject_AddField_m144 (JSONObject_t47 * __this, String_t* ___name, String_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,JSONObject)
 void JSONObject_AddField_m145 (JSONObject_t47 * __this, String_t* ___name, JSONObject_t47 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Boolean)
 void JSONObject_SetField_m146 (JSONObject_t47 * __this, String_t* ___name, bool ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Single)
 void JSONObject_SetField_m147 (JSONObject_t47 * __this, String_t* ___name, float ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Int32)
 void JSONObject_SetField_m148 (JSONObject_t47 * __this, String_t* ___name, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.String)
 void JSONObject_SetField_m149 (JSONObject_t47 * __this, String_t* ___name, String_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,JSONObject)
 void JSONObject_SetField_m150 (JSONObject_t47 * __this, String_t* ___name, JSONObject_t47 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::RemoveField(System.String)
 void JSONObject_RemoveField_m151 (JSONObject_t47 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.Boolean&,System.String,JSONObject/FieldNotFound)
 void JSONObject_GetField_m152 (JSONObject_t47 * __this, bool* ___field, String_t* ___name, FieldNotFound_t49 * ___fail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.Single&,System.String,JSONObject/FieldNotFound)
 void JSONObject_GetField_m153 (JSONObject_t47 * __this, float* ___field, String_t* ___name, FieldNotFound_t49 * ___fail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.Int32&,System.String,JSONObject/FieldNotFound)
 void JSONObject_GetField_m154 (JSONObject_t47 * __this, int32_t* ___field, String_t* ___name, FieldNotFound_t49 * ___fail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.UInt32&,System.String,JSONObject/FieldNotFound)
 void JSONObject_GetField_m155 (JSONObject_t47 * __this, uint32_t* ___field, String_t* ___name, FieldNotFound_t49 * ___fail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.String&,System.String,JSONObject/FieldNotFound)
 void JSONObject_GetField_m156 (JSONObject_t47 * __this, String_t** ___field, String_t* ___name, FieldNotFound_t49 * ___fail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.String,JSONObject/GetFieldResponse,JSONObject/FieldNotFound)
 void JSONObject_GetField_m157 (JSONObject_t47 * __this, String_t* ___name, GetFieldResponse_t50 * ___response, FieldNotFound_t49 * ___fail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::GetField(System.String)
 JSONObject_t47 * JSONObject_GetField_m158 (JSONObject_t47 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::HasFields(System.String[])
 bool JSONObject_HasFields_m159 (JSONObject_t47 * __this, StringU5BU5D_t65* ___names, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::HasField(System.String)
 bool JSONObject_HasField_m160 (JSONObject_t47 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Clear()
 void JSONObject_Clear_m161 (JSONObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Copy()
 JSONObject_t47 * JSONObject_Copy_m162 (JSONObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Merge(JSONObject)
 void JSONObject_Merge_m163 (JSONObject_t47 * __this, JSONObject_t47 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::MergeRecur(JSONObject,JSONObject)
 void JSONObject_MergeRecur_m164 (Object_t * __this/* static, unused */, JSONObject_t47 * ___left, JSONObject_t47 * ___right, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Bake()
 void JSONObject_Bake_m165 (JSONObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable JSONObject::BakeAsync()
 Object_t * JSONObject_BakeAsync_m166 (JSONObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::print(System.Boolean)
 String_t* JSONObject_print_m167 (JSONObject_t47 * __this, bool ___pretty, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::Print(System.Boolean)
 String_t* JSONObject_Print_m168 (JSONObject_t47 * __this, bool ___pretty, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> JSONObject::PrintAsync(System.Boolean)
 Object_t* JSONObject_PrintAsync_m169 (JSONObject_t47 * __this, bool ___pretty, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable JSONObject::StringifyAsync(System.Int32,System.Text.StringBuilder,System.Boolean)
 Object_t * JSONObject_StringifyAsync_m170 (JSONObject_t47 * __this, int32_t ___depth, StringBuilder_t54 * ___builder, bool ___pretty, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Stringify(System.Int32,System.Text.StringBuilder,System.Boolean)
 void JSONObject_Stringify_m171 (JSONObject_t47 * __this, int32_t ___depth, StringBuilder_t54 * ___builder, bool ___pretty, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_Item(System.Int32)
 JSONObject_t47 * JSONObject_get_Item_m172 (JSONObject_t47 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::set_Item(System.Int32,JSONObject)
 void JSONObject_set_Item_m173 (JSONObject_t47 * __this, int32_t ___index, JSONObject_t47 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_Item(System.String)
 JSONObject_t47 * JSONObject_get_Item_m174 (JSONObject_t47 * __this, String_t* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::set_Item(System.String,JSONObject)
 void JSONObject_set_Item_m175 (JSONObject_t47 * __this, String_t* ___index, JSONObject_t47 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::ToString()
 String_t* JSONObject_ToString_m176 (JSONObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::ToString(System.Boolean)
 String_t* JSONObject_ToString_m177 (JSONObject_t47 * __this, bool ___pretty, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> JSONObject::ToDictionary()
 Dictionary_2_t41 * JSONObject_ToDictionary_m178 (JSONObject_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWWForm JSONObject::op_Implicit(JSONObject)
 WWWForm_t67 * JSONObject_op_Implicit_m179 (Object_t * __this/* static, unused */, JSONObject_t47 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::op_Implicit(JSONObject)
 bool JSONObject_op_Implicit_m180 (Object_t * __this/* static, unused */, JSONObject_t47 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
