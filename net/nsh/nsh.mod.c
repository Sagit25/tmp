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

SYMBOL_CRC(nsh_push, 0xeaefafec, "_gpl");
SYMBOL_CRC(nsh_pop, 0x2b219636, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf83b2763, "dev_add_offload" },
	{ 0xec231e28, "dev_remove_offload" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xf0f9eba2, "skb_pull_rcsum" },
	{ 0x1df0393b, "skb_mac_gso_segment" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E9AF4D69E2563E13B527C09");
