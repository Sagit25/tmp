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
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x30defdbb, "snd_soc_component_read" },
	{ 0xd47ccf38, "pm_runtime_set_autosuspend_delay" },
	{ 0x53225f43, "snd_soc_put_enum_double" },
	{ 0x80e32692, "regcache_mark_dirty" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x280892e9, "snd_soc_component_write" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0xb56cc929, "snd_soc_get_enum_double" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xeed2b076, "snd_soc_dapm_put_volsw" },
	{ 0x93426ecd, "device_property_read_string" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0xb5c3f9fb, "snd_soc_component_update_bits" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0xd440bca4, "dapm_regulator_event" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x117767ca, "snd_soc_dapm_get_volsw" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x9545453e, "snd_soc_dapm_get_enum_double" },
	{ 0xe44c1728, "__pm_runtime_use_autosuspend" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c,snd-pcm");

MODULE_ALIAS("of:N*T*Cdlg,da7212");
MODULE_ALIAS("of:N*T*Cdlg,da7212C*");
MODULE_ALIAS("of:N*T*Cdlg,da7213");
MODULE_ALIAS("of:N*T*Cdlg,da7213C*");
MODULE_ALIAS("i2c:da7213");

MODULE_INFO(srcversion, "CB06E8CEF90DE0A018C055F");
