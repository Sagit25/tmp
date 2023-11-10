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

SYMBOL_CRC(crypto_nhpoly1305_setkey, 0x04385323, "");
SYMBOL_CRC(crypto_nhpoly1305_init, 0xe853ed7d, "");
SYMBOL_CRC(crypto_nhpoly1305_update_helper, 0x212c706e, "");
SYMBOL_CRC(crypto_nhpoly1305_update, 0x70215da0, "");
SYMBOL_CRC(crypto_nhpoly1305_final_helper, 0xaa9658df, "");
SYMBOL_CRC(crypto_nhpoly1305_final, 0x704403ee, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x21f3700, "poly1305_core_blocks" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbcb90cb3, "poly1305_core_emit" },
	{ 0xdcb764ad, "memset" },
	{ 0xb12f9a1e, "crypto_register_shash" },
	{ 0xa47e21f7, "crypto_unregister_shash" },
	{ 0xd45b9cf4, "poly1305_core_setkey" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libpoly1305");


MODULE_INFO(srcversion, "54F35292825464DE31AB053");
