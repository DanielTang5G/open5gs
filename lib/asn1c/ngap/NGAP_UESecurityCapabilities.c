/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.7.0/38413-g70.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "NGAP_UESecurityCapabilities.h"

#include "NGAP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_NGAP_UESecurityCapabilities_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UESecurityCapabilities, nRencryptionAlgorithms),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_NRencryptionAlgorithms,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"nRencryptionAlgorithms"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UESecurityCapabilities, nRintegrityProtectionAlgorithms),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_NRintegrityProtectionAlgorithms,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"nRintegrityProtectionAlgorithms"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UESecurityCapabilities, eUTRAencryptionAlgorithms),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_EUTRAencryptionAlgorithms,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"eUTRAencryptionAlgorithms"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UESecurityCapabilities, eUTRAintegrityProtectionAlgorithms),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_EUTRAintegrityProtectionAlgorithms,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"eUTRAintegrityProtectionAlgorithms"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_UESecurityCapabilities, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_9625P273,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_NGAP_UESecurityCapabilities_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_NGAP_UESecurityCapabilities_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_UESecurityCapabilities_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nRencryptionAlgorithms */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nRintegrityProtectionAlgorithms */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* eUTRAencryptionAlgorithms */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* eUTRAintegrityProtectionAlgorithms */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_NGAP_UESecurityCapabilities_specs_1 = {
	sizeof(struct NGAP_UESecurityCapabilities),
	offsetof(struct NGAP_UESecurityCapabilities, _asn_ctx),
	asn_MAP_NGAP_UESecurityCapabilities_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_NGAP_UESecurityCapabilities_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_UESecurityCapabilities = {
	"UESecurityCapabilities",
	"UESecurityCapabilities",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_UESecurityCapabilities_tags_1,
	sizeof(asn_DEF_NGAP_UESecurityCapabilities_tags_1)
		/sizeof(asn_DEF_NGAP_UESecurityCapabilities_tags_1[0]), /* 1 */
	asn_DEF_NGAP_UESecurityCapabilities_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_UESecurityCapabilities_tags_1)
		/sizeof(asn_DEF_NGAP_UESecurityCapabilities_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NGAP_UESecurityCapabilities_1,
	5,	/* Elements count */
	&asn_SPC_NGAP_UESecurityCapabilities_specs_1	/* Additional specs */
};

