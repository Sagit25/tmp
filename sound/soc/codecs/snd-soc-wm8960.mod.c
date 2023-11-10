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
	{ 0xbfb5bed4, "regcache_sync" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x30defdbb, "snd_soc_component_read" },
	{ 0x53225f43, "snd_soc_put_enum_double" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x280892e9, "snd_soc_component_write" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x92997ed8, "_printk" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0xb56cc929, "snd_soc_get_enum_double" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0xbc825a83, "snd_ctl_boolean_mono_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xeed2b076, "snd_soc_dapm_put_volsw" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x2e83e82e, "snd_soc_add_component_controls" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x622b1adf, "snd_soc_dapm_add_routes" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0xb5c3f9fb, "snd_soc_component_update_bits" },
	{ 0x64eaaab, "snd_soc_dapm_new_controls" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x117767ca, "snd_soc_dapm_get_volsw" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x815588a6, "clk_enable" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c,snd,snd-pcm");

MODULE_ALIAS("i2c:wm8960");
MODULE_ALIAS("of:N*T*Cwlf,wm8960");
MODULE_ALIAS("of:N*T*Cwlf,wm8960C*");

MODULE_INFO(srcversion, "B415D9D35F643E53E53AA88");
