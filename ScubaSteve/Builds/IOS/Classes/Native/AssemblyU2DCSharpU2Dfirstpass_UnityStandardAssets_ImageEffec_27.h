﻿#pragma once
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t248;
// UnityEngine.Shader
struct Shader_t210;
// UnityEngine.Material
struct Material_t211;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityStandardAssets.ImageEffects.ContrastStretch
struct ContrastStretch_t249  : public MonoBehaviour_t39
{
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::adaptationSpeed
	float ___adaptationSpeed_2;
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::limitMinimum
	float ___limitMinimum_3;
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::limitMaximum
	float ___limitMaximum_4;
	// UnityEngine.RenderTexture[] UnityStandardAssets.ImageEffects.ContrastStretch::adaptRenderTex
	RenderTextureU5BU5D_t248* ___adaptRenderTex_5;
	// System.Int32 UnityStandardAssets.ImageEffects.ContrastStretch::curAdaptIndex
	int32_t ___curAdaptIndex_6;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderLum
	Shader_t210 * ___shaderLum_7;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialLum
	Material_t211 * ___m_materialLum_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderReduce
	Shader_t210 * ___shaderReduce_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialReduce
	Material_t211 * ___m_materialReduce_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderAdapt
	Shader_t210 * ___shaderAdapt_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialAdapt
	Material_t211 * ___m_materialAdapt_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderApply
	Shader_t210 * ___shaderApply_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialApply
	Material_t211 * ___m_materialApply_14;
};
