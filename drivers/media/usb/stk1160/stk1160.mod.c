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
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x973151f0, "v4l2_device_put" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0x6d96795, "vb2_ioctl_expbuf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x682547e2, "dma_vunmap_noncontiguous" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x1809de45, "dma_sync_sg_for_cpu" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0xbcec384c, "vb2_fop_release" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x3b64bfce, "dma_vmap_noncontiguous" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf8fcc56c, "vb2_vmalloc_memops" },
	{ 0x58dc77b9, "dma_sync_sg_for_device" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x5ec2c5ad, "v4l2_device_disconnect" },
	{ 0x5b3a0411, "vb2_fop_read" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x60a6f476, "dma_free_noncontiguous" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7b0a4aa6, "dma_alloc_noncontiguous" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0xba5e6261, "v4l2_ctrl_log_status" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8b863527, "v4l2_i2c_new_subdev" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc");

MODULE_ALIAS("usb:v05E1p0408d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3B49C47C3ED0EE4DE2D3794");
