#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1dc0cb97, "nf_nat_sip_hooks" },
	{ 0x8546ad36, "nf_nat_helper_register" },
	{ 0x24412923, "nf_ct_helper_expectfn_register" },
	{ 0x394a5d27, "nf_nat_mangle_udp_packet" },
	{ 0x3cb385fd, "__nf_nat_mangle_tcp_packet" },
	{ 0x97bd415b, "ct_sip_get_sdp_header" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x437a3e39, "ct_sip_get_header" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9375b582, "nf_ct_expect_related_report" },
	{ 0x8edaa253, "nf_ct_unexpect_related" },
	{ 0xa85f230d, "nf_ct_helper_log" },
	{ 0xa5cbdc94, "nf_ct_seqadj_set" },
	{ 0x977f12bd, "nf_nat_helper_unregister" },
	{ 0x3faa0205, "nf_ct_helper_expectfn_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x14889e12, "ct_sip_parse_header_uri" },
	{ 0xa31db8ea, "nf_nat_setup_info" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x295a7f18, "nf_nat_exp_find_port" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xb2fb3bb0, "ct_sip_parse_address_param" },
	{ 0x2a0ab684, "ct_sip_parse_request" },
	{ 0x5f024688, "ct_sip_parse_numerical_param" },
	{ 0x2b96a991, "skb_ensure_writable" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack_sip,nf_conntrack,nf_nat");


MODULE_INFO(srcversion, "55C1F6E4696C3A56315423A");
