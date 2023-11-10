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

SYMBOL_CRC(__regmap_init_spi, 0xf9b63e10, "_gpl");
SYMBOL_CRC(__devm_regmap_init_spi, 0x7c32e51c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf2ba3154, "__regmap_init" },
	{ 0x8b65f896, "spi_write_then_read" },
	{ 0x66b66677, "regmap_async_complete_cb" },
	{ 0xdcb764ad, "memset" },
	{ 0x25b71966, "spi_async" },
	{ 0x45e6bd64, "__devm_regmap_init" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC669618247843DAD552AB9");
