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
	{ 0x39fc2458, "snd_soc_dai_set_sysclk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xac72dfe2, "snd_soc_dai_set_bclk_ratio" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0xb413832c, "snd_pcm_hw_constraint_list" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x51ed317e, "devm_snd_soc_register_card" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Crpi,rpi-proto");
MODULE_ALIAS("of:N*T*Crpi,rpi-protoC*");

MODULE_INFO(srcversion, "11865359AEBFE55EA8B5312");
