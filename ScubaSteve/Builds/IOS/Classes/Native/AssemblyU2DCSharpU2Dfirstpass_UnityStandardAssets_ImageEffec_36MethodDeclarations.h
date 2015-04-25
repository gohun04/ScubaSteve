#pragma once

// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated
struct DepthOfFieldDeprecated_t259;
// UnityEngine.RenderTexture
struct RenderTexture_t214;
// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_34.h"

// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::.ctor()
 void DepthOfFieldDeprecated__ctor_m931 (DepthOfFieldDeprecated_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::.cctor()
 void DepthOfFieldDeprecated__cctor_m932 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CreateMaterials()
 void DepthOfFieldDeprecated_CreateMaterials_m933 (DepthOfFieldDeprecated_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CheckResources()
 bool DepthOfFieldDeprecated_CheckResources_m934 (DepthOfFieldDeprecated_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnDisable()
 void DepthOfFieldDeprecated_OnDisable_m935 (DepthOfFieldDeprecated_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnEnable()
 void DepthOfFieldDeprecated_OnEnable_m936 (DepthOfFieldDeprecated_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::FocalDistance01(System.Single)
 float DepthOfFieldDeprecated_FocalDistance01_m937 (DepthOfFieldDeprecated_t259 * __this, float ___worldDist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetDividerBasedOnQuality()
 int32_t DepthOfFieldDeprecated_GetDividerBasedOnQuality_m938 (DepthOfFieldDeprecated_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetLowResolutionDividerBasedOnQuality(System.Int32)
 int32_t DepthOfFieldDeprecated_GetLowResolutionDividerBasedOnQuality_m939 (DepthOfFieldDeprecated_t259 * __this, int32_t ___baseDivider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void DepthOfFieldDeprecated_OnRenderImage_m940 (DepthOfFieldDeprecated_t259 * __this, RenderTexture_t214 * ___source, RenderTexture_t214 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Blur(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
 void DepthOfFieldDeprecated_Blur_m941 (DepthOfFieldDeprecated_t259 * __this, RenderTexture_t214 * ___from, RenderTexture_t214 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurFg(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
 void DepthOfFieldDeprecated_BlurFg_m942 (DepthOfFieldDeprecated_t259 * __this, RenderTexture_t214 * ___from, RenderTexture_t214 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurHex(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32,System.Single,UnityEngine.RenderTexture)
 void DepthOfFieldDeprecated_BlurHex_m943 (DepthOfFieldDeprecated_t259 * __this, RenderTexture_t214 * ___from, RenderTexture_t214 * ___to, int32_t ___blurPass, float ___spread, RenderTexture_t214 * ___tmp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Downsample(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void DepthOfFieldDeprecated_Downsample_m944 (DepthOfFieldDeprecated_t259 * __this, RenderTexture_t214 * ___from, RenderTexture_t214 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AddBokeh(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void DepthOfFieldDeprecated_AddBokeh_m945 (DepthOfFieldDeprecated_t259 * __this, RenderTexture_t214 * ___bokehInfo, RenderTexture_t214 * ___tempTex, RenderTexture_t214 * ___finalTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::ReleaseTextures()
 void DepthOfFieldDeprecated_ReleaseTextures_m946 (DepthOfFieldDeprecated_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AllocateTextures(System.Boolean,UnityEngine.RenderTexture,System.Int32,System.Int32)
 void DepthOfFieldDeprecated_AllocateTextures_m947 (DepthOfFieldDeprecated_t259 * __this, bool ___blurForeground, RenderTexture_t214 * ___source, int32_t ___divider, int32_t ___lowTexDivider, MethodInfo* method) IL2CPP_METHOD_ATTR;
