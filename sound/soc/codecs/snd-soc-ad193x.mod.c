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

SYMBOL_CRC(ad193x_regmap_config, 0xbc56bd0d, "_gpl");
SYMBOL_CRC(ad193x_probe, 0xf29ac1cf, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x53225f43, "snd_soc_put_enum_double" },
	{ 0x7cc6bba5, "snd_soc_dapm_sync" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0xb56cc929, "snd_soc_get_enum_double" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x2e83e82e, "snd_soc_add_component_controls" },
	{ 0xb413832c, "snd_pcm_hw_constraint_list" },
	{ 0x622b1adf, "snd_soc_dapm_add_routes" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0x64eaaab, "snd_soc_dapm_new_controls" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x3a90ab7e, "regmap_multi_reg_write" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "CBAC0104D9D7836F9278769");
