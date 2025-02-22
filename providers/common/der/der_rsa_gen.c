/*
 * Copyright 2020 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include "prov/der_rsa.h"

/* Well known OIDs precompiled */

/*
 * hashAlgs OBJECT IDENTIFIER ::= { nistAlgorithms 2 }
 */
const unsigned char ossl_der_oid_hashAlgs[DER_OID_SZ_hashAlgs] = {
    DER_OID_V_hashAlgs
};

/*
 * rsaEncryption    OBJECT IDENTIFIER ::= { pkcs-1 1 }
 */
const unsigned char ossl_der_oid_rsaEncryption[DER_OID_SZ_rsaEncryption] = {
    DER_OID_V_rsaEncryption
};

/*
 * id-RSAES-OAEP    OBJECT IDENTIFIER ::= { pkcs-1 7 }
 */
const unsigned char ossl_der_oid_id_RSAES_OAEP[DER_OID_SZ_id_RSAES_OAEP] = {
    DER_OID_V_id_RSAES_OAEP
};

/*
 * id-pSpecified    OBJECT IDENTIFIER ::= { pkcs-1 9 }
 */
const unsigned char ossl_der_oid_id_pSpecified[DER_OID_SZ_id_pSpecified] = {
    DER_OID_V_id_pSpecified
};

/*
 * id-RSASSA-PSS    OBJECT IDENTIFIER ::= { pkcs-1 10 }
 */
const unsigned char ossl_der_oid_id_RSASSA_PSS[DER_OID_SZ_id_RSASSA_PSS] = {
    DER_OID_V_id_RSASSA_PSS
};

/*
 * md2WithRSAEncryption         OBJECT IDENTIFIER ::= { pkcs-1 2 }
 */
const unsigned char ossl_der_oid_md2WithRSAEncryption[DER_OID_SZ_md2WithRSAEncryption] = {
    DER_OID_V_md2WithRSAEncryption
};

/*
 * md5WithRSAEncryption         OBJECT IDENTIFIER ::= { pkcs-1 4 }
 */
const unsigned char ossl_der_oid_md5WithRSAEncryption[DER_OID_SZ_md5WithRSAEncryption] = {
    DER_OID_V_md5WithRSAEncryption
};

/*
 * sha1WithRSAEncryption        OBJECT IDENTIFIER ::= { pkcs-1 5 }
 */
const unsigned char ossl_der_oid_sha1WithRSAEncryption[DER_OID_SZ_sha1WithRSAEncryption] = {
    DER_OID_V_sha1WithRSAEncryption
};

/*
 * sha224WithRSAEncryption      OBJECT IDENTIFIER ::= { pkcs-1 14 }
 */
const unsigned char ossl_der_oid_sha224WithRSAEncryption[DER_OID_SZ_sha224WithRSAEncryption] = {
    DER_OID_V_sha224WithRSAEncryption
};

/*
 * sha256WithRSAEncryption      OBJECT IDENTIFIER ::= { pkcs-1 11 }
 */
const unsigned char ossl_der_oid_sha256WithRSAEncryption[DER_OID_SZ_sha256WithRSAEncryption] = {
    DER_OID_V_sha256WithRSAEncryption
};

/*
 * sha384WithRSAEncryption      OBJECT IDENTIFIER ::= { pkcs-1 12 }
 */
const unsigned char ossl_der_oid_sha384WithRSAEncryption[DER_OID_SZ_sha384WithRSAEncryption] = {
    DER_OID_V_sha384WithRSAEncryption
};

/*
 * sha512WithRSAEncryption      OBJECT IDENTIFIER ::= { pkcs-1 13 }
 */
const unsigned char ossl_der_oid_sha512WithRSAEncryption[DER_OID_SZ_sha512WithRSAEncryption] = {
    DER_OID_V_sha512WithRSAEncryption
};

