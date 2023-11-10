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
	{ 0x8e8b29e5, "vb2_queue_init" },
	{ 0xefabe1da, "input_allocate_device" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x973151f0, "v4l2_device_put" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcb319d8, "usb_ifnum_to_if" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0xa951a544, "dma_unmap_page_attrs" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x631baa5b, "dma_sync_single_for_device" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x9e1e6959, "v4l2_ctrl_auto_cluster" },
	{ 0x32d43420, "v4l2_ctrl_get_name" },
	{ 0x2345d009, "input_free_device" },
	{ 0x13753f07, "dma_map_page_attrs" },
	{ 0x92997ed8, "_printk" },
	{ 0xf1564295, "input_register_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0xbcec384c, "vb2_fop_release" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x5dc59ae6, "v4l2_ctrl_new_custom" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5a7bab55, "usb_string" },
	{ 0x271438e, "dma_sync_single_for_cpu" },
	{ 0xf8fcc56c, "vb2_vmalloc_memops" },
	{ 0xdcb764ad, "memset" },
	{ 0x5ec2c5ad, "v4l2_device_disconnect" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x390eb7ec, "v4l2_ctrl_new_std_menu" },
	{ 0x441916ec, "input_event" },
	{ 0x5b3a0411, "vb2_fop_read" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x999e8297, "vfree" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0xba5e6261, "v4l2_ctrl_log_status" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xb0f671c4, "usb_altnum_to_altsetting" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0x61c51a7b, "v4l2_ctrl_cluster" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc");

MODULE_ALIAS("usb:v041Ep400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p032Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CCp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1910d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D8F9BDB4B1DD7582B52A8B5");
