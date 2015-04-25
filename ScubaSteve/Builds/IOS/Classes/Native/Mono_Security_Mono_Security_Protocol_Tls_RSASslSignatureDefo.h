#pragma once
// System.Security.Cryptography.RSA
struct RSA_t1526;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1721;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t123;
// System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureDef.h"
// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct RSASslSignatureDeformatter_t1779  : public AsymmetricSignatureDeformatter_t1780
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::key
	RSA_t1526 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::hash
	HashAlgorithm_t1721 * ___hash_1;
};
struct RSASslSignatureDeformatter_t1779_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::<>f__switch$map15
	Dictionary_2_t123 * ___U3CU3Ef__switch$map15_2;
};
