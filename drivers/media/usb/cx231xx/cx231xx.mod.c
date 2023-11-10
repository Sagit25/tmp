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

SYMBOL_CRC(cx231xx_get_i2c_adap, 0xa924278b, "_gpl");
SYMBOL_CRC(cx231xx_tuner_callback, 0x017ea7c7, "_gpl");
SYMBOL_CRC(cx231xx_register_extension, 0xa80bbe00, "");
SYMBOL_CRC(cx231xx_unregister_extension, 0x694b2a9a, "");
SYMBOL_CRC(cx231xx_send_usb_command, 0x18b1a062, "_gpl");
SYMBOL_CRC(cx231xx_set_alt_setting, 0x95225005, "_gpl");
SYMBOL_CRC(cx231xx_demod_reset, 0x7c7aa4bd, "_gpl");
SYMBOL_CRC(is_fw_load, 0xddf5bc48, "_gpl");
SYMBOL_CRC(cx231xx_set_mode, 0x8938cf82, "_gpl");
SYMBOL_CRC(cx231xx_uninit_isoc, 0x827eca2e, "_gpl");
SYMBOL_CRC(cx231xx_uninit_bulk, 0xd4c4bbde, "_gpl");
SYMBOL_CRC(cx231xx_init_isoc, 0xa78f5582, "_gpl");
SYMBOL_CRC(cx231xx_init_bulk, 0xbddfcf49, "_gpl");
SYMBOL_CRC(cx231xx_dev_init, 0x99f67f36, "_gpl");
SYMBOL_CRC(cx231xx_dev_uninit, 0x7ee29e29, "_gpl");
SYMBOL_CRC(cx231xx_send_gpio_cmd, 0x7e0f54c7, "_gpl");
SYMBOL_CRC(cx231xx_enable656, 0x832eb892, "_gpl");
SYMBOL_CRC(cx231xx_disable656, 0xb78f2aa3, "_gpl");
SYMBOL_CRC(cx231xx_unmute_audio, 0xca15943a, "_gpl");
SYMBOL_CRC(cx231xx_enable_i2c_port_3, 0xd3abbbf7, "_gpl");
SYMBOL_CRC(cx231xx_capture_start, 0x39fe6647, "_gpl");
SYMBOL_CRC(cx231xx_uninit_vbi_isoc, 0x70fff8a3, "_gpl");
SYMBOL_CRC(cx231xx_init_vbi_isoc, 0xf4ba94cf, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8e8b29e5, "vb2_queue_init" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xc4ef58d, "v4l2_ctrl_poll" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x11474f30, "media_device_unregister" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0xe796784e, "v4l2_ctrl_radio_filter" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf30a51a3, "v4l2_ctrl_add_handler" },
	{ 0x74a05018, "request_firmware" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc07b2c9d, "__media_device_register" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0xe2964344, "__wake_up" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0xdc6e08d5, "usb_clear_halt" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0xbcec384c, "vb2_fop_release" },
	{ 0xdd2b4618, "cx2341x_handler_setup" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0x89f73718, "media_device_register_entity" },
	{ 0x81cd8c1f, "media_device_cleanup" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x742ca250, "i2c_unregister_device" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xab2cc6c2, "i2c_new_client_device" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x53d9ece6, "v4l2_s_ctrl" },
	{ 0xa6a300de, "i2c_mux_alloc" },
	{ 0xf8fcc56c, "vb2_vmalloc_memops" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5b3a0411, "vb2_fop_read" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b2e21d9, "rc_allocate_device" },
	{ 0x34ba1279, "usb_unlink_urb" },
	{ 0xc1d60bee, "media_entity_setup_link" },
	{ 0xdd64e639, "strscpy" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0xdaedd8b6, "v4l2_mc_create_media_graph" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0x7d1fb0a1, "cx2341x_handler_init" },
	{ 0x449c9f1b, "cx2341x_handler_set_50hz" },
	{ 0x1fe316f5, "__media_device_usb_init" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x9aa57f9f, "usb_reset_endpoint" },
	{ 0x50b5daa4, "i2c_mux_del_adapters" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0xf30730d, "v4l2_subdev_call_wrappers" },
	{ 0xba5e6261, "v4l2_ctrl_log_status" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8b863527, "v4l2_i2c_new_subdev" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0xce5496ea, "i2c_mux_add_adapter" },
	{ 0xaabfcfb9, "_vb2_fop_release" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,cx2341x,videobuf2-common,i2c-mux,videobuf2-vmalloc,tveeprom");

MODULE_ALIAS("usb:v1D19p6109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p5A3Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p589Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApC039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB124d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB151d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d400[0-1]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v199Ep8002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "911671118CF304C86EAB7B9");
