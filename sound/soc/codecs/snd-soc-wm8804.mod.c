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

SYMBOL_CRC(wm8804_regmap_config, 0x2dc5d4ea, "_gpl");
SYMBOL_CRC(wm8804_probe, 0x22024878, "_gpl");
SYMBOL_CRC(wm8804_remove, 0x5bb63102, "_gpl");
SYMBOL_CRC(wm8804_pm, 0x06fbb787, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbfb5bed4, "regcache_sync" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x30defdbb, "snd_soc_component_read" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x29b0ee76, "snd_soc_component_test_bits" },
	{ 0x80e32692, "regcache_mark_dirty" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x280892e9, "snd_soc_component_write" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0xbbfa5870, "devm_regulator_register_notifier" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1fe5d58b, "snd_soc_dapm_kcontrol_dapm" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xb5c3f9fb, "snd_soc_component_update_bits" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x9545453e, "snd_soc_dapm_get_enum_double" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "2440C58352D89D0BCFE3007");
