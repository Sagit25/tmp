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

SYMBOL_CRC(cs4271_dt_ids, 0x7d05786f, "_gpl");
SYMBOL_CRC(cs4271_regmap_config, 0xe6c4f3a4, "_gpl");
SYMBOL_CRC(cs4271_probe, 0x3204afe6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbfb5bed4, "regcache_sync" },
	{ 0x9a057658, "devm_gpio_request" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x86bd853, "gpiod_set_raw_value" },
	{ 0x80e32692, "regcache_mark_dirty" },
	{ 0x1dac9fc8, "of_get_property" },
	{ 0xb82fe302, "of_get_named_gpio_flags" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0xbc825a83, "snd_ctl_boolean_mono_info" },
	{ 0x209009ac, "of_match_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x5f0265b, "gpiod_direction_output_raw" },
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0x91f68aa2, "snd_soc_get_volsw" },
	{ 0xc53238b5, "snd_soc_put_volsw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Ccirrus,cs4271");
MODULE_ALIAS("of:N*T*Ccirrus,cs4271C*");

MODULE_INFO(srcversion, "9607B02B5F0C7267CA317C3");
