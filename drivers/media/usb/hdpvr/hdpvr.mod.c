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
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xc4ef58d, "v4l2_ctrl_poll" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4a39b3dd, "v4l2_fh_add" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x92997ed8, "_printk" },
	{ 0x2b3bd22e, "v4l2_ctrl_handler_setup" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0xbc0e3807, "v4l2_fh_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x1978b9b2, "v4l2_fh_init" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xab2cc6c2, "i2c_new_client_device" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x5ec2c5ad, "v4l2_device_disconnect" },
	{ 0x390eb7ec, "v4l2_ctrl_new_std_menu" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0xdd64e639, "strscpy" },
	{ 0x57529704, "v4l2_ctrl_activate" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xba5e6261, "v4l2_ctrl_log_status" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x61c51a7b, "v4l2_ctrl_cluster" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,v4l2-dv-timings");

MODULE_ALIAS("usb:v2040p4900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4982d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4903d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "23C9E7CDF1EB5BFB3A704F3");
