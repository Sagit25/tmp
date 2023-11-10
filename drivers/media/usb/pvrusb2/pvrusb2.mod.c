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
	{ 0x4bca5638, "v4l2_fh_exit" },
	{ 0x8975dd80, "dvb_dmxdev_init" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x7673b684, "cx2341x_ext_ctrls" },
	{ 0xb260b3a7, "v4l2_fh_del" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4a39b3dd, "v4l2_fh_add" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x74a05018, "request_firmware" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0xf7dca34a, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa86ceda7, "dvb_register_adapter" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x15ac1bd0, "cx2341x_ctrl_query" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x92997ed8, "_printk" },
	{ 0xdc6e08d5, "usb_clear_halt" },
	{ 0x1000e51, "schedule" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0xec80a4a6, "usb_reset_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0xc062f0a9, "dvb_module_release" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0xce23c857, "usb_urb_ep_type_check" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0xdcced5f2, "__class_register" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x24d273d1, "add_timer" },
	{ 0x78e55350, "device_move" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x1978b9b2, "v4l2_fh_init" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0xb69bd6f5, "dvb_net_init" },
	{ 0xa169b1d6, "class_unregister" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x9c2ac1a2, "sysfs_create_group" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xab2cc6c2, "i2c_new_client_device" },
	{ 0x337413f4, "dvb_dmxdev_release" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xc8c41a62, "freezing_slow_path" },
	{ 0xdbc5583a, "cx2341x_update" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x569a50e2, "usb_lock_device_for_reset" },
	{ 0x4c74bd14, "device_register" },
	{ 0xce17fc90, "param_ops_short" },
	{ 0x53d9ece6, "v4l2_s_ctrl" },
	{ 0xdcb764ad, "memset" },
	{ 0x5ec2c5ad, "v4l2_device_disconnect" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x28240e61, "cx2341x_ctrl_get_menu" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0x8c2d340, "dvb_frontend_detach" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x962fb831, "dvb_net_release" },
	{ 0xe1fe1432, "cx2341x_log_status" },
	{ 0x614ff0d5, "sysfs_remove_group" },
	{ 0x34ba1279, "usb_unlink_urb" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7b4dd2cb, "cx2341x_fill_defaults" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0x52ead1ae, "dvb_unregister_frontend" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x39708f09, "dvb_register_frontend" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8b863527, "v4l2_i2c_new_subdev" },
	{ 0x98cf60b3, "strlen" },
	{ 0x35834e97, "dvb_unregister_adapter" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x65176a62, "dvb_module_probe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,dvb-core,cx2341x,tveeprom");

MODULE_ALIAS("usb:v2040p2900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7510d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "290E2A800750764DCC126CC");
