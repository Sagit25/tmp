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
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x663b757a, "video_devdata" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xdd64e639, "strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x5ec2c5ad, "v4l2_device_disconnect" },
	{ 0x973151f0, "v4l2_device_put" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xc4ef58d, "v4l2_ctrl_poll" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0xbc0e3807, "v4l2_fh_release" },
	{ 0xba5e6261, "v4l2_ctrl_log_status" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v07CApB800d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "89B72697D7C1E9F76936C5D");
