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
	{ 0x63230d82, "usb_register_driver" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x92997ed8, "_printk" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x5ec2c5ad, "v4l2_device_disconnect" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x973151f0, "v4l2_device_put" },
	{ 0x26e0e31d, "videobuf_vmalloc_free" },
	{ 0x9a200be6, "videobuf_iolock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x663b757a, "video_devdata" },
	{ 0xdb809a13, "videobuf_streamoff" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd81d5a0d, "videobuf_dqbuf" },
	{ 0x5b3f48d7, "videobuf_qbuf" },
	{ 0xc53ab7e, "videobuf_querybuf" },
	{ 0x6e7170af, "videobuf_reqbufs" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x41364638, "videobuf_mmap_mapper" },
	{ 0xc4ef58d, "v4l2_ctrl_poll" },
	{ 0x5ecf7424, "videobuf_poll_stream" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x6175abac, "videobuf_mmap_free" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xbc0e3807, "v4l2_fh_release" },
	{ 0x4a11aa8b, "videobuf_queue_is_busy" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x2b3bd22e, "v4l2_ctrl_handler_setup" },
	{ 0xe7274494, "videobuf_streamon" },
	{ 0x9e794242, "videobuf_read_one" },
	{ 0x4829a47e, "memcpy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x63b160e5, "videobuf_to_vmalloc" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x72977ede, "videobuf_queue_vmalloc_init" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0xba5e6261, "v4l2_ctrl_log_status" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,videobuf-vmalloc,videobuf-core");

MODULE_ALIAS("usb:v08CAp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p3108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB0p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FEBp2004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpB500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1A18d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04C8p0729d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pA208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0784p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p004Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep405Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4208E48B2B1459D9A11118E");
