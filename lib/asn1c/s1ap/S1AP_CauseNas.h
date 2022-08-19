/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.7.0/36413-g70.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_S1AP_CauseNas_H_
#define	_S1AP_CauseNas_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_CauseNas {
	S1AP_CauseNas_normal_release	= 0,
	S1AP_CauseNas_authentication_failure	= 1,
	S1AP_CauseNas_detach	= 2,
	S1AP_CauseNas_unspecified	= 3,
	/*
	 * Enumeration is extensible
	 */
	S1AP_CauseNas_csg_subscription_expiry	= 4
} e_S1AP_CauseNas;

/* S1AP_CauseNas */
typedef long	 S1AP_CauseNas_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_CauseNas_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_CauseNas;
extern const asn_INTEGER_specifics_t asn_SPC_CauseNas_specs_1;
asn_struct_free_f CauseNas_free;
asn_struct_print_f CauseNas_print;
asn_constr_check_f CauseNas_constraint;
jer_type_encoder_f CauseNas_encode_jer;
per_type_decoder_f CauseNas_decode_aper;
per_type_encoder_f CauseNas_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_CauseNas_H_ */
#include <asn_internal.h>
