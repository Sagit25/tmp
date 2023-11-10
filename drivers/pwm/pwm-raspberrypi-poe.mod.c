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
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xc523d20b, "dev_get_regmap" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x88215e12, "devm_pwmchip_add" },
	{ 0x5c59c04a, "of_get_parent" },
	{ 0x3f667784, "devm_rpi_firmware_get" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,firmware-poe-pwm");
MODULE_ALIAS("of:N*T*Craspberrypi,firmware-poe-pwmC*");
MODULE_ALIAS("of:N*T*Craspberrypi,poe-pwm");
MODULE_ALIAS("of:N*T*Craspberrypi,poe-pwmC*");

MODULE_INFO(srcversion, "484B9B98D47DDC761A6EA63");
