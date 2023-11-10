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
	{ 0x8975dd80, "dvb_dmxdev_init" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x8100867b, "ir_raw_event_handle" },
	{ 0x973151f0, "v4l2_device_put" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0x6d96795, "vb2_ioctl_expbuf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcb319d8, "usb_ifnum_to_if" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xb2a0e7e, "i2c_probe_func_quick_read" },
	{ 0x570fe733, "ir_raw_event_store" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x786276cf, "__media_entity_setup_link" },
	{ 0x37a0cba, "kfree" },
	{ 0xc07b2c9d, "__media_device_register" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x75e8e3e4, "vb2_video_unregister_device" },
	{ 0xa86ceda7, "dvb_register_adapter" },
	{ 0xa94bf655, "media_create_pad_link" },
	{ 0x92997ed8, "_printk" },
	{ 0x9bff4604, "__media_pipeline_stop" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x663b757a, "video_devdata" },
	{ 0x18acd31f, "dvb_dmx_swfilter_packets" },
	{ 0x72135dec, "media_device_register_entity_notify" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0x89f73718, "media_device_register_entity" },
	{ 0x8cf03005, "v4l_enable_media_source" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0x61cd22a1, "vb2_ioctl_create_bufs" },
	{ 0x5af08ac5, "tveeprom_read" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x751c5e55, "vb2_ioctl_prepare_buf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x27af3192, "rc_register_device" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0xb69bd6f5, "dvb_net_init" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x337413f4, "dvb_dmxdev_release" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xce17fc90, "param_ops_short" },
	{ 0x39e67c3f, "rc_free_device" },
	{ 0xf8fcc56c, "vb2_vmalloc_memops" },
	{ 0xdcb764ad, "memset" },
	{ 0x5ec2c5ad, "v4l2_device_disconnect" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5b3a0411, "vb2_fop_read" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0x8c2d340, "dvb_frontend_detach" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x962fb831, "dvb_net_release" },
	{ 0x4b2e21d9, "rc_allocate_device" },
	{ 0x34ba1279, "usb_unlink_urb" },
	{ 0xfe74f7f4, "media_get_pad_index" },
	{ 0xc1d60bee, "media_entity_setup_link" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x52ead1ae, "dvb_unregister_frontend" },
	{ 0xf7474583, "media_device_delete" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0x508d1b8, "v4l_disable_media_source" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdaedd8b6, "v4l2_mc_create_media_graph" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0xe9f38608, "dvb_frontend_resume" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x39708f09, "dvb_register_frontend" },
	{ 0x368de365, "dvb_frontend_suspend" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0xba5e6261, "v4l2_ctrl_log_status" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa784996, "dvb_create_media_graph" },
	{ 0x8b863527, "v4l2_i2c_new_subdev" },
	{ 0x69b7d204, "media_device_unregister_entity" },
	{ 0x35834e97, "dvb_unregister_adapter" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0xaabfcfb9, "_vb2_fop_release" },
	{ 0x439106b8, "media_device_unregister_entity_notify" },
	{ 0x8216525f, "__media_pipeline_start" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d6f269d, "rc_unregister_device" },
	{ 0xd6cdec63, "media_device_usb_allocate" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,dvb-core,videodev,mc,tveeprom,videobuf2-common,videobuf2-vmalloc");

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CFC16A9993441B1AC10780A");
