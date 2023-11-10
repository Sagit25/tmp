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
	{ 0xa7a63b9, "nft_register_chain_type" },
	{ 0x9cbcebd0, "nf_nat_inet_unregister_fn" },
	{ 0x62315f25, "nf_nat_inet_register_fn" },
	{ 0x21ed2aba, "ipv6_find_hdr" },
	{ 0x5e55bc29, "nft_do_chain" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x41efb275, "nft_unregister_chain_type" },
	{ 0x70606275, "nf_nat_ipv6_register_fn" },
	{ 0x7e6fe8c4, "nf_nat_ipv6_unregister_fn" },
	{ 0x5f75be70, "nf_nat_ipv4_register_fn" },
	{ 0x8c7dad6b, "nf_nat_ipv4_unregister_fn" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_nat");


MODULE_INFO(srcversion, "355DF73E2976056E9EE21A7");
