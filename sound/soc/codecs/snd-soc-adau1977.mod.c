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

SYMBOL_CRC(adau1977_probe, 0xf29062c0, "_gpl");
SYMBOL_CRC(adau1977_regmap_config, 0x8285b017, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe52de225, "regulator_enable" },
	{ 0xdd952fbc, "regcache_cache_only" },
	{ 0xbfb5bed4, "regcache_sync" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x468e478d, "snd_pcm_hw_constraint_minmax" },
	{ 0x80e32692, "regcache_mark_dirty" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x63a66ce1, "devm_regulator_get_optional" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb413832c, "snd_pcm_hw_constraint_list" },
	{ 0x4e2698a4, "snd_pcm_hw_constraint_mask64" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0x64eaaab, "snd_soc_dapm_new_controls" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3a4d7a00, "regcache_cache_bypass" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "C41F5ED605F811392DC2A44");
