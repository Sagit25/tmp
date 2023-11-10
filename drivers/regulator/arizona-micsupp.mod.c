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
	{ 0xc75df6b5, "regmap_read" },
	{ 0xcdedc12, "snd_soc_component_disable_pin" },
	{ 0x7cc6bba5, "snd_soc_dapm_sync" },
	{ 0xfeaf4b58, "snd_soc_component_force_enable_pin" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x33da9135, "platform_unregister_drivers" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xd08ce1d5, "devm_regulator_register" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x6035d020, "of_get_child_by_name" },
	{ 0xcdd55934, "of_get_regulator_init_data" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0xb11a7eac, "rdev_get_drvdata" },
	{ 0x49348597, "regulator_set_bypass_regmap" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x542c522c, "regulator_enable_regmap" },
	{ 0x6ecdad28, "regulator_disable_regmap" },
	{ 0xc7fef165, "regulator_list_voltage_linear_range" },
	{ 0x4ca69357, "regulator_map_voltage_linear_range" },
	{ 0xd4aebc86, "regulator_set_voltage_sel_regmap" },
	{ 0x539d346, "regulator_get_voltage_sel_regmap" },
	{ 0x114bce4d, "regulator_is_enabled_regmap" },
	{ 0xf80ef860, "regulator_get_bypass_regmap" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "01ABA19F50E943028A046A3");
