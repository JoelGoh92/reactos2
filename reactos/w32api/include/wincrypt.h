#ifndef _WINCRYPT_H
#define _WINCRYPT_H
#if __GNUC__ >= 3
#pragma GCC system_header
#endif

#ifdef __cplusplus
extern "C" {
#endif
#define MS_DEF_PROV_A	"Microsoft Base Cryptographic Provider v1.0"
#define MS_DEF_PROV_W	L"Microsoft Base Cryptographic Provider v1.0"
#define MS_ENHANCED_PROV_A	"Microsoft Enhanced Cryptographic Provider v1.0"
#define MS_ENHANCED_PROV_W	L"Microsoft Enhanced Cryptographic Provider v1.0"
#define MS_STRONG_PROV_A	"Microsoft Strong Cryptographic Provider"
#define MS_STRONG_PROV_W	L"Microsoft Strong Cryptographic Provider"
#define MS_DEF_RSA_SIG_PROV_A	"Microsoft RSA Signature Cryptographic Provider"
#define MS_DEF_RSA_SIG_PROV_W	L"Microsoft RSA Signature Cryptographic Provider"
#define MS_DEF_RSA_SCHANNEL_PROV_A	"Microsoft RSA SChannel Cryptographic Provider"
#define MS_DEF_RSA_SCHANNEL_PROV_W	L"Microsoft RSA SChannel Cryptographic Provider"
#define MS_DEF_DSS_PROV_A	"Microsoft Base DSS Cryptographic Provider"
#define MS_DEF_DSS_PROV_W	L"Microsoft Base DSS Cryptographic Provider"
#define MS_DEF_DSS_DH_PROV_A	"Microsoft Base DSS and Diffie-Hellman Cryptographic Provider"
#define MS_DEF_DSS_DH_PROV_W	L"Microsoft Base DSS and Diffie-Hellman Cryptographic Provider"
#define MS_ENH_DSS_DH_PROV_A	"Microsoft Enhanced DSS and Diffie-Hellman Cryptographic Provider"
#define MS_ENH_DSS_DH_PROV_W	L"Microsoft Enhanced DSS and Diffie-Hellman Cryptographic Provider"
#define MS_DEF_DH_SCHANNEL_PROV_A	"Microsoft DH SChannel Cryptographic Provider"
#define MS_DEF_DH_SCHANNEL_PROV_W	L"Microsoft DH SChannel Cryptographic Provider"
#define MS_SCARD_PROV_A	"Microsoft Base Smart Card Crypto Provider"
#define MS_SCARD_PROV_W	L"Microsoft Base Smart Card Crypto Provider"
#define GET_ALG_CLASS(x) (x&57344)
#define GET_ALG_TYPE(x) (x&7680)
#define GET_ALG_SID(x) (x&511)
#define ALG_CLASS_ANY 0
#define ALG_CLASS_SIGNATURE  8192
#define ALG_CLASS_MSG_ENCRYPT  16384
#define ALG_CLASS_DATA_ENCRYPT  24576
#define ALG_CLASS_HASH  32768
#define ALG_CLASS_KEY_EXCHANGE  40960
#define ALG_CLASS_ALL 57344 /* (7 << 13) */
#define ALG_TYPE_ANY 0
#define ALG_TYPE_DSS 512
#define ALG_TYPE_RSA 1024
#define ALG_TYPE_BLOCK 1536
#define ALG_TYPE_STREAM  2048
#define ALG_TYPE_DH 2560 /* (5 << 9) */
#define ALG_TYPE_SECURECHANNEL 3072 /* (6 << 9) */
#define ALG_SID_ANY 0
#define ALG_SID_RSA_ANY 0
#define ALG_SID_RSA_PKCS 1
#define ALG_SID_RSA_MSATWORK 2
#define ALG_SID_RSA_ENTRUST 3
#define ALG_SID_RSA_PGP 4
#define ALG_SID_DSS_ANY 0
#define ALG_SID_DSS_PKCS 1
#define ALG_SID_DSS_DMS 2
#define ALG_SID_DES 1
#define ALG_SID_3DES 3
#define ALG_SID_DESX 4
#define ALG_SID_IDEA 5
#define ALG_SID_CAST 6
#define ALG_SID_SAFERSK64 7
#define ALG_SID_SAFERSK128 8
#define ALG_SID_3DES_112 9
#define ALG_SID_SKIPJACK 10
#define ALG_SID_TEK 11
#define ALG_SID_CYLINK_MEK 12
#define ALG_SID_RC5 13
#define ALG_SID_RC2 2
#define ALG_SID_RC4 1
#define ALG_SID_SEAL 2
#define ALG_SID_MD2 1
#define ALG_SID_MD4 2
#define ALG_SID_MD5 3
#define ALG_SID_SHA 4
#define ALG_SID_MAC 5
#define ALG_SID_RIPEMD 6
#define ALG_SID_RIPEMD160 7
#define ALG_SID_SSL3SHAMD5 8
#define ALG_SID_HMAC 9
#define ALG_SID_TLS1PRF 10
#define ALG_SID_EXAMPLE 80

#define CALG_MD2 (ALG_CLASS_HASH|ALG_TYPE_ANY|ALG_SID_MD2)
#define CALG_MD4 (ALG_CLASS_HASH|ALG_TYPE_ANY|ALG_SID_MD4)
#define CALG_MD5 (ALG_CLASS_HASH|ALG_TYPE_ANY|ALG_SID_MD5)
#define CALG_SHA (ALG_CLASS_HASH|ALG_TYPE_ANY|ALG_SID_SHA)
#define CALG_MAC (ALG_CLASS_HASH|ALG_TYPE_ANY|ALG_SID_MAC)
#define CALG_3DES (ALG_CLASS_DATA_ENCRYPT|ALG_TYPE_BLOCK|3)
#define CALG_CYLINK_MEK (ALG_CLASS_DATA_ENCRYPT|ALG_TYPE_BLOCK|12)
#define CALG_SKIPJACK (ALG_CLASS_DATA_ENCRYPT|ALG_TYPE_BLOCK|10)
#define CALG_KEA_KEYX (ALG_CLASS_KEY_EXCHANGE|ALG_TYPE_STREAM|ALG_TYPE_DSS|4)
#define CALG_RSA_SIGN (ALG_CLASS_SIGNATURE|ALG_TYPE_RSA|ALG_SID_RSA_ANY)
#define CALG_DSS_SIGN (ALG_CLASS_SIGNATURE|ALG_TYPE_DSS|ALG_SID_DSS_ANY)
#define CALG_RSA_KEYX (ALG_CLASS_KEY_EXCHANGE|ALG_TYPE_RSA|ALG_SID_RSA_ANY)
#define CALG_DES (ALG_CLASS_DATA_ENCRYPT|ALG_TYPE_BLOCK|ALG_SID_DES)
#define CALG_RC2 (ALG_CLASS_DATA_ENCRYPT|ALG_TYPE_BLOCK|ALG_SID_RC2)
#define CALG_RC4 (ALG_CLASS_DATA_ENCRYPT|ALG_TYPE_STREAM|ALG_SID_RC4)
#define CALG_SEAL (ALG_CLASS_DATA_ENCRYPT|ALG_TYPE_STREAM|ALG_SID_SEAL)
#define CALG_DH_EPHEM (ALG_CLASS_KEY_EXCHANGE|ALG_TYPE_STREAM|ALG_TYPE_DSS|ALG_SID_DSS_DMS)
#define CALG_DESX (ALG_CLASS_DATA_ENCRYPT|ALG_TYPE_BLOCK|ALG_SID_DESX)
#define CALG_TLS1PRF (ALG_CLASS_DHASH|ALG_TYPE_ANY|ALG_SID_TLS1PRF)

#define CRYPT_VERIFYCONTEXT 0xF0000000
#define CRYPT_NEWKEYSET 8
#define CRYPT_DELETEKEYSET 16
#define CRYPT_MACHINE_KEYSET 32
#define CRYPT_SILENT 64
#define CRYPT_EXPORTABLE 1
#define CRYPT_USER_PROTECTED 2
#define CRYPT_CREATE_SALT 4
#define CRYPT_UPDATE_KEY 8
#define SIMPLEBLOB 1
#define PUBLICKEYBLOB 6
#define PRIVATEKEYBLOB 7
#define PLAINTEXTKEYBLOB 8
#define OPAQUEKEYBLOB 9
#define PUBLICKEYBLOBEX 10
#define SYMMETRICWRAPKEYBLOB 11
#define AT_KEYEXCHANGE 1
#define AT_SIGNATURE 2
#define CRYPT_USERDATA 1
#define PKCS5_PADDING 1
#define CRYPT_MODE_CBC 1
#define CRYPT_MODE_ECB 2
#define CRYPT_MODE_OFB 3
#define CRYPT_MODE_CFB 4
#define CRYPT_MODE_CTS 5
#define CRYPT_MODE_CBCI 6
#define CRYPT_MODE_CFBP 7
#define CRYPT_MODE_OFBP 8
#define CRYPT_MODE_CBCOFM 9
#define CRYPT_MODE_CBCOFMI 10
#define CRYPT_ENCRYPT 1
#define CRYPT_DECRYPT 2
#define CRYPT_EXPORT 4
#define CRYPT_READ 8
#define CRYPT_WRITE 16
#define CRYPT_MAC 32
#define HP_ALGID 1
#define HP_HASHVAL 2
#define HP_HASHSIZE 4
#define CRYPT_FAILED FALSE
#define CRYPT_SUCCEED TRUE
#define RCRYPT_SUCCEEDED(r) ((r)==CRYPT_SUCCEED)
#define RCRYPT_FAILED(r) ((r)==CRYPT_FAILED)
#define PP_ENUMALGS 1
#define PP_ENUMCONTAINERS 2
#define PP_IMPTYPE 3
#define PP_NAME 4
#define PP_VERSION 5
#define PP_CONTAINER 6
#define PP_CHANGE_PASSWORD	7
#define PP_KEYSET_SEC_DESCR	8
#define PP_CERTCHAIN	9
#define PP_KEY_TYPE_SUBTYPE	10
#define PP_PROVTYPE	16
#define PP_KEYSTORAGE	17
#define PP_APPLI_CERT	18
#define PP_SYM_KEYSIZE	19
#define PP_SESSION_KEYSIZE	20
#define PP_UI_PROMPT	21
#define PP_ENUMALGS_EX	22
#define PP_ENUMMANDROOTS 25
#define PP_ENUMELECTROOTS 26
#define PP_KEYSET_TYPE 27
#define PP_ADMIN_PIN 31
#define PP_KEYEXCHANGE_PIN 32
#define PP_SIGNATURE_PIN 33
#define PP_SIG_KEYSIZE_INC 34
#define PP_KEYX_KEYSIZE_INC 35
#define PP_UNIQUE_CONTAINER 36
#define PP_SGC_INFO 37
#define PP_USE_HARDWARE_RNG 38
#define PP_KEYSPEC 39
#define PP_ENUMEX_SIGNING_PROT 40
#define CRYPT_FIRST 1
#define CRYPT_NEXT 2
#define CRYPT_IMPL_HARDWARE 1
#define CRYPT_IMPL_SOFTWARE 2
#define CRYPT_IMPL_MIXED 3
#define CRYPT_IMPL_UNKNOWN 4
#define PROV_RSA_FULL 1
#define PROV_RSA_SIG 2
#define PROV_DSS 3
#define PROV_FORTEZZA 4
#define PROV_MS_MAIL 5
#define PROV_SSL 6
#define PROV_STT_MER 7
#define PROV_STT_ACQ 8
#define PROV_STT_BRND 9
#define PROV_STT_ROOT 10
#define PROV_STT_ISS 11
#define PROV_RSA_SCHANNEL 12
#define PROV_DSS_DH 13
#define PROV_EC_ECDSA_SIG 14
#define PROV_EC_ECNRA_SIG 15
#define PROV_EC_ECDSA_FULL 16
#define PROV_EC_ECNRA_FULL 17
#define PROV_DH_SCHANNEL 18
#define PROV_SPYRUS_LYNKS 20
#define PROV_RNG 21
#define PROV_INTEL_SEC 22
#define MAXUIDLEN 64
#define CUR_BLOB_VERSION 2
#define X509_ASN_ENCODING 1
#define PKCS_7_ASN_ENCODING  65536
#define CERT_V1 0
#define CERT_V2 1
#define CERT_V3 2
#define CERT_E_CHAINING (-2146762486)
#define CERT_E_CN_NO_MATCH (-2146762481)
#define CERT_E_EXPIRED (-2146762495)
#define CERT_E_PURPOSE (-2146762490)
#define CERT_E_REVOCATION_FAILURE (-2146762482)
#define CERT_E_REVOKED (-2146762484)
#define CERT_E_ROLE (-2146762493)
#define CERT_E_UNTRUSTEDROOT (-2146762487)
#define CERT_E_UNTRUSTEDTESTROOT (-2146762483)
#define CERT_E_VALIDITYPERIODNESTING (-2146762494)
#define CERT_E_WRONG_USAGE (-2146762480)
#define CERT_E_PATHLENCONST (-2146762492)
#define CERT_E_CRITICAL (-2146762491)
#define CERT_E_ISSUERCHAINING (-2146762489)
#define CERT_E_MALFORMED (-2146762488)
#define CRYPT_E_REVOCATION_OFFLINE (-2146885613)
#define CRYPT_E_REVOKED (-2146885616)
#define TRUST_E_BASIC_CONSTRAINTS (-2146869223)
#define TRUST_E_CERT_SIGNATURE (-2146869244)
#define TRUST_E_FAIL (-2146762485)
#define CERT_TRUST_NO_ERROR 0
#define CERT_TRUST_IS_NOT_TIME_VALID 1
#define CERT_TRUST_IS_NOT_TIME_NESTED 2
#define CERT_TRUST_IS_REVOKED 4
#define CERT_TRUST_IS_NOT_SIGNATURE_VALID 8
#define CERT_TRUST_IS_NOT_VALID_FOR_USAGE 16
#define CERT_TRUST_IS_UNTRUSTED_ROOT 32
#define CERT_TRUST_REVOCATION_STATUS_UNKNOWN 64
#define CERT_TRUST_IS_CYCLIC 128
#define CERT_TRUST_IS_PARTIAL_CHAIN 65536
#define CERT_TRUST_CTL_IS_NOT_TIME_VALID 131072
#define CERT_TRUST_CTL_IS_NOT_SIGNATURE_VALID 262144
#define CERT_TRUST_CTL_IS_NOT_VALID_FOR_USAGE 524288
#define CERT_TRUST_HAS_EXACT_MATCH_ISSUER 1
#define CERT_TRUST_HAS_KEY_MATCH_ISSUER 2
#define CERT_TRUST_HAS_NAME_MATCH_ISSUER 4
#define CERT_TRUST_IS_SELF_SIGNED 8
#define CERT_TRUST_IS_COMPLEX_CHAIN 65536
#define CERT_CHAIN_POLICY_BASE ((LPCSTR) 1)
#define CERT_CHAIN_POLICY_AUTHENTICODE  ((LPCSTR) 2)
#define CERT_CHAIN_POLICY_AUTHENTICODE_TS  ((LPCSTR) 3)
#define CERT_CHAIN_POLICY_SSL  ((LPCSTR) 4)
#define CERT_CHAIN_POLICY_BASIC_CONSTRAINTS ((LPCSTR) 5)
#define CERT_CHAIN_POLICY_NT_AUTH ((LPCSTR) 6)
#define USAGE_MATCH_TYPE_AND 0
#define USAGE_MATCH_TYPE_OR 1
#define CERT_SIMPLE_NAME_STR 1
#define CERT_OID_NAME_STR 2
#define CERT_X500_NAME_STR 3
#define CERT_NAME_STR_SEMICOLON_FLAG 1073741824
#define CERT_NAME_STR_CRLF_FLAG 134217728
#define CERT_NAME_STR_NO_PLUS_FLAG 536870912
#define CERT_NAME_STR_NO_QUOTING_FLAG 268435456
#define CERT_NAME_STR_REVERSE_FLAG 33554432
#define CERT_NAME_STR_ENABLE_T61_UNICODE_FLAG 131072
#define CERT_FIND_ANY 0
#define CERT_FIND_CERT_ID 1048576
#define CERT_FIND_CTL_USAGE 655360
#define CERT_FIND_ENHKEY_USAGE 655360
#define CERT_FIND_EXISTING 851968
#define CERT_FIND_HASH 65536
#define CERT_FIND_ISSUER_ATTR 196612
#define CERT_FIND_ISSUER_NAME 131076
#define CERT_FIND_ISSUER_OF 786432
#define CERT_FIND_KEY_IDENTIFIER 983040
#define CERT_FIND_KEY_SPEC 589824
#define CERT_FIND_MD5_HASH 262144
#define CERT_FIND_PROPERTY 327680
#define CERT_FIND_PUBLIC_KEY 393216
#define CERT_FIND_SHA1_HASH 65536
#define CERT_FIND_SIGNATURE_HASH 917504
#define CERT_FIND_SUBJECT_ATTR 196615
#define CERT_FIND_SUBJECT_CERT 720896
#define CERT_FIND_SUBJECT_NAME 131079
#define CERT_FIND_SUBJECT_STR_A 458759
#define CERT_FIND_SUBJECT_STR_W 524295
#define CERT_FIND_ISSUER_STR_A 458756
#define CERT_FIND_ISSUER_STR_W 524292
#define CERT_FIND_OR_ENHKEY_USAGE_FLAG 16
#define CERT_FIND_OPTIONAL_ENHKEY_USAGE_FLAG  1
#define CERT_FIND_NO_ENHKEY_USAGE_FLAG  8
#define CERT_FIND_VALID_ENHKEY_USAGE_FLAG  32
#define CERT_FIND_EXT_ONLY_ENHKEY_USAGE_FLAG  2
#define CERT_CASE_INSENSITIVE_IS_RDN_ATTRS_FLAG  2
#define CERT_UNICODE_IS_RDN_ATTRS_FLAG 1
#define CERT_CHAIN_FIND_BY_ISSUER 1
#define CERT_CHAIN_FIND_BY_ISSUER_COMPARE_KEY_FLAG 1
#define CERT_CHAIN_FIND_BY_ISSUER_COMPLEX_CHAIN_FLAG 2
#define CERT_CHAIN_FIND_BY_ISSUER_CACHE_ONLY_FLAG 32768
#define CERT_CHAIN_FIND_BY_ISSUER_CACHE_ONLY_URL_FLAG 4
#define CERT_CHAIN_FIND_BY_ISSUER_LOCAL_MACHINE_FLAG 8
#define CERT_CHAIN_FIND_BY_ISSUER_NO_KEY_FLAG 16384
#define CERT_STORE_PROV_SYSTEM 10
#define CERT_SYSTEM_STORE_LOCAL_MACHINE 131072
#define szOID_PKIX_KP_SERVER_AUTH "4235600"
#define szOID_SERVER_GATED_CRYPTO "4235658"
#define szOID_SGC_NETSCAPE "2.16.840.1.113730.4.1"
#define szOID_PKIX_KP_CLIENT_AUTH "1.3.6.1.5.5.7.3.2"
#define CRYPT_NOHASHOID 0x00000001
#define CRYPT_NO_SALT 0x10
#define CRYPT_PREGEN 0x40
#define CRYPT_RECIPIENT 0x10
#define CRYPT_INITIATOR 0x40
#define CRYPT_ONLINE 0x80
#define CRYPT_SF 0x100
#define CRYPT_CREATE_IV 0x200
#define CRYPT_KEK 0x400
#define CRYPT_DATA_KEY 0x800
#define CRYPT_VOLATILE 0x1000
#define CRYPT_SGCKEY 0x2000
#define KP_IV               0x00000001
#define KP_SALT             0x00000002
#define KP_PADDING          0x00000003
#define KP_MODE             0x00000004
#define KP_MODE_BITS        0x00000005
#define KP_PERMISSIONS      0x00000006
#define KP_ALGID            0x00000007
#define KP_BLOCKLEN         0x00000008
#define KP_KEYLEN           0x00000009
#define KP_SALT_EX          0x0000000a
#define KP_P                0x0000000b
#define KP_G                0x0000000c
#define KP_Q                0x0000000d
#define KP_X                0x0000000e
#define KP_Y                0x0000000f
#define KP_RA               0x00000010
#define KP_RB               0x00000011
#define KP_INFO             0x00000012
#define KP_EFFECTIVE_KEYLEN 0x00000013
#define KP_SCHANNEL_ALG     0x00000014
#define KP_PUB_PARAMS       0x00000027
#define CRYPT_FLAG_PCT1    0x0001
#define CRYPT_FLAG_SSL2    0x0002
#define CRYPT_FLAG_SSL3    0x0004
#define CRYPT_FLAG_TLS1    0x0008
#define CRYPT_FLAG_IPSEC   0x0010
#define CRYPT_FLAG_SIGNING 0x0020
#define SCHANNEL_MAC_KEY    0x00000000
#define SCHANNEL_ENC_KEY    0x00000001
#define INTERNATIONAL_USAGE 0x00000001

typedef UINT ALG_ID;
typedef struct _VTableProvStruc {FARPROC FuncVerifyImage;} VTableProvStruc,*PVTableProvStruc;
typedef ULONG HCRYPTPROV;
typedef ULONG HCRYPTKEY;
typedef ULONG HCRYPTHASH;
typedef PVOID HCERTSTORE;
typedef PVOID HCRYPTMSG;
typedef PVOID HCERTCHAINENGINE;
typedef struct _CRYPTOAPI_BLOB {
	DWORD cbData;
	BYTE* pbData;
} CRYPT_INTEGER_BLOB, *PCRYPT_INTEGER_BLOB,
  CRYPT_UINT_BLOB,    *PCRYPT_UINT_BLOB,
  CRYPT_OBJID_BLOB,   *PCRYPT_OBJID_BLOB,
  CERT_NAME_BLOB,     *PCERT_NAME_BLOB,
  CERT_RDN_VALUE_BLOB,*PCERT_RDN_VALUE_BLOB,
  CERT_BLOB,          *PCERT_BLOB,
  CRL_BLOB,           *PCRL_BLOB,
  DATA_BLOB,          *PDATA_BLOB,
  CRYPT_DATA_BLOB,    *PCRYPT_DATA_BLOB,
  CRYPT_HASH_BLOB,    *PCRYPT_HASH_BLOB,
  CRYPT_DIGEST_BLOB,  *PCRYPT_DIGEST_BLOB,
  CRYPT_DER_BLOB,     *PCRYPT_DER_BLOB,
  CRYPT_ATTR_BLOB,    *PCRYPT_ATTR_BLOB;
/* not described in SDK; has the same layout as HTTPSPolicyCallbackData */
typedef struct _SSL_EXTRA_CERT_CHAIN_POLICY_PARA {
	DWORD cbStruct;
	DWORD dwAuthType;
	DWORD fdwChecks;
	LPWSTR pwszServerName;
} SSL_EXTRA_CERT_CHAIN_POLICY_PARA, *PSSL_EXTRA_CERT_CHAIN_POLICY_PARA,
  HTTPSPolicyCallbackData, *PHTTPSPolicyCallbackData;
/* #if (_WIN32_WINNT>=0x500) */
typedef struct _CERT_CHAIN_POLICY_PARA {
	DWORD cbSize;
	DWORD dwFlags;
	void* pvExtraPolicyPara;
} CERT_CHAIN_POLICY_PARA, *PCERT_CHAIN_POLICY_PARA;
typedef struct _CERT_CHAIN_POLICY_STATUS {
	DWORD cbSize;
	DWORD dwError;
	LONG lChainIndex;
	LONG lElementIndex;
	void* pvExtraPolicyStatus;
} CERT_CHAIN_POLICY_STATUS, *PCERT_CHAIN_POLICY_STATUS;
/* #endif */
typedef struct _CRYPT_ALGORITHM_IDENTIFIER {
	LPSTR pszObjId;
	CRYPT_OBJID_BLOB Parameters;
} CRYPT_ALGORITHM_IDENTIFIER, *PCRYPT_ALGORITHM_IDENTIFIER;
typedef struct _CRYPT_BIT_BLOB {
	DWORD cbData;
	BYTE* pbData;
	DWORD cUnusedBits;
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB;
typedef struct _CERT_PUBLIC_KEY_INFO {
	CRYPT_ALGORITHM_IDENTIFIER Algorithm;
	CRYPT_BIT_BLOB PublicKey;
} CERT_PUBLIC_KEY_INFO, *PCERT_PUBLIC_KEY_INFO;
typedef struct _CERT_EXTENSION {
	LPSTR pszObjId;
	BOOL fCritical;
	CRYPT_OBJID_BLOB Value;
} CERT_EXTENSION, *PCERT_EXTENSION;
typedef struct _CERT_INFO {
	DWORD dwVersion;
	CRYPT_INTEGER_BLOB SerialNumber;
	CRYPT_ALGORITHM_IDENTIFIER SignatureAlgorithm;
	CERT_NAME_BLOB Issuer;
	FILETIME NotBefore;
	FILETIME NotAfter;
	CERT_NAME_BLOB Subject;
	CERT_PUBLIC_KEY_INFO SubjectPublicKeyInfo;
	CRYPT_BIT_BLOB IssuerUniqueId;
	CRYPT_BIT_BLOB SubjectUniqueId;
	DWORD cExtension;
	PCERT_EXTENSION rgExtension;
} CERT_INFO, *PCERT_INFO;
typedef struct _CERT_CONTEXT {
	DWORD dwCertEncodingType;
	BYTE* pbCertEncoded;
	DWORD cbCertEncoded;
	PCERT_INFO pCertInfo;
	HCERTSTORE hCertStore;
} CERT_CONTEXT, *PCERT_CONTEXT;
typedef const CERT_CONTEXT *PCCERT_CONTEXT;
typedef struct _CTL_USAGE {
	DWORD cUsageIdentifier;
	LPSTR *rgpszUsageIdentifier;
} CTL_USAGE, *PCTRL_USAGE,
  CERT_ENHKEY_USAGE, *PCERT_ENHKEY_USAGE;
typedef struct _CERT_USAGE_MATCH {
	DWORD dwType;
	CERT_ENHKEY_USAGE Usage;
} CERT_USAGE_MATCH, *PCERT_USAGE_MATCH;
/* #if (_WIN32_WINNT>=0x500) */
typedef struct _CERT_CHAIN_PARA {
	DWORD cbSize;
	CERT_USAGE_MATCH RequestedUsage;
#if CERT_CHAIN_PARA_HAS_EXTRA_FIELDS
	CERT_USAGE_MATCH RequestedIssuancePolicy;
	DWORD dwUrlRetrievalTimeout;
	BOOL fCheckRevocationFreshnessTime;
	DWORD dwRevocationFreshnessTime;
#endif
} CERT_CHAIN_PARA, *PCERT_CHAIN_PARA;
typedef BOOL (WINAPI *PFN_CERT_CHAIN_FIND_BY_ISSUER_CALLBACK)(PCCERT_CONTEXT,void*);
typedef struct _CERT_CHAIN_FIND_BY_ISSUER_PARA {
	DWORD cbSize;
	LPCSTR pszUsageIdentifier;
	DWORD dwKeySpec;
	DWORD dwAcquirePrivateKeyFlags;
	DWORD cIssuer;
	CERT_NAME_BLOB* rgIssuer;
	PFN_CERT_CHAIN_FIND_BY_ISSUER_CALLBACK pfnFIndCallback;
	void* pvFindArg;
	DWORD* pdwIssuerChainIndex;
	DWORD* pdwIssuerElementIndex;
} CERT_CHAIN_FIND_BY_ISSUER_PARA, *PCERT_CHAIN_FIND_BY_ISSUER_PARA;
/* #endif */
typedef struct _CERT_TRUST_STATUS {
	DWORD dwErrorStatus;
	DWORD dwInfoStatus;
} CERT_TRUST_STATUS, *PCERT_TRUST_STATUS;
typedef struct _CRL_ENTRY {
	CRYPT_INTEGER_BLOB SerialNumber;
	FILETIME RevocationDate;
	DWORD cExtension;
	PCERT_EXTENSION rgExtension;
} CRL_ENTRY, *PCRL_ENTRY;
typedef struct _CRL_INFO {
	DWORD dwVersion;
	CRYPT_ALGORITHM_IDENTIFIER SignatureAlgorithm;
	CERT_NAME_BLOB Issuer;
	FILETIME ThisUpdate;
	FILETIME NextUpdate;
	DWORD cCRLEntry;
	PCRL_ENTRY rgCRLEntry;
	DWORD cExtension;
	PCERT_EXTENSION rgExtension;
} CRL_INFO, *PCRL_INFO;
typedef struct _CRL_CONTEXT {
	DWORD dwCertEncodingType;
	BYTE* pbCrlEncoded;
	DWORD cbCrlEncoded;
	PCRL_INFO pCrlInfo;
	HCERTSTORE hCertStore;
} CRL_CONTEXT, *PCRL_CONTEXT;
typedef const CRL_CONTEXT *PCCRL_CONTEXT;
typedef struct _CERT_REVOCATION_CRL_INFO {
	DWORD cbSize;
	PCCRL_CONTEXT pBaseCRLContext;
	PCCRL_CONTEXT pDeltaCRLContext;
	PCRL_ENTRY pCrlEntry;
	BOOL fDeltaCrlEntry;
} CERT_REVOCATION_CRL_INFO, *PCERT_REVOCATION_CRL_INFO;
typedef struct _CERT_REVOCATION_INFO {
	DWORD cbSize;
	DWORD dwRevocationResult;
	LPCSTR pszRevocationOid;
	LPVOID pvOidSpecificInfo;
	BOOL fHasFreshnessTime;
	DWORD dwFreshnessTime;
	PCERT_REVOCATION_CRL_INFO pCrlInfo;
} CERT_REVOCATION_INFO, *PCERT_REVOCATION_INFO;
/* #if (_WIN32_WINNT>=0x500) */
typedef struct _CERT_CHAIN_ELEMENT {
	DWORD cbSize;
	PCCERT_CONTEXT pCertContext;
	CERT_TRUST_STATUS TrustStatus;
	PCERT_REVOCATION_INFO pRevocationInfo;
	PCERT_ENHKEY_USAGE pIssuanceUsage;
	PCERT_ENHKEY_USAGE pApplicationUsage;
} CERT_CHAIN_ELEMENT, *PCERT_CHAIN_ELEMENT;
/* #endif */
typedef struct _CRYPT_ATTRIBUTE {
	LPSTR pszObjId;
	DWORD cValue;
	PCRYPT_ATTR_BLOB rgValue;
} CRYPT_ATTRIBUTE, *PCRYPT_ATTRIBUTE;
typedef struct _CTL_ENTRY {
	CRYPT_DATA_BLOB SubjectIdentifier;
	DWORD cAttribute;
	PCRYPT_ATTRIBUTE rgAttribute;
} CTL_ENTRY, *PCTL_ENTRY;
typedef struct _CTL_INFO {
	DWORD dwVersion;
	CTL_USAGE SubjectUsage;
	CRYPT_DATA_BLOB ListIdentifier;
	CRYPT_INTEGER_BLOB SequenceNumber;
	FILETIME ThisUpdate;
	FILETIME NextUpdate;
	CRYPT_ALGORITHM_IDENTIFIER SubjectAlgorithm;
	DWORD cCTLEntry;
	PCTL_ENTRY rgCTLEntry;
	DWORD cExtension;
	PCERT_EXTENSION rgExtension;
} CTL_INFO, *PCTL_INFO;
typedef struct _CTL_CONTEXT {
	DWORD dwMsgAndCertEncodingType;
	BYTE* pbCtlEncoded;
	DWORD cbCtlEncoded;
	PCTL_INFO pCtlInfo;
	HCERTSTORE hCertStore;
	HCRYPTMSG hCryptMsg;
	BYTE* pbCtlContent;
	DWORD cbCtlContent;
} CTL_CONTEXT, *PCTL_CONTEXT;
typedef const CTL_CONTEXT *PCCTL_CONTEXT;
typedef struct _CERT_TRUST_LIST_INFO {
	DWORD cbSize;
	PCTL_ENTRY pCtlEntry;
	PCCTL_CONTEXT pCtlContext;
} CERT_TRUST_LIST_INFO, *PCERT_TRUST_LIST_INFO;
typedef struct _CERT_SIMPLE_CHAIN {
	DWORD cbSize;
	CERT_TRUST_STATUS TrustStatus;
	DWORD cElement;
	PCERT_CHAIN_ELEMENT* rgpElement;
	PCERT_TRUST_LIST_INFO pTrustListInfo;
	BOOL fHasRevocationFreshnessTime;
	DWORD dwRevocationFreshnessTime;
} CERT_SIMPLE_CHAIN, *PCERT_SIMPLE_CHAIN;
/* #if (_WIN32_WINNT>=0x500) */
typedef const struct _CERT_CHAIN_CONTEXT* PCCERT_CHAIN_CONTEXT;
typedef struct _CERT_CHAIN_CONTEXT {
	DWORD cbSize;
	CERT_TRUST_STATUS TrustStatus;
	DWORD cChain;
	PCERT_SIMPLE_CHAIN* rgpChain;
	DWORD cLowerQualityChainContext;
	PCCERT_CHAIN_CONTEXT* rgpLowerQualityChainContext;
	BOOL fHasRevocationFreshnessTime;
	DWORD dwRevocationFreshnessTime;
} CERT_CHAIN_CONTEXT, *PCERT_CHAIN_CONTEXT;
/* #endif */
typedef struct _PROV_ENUMALGS {
	ALG_ID aiAlgid;
	DWORD dwBitLen;
	DWORD dwNameLen;
	CHAR szName[20];
} PROV_ENUMALGS;
typedef struct _PUBLICKEYSTRUC {
	BYTE bType;
	BYTE bVersion;
	WORD reserved;
	ALG_ID aiKeyAlg;
} PUBLICKEYSTRUC;
typedef struct _RSAPUBKEY {
	DWORD magic;
	DWORD bitlen;
	DWORD pubexp;
} RSAPUBKEY;

BOOL WINAPI CertCloseStore(HCERTSTORE,DWORD);
BOOL WINAPI CertGetCertificateChain(HCERTCHAINENGINE,PCCERT_CONTEXT,LPFILETIME,HCERTSTORE,PCERT_CHAIN_PARA,DWORD,LPVOID,PCCERT_CHAIN_CONTEXT*);
BOOL WINAPI CertVerifyCertificateChainPolicy(LPCSTR,PCCERT_CHAIN_CONTEXT,PCERT_CHAIN_POLICY_PARA,PCERT_CHAIN_POLICY_STATUS);
void WINAPI CertFreeCertificateChain(PCCERT_CHAIN_CONTEXT);
DWORD WINAPI CertNameToStrA(DWORD,PCERT_NAME_BLOB,DWORD,LPSTR,DWORD);
DWORD WINAPI CertNameToStrW(DWORD,PCERT_NAME_BLOB,DWORD,LPWSTR,DWORD);
HCERTSTORE WINAPI CertOpenSystemStoreA(HCRYPTPROV,LPCSTR);
HCERTSTORE WINAPI CertOpenSystemStoreW(HCRYPTPROV,LPCWSTR);
HCERTSTORE WINAPI CertOpenStore(LPCSTR,DWORD,HCRYPTPROV,DWORD,const void*);
PCCERT_CONTEXT WINAPI CertFindCertificateInStore(HCERTSTORE,DWORD,DWORD,DWORD,const void*,PCCERT_CONTEXT);
BOOL WINAPI CertFreeCertificateContext(PCCERT_CONTEXT);
PCCERT_CONTEXT WINAPI CertGetIssuerCertificateFromStore(HCERTSTORE,PCCERT_CONTEXT,PCCERT_CONTEXT,DWORD*);
PCCERT_CHAIN_CONTEXT WINAPI CertFindChainInStore(HCERTSTORE,DWORD,DWORD,DWORD,const void*,PCCERT_CHAIN_CONTEXT);
BOOL WINAPI CryptAcquireContextA(HCRYPTPROV*,LPCSTR,LPCSTR,DWORD,DWORD);
BOOL WINAPI CryptAcquireContextW(HCRYPTPROV*,LPCWSTR,LPCWSTR,DWORD,DWORD);
BOOL WINAPI CryptContextAddRef(HCRYPTPROV,DWORD*,DWORD);
BOOL WINAPI CryptReleaseContext(HCRYPTPROV,DWORD);
BOOL WINAPI CryptGenKey(HCRYPTPROV,ALG_ID,DWORD,HCRYPTKEY*);
BOOL WINAPI CryptDeriveKey(HCRYPTPROV,ALG_ID,HCRYPTHASH,DWORD,HCRYPTKEY*);
BOOL WINAPI CryptDestroyKey(HCRYPTKEY);
#if (WINVER >= 0x0500)
BOOL WINAPI CryptDuplicateHash(HCRYPTHASH,DWORD*,DWORD,HCRYPTHASH*);
BOOL WINAPI CryptDuplicateKey(HCRYPTKEY,DWORD*,DWORD,HCRYPTKEY*);
#endif
BOOL WINAPI CryptSetKeyParam(HCRYPTKEY,DWORD,PBYTE,DWORD);
BOOL WINAPI CryptGetKeyParam(HCRYPTKEY,DWORD,PBYTE,PDWORD,DWORD);
BOOL WINAPI CryptSetHashParam(HCRYPTHASH,DWORD,PBYTE,DWORD);
BOOL WINAPI CryptGetHashParam(HCRYPTHASH,DWORD,PBYTE,PDWORD,DWORD);
BOOL WINAPI CryptSetProvParam(HCRYPTPROV,DWORD,PBYTE,DWORD);
BOOL WINAPI CryptGetProvParam(HCRYPTPROV,DWORD,PBYTE,PDWORD,DWORD);
BOOL WINAPI CryptGenRandom(HCRYPTPROV,DWORD,PBYTE);
BOOL WINAPI CryptGetUserKey(HCRYPTPROV,DWORD,HCRYPTKEY*);
BOOL WINAPI CryptExportKey(HCRYPTKEY,HCRYPTKEY,DWORD,DWORD,PBYTE,PDWORD);
BOOL WINAPI CryptImportKey(HCRYPTPROV,PBYTE,DWORD,HCRYPTKEY,DWORD,HCRYPTKEY*);
BOOL WINAPI CryptEncrypt(HCRYPTKEY,HCRYPTHASH,BOOL,DWORD,PBYTE,PDWORD,DWORD);
BOOL WINAPI CryptDecrypt(HCRYPTKEY,HCRYPTHASH,BOOL,DWORD,PBYTE,PDWORD);
BOOL WINAPI CryptCreateHash(HCRYPTPROV,ALG_ID,HCRYPTKEY,DWORD,HCRYPTHASH*);
BOOL WINAPI CryptHashData(HCRYPTHASH,PBYTE,DWORD,DWORD);
BOOL WINAPI CryptHashSessionKey(HCRYPTHASH,HCRYPTKEY,DWORD);
BOOL WINAPI CryptGetHashValue(HCRYPTHASH,DWORD,PBYTE,PDWORD);
BOOL WINAPI CryptDestroyHash(HCRYPTHASH);
BOOL WINAPI CryptSignHashA(HCRYPTHASH,DWORD,LPCSTR,DWORD,PBYTE,PDWORD);
BOOL WINAPI CryptSignHashW(HCRYPTHASH,DWORD,LPCWSTR,DWORD,PBYTE,PDWORD);
BOOL WINAPI CryptVerifySignatureA(HCRYPTHASH,PBYTE,DWORD,HCRYPTKEY,LPCSTR,DWORD);
BOOL WINAPI CryptVerifySignatureW(HCRYPTHASH,PBYTE,DWORD,HCRYPTKEY,LPCWSTR,DWORD);
BOOL WINAPI CryptSetProviderA(LPCSTR,DWORD);
BOOL WINAPI CryptSetProviderW(LPCWSTR,DWORD);

#ifdef UNICODE
#define CertNameToStr CertNameToStrW
#define CryptAcquireContext CryptAcquireContextW
#define CryptSignHash CryptSignHashW
#define CryptVerifySignature CryptVerifySignatureW
#define CryptSetProvider CryptSetProviderW
#define CertOpenSystemStore CertOpenSystemStoreW
#define CERT_FIND_SUBJECT_STR CERT_FIND_SUBJECT_STR_W
#define CERT_FIND_ISSUER_STR CERT_FIND_ISSUER_STR_W
#define MS_DEF_PROV MS_DEF_PROV_W
#define MS_ENHANCED_PROV MS_ENHANCED_PROV_W
#define MS_STRONG_PROV MS_STRONG_PROV_W
#define MS_DEF_RSA_SIG_PROV MS_DEF_RSA_SIG_PROV_W
#define MS_DEF_RSA_SCHANNEL_PROV MS_DEF_RSA_SCHANNEL_PROV_W
#define MS_DEF_DSS_PROV MS_DEF_DSS_PROV_W
#define MS_DEF_DSS_DH_PROV MS_DEF_DSS_DH_PROV_W
#define MS_ENH_DSS_DH_PROV MS_ENH_DSS_DH_PROV_W
#define MS_DEF_DH_SCHANNEL_PROV MS_DEF_DH_SCHANNEL_PROV_W
#define MS_SCARD_PROV MS_SCARD_PROV_W
#else
#define CertNameToStr CertNameToStrA
#define CryptAcquireContext CryptAcquireContextA
#define CryptSignHash CryptSignHashA
#define CryptVerifySignature CryptVerifySignatureA
#define CryptSetProvider CryptSetProviderA
#define CertOpenSystemStore CertOpenSystemStoreA
#define CERT_FIND_SUBJECT_STR CERT_FIND_SUBJECT_STR_A
#define CERT_FIND_ISSUER_STR CERT_FIND_ISSUER_STR_A
#define MS_DEF_PROV MS_DEF_PROV_A
#define MS_ENHANCED_PROV MS_ENHANCED_PROV_A
#define MS_STRONG_PROV MS_STRONG_PROV_A
#define MS_DEF_RSA_SIG_PROV MS_DEF_RSA_SIG_PROV_A
#define MS_DEF_RSA_SCHANNEL_PROV MS_DEF_RSA_SCHANNEL_PROV_A
#define MS_DEF_DSS_PROV MS_DEF_DSS_PROV_A
#define MS_DEF_DSS_DH_PROV MS_DEF_DSS_DH_PROV_A
#define MS_ENH_DSS_DH_PROV MS_ENH_DSS_DH_PROV_A
#define MS_DEF_DH_SCHANNEL_PROV MS_DEF_DH_SCHANNEL_PROV_A
#define MS_SCARD_PROV MS_SCARD_PROV_A
#endif
#ifdef __cplusplus
}
#endif
#endif /* _WINCRYPT_H */
