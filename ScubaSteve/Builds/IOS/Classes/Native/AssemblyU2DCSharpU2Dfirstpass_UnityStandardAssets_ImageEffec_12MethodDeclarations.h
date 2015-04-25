#pragma once

// UnityStandardAssets.ImageEffects.BloomAndFlares
struct BloomAndFlares_t227;
// UnityEngine.RenderTexture
struct RenderTexture_t214;

// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::.ctor()
 void BloomAndFlares__ctor_m854 (BloomAndFlares_t227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::CheckResources()
 bool BloomAndFlares_CheckResources_m855 (BloomAndFlares_t227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void BloomAndFlares_OnRenderImage_m856 (BloomAndFlares_t227 * __this, RenderTexture_t214 * ___source, RenderTexture_t214 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void BloomAndFlares_AddTo_m857 (BloomAndFlares_t227 * __this, float ___intensity_, RenderTexture_t214 * ___from, RenderTexture_t214 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void BloomAndFlares_BlendFlares_m858 (BloomAndFlares_t227 * __this, RenderTexture_t214 * ___from, RenderTexture_t214 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BrightFilter(System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void BloomAndFlares_BrightFilter_m859 (BloomAndFlares_t227 * __this, float ___thresh, float ___useAlphaAsMask, RenderTexture_t214 * ___from, RenderTexture_t214 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void BloomAndFlares_Vignette_m860 (BloomAndFlares_t227 * __this, float ___amount, RenderTexture_t214 * ___from, RenderTexture_t214 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
