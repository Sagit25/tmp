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
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x92997ed8, "_printk" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x663b757a, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x62d2a046, "__v4l2_ctrl_s_ctrl" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x999e8297, "vfree" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x5ec2c5ad, "v4l2_device_disconnect" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x74a05018, "request_firmware" },
	{ 0xec80a4a6, "usb_reset_device" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x5dc59ae6, "v4l2_ctrl_new_custom" },
	{ 0xf8fcc56c, "vb2_vmalloc_memops" },
	{ 0x8e8b29e5, "vb2_queue_init" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0x5b3a0411, "vb2_fop_read" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0xbcec384c, "vb2_fop_release" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0xba5e6261, "v4l2_ctrl_log_status" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,videobuf2-common,videobuf2-vmalloc,videobuf2-v4l2");

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6FE0135517C909431A9F37F");
