﻿#pragma once

// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t1908;
// System.Object
struct Object_t;
// Mono.Math.BigInteger
struct BigInteger_t1909;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"

// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
 void PrimalityTest__ctor_m13196 (PrimalityTest_t1908 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
 bool PrimalityTest_Invoke_m13197 (PrimalityTest_t1908 * __this, BigInteger_t1909 * ___bi, int32_t ___confidence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
 Object_t * PrimalityTest_BeginInvoke_m13198 (PrimalityTest_t1908 * __this, BigInteger_t1909 * ___bi, int32_t ___confidence, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
 bool PrimalityTest_EndInvoke_m13199 (PrimalityTest_t1908 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
