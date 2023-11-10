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

SYMBOL_CRC(aic3x_regmap, 0x13cd143f, "_gpl");
SYMBOL_CRC(aic3x_probe, 0x6013c83d, "");
SYMBOL_CRC(aic3x_remove, 0x6a0dc235, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7b5e8a3, "snd_soc_dapm_put_enum_double" },
	{ 0xdd952fbc, "regcache_cache_only" },
	{ 0xbfb5bed4, "regcache_sync" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x30defdbb, "snd_soc_component_read" },
	{ 0x29b0ee76, "snd_soc_component_test_bits" },
	{ 0x86bd853, "gpiod_set_raw_value" },
	{ 0x53225f43, "snd_soc_put_enum_double" },
	{ 0x80e32692, "regcache_mark_dirty" },
	{ 0xfe990052, "gpio_free" },
	{ 0x280892e9, "snd_soc_component_write" },
	{ 0xb82fe302, "of_get_named_gpio_flags" },
	{ 0x7fa998e5, "regulator_get_voltage" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0xbbfa5870, "devm_regulator_register_notifier" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0xb56cc929, "snd_soc_get_enum_double" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x5f0265b, "gpiod_direction_output_raw" },
	{ 0xeed2b076, "snd_soc_dapm_put_volsw" },
	{ 0x2e83e82e, "snd_soc_add_component_controls" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x622b1adf, "snd_soc_dapm_add_routes" },
	{ 0x1fe5d58b, "snd_soc_dapm_kcontrol_dapm" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0xb5c3f9fb, "snd_soc_component_update_bits" },
	{ 0x64eaaab, "snd_soc_dapm_new_controls" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x117767ca, "snd_soc_dapm_get_volsw" },
	{ 0x3bee0455, "regmap_register_patch" },
	{ 0xe6010fe8, "snd_soc_dapm_mixer_update_power" },
	{ 0x9545453e, "snd_soc_dapm_get_enum_double" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "6ECC9EC28B400267550FEAA");
