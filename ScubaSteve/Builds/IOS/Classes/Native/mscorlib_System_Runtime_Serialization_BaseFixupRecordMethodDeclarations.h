#pragma once

// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t2229;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2228;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2221;

// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
 void BaseFixupRecord__ctor_m11685 (BaseFixupRecord_t2229 * __this, ObjectRecord_t2228 * ___objectToBeFixed, ObjectRecord_t2228 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
 bool BaseFixupRecord_DoFixup_m11686 (BaseFixupRecord_t2229 * __this, ObjectManager_t2221 * ___manager, bool ___strict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.BaseFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
