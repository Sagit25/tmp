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
	{ 0xb26e53b2, "regmap_write" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xc226ac1b, "devm_platform_get_and_ioremap_resource" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0xe7df0c51, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x708c999d, "__devm_regmap_init_mmio_clk" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8cc18dfc, "devm_snd_dmaengine_pcm_register" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xfa0e45fe, "snd_soc_dai_active" },
	{ 0x815588a6, "clk_enable" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2s");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2sC*");

MODULE_INFO(srcversion, "85FF1E4550BAC3387E807E4");
