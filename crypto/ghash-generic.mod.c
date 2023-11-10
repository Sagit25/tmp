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
	{ 0xb12f9a1e, "crypto_register_shash" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x83581089, "gf128mul_init_4k_lle" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5a4d313e, "gf128mul_4k_lle" },
	{ 0xa47e21f7, "crypto_unregister_shash" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "gf128mul");


MODULE_INFO(srcversion, "898564ECBC481CBC5408CB4");
