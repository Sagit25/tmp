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
	{ 0xaa4c18e5, "nft_unregister_expr" },
	{ 0x3bc17c49, "nf_nat_masquerade_inet_register_notifiers" },
	{ 0xb310efd8, "nla_put" },
	{ 0x4a5a1bc, "nft_dump_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x50034e1a, "nf_ct_netns_put" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0xbad2fa73, "nf_ct_netns_get" },
	{ 0xdcb764ad, "memset" },
	{ 0xd674c5e4, "nf_nat_masquerade_ipv4" },
	{ 0xb899991b, "nf_nat_masquerade_ipv6" },
	{ 0xd9c25654, "nf_nat_masquerade_inet_unregister_notifiers" },
	{ 0x5d0f4059, "nft_chain_validate_dependency" },
	{ 0xae47eb8d, "nft_chain_validate_hooks" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "123F030A8D16D037CE2B1E6");
