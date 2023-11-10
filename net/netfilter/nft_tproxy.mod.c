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
	{ 0x4caa31be, "nft_register_expr" },
	{ 0xae47eb8d, "nft_chain_validate_hooks" },
	{ 0xb310efd8, "nla_put" },
	{ 0x4a5a1bc, "nft_dump_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa5486dcb, "nf_defrag_ipv4_enable" },
	{ 0xbed22f19, "nf_defrag_ipv6_enable" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0xaa4c18e5, "nft_unregister_expr" },
	{ 0xfe6fbae5, "nf_defrag_ipv4_disable" },
	{ 0x6e8be4eb, "nf_defrag_ipv6_disable" },
	{ 0x8f776f8c, "nf_tproxy_get_sock_v4" },
	{ 0x102b390, "nf_tproxy_laddr4" },
	{ 0x840a5ab1, "sock_gen_put" },
	{ 0xc2951acd, "nf_tproxy_get_sock_v6" },
	{ 0xf9922513, "nf_tproxy_laddr6" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x2ff3f0dd, "sock_edemux" },
	{ 0x7ee6ba88, "nf_tproxy_handle_time_wait4" },
	{ 0xf16de5aa, "nf_tproxy_handle_time_wait6" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_defrag_ipv4,nf_defrag_ipv6,nf_tproxy_ipv4,nf_tproxy_ipv6");


MODULE_INFO(srcversion, "2BB29D161C6E54E0D2A9DB6");
