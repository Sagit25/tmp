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

SYMBOL_CRC(nf_nat_amanda_hook, 0xfc20c05b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x45833dfe, "textsearch_prepare" },
	{ 0xbdb31eb8, "nf_conntrack_helpers_register" },
	{ 0xcee438b3, "textsearch_destroy" },
	{ 0x9613d756, "nf_conntrack_helpers_unregister" },
	{ 0xb2662372, "__nf_ct_refresh_acct" },
	{ 0x31ed1811, "skb_find_text" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x82ff887f, "nf_ct_expect_alloc" },
	{ 0xac9da20e, "nf_ct_expect_init" },
	{ 0xd4a4f1e9, "nf_ct_expect_put" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9375b582, "nf_ct_expect_related_report" },
	{ 0xa85f230d, "nf_ct_helper_log" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "460C2EB96D19FD5418A5333");
