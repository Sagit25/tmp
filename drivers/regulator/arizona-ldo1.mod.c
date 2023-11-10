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
	{ 0x48adc54d, "__platform_register_drivers" },
	{ 0x9a8a544a, "gpiod_put" },
	{ 0xfea50fc1, "rdev_get_regmap" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x539d346, "regulator_get_voltage_sel_regmap" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xd4aebc86, "regulator_set_voltage_sel_regmap" },
	{ 0x33da9135, "platform_unregister_drivers" },
	{ 0x6035d020, "of_get_child_by_name" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0xcdd55934, "of_get_regulator_init_data" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x9ff869eb, "gpiod_get_optional" },
	{ 0xd08ce1d5, "devm_regulator_register" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0xf37e0dfc, "regulator_list_voltage_linear" },
	{ 0x7165c5a5, "regulator_map_voltage_linear" },
	{ 0xc7fef165, "regulator_list_voltage_linear_range" },
	{ 0x4ca69357, "regulator_map_voltage_linear_range" },
	{ 0x49348597, "regulator_set_bypass_regmap" },
	{ 0xf80ef860, "regulator_get_bypass_regmap" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D1E3CC309AB5BE06AAEF842");
