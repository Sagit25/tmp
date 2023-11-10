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
	{ 0x46d83af6, "v4l2_async_unregister_subdev" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0xe52de225, "regulator_enable" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0x21680411, "v4l2_i2c_subdev_init" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5d45c6fc, "regulator_register_notifier" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x92639471, "v4l2_async_register_subdev" },
	{ 0x6a02f636, "regulator_unregister_notifier" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "v4l2-async,videodev,mc");

MODULE_ALIAS("of:N*T*Cadi,ad5398");
MODULE_ALIAS("of:N*T*Cadi,ad5398C*");
MODULE_ALIAS("i2c:ad5398");

MODULE_INFO(srcversion, "E08EA1062DF45BE32611E2E");
