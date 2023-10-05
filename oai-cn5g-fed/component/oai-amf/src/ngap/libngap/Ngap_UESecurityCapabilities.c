/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -gen-PER -D src`
 */

#include "Ngap_UESecurityCapabilities.h"

#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_UESecurityCapabilities_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct Ngap_UESecurityCapabilities, nRencryptionAlgorithms),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_NRencryptionAlgorithms,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nRencryptionAlgorithms"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct Ngap_UESecurityCapabilities, nRintegrityProtectionAlgorithms),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_NRintegrityProtectionAlgorithms,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nRintegrityProtectionAlgorithms"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct Ngap_UESecurityCapabilities, eUTRAencryptionAlgorithms),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_EUTRAencryptionAlgorithms,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "eUTRAencryptionAlgorithms"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct Ngap_UESecurityCapabilities,
         eUTRAintegrityProtectionAlgorithms),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_EUTRAintegrityProtectionAlgorithms,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "eUTRAintegrityProtectionAlgorithms"},
    {ATF_POINTER,
     1,
     offsetof(struct Ngap_UESecurityCapabilities, iE_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_ProtocolExtensionContainer_175P176,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "iE-Extensions"},
};
static const int asn_MAP_Ngap_UESecurityCapabilities_oms_1[]            = {4};
static const ber_tlv_tag_t asn_DEF_Ngap_UESecurityCapabilities_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_Ngap_UESecurityCapabilities_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
         0}, /* nRencryptionAlgorithms */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
         0}, /* nRintegrityProtectionAlgorithms */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
         0}, /* eUTRAencryptionAlgorithms */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0,
         0}, /* eUTRAintegrityProtectionAlgorithms */
        {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0} /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_UESecurityCapabilities_specs_1 = {
    sizeof(struct Ngap_UESecurityCapabilities),
    offsetof(struct Ngap_UESecurityCapabilities, _asn_ctx),
    asn_MAP_Ngap_UESecurityCapabilities_tag2el_1,
    5,                                         /* Count of tags in the map */
    asn_MAP_Ngap_UESecurityCapabilities_oms_1, /* Optional members */
    1,
    0, /* Root/Additions */
    5, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_UESecurityCapabilities = {
    "UESecurityCapabilities",
    "UESecurityCapabilities",
    &asn_OP_SEQUENCE,
    asn_DEF_Ngap_UESecurityCapabilities_tags_1,
    sizeof(asn_DEF_Ngap_UESecurityCapabilities_tags_1) /
        sizeof(asn_DEF_Ngap_UESecurityCapabilities_tags_1[0]), /* 1 */
    asn_DEF_Ngap_UESecurityCapabilities_tags_1, /* Same as above */
    sizeof(asn_DEF_Ngap_UESecurityCapabilities_tags_1) /
        sizeof(asn_DEF_Ngap_UESecurityCapabilities_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_Ngap_UESecurityCapabilities_1,
    5,                                           /* Elements count */
    &asn_SPC_Ngap_UESecurityCapabilities_specs_1 /* Additional specs */
};
