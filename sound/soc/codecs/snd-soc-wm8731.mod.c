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

SYMBOL_CRC(wm8731_init, 0x8cbd18b9, "_gpl");
SYMBOL_CRC(wm8731_regmap, 0x8cd553c2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7b5e8a3, "snd_soc_dapm_put_enum_double" },
	{ 0xbfb5bed4, "regcache_sync" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x30defdbb, "snd_soc_component_read" },
	{ 0x80e32692, "regcache_mark_dirty" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x280892e9, "snd_soc_component_write" },
	{ 0x7cc6bba5, "snd_soc_dapm_sync" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0xbc825a83, "snd_ctl_boolean_mono_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xeed2b076, "snd_soc_dapm_put_volsw" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb413832c, "snd_pcm_hw_constraint_list" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0xb5c3f9fb, "snd_soc_component_update_bits" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x117767ca, "snd_soc_dapm_get_volsw" },
	{ 0x9545453e, "snd_soc_dapm_get_enum_double" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-pcm");


MODULE_INFO(srcversion, "3DE91558BC97BB8DDB3635F");
