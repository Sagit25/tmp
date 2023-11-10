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

SYMBOL_CRC(nft_fib6_eval_type, 0xa29bba37, "_gpl");
SYMBOL_CRC(nft_fib6_eval, 0x93b43387, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x76b4c315, "l3mdev_master_ifindex_rcu" },
	{ 0x4caa31be, "nft_register_expr" },
	{ 0xaa4c18e5, "nft_unregister_expr" },
	{ 0xdcb764ad, "memset" },
	{ 0x893abd4a, "make_kuid" },
	{ 0x4dda8238, "nft_fib_store_result" },
	{ 0xa0cfea92, "ip6_route_lookup" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2d8a8447, "nf_ipv6_ops" },
	{ 0x75dc8672, "nft_fib_init" },
	{ 0xe3a41082, "nft_fib_dump" },
	{ 0x3385e7c9, "nft_fib_validate" },
	{ 0x5a204fe3, "nft_fib_reduce" },
	{ 0x6c18ec7d, "nft_fib_policy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nft_fib,ipv6");


MODULE_INFO(srcversion, "E124A45FF723FE9EBFCDBF2");
