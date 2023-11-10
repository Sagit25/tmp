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
	{ 0x8975dd80, "dvb_dmxdev_init" },
	{ 0x11474f30, "media_device_unregister" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xa6257a2f, "complete" },
	{ 0xb9883bd9, "smscore_get_device_mode" },
	{ 0x16c77ac3, "smscore_register_client" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa15c457, "sms_board_led_feedback" },
	{ 0x7f56088c, "sms_board_power" },
	{ 0xa86ceda7, "dvb_register_adapter" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2d819ff9, "smscore_unregister_hotplug" },
	{ 0x81cd8c1f, "media_device_cleanup" },
	{ 0x39a36900, "smscore_putbuffer" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x673725b3, "sms_board_lna_control" },
	{ 0x337413f4, "dvb_dmxdev_release" },
	{ 0x99a81ab3, "smsclient_sendrequest" },
	{ 0xce17fc90, "param_ops_short" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x52ead1ae, "dvb_unregister_frontend" },
	{ 0xbbdb5c42, "smscore_unregister_client" },
	{ 0x39708f09, "dvb_register_frontend" },
	{ 0x3f4588c1, "sms_board_event" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa784996, "dvb_create_media_graph" },
	{ 0x35834e97, "dvb_unregister_adapter" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xb38d019a, "sms_board_setup" },
	{ 0x4123b897, "smscore_get_board_id" },
	{ 0x2f89e24a, "smscore_register_hotplug" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dvb-core,mc,smsmdtv");


MODULE_INFO(srcversion, "34C47E0A8177107A0B14B32");
