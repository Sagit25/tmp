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
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xfd96c75e, "drm_bridge_remove" },
	{ 0xe52de225, "regulator_enable" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0x49e14dc2, "drm_bridge_detect" },
	{ 0x44f7488e, "drm_bridge_get_edid" },
	{ 0xc43d74f5, "drm_connector_update_edid_property" },
	{ 0xe907aeae, "drm_add_edid_modes" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0xe885391e, "drm_add_modes_noedid" },
	{ 0x6de615a, "drm_set_preferred_mode" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x897dc934, "of_device_get_match_data" },
	{ 0xb9d6f93d, "of_graph_get_remote_node" },
	{ 0x188def5, "of_drm_find_bridge" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x63a66ce1, "devm_regulator_get_optional" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x78f1ef1a, "drm_bridge_add" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xc5c926dd, "drm_bridge_attach" },
	{ 0xd977825a, "drm_connector_init_with_ddc" },
	{ 0xd13bcc7f, "drm_connector_attach_encoder" },
	{ 0x5baf4462, "drm_atomic_helper_connector_reset" },
	{ 0x8740af9, "drm_helper_probe_single_connector_modes" },
	{ 0x6626ed76, "drm_connector_cleanup" },
	{ 0x85baa052, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xfd491fba, "drm_atomic_helper_connector_destroy_state" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("of:N*T*Cdumb-vga-dac");
MODULE_ALIAS("of:N*T*Cdumb-vga-dacC*");
MODULE_ALIAS("of:N*T*Cadi,adv7123");
MODULE_ALIAS("of:N*T*Cadi,adv7123C*");
MODULE_ALIAS("of:N*T*Cti,opa362");
MODULE_ALIAS("of:N*T*Cti,opa362C*");
MODULE_ALIAS("of:N*T*Cti,ths8135");
MODULE_ALIAS("of:N*T*Cti,ths8135C*");
MODULE_ALIAS("of:N*T*Cti,ths8134");
MODULE_ALIAS("of:N*T*Cti,ths8134C*");

MODULE_INFO(srcversion, "39F49C6E6AA6528B44A7386");
