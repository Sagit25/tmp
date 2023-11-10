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

SYMBOL_CRC(smscore_translate_msg, 0x34bf0e61, "_gpl");
SYMBOL_CRC(smscore_set_board_id, 0xb81e064c, "_gpl");
SYMBOL_CRC(smscore_get_board_id, 0x4123b897, "_gpl");
SYMBOL_CRC(smscore_registry_getmode, 0x21e36bf2, "_gpl");
SYMBOL_CRC(smscore_register_hotplug, 0x2f89e24a, "_gpl");
SYMBOL_CRC(smscore_unregister_hotplug, 0x2d819ff9, "_gpl");
SYMBOL_CRC(smscore_register_device, 0xc8224201, "_gpl");
SYMBOL_CRC(smscore_start_device, 0xa83dac10, "_gpl");
SYMBOL_CRC(smscore_unregister_device, 0x68606790, "_gpl");
SYMBOL_CRC(smscore_get_device_mode, 0xb9883bd9, "_gpl");
SYMBOL_CRC(smscore_onresponse, 0xa47e2c17, "_gpl");
SYMBOL_CRC(smscore_getbuffer, 0x997e7ca9, "_gpl");
SYMBOL_CRC(smscore_putbuffer, 0x39a36900, "_gpl");
SYMBOL_CRC(smscore_register_client, 0x16c77ac3, "_gpl");
SYMBOL_CRC(smscore_unregister_client, 0xbbdb5c42, "_gpl");
SYMBOL_CRC(smsclient_sendrequest, 0x99a81ab3, "_gpl");
SYMBOL_CRC(sms_get_board, 0x844539ae, "_gpl");
SYMBOL_CRC(sms_board_event, 0x3f4588c1, "_gpl");
SYMBOL_CRC(sms_board_setup, 0xb38d019a, "_gpl");
SYMBOL_CRC(sms_board_power, 0x7f56088c, "_gpl");
SYMBOL_CRC(sms_board_led_feedback, 0x0a15c457, "_gpl");
SYMBOL_CRC(sms_board_lna_control, 0x673725b3, "_gpl");
SYMBOL_CRC(sms_board_load_modules, 0x74ee9098, "_gpl");
SYMBOL_CRC(smsendian_handle_tx_message, 0x37d91069, "_gpl");
SYMBOL_CRC(smsendian_handle_rx_message, 0x45284ae9, "_gpl");
SYMBOL_CRC(smsendian_handle_message_header, 0x7c576277, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x8100867b, "ir_raw_event_handle" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x570fe733, "ir_raw_event_store" },
	{ 0x74a05018, "request_firmware" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x27af3192, "rc_register_device" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0x5a921311, "strncmp" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x39e67c3f, "rc_free_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b2e21d9, "rc_allocate_device" },
	{ 0xdd64e639, "strscpy" },
	{ 0x16b90833, "dma_free_attrs" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d6f269d, "rc_unregister_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "271F8ACC5673C80D487C1BA");
