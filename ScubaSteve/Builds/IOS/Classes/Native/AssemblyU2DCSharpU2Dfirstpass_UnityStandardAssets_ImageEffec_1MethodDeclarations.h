#pragma once

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t213;
// UnityEngine.Material
struct Material_t211;
// UnityEngine.Shader
struct Shader_t210;
// UnityEngine.RenderTexture
struct RenderTexture_t214;

// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
 void PostEffectsBase__ctor_m986 (PostEffectsBase_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
 Material_t211 * PostEffectsBase_CheckShaderAndCreateMaterial_m987 (PostEffectsBase_t213 * __this, Shader_t210 * ___s, Material_t211 * ___m2Create, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
 Material_t211 * PostEffectsBase_CreateMaterial_m988 (PostEffectsBase_t213 * __this, Shader_t210 * ___s, Material_t211 * ___m2Create, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnEnable()
 void PostEffectsBase_OnEnable_m989 (PostEffectsBase_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport()
 bool PostEffectsBase_CheckSupport_m990 (PostEffectsBase_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources()
 bool PostEffectsBase_CheckResources_m991 (PostEffectsBase_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::Start()
 void PostEffectsBase_Start_m992 (PostEffectsBase_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
 bool PostEffectsBase_CheckSupport_m993 (PostEffectsBase_t213 * __this, bool ___needDepth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
 bool PostEffectsBase_CheckSupport_m994 (PostEffectsBase_t213 * __this, bool ___needDepth, bool ___needHdr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::Dx11Support()
 bool PostEffectsBase_Dx11Support_m995 (PostEffectsBase_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
 void PostEffectsBase_ReportAutoDisable_m996 (PostEffectsBase_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShader(UnityEngine.Shader)
 bool PostEffectsBase_CheckShader_m997 (PostEffectsBase_t213 * __this, Shader_t210 * ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
 void PostEffectsBase_NotSupported_m998 (PostEffectsBase_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
 void PostEffectsBase_DrawBorder_m999 (PostEffectsBase_t213 * __this, RenderTexture_t214 * ___dest, Material_t211 * ___material, MethodInfo* method) IL2CPP_METHOD_ATTR;
