#pragma once

// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2221;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2179;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2228;
// System.Object
struct Object_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t2229;
// System.Int32[]
struct Int32U5BU5D_t529;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t468;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1242;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.ObjectManager::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
 void ObjectManager__ctor_m11671 (ObjectManager_t2221 * __this, Object_t * ___selector, StreamingContext_t1243  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::DoFixups()
 void ObjectManager_DoFixups_m11672 (ObjectManager_t2221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::GetObjectRecord(System.Int64)
 ObjectRecord_t2228 * ObjectManager_GetObjectRecord_m11673 (ObjectManager_t2221 * __this, int64_t ___objectID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64)
 Object_t * ObjectManager_GetObject_m11674 (ObjectManager_t2221 * __this, int64_t ___objectID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent()
 void ObjectManager_RaiseDeserializationEvent_m11675 (ObjectManager_t2221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializingEvent(System.Object)
 void ObjectManager_RaiseOnDeserializingEvent_m11676 (ObjectManager_t2221 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializedEvent(System.Object)
 void ObjectManager_RaiseOnDeserializedEvent_m11677 (ObjectManager_t2221 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::AddFixup(System.Runtime.Serialization.BaseFixupRecord)
 void ObjectManager_AddFixup_m11678 (ObjectManager_t2221 * __this, BaseFixupRecord_t2229 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64)
 void ObjectManager_RecordArrayElementFixup_m11679 (ObjectManager_t2221 * __this, int64_t ___arrayToBeFixed, int32_t ___index, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64)
 void ObjectManager_RecordArrayElementFixup_m11680 (ObjectManager_t2221 * __this, int64_t ___arrayToBeFixed, Int32U5BU5D_t529* ___indices, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64)
 void ObjectManager_RecordDelayedFixup_m11681 (ObjectManager_t2221 * __this, int64_t ___objectToBeFixed, String_t* ___memberName, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
 void ObjectManager_RecordFixup_m11682 (ObjectManager_t2221 * __this, int64_t ___objectToBeFixed, MemberInfo_t468 * ___member, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObjectInternal(System.Object,System.Runtime.Serialization.ObjectRecord)
 void ObjectManager_RegisterObjectInternal_m11683 (ObjectManager_t2221 * __this, Object_t * ___obj, ObjectRecord_t2228 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
 void ObjectManager_RegisterObject_m11684 (ObjectManager_t2221 * __this, Object_t * ___obj, int64_t ___objectID, SerializationInfo_t1242 * ___info, int64_t ___idOfContainingObj, MemberInfo_t468 * ___member, Int32U5BU5D_t529* ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
