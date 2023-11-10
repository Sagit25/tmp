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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(usb_cypress_load_firmware, 0x3471f2ed, "");
SYMBOL_CRC(dvb_usb_get_hexline, 0x8b6f5395, "");
SYMBOL_CRC(dvb_usb_device_init, 0x5b3a473f, "");
SYMBOL_CRC(dvb_usb_device_exit, 0x078056a3, "");
SYMBOL_CRC(dvb_usb_generic_rw, 0xa80fd448, "");
SYMBOL_CRC(dvb_usb_generic_write, 0x6cde15c4, "");
SYMBOL_CRC(dvb_usb_nec_rc_key_to_event, 0xe6681111, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefabe1da, "input_allocate_device" },
	{ 0x8975dd80, "dvb_dmxdev_init" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x11474f30, "media_device_unregister" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a05018, "request_firmware" },
	{ 0xd553906c, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc07b2c9d, "__media_device_register" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0xa86ceda7, "dvb_register_adapter" },
	{ 0x2345d009, "input_free_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xdc6e08d5, "usb_clear_halt" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0xf1564295, "input_register_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0x81cd8c1f, "media_device_cleanup" },
	{ 0x6a9f708a, "dvb_dmx_swfilter_204" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x27af3192, "rc_register_device" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xb69bd6f5, "dvb_net_init" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x337413f4, "dvb_dmxdev_release" },
	{ 0x39e67c3f, "rc_free_device" },
	{ 0xdcb764ad, "memset" },
	{ 0xa4235824, "dvb_dmx_swfilter_raw" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x441916ec, "input_event" },
	{ 0x8c2d340, "dvb_frontend_detach" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0x962fb831, "dvb_net_release" },
	{ 0x4b2e21d9, "rc_allocate_device" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x52ead1ae, "dvb_unregister_frontend" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1fe316f5, "__media_device_usb_init" },
	{ 0x39708f09, "dvb_register_frontend" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa784996, "dvb_create_media_graph" },
	{ 0x35834e97, "dvb_unregister_adapter" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d6f269d, "rc_unregister_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dvb-core,mc");


MODULE_INFO(srcversion, "5AD837954B46D08A1E90344");
