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
	{ 0xcbca3a1f, "gpiod_set_value" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0xfd96c75e, "drm_bridge_remove" },
	{ 0x74291057, "i2c_put_adapter" },
	{ 0x24f62e8f, "drm_get_edid" },
	{ 0x491c24d3, "drm_atomic_get_new_bridge_state" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x38baa1bc, "gpiod_get_value_cansleep" },
	{ 0xe679107b, "drm_probe_ddc" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x897dc934, "of_device_get_match_data" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0x78f1ef1a, "drm_bridge_add" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0x22e18bf, "of_get_i2c_adapter_by_node" },
	{ 0xb882b19b, "of_node_put" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x63a66ce1, "devm_regulator_get_optional" },
	{ 0xe52de225, "regulator_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf3fb621b, "drm_bridge_hpd_notify" },
	{ 0xc667e36e, "drm_atomic_helper_bridge_duplicate_state" },
	{ 0x5b612b07, "drm_atomic_helper_bridge_destroy_state" },
	{ 0xe56600f7, "drm_atomic_helper_bridge_reset" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("of:N*T*Ccomposite-video-connector");
MODULE_ALIAS("of:N*T*Ccomposite-video-connectorC*");
MODULE_ALIAS("of:N*T*Cdvi-connector");
MODULE_ALIAS("of:N*T*Cdvi-connectorC*");
MODULE_ALIAS("of:N*T*Chdmi-connector");
MODULE_ALIAS("of:N*T*Chdmi-connectorC*");
MODULE_ALIAS("of:N*T*Csvideo-connector");
MODULE_ALIAS("of:N*T*Csvideo-connectorC*");
MODULE_ALIAS("of:N*T*Cvga-connector");
MODULE_ALIAS("of:N*T*Cvga-connectorC*");
MODULE_ALIAS("of:N*T*Cdp-connector");
MODULE_ALIAS("of:N*T*Cdp-connectorC*");

MODULE_INFO(srcversion, "2EFCBFF1AC39F68439E79F9");
