/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -gen-PER -D src`
 */

#ifndef _Ngap_PDUSessionResourceSetupItemCxtReq_H_
#define _Ngap_PDUSessionResourceSetupItemCxtReq_H_

#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_PDUSessionID.h"
#include "Ngap_NAS-PDU.h"
#include "Ngap_S-NSSAI.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_PDUSessionResourceSetupItemCxtReq */
typedef struct Ngap_PDUSessionResourceSetupItemCxtReq {
  Ngap_PDUSessionID_t pDUSessionID;
  Ngap_NAS_PDU_t* nAS_PDU; /* OPTIONAL */
  Ngap_S_NSSAI_t s_NSSAI;
  OCTET_STRING_t pDUSessionResourceSetupRequestTransfer;
  struct Ngap_ProtocolExtensionContainer* iE_Extensions; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} Ngap_PDUSessionResourceSetupItemCxtReq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_PDUSessionResourceSetupItemCxtReq;
extern asn_SEQUENCE_specifics_t
    asn_SPC_Ngap_PDUSessionResourceSetupItemCxtReq_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_PDUSessionResourceSetupItemCxtReq_1[5];

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_PDUSessionResourceSetupItemCxtReq_H_ */
#include <asn_internal.h>
