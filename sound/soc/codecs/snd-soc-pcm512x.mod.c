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

SYMBOL_CRC(pcm512x_regmap, 0x4bbe5383, "_gpl");
SYMBOL_CRC(pcm512x_probe, 0x34b75474, "_gpl");
SYMBOL_CRC(pcm512x_remove, 0x433503c8, "_gpl");
SYMBOL_CRC(pcm512x_pm_ops, 0x7d080054, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdd952fbc, "regcache_cache_only" },
	{ 0xbfb5bed4, "regcache_sync" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x53225f43, "snd_soc_put_enum_double" },
	{ 0x80e32692, "regcache_mark_dirty" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbbfa5870, "devm_regulator_register_notifier" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0xb56cc929, "snd_soc_get_enum_double" },
	{ 0x853da64, "snd_pcm_hw_rule_add" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdb7acd4c, "snd_ctl_boolean_stereo_info" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb413832c, "snd_pcm_hw_constraint_list" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x503bd137, "snd_interval_ranges" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xb98a6b0b, "snd_pcm_hw_constraint_ratnums" },
	{ 0xea124bd1, "gcd" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd");


MODULE_INFO(srcversion, "1FB35C05D229621D8A88477");
