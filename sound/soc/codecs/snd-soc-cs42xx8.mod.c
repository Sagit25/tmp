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

SYMBOL_CRC(cs42xx8_regmap_config, 0xaa30a485, "_gpl");
SYMBOL_CRC(cs42448_data, 0xcd3794c9, "_gpl");
SYMBOL_CRC(cs42888_data, 0x7cac7292, "_gpl");
SYMBOL_CRC(cs42xx8_probe, 0xca55f450, "_gpl");
SYMBOL_CRC(cs42xx8_pm, 0x471e2fe8, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdd952fbc, "regcache_cache_only" },
	{ 0xbfb5bed4, "regcache_sync" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x53225f43, "snd_soc_put_enum_double" },
	{ 0x80e32692, "regcache_mark_dirty" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0xb56cc929, "snd_soc_get_enum_double" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0x209009ac, "of_match_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x2e83e82e, "snd_soc_add_component_controls" },
	{ 0x622b1adf, "snd_soc_dapm_add_routes" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0x64eaaab, "snd_soc_dapm_new_controls" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "61BF97E41C4C83DD4A0225A");
