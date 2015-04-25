#pragma once

// UnityStandardAssets.ImageEffects.PostEffectsHelper
struct PostEffectsHelper_t269;
// UnityEngine.RenderTexture
struct RenderTexture_t214;
// UnityEngine.Material
struct Material_t211;
// UnityEngine.Camera
struct Camera_t236;

// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::.ctor()
 void PostEffectsHelper__ctor_m1000 (PostEffectsHelper_t269 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void PostEffectsHelper_OnRenderImage_m1001 (PostEffectsHelper_t269 * __this, RenderTexture_t214 * ___source, RenderTexture_t214 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Camera)
 void PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m1002 (Object_t * __this/* static, unused */, float ___dist, RenderTexture_t214 * ___source, RenderTexture_t214 * ___dest, Material_t211 * ___material, Camera_t236 * ___cameraForProjectionMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
 void PostEffectsHelper_DrawBorder_m1003 (Object_t * __this/* static, unused */, RenderTexture_t214 * ___dest, Material_t211 * ___material, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelQuad(System.Single,System.Single,System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material)
 void PostEffectsHelper_DrawLowLevelQuad_m1004 (Object_t * __this/* static, unused */, float ___x1, float ___x2, float ___y1, float ___y2, RenderTexture_t214 * ___source, RenderTexture_t214 * ___dest, Material_t211 * ___material, MethodInfo* method) IL2CPP_METHOD_ATTR;
