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

SYMBOL_CRC(gspca_debug, 0x9670af2c, "");
SYMBOL_CRC(gspca_frame_add, 0x2397e063, "");
SYMBOL_CRC(gspca_dev_probe2, 0x91f8bf52, "");
SYMBOL_CRC(gspca_dev_probe, 0x63367330, "");
SYMBOL_CRC(gspca_disconnect, 0x8ec4c104, "");
SYMBOL_CRC(gspca_suspend, 0x3e7ebd06, "");
SYMBOL_CRC(gspca_resume, 0x76d48bab, "");
SYMBOL_CRC(gspca_expo_autogain, 0x9a4f7d62, "");
SYMBOL_CRC(gspca_coarse_grained_expo_autogain, 0xbbd1ed1a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8e8b29e5, "vb2_queue_init" },
	{ 0xefabe1da, "input_allocate_device" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x973151f0, "v4l2_device_put" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0x6d96795, "vb2_ioctl_expbuf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcb319d8, "usb_ifnum_to_if" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2345d009, "input_free_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xdc6e08d5, "usb_clear_halt" },
	{ 0x2b3bd22e, "v4l2_ctrl_handler_setup" },
	{ 0xf1564295, "input_register_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0x20bcae4a, "vb2_queue_error" },
	{ 0xbcec384c, "vb2_fop_release" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x62d2a046, "__v4l2_ctrl_s_ctrl" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0x61cd22a1, "vb2_ioctl_create_bufs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf8fcc56c, "vb2_vmalloc_memops" },
	{ 0xdcb764ad, "memset" },
	{ 0x5ec2c5ad, "v4l2_device_disconnect" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5b3a0411, "vb2_fop_read" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0x15c074e1, "v4l2_ctrl_g_ctrl" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc");


MODULE_INFO(srcversion, "B9AE5B4705EE8DC1B55A294");
