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
	{ 0xd0b9b98d, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x76aa5977, "drm_mode_probed_add" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xd192ff7d, "mipi_dsi_dcs_get_display_brightness" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xac7c099e, "mipi_dsi_dcs_set_display_brightness" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0x63a87a6a, "devm_gpiod_get" },
	{ 0xd7b797db, "devm_backlight_device_register" },
	{ 0x1cc54447, "drm_panel_init" },
	{ 0x7234209d, "drm_panel_add" },
	{ 0xa4db7fd1, "mipi_dsi_attach" },
	{ 0x858e48ec, "drm_panel_remove" },
	{ 0xca5f14d5, "mipi_dsi_driver_unregister" },
	{ 0xb6e8f80, "mipi_dsi_dcs_set_display_off" },
	{ 0x36844bbd, "mipi_dsi_dcs_enter_sleep_mode" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x976c55c3, "mipi_dsi_dcs_soft_reset" },
	{ 0x933e90c, "mipi_dsi_dcs_set_pixel_format" },
	{ 0x565dd279, "mipi_dsi_dcs_set_column_address" },
	{ 0xe47fec6f, "mipi_dsi_dcs_set_page_address" },
	{ 0x5197b5c0, "mipi_dsi_dcs_write" },
	{ 0xf1aa6539, "mipi_dsi_dcs_exit_sleep_mode" },
	{ 0xdd53fed4, "mipi_dsi_generic_write" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x51523225, "mipi_dsi_dcs_set_display_on" },
	{ 0x7aee5690, "mipi_dsi_detach" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm,backlight");

MODULE_ALIAS("of:N*T*Cjdi,lt070me05000");
MODULE_ALIAS("of:N*T*Cjdi,lt070me05000C*");

MODULE_INFO(srcversion, "85CA3C7450202E5073C41B4");
