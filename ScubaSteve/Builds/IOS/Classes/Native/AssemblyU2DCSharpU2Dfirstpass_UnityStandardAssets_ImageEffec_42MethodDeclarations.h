#pragma once

// UnityStandardAssets.ImageEffects.ImageEffects
struct ImageEffects_t265;
// UnityEngine.Material
struct Material_t211;
// UnityEngine.RenderTexture
struct RenderTexture_t214;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityStandardAssets.ImageEffects.ImageEffects::.ctor()
 void ImageEffects__ctor_m967 (ImageEffects_t265 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
 void ImageEffects_RenderDistortion_m968 (Object_t * __this/* static, unused */, Material_t211 * ___material, RenderTexture_t214 * ___source, RenderTexture_t214 * ___destination, float ___angle, Vector2_t177  ___center, Vector2_t177  ___radius, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void ImageEffects_Blit_m969 (Object_t * __this/* static, unused */, RenderTexture_t214 * ___source, RenderTexture_t214 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::BlitWithMaterial(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
 void ImageEffects_BlitWithMaterial_m970 (Object_t * __this/* static, unused */, Material_t211 * ___material, RenderTexture_t214 * ___source, RenderTexture_t214 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
