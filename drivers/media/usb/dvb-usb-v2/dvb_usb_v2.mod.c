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

SYMBOL_CRC(dvb_usbv2_probe, 0x0ce76e82, "");
SYMBOL_CRC(dvb_usbv2_disconnect, 0x17f5f1fc, "");
SYMBOL_CRC(dvb_usbv2_suspend, 0x60463437, "");
SYMBOL_CRC(dvb_usbv2_resume, 0xe23376b3, "");
SYMBOL_CRC(dvb_usbv2_reset_resume, 0xe81c4af4, "");
SYMBOL_CRC(dvb_usbv2_generic_rw, 0xd52a89b8, "");
SYMBOL_CRC(dvb_usbv2_generic_write, 0x655869ea, "");
SYMBOL_CRC(dvb_usbv2_generic_rw_locked, 0x9f1a4058, "");
SYMBOL_CRC(dvb_usbv2_generic_write_locked, 0x392f162c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8975dd80, "dvb_dmxdev_init" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x11474f30, "media_device_unregister" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a05018, "request_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0xc07b2c9d, "__media_device_register" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xa86ceda7, "dvb_register_adapter" },
	{ 0x92997ed8, "_printk" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x16e297c3, "bit_wait" },
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0x81cd8c1f, "media_device_cleanup" },
	{ 0x6a9f708a, "dvb_dmx_swfilter_204" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x27af3192, "rc_register_device" },
	{ 0xb69bd6f5, "dvb_net_init" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x337413f4, "dvb_dmxdev_release" },
	{ 0x39e67c3f, "rc_free_device" },
	{ 0xa4235824, "dvb_dmx_swfilter_raw" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x8c2d340, "dvb_frontend_detach" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0x962fb831, "dvb_net_release" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x4b2e21d9, "rc_allocate_device" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x52ead1ae, "dvb_unregister_frontend" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1fe316f5, "__media_device_usb_init" },
	{ 0xe9f38608, "dvb_frontend_resume" },
	{ 0x39708f09, "dvb_register_frontend" },
	{ 0x368de365, "dvb_frontend_suspend" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa784996, "dvb_create_media_graph" },
	{ 0x35834e97, "dvb_unregister_adapter" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x2d6f269d, "rc_unregister_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dvb-core,mc");


MODULE_INFO(srcversion, "A3219B7B33EB0CE87B87D03");
