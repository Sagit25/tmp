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
	{ 0xf4a7cb49, "em28xx_init_camera" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0xc6ab5bd4, "em28xx_audio_analog_set" },
	{ 0x9b0b821a, "em28xx_write_reg" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb7cd7a, "em28xx_stop_urbs" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa846e25e, "em28xx_set_mode" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3353a74, "v4l2_i2c_subdev_addr" },
	{ 0x2b3bd22e, "v4l2_ctrl_handler_setup" },
	{ 0xe7566a06, "em28xx_audio_setup" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x663b757a, "video_devdata" },
	{ 0xbcec384c, "vb2_fop_release" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xa99b173d, "v4l2_ctrl_find" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x89f73718, "media_device_register_entity" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x61cd22a1, "vb2_ioctl_create_bufs" },
	{ 0xa129e238, "em28xx_uninit_usb_xfer" },
	{ 0x751c5e55, "vb2_ioctl_prepare_buf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4f975cb8, "em28xx_unregister_extension" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf8fcc56c, "vb2_vmalloc_memops" },
	{ 0xdcb764ad, "memset" },
	{ 0x5ec2c5ad, "v4l2_device_disconnect" },
	{ 0x5b3a0411, "vb2_fop_read" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xc1d60bee, "media_entity_setup_link" },
	{ 0xdd64e639, "strscpy" },
	{ 0x164d65e0, "em28xx_register_extension" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0x2ed5f15c, "em28xx_init_usb_xfer" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0xdaedd8b6, "v4l2_mc_create_media_graph" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf0e1ba98, "em28xx_setup_xc3028" },
	{ 0xbe91dd65, "v4l2_ctrl_notify" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xe31e4f01, "em28xx_write_regs" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x8b863527, "v4l2_i2c_new_subdev" },
	{ 0x69b7d204, "media_device_unregister_entity" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x97f91466, "_dev_printk" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x129ee000, "em28xx_read_reg" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,em28xx,videodev,mc,videobuf2-common,videobuf2-vmalloc");


MODULE_INFO(srcversion, "C71DC2AABB13584D69A0088");
