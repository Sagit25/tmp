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
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x645a9dd8, "snd_soc_dai_set_tdm_slot" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x81faf72f, "snd_soc_component_set_sysclk" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x280892e9, "snd_soc_component_write" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xac72dfe2, "snd_soc_dai_set_bclk_ratio" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0x214f6bab, "of_match_node" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x51ed317e, "devm_snd_soc_register_card" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Cadi,adau1977-adc");
MODULE_ALIAS("of:N*T*Cadi,adau1977-adcC*");
MODULE_ALIAS("of:N*T*Cgooglevoicehat,googlevoicehat-soundcard");
MODULE_ALIAS("of:N*T*Cgooglevoicehat,googlevoicehat-soundcardC*");
MODULE_ALIAS("of:N*T*Chifiberrydacplusdsp,hifiberrydacplusdsp-soundcard");
MODULE_ALIAS("of:N*T*Chifiberrydacplusdsp,hifiberrydacplusdsp-soundcardC*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-amp");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-ampC*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-amp3");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-amp3C*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dac");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacC*");
MODULE_ALIAS("of:N*T*Cdionaudio,dionaudio-kiwi");
MODULE_ALIAS("of:N*T*Cdionaudio,dionaudio-kiwiC*");
MODULE_ALIAS("of:N*T*Crpi,rpi-dac");
MODULE_ALIAS("of:N*T*Crpi,rpi-dacC*");
MODULE_ALIAS("of:N*T*Cmerus,merus-amp");
MODULE_ALIAS("of:N*T*Cmerus,merus-ampC*");
MODULE_ALIAS("of:N*T*Cpifi,pifi-mini-210");
MODULE_ALIAS("of:N*T*Cpifi,pifi-mini-210C*");

MODULE_INFO(srcversion, "6689310FE9BF4FCAE196F95");
