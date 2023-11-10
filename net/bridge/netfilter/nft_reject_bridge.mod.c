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
	{ 0x3f059ff8, "skb_push" },
	{ 0x121445a5, "skb_pull" },
	{ 0xaa4c18e5, "nft_unregister_expr" },
	{ 0xcce98b59, "nf_reject_skb_v4_unreach" },
	{ 0xbb3a0902, "nf_reject_skb_v6_unreach" },
	{ 0x6d3160b2, "br_forward" },
	{ 0xdbe95451, "nf_reject_skb_v4_tcp_reset" },
	{ 0x90461c5d, "nf_reject_skb_v6_tcp_reset" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0x3b66dc90, "nft_reject_init" },
	{ 0x15a23cf3, "nft_reject_dump" },
	{ 0x1e8872d6, "nft_reject_policy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_reject_ipv4,nf_reject_ipv6,bridge,nft_reject");


MODULE_INFO(srcversion, "495F56A92FC57A3F90B71A5");
