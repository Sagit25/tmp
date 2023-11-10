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
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xe52de225, "regulator_enable" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6a02f636, "regulator_unregister_notifier" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x46d83af6, "v4l2_async_unregister_subdev" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x63a66ce1, "devm_regulator_get_optional" },
	{ 0x5d45c6fc, "regulator_register_notifier" },
	{ 0xe608d17c, "i2c_of_match_device" },
	{ 0x21680411, "v4l2_i2c_subdev_init" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x92639471, "v4l2_async_register_subdev" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "v4l2-async,videodev,mc");

MODULE_ALIAS("of:N*T*Cdongwoon,dw9807-vcm");
MODULE_ALIAS("of:N*T*Cdongwoon,dw9807-vcmC*");
MODULE_ALIAS("of:N*T*Cdongwoon,dw9817-vcm");
MODULE_ALIAS("of:N*T*Cdongwoon,dw9817-vcmC*");

MODULE_INFO(srcversion, "1F6C21AE82A3684591E1B1D");
