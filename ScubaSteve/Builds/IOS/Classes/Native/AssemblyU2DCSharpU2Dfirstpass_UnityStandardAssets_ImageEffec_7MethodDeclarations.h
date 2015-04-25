#pragma once

// UnityStandardAssets.ImageEffects.Bloom
struct Bloom_t221;
// UnityEngine.RenderTexture
struct RenderTexture_t214;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityStandardAssets.ImageEffects.Bloom::.ctor()
 void Bloom__ctor_m846 (Bloom_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Bloom::CheckResources()
 bool Bloom_CheckResources_m847 (Bloom_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void Bloom_OnRenderImage_m848 (Bloom_t221 * __this, RenderTexture_t214 * ___source, RenderTexture_t214 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void Bloom_AddTo_m849 (Bloom_t221 * __this, float ___intensity_, RenderTexture_t214 * ___from, RenderTexture_t214 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void Bloom_BlendFlares_m850 (Bloom_t221 * __this, RenderTexture_t214 * ___from, RenderTexture_t214 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void Bloom_BrightFilter_m851 (Bloom_t221 * __this, float ___thresh, RenderTexture_t214 * ___from, RenderTexture_t214 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void Bloom_BrightFilter_m852 (Bloom_t221 * __this, Color_t222  ___threshColor, RenderTexture_t214 * ___from, RenderTexture_t214 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void Bloom_Vignette_m853 (Bloom_t221 * __this, float ___amount, RenderTexture_t214 * ___from, RenderTexture_t214 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
