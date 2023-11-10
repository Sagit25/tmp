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
	{ 0xdd64e639, "strscpy" },
	{ 0x663b757a, "video_devdata" },
	{ 0x3855cb2a, "v4l2_fh_is_singular" },
	{ 0xbc0e3807, "v4l2_fh_release" },
	{ 0xc3ef54c5, "si470x_stop" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0xe7de4757, "si470x_start" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0xcbca3a1f, "gpiod_set_value" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xa6257a2f, "complete" },
	{ 0xe2964344, "__wake_up" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x6a279527, "si470x_ctrl_ops" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x1c6ea5ea, "si470x_viddev_template" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x91bb0f4d, "si470x_set_freq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xd9653b2f, "param_ops_ushort" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,radio-si470x-common");

MODULE_ALIAS("of:N*T*Csilabs,si470x");
MODULE_ALIAS("of:N*T*Csilabs,si470xC*");
MODULE_ALIAS("i2c:si470x");

MODULE_INFO(srcversion, "F22C9DD74ECBE3DAE0DE921");
