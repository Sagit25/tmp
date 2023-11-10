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

SYMBOL_CRC(tm6000_xc5000_callback, 0x2309a6d6, "_gpl");
SYMBOL_CRC(tm6000_tuner_callback, 0xdff8e89d, "_gpl");
SYMBOL_CRC(tm6000_set_reg, 0x8d4b2ac1, "_gpl");
SYMBOL_CRC(tm6000_get_reg, 0x3af84226, "_gpl");
SYMBOL_CRC(tm6000_set_reg_mask, 0x56f41b0a, "_gpl");
SYMBOL_CRC(tm6000_init_digital_mode, 0xd9c6a64c, "");
SYMBOL_CRC(tm6000_set_audio_bitrate, 0x20d3d64f, "_gpl");
SYMBOL_CRC(tm6000_register_extension, 0x656a32cd, "");
SYMBOL_CRC(tm6000_unregister_extension, 0x13dbd0f0, "");
SYMBOL_CRC(tm6000_debug, 0x89b611dd, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdb809a13, "videobuf_streamoff" },
	{ 0x4bca5638, "v4l2_fh_exit" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xc4ef58d, "v4l2_ctrl_poll" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf30a51a3, "v4l2_ctrl_add_handler" },
	{ 0xb260b3a7, "v4l2_fh_del" },
	{ 0x4a39b3dd, "v4l2_fh_add" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x6e7170af, "videobuf_reqbufs" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd81d5a0d, "videobuf_dqbuf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x63b160e5, "videobuf_to_vmalloc" },
	{ 0x26e0e31d, "videobuf_vmalloc_free" },
	{ 0x92997ed8, "_printk" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x663b757a, "video_devdata" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0x1e61bbe3, "videobuf_read_stream" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x27af3192, "rc_register_device" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xc53ab7e, "videobuf_querybuf" },
	{ 0xdce846aa, "rc_keydown" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x1978b9b2, "v4l2_fh_init" },
	{ 0xd95a2e80, "v4l2_event_pending" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5b3f48d7, "videobuf_qbuf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x39e67c3f, "rc_free_device" },
	{ 0xdcb764ad, "memset" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b2e21d9, "rc_allocate_device" },
	{ 0x34ba1279, "usb_unlink_urb" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x9a200be6, "videobuf_iolock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xe7274494, "videobuf_streamon" },
	{ 0x41bc3488, "usb_reset_configuration" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x72977ede, "videobuf_queue_vmalloc_init" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8b863527, "v4l2_i2c_new_subdev" },
	{ 0x41364638, "videobuf_mmap_mapper" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d6f269d, "rc_unregister_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6175abac, "videobuf_mmap_free" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf-core,videodev,videobuf-vmalloc");

MODULE_ALIAS("usb:v6000p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pF332d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pB339d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0086d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3264d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EC2830F505D91177CC4017E");
