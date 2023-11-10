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
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x5c407196, "snd_pcm_fill_iec958_consumer_hw_params" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x4ac4929f, "snd_ctl_add" },
	{ 0x663cc0ce, "snd_soc_jack_report" },
	{ 0xd2e5e313, "snd_pcm_add_chmap_ctls" },
	{ 0xb14ab1ef, "hdmi_audio_infoframe_init" },
	{ 0x5cd65165, "snd_pcm_fill_iec958_consumer" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x649892e8, "snd_pcm_create_iec958_consumer_default" },
	{ 0x276c036d, "snd_ctl_new1" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x622b1adf, "snd_soc_dapm_add_routes" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xfa38d847, "snd_pcm_hw_constraint_eld" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-soc-core");


MODULE_INFO(srcversion, "F8CCAC8D0F8C67802FA4EE7");
