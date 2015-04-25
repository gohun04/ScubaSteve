#pragma once

// UnityStandardAssets.ImageEffects.Blur
struct Blur_t231;
// UnityEngine.Material
struct Material_t211;
// UnityEngine.RenderTexture
struct RenderTexture_t214;

// System.Void UnityStandardAssets.ImageEffects.Blur::.ctor()
 void Blur__ctor_m865 (Blur_t231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::.cctor()
 void Blur__cctor_m866 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.Blur::get_material()
 Material_t211 * Blur_get_material_m867 (Blur_t231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::OnDisable()
 void Blur_OnDisable_m868 (Blur_t231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::Start()
 void Blur_Start_m869 (Blur_t231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
 void Blur_FourTapCone_m870 (Blur_t231 * __this, RenderTexture_t214 * ___source, RenderTexture_t214 * ___dest, int32_t ___iteration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void Blur_DownSample4x_m871 (Blur_t231 * __this, RenderTexture_t214 * ___source, RenderTexture_t214 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void Blur_OnRenderImage_m872 (Blur_t231 * __this, RenderTexture_t214 * ___source, RenderTexture_t214 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