/*
 * sha512-224WithRSAEncryption  OBJECT IDENTIFIER ::= { pkcs-1 15 }
 */
const unsigned char ossl_der_oid_sha512_224WithRSAEncryption[DER_OID_SZ_sha512_224WithRSAEncryption] = {
    DER_OID_V_sha512_224WithRSAEncryption
};

/*
 * sha512-256WithRSAEncryption  OBJECT IDENTIFIER ::= { pkcs-1 16 }
 */
const unsigned char ossl_der_oid_sha512_256WithRSAEncryption[DER_OID_SZ_sha512_256WithRSAEncryption] = {
    DER_OID_V_sha512_256WithRSAEncryption
};

/*
 * id-mgf1    OBJECT IDENTIFIER ::= { pkcs-1 8 }
 */
const unsigned char ossl_der_oid_id_mgf1[DER_OID_SZ_id_mgf1] = {
    DER_OID_V_id_mgf1
};

/*
 * id-rsassa-pkcs1-v1_5-with-sha3-224 OBJECT IDENTIFIER ::= { sigAlgs 13 }
 */
const unsigned char ossl_der_oid_id_rsassa_pkcs1_v1_5_with_sha3_224[DER_OID_SZ_id_rsassa_pkcs1_v1_5_with_sha3_224] = {
    DER_OID_V_id_rsassa_pkcs1_v1_5_with_sha3_224
};

/*
 * id-rsassa-pkcs1-v1_5-with-sha3-256 OBJECT IDENTIFIER ::= { sigAlgs 14 }
 */
const unsigned char ossl_der_oid_id_rsassa_pkcs1_v1_5_with_sha3_256[DER_OID_SZ_id_rsassa_pkcs1_v1_5_with_sha3_256] = {
    DER_OID_V_id_rsassa_pkcs1_v1_5_with_sha3_256
};

/*
 * id-rsassa-pkcs1-v1_5-with-sha3-384 OBJECT IDENTIFIER ::= { sigAlgs 15 }
 */
const unsigned char ossl_der_oid_id_rsassa_pkcs1_v1_5_with_sha3_384[DER_OID_SZ_id_rsassa_pkcs1_v1_5_with_sha3_384] = {
    DER_OID_V_id_rsassa_pkcs1_v1_5_with_sha3_384
};

/*
 * id-rsassa-pkcs1-v1_5-with-sha3-512 OBJECT IDENTIFIER ::= { sigAlgs 16 }
 */
const unsigned char ossl_der_oid_id_rsassa_pkcs1_v1_5_with_sha3_512[DER_OID_SZ_id_rsassa_pkcs1_v1_5_with_sha3_512] = {
    DER_OID_V_id_rsassa_pkcs1_v1_5_with_sha3_512
};

/*
 * md4WithRSAEncryption OBJECT IDENTIFIER ::= { pkcs-1 3 }
 */
const unsigned char ossl_der_oid_md4WithRSAEncryption[DER_OID_SZ_md4WithRSAEncryption] = {
    DER_OID_V_md4WithRSAEncryption
};

/*
 * ripemd160WithRSAEncryption    OBJECT IDENTIFIER ::= {
 *     iso(1) identified-organization(3) teletrust(36) algorithm(3) signatureAlgorithm(3) rsaSignature(1) 2
 * }
 */
const unsigned char ossl_der_oid_ripemd160WithRSAEncryption[DER_OID_SZ_ripemd160WithRSAEncryption] = {
    DER_OID_V_ripemd160WithRSAEncryption
};

/*
 * mdc2WithRSASignature OBJECT IDENTIFIER ::= {
 *     iso(1) identified-organization(3) oiw(14) secsig(3) algorithms(2) mdc2WithRSASignature(14)
 * }
 */
const unsigned char ossl_der_oid_mdc2WithRSASignature[DER_OID_SZ_mdc2WithRSASignature] = {
    DER_OID_V_mdc2WithRSASignature
};

