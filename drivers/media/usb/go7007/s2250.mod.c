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
	{ 0x21680411, "v4l2_i2c_subdev_init" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc943aad, "i2c_new_dummy_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xe32420d8, "v4l2_device_unregister_subdev" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x742ca250, "i2c_unregister_device" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5118dfb, "v4l2_ctrl_subdev_log_status" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:s2250");

MODULE_INFO(srcversion, "8230AA4F8523DF0001BC114");
