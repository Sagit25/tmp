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
	{ 0xdc81a946, "mipi_dsi_driver_register_full" },
	{ 0x7aee5690, "mipi_dsi_detach" },
	{ 0x858e48ec, "drm_panel_remove" },
	{ 0xd0b9b98d, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x76aa5977, "drm_mode_probed_add" },
	{ 0x8045c8cb, "drm_connector_set_panel_orientation" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x36844bbd, "mipi_dsi_dcs_enter_sleep_mode" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0xb6e8f80, "mipi_dsi_dcs_set_display_off" },
	{ 0xf9a482f9, "msleep" },
	{ 0x51523225, "mipi_dsi_dcs_set_display_on" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x897dc934, "of_device_get_match_data" },
	{ 0x1cc54447, "drm_panel_init" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xc6ba5f54, "of_drm_get_panel_orientation" },
	{ 0xe9e7c6aa, "drm_panel_of_backlight" },
	{ 0x7234209d, "drm_panel_add" },
	{ 0xa4db7fd1, "mipi_dsi_attach" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xca5f14d5, "mipi_dsi_driver_unregister" },
	{ 0xe52de225, "regulator_enable" },
	{ 0x3b1cfc58, "mipi_dsi_dcs_write_buffer" },
	{ 0x6a1c309d, "mipi_dsi_dcs_set_tear_on" },
	{ 0xf1aa6539, "mipi_dsi_dcs_exit_sleep_mode" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("of:N*T*Cbananapi,lhr050h41");
MODULE_ALIAS("of:N*T*Cbananapi,lhr050h41C*");
MODULE_ALIAS("of:N*T*Cfeixin,k101-im2byl02");
MODULE_ALIAS("of:N*T*Cfeixin,k101-im2byl02C*");
MODULE_ALIAS("of:N*T*Cnwe,nwe080");
MODULE_ALIAS("of:N*T*Cnwe,nwe080C*");
MODULE_ALIAS("of:N*T*Cwanchanglong,w552946aba");
MODULE_ALIAS("of:N*T*Cwanchanglong,w552946abaC*");
MODULE_ALIAS("of:N*T*Ccrystalfontz,cfaf7201280a0_050tx");
MODULE_ALIAS("of:N*T*Ccrystalfontz,cfaf7201280a0_050txC*");

MODULE_INFO(srcversion, "801BD929EB1835219C23239");
