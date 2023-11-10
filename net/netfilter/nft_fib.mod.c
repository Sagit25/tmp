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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(nft_fib_policy, 0x6c18ec7d, "");
SYMBOL_CRC(nft_fib_validate, 0x3385e7c9, "_gpl");
SYMBOL_CRC(nft_fib_init, 0x75dc8672, "_gpl");
SYMBOL_CRC(nft_fib_dump, 0xe3a41082, "_gpl");
SYMBOL_CRC(nft_fib_store_result, 0x4dda8238, "_gpl");
SYMBOL_CRC(nft_fib_reduce, 0x5a204fe3, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xae47eb8d, "nft_chain_validate_hooks" },
	{ 0xd5262ee8, "nft_parse_register_store" },
	{ 0x4a5a1bc, "nft_dump_register" },
	{ 0xb310efd8, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9166fada, "strncpy" },
	{ 0x6c776b26, "nft_reg_track_update" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "CA28BE3B32F5CB6A2902DC9");
