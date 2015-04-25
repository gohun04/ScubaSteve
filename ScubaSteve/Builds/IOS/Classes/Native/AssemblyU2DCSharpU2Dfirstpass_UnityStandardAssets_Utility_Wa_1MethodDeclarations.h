#pragma once

// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t369;
// UnityEngine.Transform[]
struct TransformU5BU5D_t302;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_0.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Utility.WaypointCircuit::.ctor()
 void WaypointCircuit__ctor_m1228 (WaypointCircuit_t369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
 float WaypointCircuit_get_Length_m1229 (WaypointCircuit_t369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
 void WaypointCircuit_set_Length_m1230 (WaypointCircuit_t369 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
 TransformU5BU5D_t302* WaypointCircuit_get_Waypoints_m1231 (WaypointCircuit_t369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::Awake()
 void WaypointCircuit_Awake_m1232 (WaypointCircuit_t369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
 RoutePoint_t371  WaypointCircuit_GetRoutePoint_m1233 (WaypointCircuit_t369 * __this, float ___dist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
 Vector3_t175  WaypointCircuit_GetRoutePosition_m1234 (WaypointCircuit_t369 * __this, float ___dist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 Vector3_t175  WaypointCircuit_CatmullRom_m1235 (WaypointCircuit_t369 * __this, Vector3_t175  ___p0, Vector3_t175  ___p1, Vector3_t175  ___p2, Vector3_t175  ___p3, float ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
 void WaypointCircuit_CachePositionsAndDistances_m1236 (WaypointCircuit_t369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmos()
 void WaypointCircuit_OnDrawGizmos_m1237 (WaypointCircuit_t369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmosSelected()
 void WaypointCircuit_OnDrawGizmosSelected_m1238 (WaypointCircuit_t369 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
 void WaypointCircuit_DrawGizmos_m1239 (WaypointCircuit_t369 * __this, bool ___selected, MethodInfo* method) IL2CPP_METHOD_ATTR;
