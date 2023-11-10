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
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x46d83af6, "v4l2_async_unregister_subdev" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x89df96d0, "devm_regulator_bulk_get" },
	{ 0x21680411, "v4l2_i2c_subdev_init" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x92639471, "v4l2_async_register_subdev" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf5561726, "regulator_bulk_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb2799695, "regulator_bulk_disable" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "v4l2-async,videodev,mc");

MODULE_ALIAS("of:N*T*Casahi-kasei,ak7375");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak7375C*");

MODULE_INFO(srcversion, "E0EB24D3D1BCE27430691ED");
