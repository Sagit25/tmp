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

SYMBOL_CRC(spi_bitbang_setup_transfer, 0x7a9c89e0, "_gpl");
SYMBOL_CRC(spi_bitbang_setup, 0x2cd095a1, "_gpl");
SYMBOL_CRC(spi_bitbang_cleanup, 0x806348dc, "_gpl");
SYMBOL_CRC(spi_bitbang_init, 0x99ddd7a9, "_gpl");
SYMBOL_CRC(spi_bitbang_start, 0x945866e9, "_gpl");
SYMBOL_CRC(spi_bitbang_stop, 0x60a75e5a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x37a0cba, "kfree" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x10d31101, "spi_finalize_current_transfer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf7dca34a, "get_device" },
	{ 0x8d851140, "spi_register_controller" },
	{ 0x606b7e51, "put_device" },
	{ 0x11215294, "spi_unregister_controller" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E276299F0B5C87A133D950C");
