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
	{ 0x4bca5638, "v4l2_fh_exit" },
	{ 0x9fa99cd4, "vb2_dma_sg_memops" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xd55b3931, "vb2_streamoff" },
	{ 0x4c4a5bde, "config_group_find_item" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x7cc57f43, "vb2_queue_release" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xf60b4b75, "vb2_poll" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xb260b3a7, "v4l2_fh_del" },
	{ 0x14050dae, "usb_interface_id" },
	{ 0x4a39b3dd, "v4l2_fh_add" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xad5c3c93, "v4l2_simplify_fraction" },
	{ 0x37a0cba, "kfree" },
	{ 0x1a5c9022, "vb2_dqbuf" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0xd5d214b7, "vb2_reqbufs" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xb313877b, "config_ep_by_speed" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x92997ed8, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0xa81885a7, "vb2_streamon" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0x9a6a07f1, "vb2_plane_cookie" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0xfa69a22d, "usb_composite_setup_continue" },
	{ 0x829925fd, "usb_function_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x1c6136ce, "vb2_querybuf" },
	{ 0xb7c0f443, "sort" },
	{ 0xe3d3a01f, "config_group_init_type_name" },
	{ 0xdc7c8cb3, "vb2_qbuf" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x1978b9b2, "v4l2_fh_init" },
	{ 0x3389d953, "usb_ep_autoconfig" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbec9a23c, "v4l2_event_subscribe" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x68e6942f, "usb_put_function_instance" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xf8fcc56c, "vb2_vmalloc_memops" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x6ccbbd78, "usb_function_activate" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4125292c, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0xdd64e639, "strscpy" },
	{ 0x9be73f7e, "usb_gadget_frame_number" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcbad1871, "config_item_init_type_name" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf0b55e33, "config_item_put" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x18da83af, "vb2_mmap" },
	{ 0x21b68677, "v4l2_event_queue" },
	{ 0x98cf60b3, "strlen" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0x8212fa83, "usb_free_all_descriptors" },
	{ 0xd143eaea, "usb_gstrings_attach" },
	{ 0x9635230f, "usb_ep_autoconfig_ss" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xbb341d7a, "usb_function_deactivate" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-dma-sg,libcomposite,videobuf2-common,videobuf2-vmalloc");


MODULE_INFO(srcversion, "09D584717B178C76883359F");
