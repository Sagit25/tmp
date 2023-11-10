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
	{ 0xe914e41e, "strcpy" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x645a9dd8, "snd_soc_dai_set_tdm_slot" },
	{ 0x30defdbb, "snd_soc_component_read" },
	{ 0x468e478d, "snd_pcm_hw_constraint_minmax" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x81faf72f, "snd_soc_component_set_sysclk" },
	{ 0x39fc2458, "snd_soc_dai_set_sysclk" },
	{ 0x5d851d33, "snd_soc_dai_set_clkdiv" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xac72dfe2, "snd_soc_dai_set_bclk_ratio" },
	{ 0x9b7126c, "snd_soc_get_pcm_runtime" },
	{ 0xbc825a83, "snd_ctl_boolean_mono_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x1636a430, "snd_soc_component_set_pll" },
	{ 0x16ba4610, "snd_soc_info_enum_double" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xb5c3f9fb, "snd_soc_component_update_bits" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3e113a05, "snd_soc_dai_set_pll" },
	{ 0x9545453e, "snd_soc_dapm_get_enum_double" },
	{ 0x51ed317e, "devm_snd_soc_register_card" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd");

MODULE_ALIAS("of:N*T*Cwlf,rpi-cirrus");
MODULE_ALIAS("of:N*T*Cwlf,rpi-cirrusC*");

MODULE_INFO(srcversion, "923FC751286E458A8F9F4DA");
