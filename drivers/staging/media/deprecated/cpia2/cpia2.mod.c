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

MODULE_INFO(staging, "Y");


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xc4ef58d, "v4l2_ctrl_poll" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x973151f0, "v4l2_device_put" },
	{ 0x76f0cd8e, "vmalloc_to_page" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x74a05018, "request_firmware" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x4829a47e, "memcpy" },
	{ 0x819df5d2, "remap_pfn_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x92997ed8, "_printk" },
	{ 0x2b3bd22e, "v4l2_ctrl_handler_setup" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x67a41807, "__v4l2_ctrl_grab" },
	{ 0x5dc59ae6, "v4l2_ctrl_new_custom" },
	{ 0x3855cb2a, "v4l2_fh_is_singular" },
	{ 0xbc0e3807, "v4l2_fh_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xdcb764ad, "memset" },
	{ 0x5ec2c5ad, "v4l2_device_disconnect" },
	{ 0x390eb7ec, "v4l2_ctrl_new_std_menu" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xdd64e639, "strscpy" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0x61c51a7b, "v4l2_ctrl_cluster" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v0553p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0553p0140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0553p0151d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "18A16F3BA9DFFF1049D86AA");
