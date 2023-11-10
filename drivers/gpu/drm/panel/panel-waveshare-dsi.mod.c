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
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x858e48ec, "drm_panel_remove" },
	{ 0xd0b9b98d, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x76aa5977, "drm_mode_probed_add" },
	{ 0xbdac567a, "drm_display_info_set_bus_formats" },
	{ 0x8045c8cb, "drm_connector_set_panel_orientation" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x4a13b6b6, "i2c_smbus_write_byte_data" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x897dc934, "of_device_get_match_data" },
	{ 0xc6ba5f54, "of_drm_get_panel_orientation" },
	{ 0x3c5dae42, "of_graph_get_next_endpoint" },
	{ 0xa181e5c2, "of_graph_get_remote_port_parent" },
	{ 0xe3e5296c, "of_find_mipi_dsi_host_by_node" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x562c64ed, "of_graph_get_remote_port" },
	{ 0xc8938eb4, "devm_mipi_dsi_device_register_full" },
	{ 0x1cc54447, "drm_panel_init" },
	{ 0xd7b797db, "devm_backlight_device_register" },
	{ 0x7234209d, "drm_panel_add" },
	{ 0xc54394c6, "devm_mipi_dsi_attach" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm,backlight");

MODULE_ALIAS("of:N*T*Cwaveshare,2.8inch-panel");
MODULE_ALIAS("of:N*T*Cwaveshare,2.8inch-panelC*");
MODULE_ALIAS("of:N*T*Cwaveshare,3.4inch-panel");
MODULE_ALIAS("of:N*T*Cwaveshare,3.4inch-panelC*");
MODULE_ALIAS("of:N*T*Cwaveshare,4.0inch-panel");
MODULE_ALIAS("of:N*T*Cwaveshare,4.0inch-panelC*");
MODULE_ALIAS("of:N*T*Cwaveshare,7.0inch-c-panel");
MODULE_ALIAS("of:N*T*Cwaveshare,7.0inch-c-panelC*");
MODULE_ALIAS("of:N*T*Cwaveshare,7.9inch-panel");
MODULE_ALIAS("of:N*T*Cwaveshare,7.9inch-panelC*");
MODULE_ALIAS("of:N*T*Cwaveshare,8.0inch-panel");
MODULE_ALIAS("of:N*T*Cwaveshare,8.0inch-panelC*");
MODULE_ALIAS("of:N*T*Cwaveshare,10.1inch-panel");
MODULE_ALIAS("of:N*T*Cwaveshare,10.1inch-panelC*");
MODULE_ALIAS("of:N*T*Cwaveshare,11.9inch-panel");
MODULE_ALIAS("of:N*T*Cwaveshare,11.9inch-panelC*");

MODULE_INFO(srcversion, "0B0A17E138F28A8A186BF81");
