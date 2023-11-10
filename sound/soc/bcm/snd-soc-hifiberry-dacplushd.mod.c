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
	{ 0x5ad52587, "gpiod_get" },
	{ 0x9a8a544a, "gpiod_put" },
	{ 0xcbca3a1f, "gpiod_set_value" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xac72dfe2, "snd_soc_dai_set_bclk_ratio" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0xb413832c, "snd_pcm_hw_constraint_list" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x51ed317e, "devm_snd_soc_register_card" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplushd");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplushdC*");

MODULE_INFO(srcversion, "910CE419916AF12DA68D93D");
