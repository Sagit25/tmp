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
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0xa207ec7d, "iio_device_unregister" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x185e9f15, "spi_get_device_id" },
	{ 0x7fa998e5, "regulator_get_voltage" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0xe52de225, "regulator_enable" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x695daad2, "__iio_device_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:mcp3001");
MODULE_ALIAS("spi:mcp3002");
MODULE_ALIAS("spi:mcp3004");
MODULE_ALIAS("spi:mcp3008");
MODULE_ALIAS("spi:mcp3201");
MODULE_ALIAS("spi:mcp3202");
MODULE_ALIAS("spi:mcp3204");
MODULE_ALIAS("spi:mcp3208");
MODULE_ALIAS("spi:mcp3301");
MODULE_ALIAS("spi:mcp3550-50");
MODULE_ALIAS("spi:mcp3550-60");
MODULE_ALIAS("spi:mcp3551");
MODULE_ALIAS("spi:mcp3553");
MODULE_ALIAS("of:N*T*Cmcp3001");
MODULE_ALIAS("of:N*T*Cmcp3001C*");
MODULE_ALIAS("of:N*T*Cmcp3002");
MODULE_ALIAS("of:N*T*Cmcp3002C*");
MODULE_ALIAS("of:N*T*Cmcp3004");
MODULE_ALIAS("of:N*T*Cmcp3004C*");
MODULE_ALIAS("of:N*T*Cmcp3008");
MODULE_ALIAS("of:N*T*Cmcp3008C*");
MODULE_ALIAS("of:N*T*Cmcp3201");
MODULE_ALIAS("of:N*T*Cmcp3201C*");
MODULE_ALIAS("of:N*T*Cmcp3202");
MODULE_ALIAS("of:N*T*Cmcp3202C*");
MODULE_ALIAS("of:N*T*Cmcp3204");
MODULE_ALIAS("of:N*T*Cmcp3204C*");
MODULE_ALIAS("of:N*T*Cmcp3208");
MODULE_ALIAS("of:N*T*Cmcp3208C*");
MODULE_ALIAS("of:N*T*Cmcp3301");
MODULE_ALIAS("of:N*T*Cmcp3301C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3001");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3001C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3002");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3002C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3004");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3004C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3008");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3008C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3201");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3201C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3202");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3202C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3204");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3204C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3208");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3208C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3301");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3301C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3550-50");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3550-50C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3550-60");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3550-60C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3551");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3551C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3553");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3553C*");

MODULE_INFO(srcversion, "B534F3367B1458B273884FE");
