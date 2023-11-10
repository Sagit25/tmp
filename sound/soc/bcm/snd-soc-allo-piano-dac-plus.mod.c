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
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe11aef15, "snd_soc_card_get_kcontrol" },
	{ 0x5a05543e, "snd_soc_register_card" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x2de9868, "snd_soc_limit_volume" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x30defdbb, "snd_soc_component_read" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x74a05018, "request_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xfd5957ab, "snd_ctl_remove" },
	{ 0x280892e9, "snd_soc_component_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x9b7126c, "snd_soc_get_pcm_runtime" },
	{ 0xeaa1a4f3, "snd_soc_info_volsw" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0x8409b00f, "snd_soc_unregister_card" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Callo,piano-dac-plus");
MODULE_ALIAS("of:N*T*Callo,piano-dac-plusC*");

MODULE_INFO(srcversion, "28323AB0725FEF964C853C3");
