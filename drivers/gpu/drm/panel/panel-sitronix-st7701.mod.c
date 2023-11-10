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
	{ 0x3b1cfc58, "mipi_dsi_dcs_write_buffer" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7aee5690, "mipi_dsi_detach" },
	{ 0x858e48ec, "drm_panel_remove" },
	{ 0xd0b9b98d, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x76aa5977, "drm_mode_probed_add" },
	{ 0xbdac567a, "drm_display_info_set_bus_formats" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x897dc934, "of_device_get_match_data" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x1cc54447, "drm_panel_init" },
	{ 0xe9e7c6aa, "drm_panel_of_backlight" },
	{ 0x7234209d, "drm_panel_add" },
	{ 0xa4db7fd1, "mipi_dsi_attach" },
	{ 0xd0585d22, "spi_setup" },
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0xdc81a946, "mipi_dsi_driver_register_full" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xca5f14d5, "mipi_dsi_driver_unregister" },
	{ 0x5197b5c0, "mipi_dsi_dcs_write" },
	{ 0xdcb764ad, "memset" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0xcbca3a1f, "gpiod_set_value" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("spi:txw210001b0");
MODULE_ALIAS("spi:hyperpixel2round");
MODULE_ALIAS("of:N*T*Ctxw,txw210001b0");
MODULE_ALIAS("of:N*T*Ctxw,txw210001b0C*");
MODULE_ALIAS("of:N*T*Cpimoroni,hyperpixel2round");
MODULE_ALIAS("of:N*T*Cpimoroni,hyperpixel2roundC*");
MODULE_ALIAS("of:N*T*Cdensitron,dmt028vghmcmi-1a");
MODULE_ALIAS("of:N*T*Cdensitron,dmt028vghmcmi-1aC*");
MODULE_ALIAS("of:N*T*Ctechstar,ts8550b");
MODULE_ALIAS("of:N*T*Ctechstar,ts8550bC*");

MODULE_INFO(srcversion, "2571388BAFD66ED4351F36A");
