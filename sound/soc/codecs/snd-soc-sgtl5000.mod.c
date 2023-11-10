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
	{ 0x7b5e8a3, "snd_soc_dapm_put_enum_double" },
	{ 0xdd952fbc, "regcache_cache_only" },
	{ 0xbfb5bed4, "regcache_sync" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x1ff3a89d, "regulator_bulk_free" },
	{ 0x30defdbb, "snd_soc_component_read" },
	{ 0xf97ba291, "regulator_put" },
	{ 0x9d473183, "regulator_is_equal" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x280892e9, "snd_soc_component_write" },
	{ 0x7fa998e5, "regulator_get_voltage" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb945d6da, "regulator_get_optional" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb08a39ea, "regulator_bulk_get" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0xb5c3f9fb, "snd_soc_component_update_bits" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x9545453e, "snd_soc_dapm_get_enum_double" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c,snd-pcm");

MODULE_ALIAS("i2c:sgtl5000");
MODULE_ALIAS("of:N*T*Cfsl,sgtl5000");
MODULE_ALIAS("of:N*T*Cfsl,sgtl5000C*");

MODULE_INFO(srcversion, "63CD1D58F5031499BB38E96");
