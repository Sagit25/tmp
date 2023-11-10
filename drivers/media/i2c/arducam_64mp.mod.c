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
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5afbcb01, "pm_runtime_get_if_active" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0x6cfe2b3a, "__v4l2_ctrl_modify_range" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x62d2a046, "__v4l2_ctrl_s_ctrl" },
	{ 0x46d83af6, "v4l2_async_unregister_subdev" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0x67a41807, "__v4l2_ctrl_grab" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x17bcae08, "__v4l2_ctrl_handler_setup" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x21680411, "v4l2_i2c_subdev_init" },
	{ 0x209009ac, "of_match_device" },
	{ 0xdcb764ad, "memset" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0x632f2d27, "fwnode_graph_get_next_endpoint" },
	{ 0x9095f28, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0xb5d05c79, "v4l2_fwnode_endpoint_free" },
	{ 0x1d877bf, "fwnode_handle_put" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xcc943aad, "i2c_new_dummy_device" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x742ca250, "i2c_unregister_device" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0xd847f4f4, "v4l2_ctrl_new_std_menu_items" },
	{ 0x6a17c0eb, "v4l2_fwnode_device_parse" },
	{ 0x2c4c746b, "v4l2_ctrl_new_fwnode_properties" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x6fd3de17, "v4l2_async_register_subdev_sensor" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x89a1e456, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x2c766c04, "v4l2_event_subdev_unsubscribe" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,v4l2-async,v4l2-fwnode,mc");

MODULE_ALIAS("of:N*T*Carducam,64mp");
MODULE_ALIAS("of:N*T*Carducam,64mpC*");

MODULE_INFO(srcversion, "7EECFB2B73D40ACED2104A0");
