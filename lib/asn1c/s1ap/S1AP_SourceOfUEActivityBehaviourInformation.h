/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.7.0/36413-g70.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_S1AP_SourceOfUEActivityBehaviourInformation_H_
#define	_S1AP_SourceOfUEActivityBehaviourInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_SourceOfUEActivityBehaviourInformation {
	S1AP_SourceOfUEActivityBehaviourInformation_subscription_information	= 0,
	S1AP_SourceOfUEActivityBehaviourInformation_statistics	= 1
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_SourceOfUEActivityBehaviourInformation;

/* S1AP_SourceOfUEActivityBehaviourInformation */
typedef long	 S1AP_SourceOfUEActivityBehaviourInformation_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_SourceOfUEActivityBehaviourInformation_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_SourceOfUEActivityBehaviourInformation;
extern const asn_INTEGER_specifics_t asn_SPC_SourceOfUEActivityBehaviourInformation_specs_1;
asn_struct_free_f SourceOfUEActivityBehaviourInformation_free;
asn_struct_print_f SourceOfUEActivityBehaviourInformation_print;
asn_constr_check_f SourceOfUEActivityBehaviourInformation_constraint;
jer_type_encoder_f SourceOfUEActivityBehaviourInformation_encode_jer;
per_type_decoder_f SourceOfUEActivityBehaviourInformation_decode_aper;
per_type_encoder_f SourceOfUEActivityBehaviourInformation_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_SourceOfUEActivityBehaviourInformation_H_ */
#include <asn_internal.h>
