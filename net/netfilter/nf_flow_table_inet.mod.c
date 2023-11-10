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
	{ 0xe00db3fa, "nft_register_flowtable_type" },
	{ 0x641f5f75, "nf_flow_offload_ipv6_hook" },
	{ 0x5c8172b3, "nf_flow_offload_ip_hook" },
	{ 0x43f72250, "nf_flow_rule_route_ipv6" },
	{ 0x6b6875a7, "nf_flow_rule_route_ipv4" },
	{ 0x3afcb584, "nft_unregister_flowtable_type" },
	{ 0xacf61f19, "nf_flow_table_init" },
	{ 0x9c22ef61, "nf_flow_table_offload_setup" },
	{ 0x190a61cb, "nf_flow_table_free" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_flow_table");


MODULE_INFO(srcversion, "3192D473615F36A6403D9F2");
