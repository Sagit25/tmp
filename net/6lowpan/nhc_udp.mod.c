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
	{ 0x6cbbc72c, "lowpan_nhc_add" },
	{ 0x5a817be3, "lowpan_nhc_del" },
	{ 0x121445a5, "skb_pull" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "6lowpan");


MODULE_INFO(srcversion, "2912B42B6D464A51F1E7024");
