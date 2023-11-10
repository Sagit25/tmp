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
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0x858e48ec, "drm_panel_remove" },
	{ 0xdcb764ad, "memset" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x214f6bab, "of_match_node" },
	{ 0x1cc54447, "drm_panel_init" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe9e7c6aa, "drm_panel_of_backlight" },
	{ 0x7234209d, "drm_panel_add" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xd0b9b98d, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x76aa5977, "drm_mode_probed_add" },
	{ 0xbdac567a, "drm_display_info_set_bus_formats" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0xe52de225, "regulator_enable" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("spi:txw397017s2");
MODULE_ALIAS("spi:ili9806e");
MODULE_ALIAS("spi:hyperpixel4");
MODULE_ALIAS("of:N*T*Ctxw,txw397017s2");
MODULE_ALIAS("of:N*T*Ctxw,txw397017s2C*");
MODULE_ALIAS("of:N*T*Cpimoroni,hyperpixel4");
MODULE_ALIAS("of:N*T*Cpimoroni,hyperpixel4C*");
MODULE_ALIAS("of:N*T*Cilitek,ili9806e");
MODULE_ALIAS("of:N*T*Cilitek,ili9806eC*");

MODULE_INFO(srcversion, "3AA7721B996170C9B652966");
