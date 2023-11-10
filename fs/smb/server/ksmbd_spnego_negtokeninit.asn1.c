/*
 * Automatically generated by asn1_compiler.  Do not edit
 *
 * ASN.1 parser for ksmbd_spnego_negtokeninit
 */
#include <linux/asn1_ber_bytecode.h>
#include "ksmbd_spnego_negtokeninit.asn1.h"

enum ksmbd_spnego_negtokeninit_actions {
	ACT_ksmbd_gssapi_this_mech = 0,
	ACT_ksmbd_neg_token_init_mech_token = 1,
	ACT_ksmbd_neg_token_init_mech_type = 2,
	NR__ksmbd_spnego_negtokeninit_actions = 3
};

static const asn1_action_t ksmbd_spnego_negtokeninit_action_table[NR__ksmbd_spnego_negtokeninit_actions] = {
	[   0] = ksmbd_gssapi_this_mech,
	[   1] = ksmbd_neg_token_init_mech_token,
	[   2] = ksmbd_neg_token_init_mech_type,
};

static const unsigned char ksmbd_spnego_negtokeninit_machine[] = {
	// GSSAPI
	[   0] = ASN1_OP_MATCH,
	[   1] = _tagn(APPL, CONS,  0),
	[   2] =  ASN1_OP_MATCH_ACT,		// thisMech
	[   3] =  _tag(UNIV, PRIM, OID),
	[   4] =  _action(ACT_ksmbd_gssapi_this_mech),
	// NegotiationToken
	[   5] =  ASN1_OP_MATCH_JUMP_OR_SKIP,		// negTokenInit
	[   6] =  _tagn(CONT, CONS,  0),
	[   7] =  _jump_target(14),
	[   8] =  ASN1_OP_COND_MATCH_JUMP_OR_SKIP,		// negTokenTarg
	[   9] =  _tagn(CONT, CONS,  1),
	[  10] =  _jump_target(38),
	[  11] =  ASN1_OP_COND_FAIL,
	[  12] = ASN1_OP_END_SEQ,
	[  13] = ASN1_OP_COMPLETE,

	// NegTokenInit
	[  14] =  ASN1_OP_MATCH,
	[  15] =  _tag(UNIV, CONS, SEQ),
	[  16] =   ASN1_OP_MATCH,		// mechTypes
	[  17] =   _tagn(CONT, CONS,  0),
	// MechTypeList
	[  18] =    ASN1_OP_MATCH,
	[  19] =    _tag(UNIV, CONS, SEQ),
	// MechType
	[  20] =     ASN1_OP_MATCH_ACT,
	[  21] =     _tag(UNIV, PRIM, OID),
	[  22] =     _action(ACT_ksmbd_neg_token_init_mech_type),
	[  23] =    ASN1_OP_END_SEQ_OF,
	[  24] =    _jump_target(20),
	[  25] =   ASN1_OP_END_SEQ,
	[  26] =   ASN1_OP_MATCH_JUMP_OR_SKIP,		// reqFlags
	[  27] =   _tagn(CONT, CONS,  1),
	[  28] =   _jump_target(41),
	[  29] =   ASN1_OP_MATCH_JUMP_OR_SKIP,		// mechToken
	[  30] =   _tagn(CONT, CONS,  2),
	[  31] =   _jump_target(45),
	[  32] =   ASN1_OP_MATCH_JUMP_OR_SKIP,		// mechListMIC
	[  33] =   _tagn(CONT, CONS,  3),
	[  34] =   _jump_target(50),
	[  35] =  ASN1_OP_END_SEQ,
	[  36] = ASN1_OP_END_SEQ,
	[  37] = ASN1_OP_RETURN,

	[  38] =  ASN1_OP_MATCH_ANY,		// negTokenTarg
	[  39] = ASN1_OP_END_SEQ,
	[  40] = ASN1_OP_RETURN,

	[  41] =  ASN1_OP_MATCH,		// reqFlags
	[  42] =  _tag(UNIV, PRIM, BTS),
	[  43] = ASN1_OP_END_SEQ,
	[  44] = ASN1_OP_RETURN,

	[  45] =  ASN1_OP_MATCH_ACT,		// mechToken
	[  46] =  _tag(UNIV, PRIM, OTS),
	[  47] =  _action(ACT_ksmbd_neg_token_init_mech_token),
	[  48] = ASN1_OP_END_SEQ,
	[  49] = ASN1_OP_RETURN,

	[  50] =  ASN1_OP_MATCH,		// mechListMIC
	[  51] =  _tag(UNIV, PRIM, OTS),
	[  52] = ASN1_OP_END_SEQ,
	[  53] = ASN1_OP_RETURN,
};

const struct asn1_decoder ksmbd_spnego_negtokeninit_decoder = {
	.machine = ksmbd_spnego_negtokeninit_machine,
	.machlen = sizeof(ksmbd_spnego_negtokeninit_machine),
	.actions = ksmbd_spnego_negtokeninit_action_table,
};