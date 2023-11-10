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
	{ 0x5a05543e, "snd_soc_register_card" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x2de9868, "snd_soc_limit_volume" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x9b7126c, "snd_soc_get_pcm_runtime" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0x8409b00f, "snd_soc_unregister_card" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-dac");
MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-dacC*");

MODULE_INFO(srcversion, "2CE44258FC8AF3C4626D48E");
