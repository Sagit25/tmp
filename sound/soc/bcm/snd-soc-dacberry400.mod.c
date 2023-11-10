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
	{ 0xb882b19b, "of_node_put" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x30defdbb, "snd_soc_component_read" },
	{ 0x39fc2458, "snd_soc_dai_set_sysclk" },
	{ 0x280892e9, "snd_soc_component_write" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x76b45c4f, "snd_soc_dapm_get_pin_switch" },
	{ 0xac72dfe2, "snd_soc_dai_set_bclk_ratio" },
	{ 0x9b7126c, "snd_soc_get_pcm_runtime" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0x8409b00f, "snd_soc_unregister_card" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x54975a83, "snd_soc_dapm_put_pin_switch" },
	{ 0x652d8085, "snd_soc_dapm_info_pin_switch" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Cosaelectronics,dacberry400");
MODULE_ALIAS("of:N*T*Cosaelectronics,dacberry400C*");

MODULE_INFO(srcversion, "0988032C7D18375445741C5");
