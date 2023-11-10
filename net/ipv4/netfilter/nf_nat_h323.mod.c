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
	{ 0x95a138c5, "nfct_h323_nat_hook" },
	{ 0x24412923, "nf_ct_helper_expectfn_register" },
	{ 0xa31db8ea, "nf_nat_setup_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5c00915d, "nf_nat_follow_master" },
	{ 0x3faa0205, "nf_ct_helper_expectfn_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x394a5d27, "nf_nat_mangle_udp_packet" },
	{ 0x3cb385fd, "__nf_nat_mangle_tcp_packet" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x295a7f18, "nf_nat_exp_find_port" },
	{ 0x8edaa253, "nf_ct_unexpect_related" },
	{ 0xfe366a58, "get_h225_addr" },
	{ 0x9375b582, "nf_ct_expect_related_report" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack_h323,nf_conntrack,nf_nat");


MODULE_INFO(srcversion, "2C80BC4FE86CACD13998963");
