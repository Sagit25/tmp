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
	{ 0xa29bba37, "nft_fib6_eval_type" },
	{ 0x93b43387, "nft_fib6_eval" },
	{ 0x3c19397c, "nft_fib4_eval_type" },
	{ 0xfcd627e0, "nft_fib4_eval" },
	{ 0xaa4c18e5, "nft_unregister_expr" },
	{ 0x75dc8672, "nft_fib_init" },
	{ 0xe3a41082, "nft_fib_dump" },
	{ 0x3385e7c9, "nft_fib_validate" },
	{ 0x5a204fe3, "nft_fib_reduce" },
	{ 0x6c18ec7d, "nft_fib_policy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nft_fib_ipv6,nft_fib_ipv4,nft_fib");


MODULE_INFO(srcversion, "D4253E7B13A864B5D71401F");
