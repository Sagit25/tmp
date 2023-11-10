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
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5ec2c5ad, "v4l2_device_disconnect" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x973151f0, "v4l2_device_put" },
	{ 0xcc793c4a, "module_put" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x663b757a, "video_devdata" },
	{ 0xf30730d, "v4l2_subdev_call_wrappers" },
	{ 0xdcb764ad, "memset" },
	{ 0x48f139e6, "regmap_bulk_write" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfcbcca79, "_dev_notice" },
	{ 0xdd64e639, "strscpy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x1425e33, "try_module_get" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf8fcc56c, "vb2_vmalloc_memops" },
	{ 0x8e8b29e5, "vb2_queue_init" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x9e1e6959, "v4l2_ctrl_auto_cluster" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xf30a51a3, "v4l2_ctrl_add_handler" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0xa99b173d, "v4l2_ctrl_find" },
	{ 0x15c074e1, "v4l2_ctrl_g_ctrl" },
	{ 0x62d2a046, "__v4l2_ctrl_s_ctrl" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0x5b3a0411, "vb2_fop_read" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0xbcec384c, "vb2_fop_release" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0x61cd22a1, "vb2_ioctl_create_bufs" },
	{ 0x751c5e55, "vb2_ioctl_prepare_buf" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0xba5e6261, "v4l2_ctrl_log_status" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,videobuf2-common,videobuf2-vmalloc,videobuf2-v4l2");


MODULE_INFO(srcversion, "3C3CF2A3E06686DF12937EB");
