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
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x1373d0ec, "power_supply_get_drvdata" },
	{ 0x38baa1bc, "gpiod_get_value_cansleep" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0x344b5c48, "devm_request_any_context_irq" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xa7e0c03a, "devm_gpiod_get_array_optional" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0xe8c6fb24, "devm_power_supply_register" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x93426ecd, "device_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb85b636f, "power_supply_changed" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-charger");
MODULE_ALIAS("of:N*T*Cgpio-chargerC*");

MODULE_INFO(srcversion, "BF8100614C815816CDB6B5F");
