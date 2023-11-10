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

SYMBOL_CRC(aic32x4_regmap_config, 0x64eeb1a3, "");
SYMBOL_CRC(aic32x4_probe, 0x0c317d8d, "");
SYMBOL_CRC(aic32x4_remove, 0x33517929, "");
SYMBOL_CRC(aic32x4_register_clocks, 0x604d0f23, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7b5e8a3, "snd_soc_dapm_put_enum_double" },
	{ 0xe52de225, "regulator_enable" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0xf7208367, "of_property_match_string" },
	{ 0x30defdbb, "snd_soc_component_read" },
	{ 0x17a65868, "gpiod_set_raw_value_cansleep" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x53225f43, "snd_soc_put_enum_double" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x63a66ce1, "devm_regulator_get_optional" },
	{ 0x280892e9, "snd_soc_component_write" },
	{ 0xb82fe302, "of_get_named_gpio_flags" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x92997ed8, "_printk" },
	{ 0x197da2ba, "devm_clk_bulk_get" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0xb56cc929, "snd_soc_get_enum_double" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0xac095dce, "devm_gpio_request_one" },
	{ 0xbc825a83, "snd_ctl_boolean_mono_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xeed2b076, "snd_soc_dapm_put_volsw" },
	{ 0xc523d20b, "dev_get_regmap" },
	{ 0x2e83e82e, "snd_soc_add_component_controls" },
	{ 0xa92a150c, "devm_clk_register" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0x740454c3, "of_clk_get_parent_name" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xb5c3f9fb, "snd_soc_component_update_bits" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0x117767ca, "snd_soc_dapm_get_volsw" },
	{ 0x9545453e, "snd_soc_dapm_get_enum_double" },
	{ 0xc5c070b0, "clk_hw_register_clkdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd");


MODULE_INFO(srcversion, "3FAF6577752FADB0A9B913D");
