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
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0x3d0fa060, "of_device_is_available" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xc523d20b, "dev_get_regmap" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0xe8c6fb24, "devm_power_supply_register" },
	{ 0xadda69dd, "rpi_firmware_get" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x1373d0ec, "power_supply_get_drvdata" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,rpi-poe-power-supply");
MODULE_ALIAS("of:N*T*Craspberrypi,rpi-poe-power-supplyC*");

MODULE_INFO(srcversion, "133BC102285E19477B75ADB");
