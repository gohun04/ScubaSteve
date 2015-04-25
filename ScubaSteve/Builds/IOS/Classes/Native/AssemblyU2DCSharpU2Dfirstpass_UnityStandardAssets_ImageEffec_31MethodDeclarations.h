#pragma once

// UnityStandardAssets.ImageEffects.DepthOfField
struct DepthOfField_t254;
// UnityEngine.RenderTexture
struct RenderTexture_t214;

// System.Void UnityStandardAssets.ImageEffects.DepthOfField::.ctor()
 void DepthOfField__ctor_m922 (DepthOfField_t254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::CheckResources()
 bool DepthOfField_CheckResources_m923 (DepthOfField_t254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnEnable()
 void DepthOfField_OnEnable_m924 (DepthOfField_t254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnDisable()
 void DepthOfField_OnDisable_m925 (DepthOfField_t254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::ReleaseComputeResources()
 void DepthOfField_ReleaseComputeResources_m926 (DepthOfField_t254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::CreateComputeResources()
 void DepthOfField_CreateComputeResources_m927 (DepthOfField_t254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.DepthOfField::FocalDistance01(System.Single)
 float DepthOfField_FocalDistance01_m928 (DepthOfField_t254 * __this, float ___worldDist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::WriteCoc(UnityEngine.RenderTexture,System.Boolean)
 void DepthOfField_WriteCoc_m929 (DepthOfField_t254 * __this, RenderTexture_t214 * ___fromTo, bool ___fgDilate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void DepthOfField_OnRenderImage_m930 (DepthOfField_t254 * __this, RenderTexture_t214 * ___source, RenderTexture_t214 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
