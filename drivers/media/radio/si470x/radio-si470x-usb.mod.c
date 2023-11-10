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
	{ 0x63230d82, "usb_register_driver" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xe7de4757, "si470x_start" },
	{ 0x2b3bd22e, "v4l2_ctrl_handler_setup" },
	{ 0xe2964344, "__wake_up" },
	{ 0xa6257a2f, "complete" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xc3ef54c5, "si470x_stop" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5ec2c5ad, "v4l2_device_disconnect" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x973151f0, "v4l2_device_put" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xbc0e3807, "v4l2_fh_release" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x663b757a, "video_devdata" },
	{ 0xdd64e639, "strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x6a279527, "si470x_ctrl_ops" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x1c6ea5ea, "si470x_viddev_template" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x91bb0f4d, "si470x_set_freq" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xd9653b2f, "param_ops_ushort" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "radio-si470x-common,videodev");

MODULE_ALIAS("usb:v10C4p818Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v06E1pA155d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v1B80pD700d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v10C5p819Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v12CFp7111d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "E24DA74E9612CD95461E287");
