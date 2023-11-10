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

SYMBOL_CRC(nft_reject_policy, 0x1e8872d6, "_gpl");
SYMBOL_CRC(nft_reject_validate, 0x0e238afd, "_gpl");
SYMBOL_CRC(nft_reject_init, 0x3b66dc90, "_gpl");
SYMBOL_CRC(nft_reject_dump, 0x15a23cf3, "_gpl");
SYMBOL_CRC(nft_reject_icmp_code, 0xe2c84666, "_gpl");
SYMBOL_CRC(nft_reject_icmpv6_code, 0x1de558c1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xae47eb8d, "nft_chain_validate_hooks" },
	{ 0xb310efd8, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "68D731592F6C6008BF2CDBC");
