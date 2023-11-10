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

SYMBOL_CRC(nfct_h323_nat_hook, 0x95a138c5, "_gpl");
SYMBOL_CRC(get_h225_addr, 0xfe366a58, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa85f230d, "nf_ct_helper_log" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x2d8a8447, "nf_ipv6_ops" },
	{ 0xc5ec56e6, "__nf_ct_expect_find" },
	{ 0x9613d756, "nf_conntrack_helpers_unregister" },
	{ 0x9375b582, "nf_ct_expect_related_report" },
	{ 0x82ff887f, "nf_ct_expect_alloc" },
	{ 0xd4a4f1e9, "nf_ct_expect_put" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xdcb764ad, "memset" },
	{ 0xbdb31eb8, "nf_conntrack_helpers_register" },
	{ 0x5815ba8c, "nf_ip_route" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xac9da20e, "nf_ct_expect_init" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x1c8a81b1, "nf_conntrack_helper_unregister" },
	{ 0xb2662372, "__nf_ct_refresh_acct" },
	{ 0xf1ebc3a4, "nf_conntrack_helper_register" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x8edaa253, "nf_ct_unexpect_related" },
	{ 0xd436d300, "nf_ct_remove_expectations" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "5F3C42A0EFA7E77573BE9DC");
