#pragma once

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t2233;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2228;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2221;

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
 void DelayedFixupRecord__ctor_m11693 (DelayedFixupRecord_t2233 * __this, ObjectRecord_t2228 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t2228 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void DelayedFixupRecord_FixupImpl_m11694 (DelayedFixupRecord_t2233 * __this, ObjectManager_t2221 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
