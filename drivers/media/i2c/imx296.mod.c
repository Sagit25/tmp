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
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x796376c1, "gpiod_direction_output" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3abc95, "regmap_raw_write" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cfe2b3a, "__v4l2_ctrl_modify_range" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x46d83af6, "v4l2_async_unregister_subdev" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0xdcb764ad, "memset" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x897dc934, "of_device_get_match_data" },
	{ 0x21680411, "v4l2_i2c_subdev_init" },
	{ 0x6a17c0eb, "v4l2_fwnode_device_parse" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0xd847f4f4, "v4l2_ctrl_new_std_menu_items" },
	{ 0x2c4c746b, "v4l2_ctrl_new_fwnode_properties" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x98702fb2, "__v4l2_subdev_init_finalize" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0x92639471, "v4l2_async_register_subdev" },
	{ 0xd47ccf38, "pm_runtime_set_autosuspend_delay" },
	{ 0xe44c1728, "__pm_runtime_use_autosuspend" },
	{ 0xa3615400, "__pm_runtime_suspend" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xc047d9e, "regmap_raw_read" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x17bcae08, "__v4l2_ctrl_handler_setup" },
	{ 0x67a41807, "__v4l2_ctrl_grab" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,v4l2-async,regmap-i2c,v4l2-fwnode,mc");

MODULE_ALIAS("of:N*T*Csony,imx296");
MODULE_ALIAS("of:N*T*Csony,imx296C*");
MODULE_ALIAS("of:N*T*Csony,imx296ll");
MODULE_ALIAS("of:N*T*Csony,imx296llC*");
MODULE_ALIAS("of:N*T*Csony,imx296lq");
MODULE_ALIAS("of:N*T*Csony,imx296lqC*");

MODULE_INFO(srcversion, "518540A4ABBF3F5B7E350DE");
