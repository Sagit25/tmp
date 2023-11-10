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

SYMBOL_CRC(nf_nat_sip_hooks, 0x1dc0cb97, "_gpl");
SYMBOL_CRC(ct_sip_parse_request, 0x2a0ab684, "_gpl");
SYMBOL_CRC(ct_sip_get_header, 0x437a3e39, "_gpl");
SYMBOL_CRC(ct_sip_parse_header_uri, 0x14889e12, "_gpl");
SYMBOL_CRC(ct_sip_parse_address_param, 0xb2fb3bb0, "_gpl");
SYMBOL_CRC(ct_sip_parse_numerical_param, 0x5f024688, "_gpl");
SYMBOL_CRC(ct_sip_get_sdp_header, 0x97bd415b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x11089ac7, "_ctype" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x98cf60b3, "strlen" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x5a921311, "strncmp" },
	{ 0x8dc41c4e, "nf_ct_helper_init" },
	{ 0xbdb31eb8, "nf_conntrack_helpers_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x9613d756, "nf_conntrack_helpers_unregister" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x44a410d0, "nf_ct_remove_expect" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0xa85f230d, "nf_ct_helper_log" },
	{ 0xb2662372, "__nf_ct_refresh_acct" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x82ff887f, "nf_ct_expect_alloc" },
	{ 0xac9da20e, "nf_ct_expect_init" },
	{ 0xd4a4f1e9, "nf_ct_expect_put" },
	{ 0x9375b582, "nf_ct_expect_related_report" },
	{ 0xc5ec56e6, "__nf_ct_expect_find" },
	{ 0xdcb764ad, "memset" },
	{ 0x2d8a8447, "nf_ipv6_ops" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x5815ba8c, "nf_ip_route" },
	{ 0x8edaa253, "nf_ct_unexpect_related" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0xd9653b2f, "param_ops_ushort" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "AD455FB6BE9E047D00AD0A3");
