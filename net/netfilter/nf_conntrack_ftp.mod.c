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

SYMBOL_CRC(nf_nat_ftp_hook, 0xccebc488, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8dc41c4e, "nf_ct_helper_init" },
	{ 0xbdb31eb8, "nf_conntrack_helpers_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9613d756, "nf_conntrack_helpers_unregister" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x82ff887f, "nf_ct_expect_alloc" },
	{ 0xac9da20e, "nf_ct_expect_init" },
	{ 0xd4a4f1e9, "nf_ct_expect_put" },
	{ 0xa85f230d, "nf_ct_helper_log" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x9375b582, "nf_ct_expect_related_report" },
	{ 0xd9653b2f, "param_ops_ushort" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "AD5AB0F42678796AB347EAF");
