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
	{ 0xd5e35706, "lbs_notify_command_response" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x48471741, "skb_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xb997ae48, "lbs_add_card" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0xf019fb93, "lbs_host_to_card_done" },
	{ 0xec80a4a6, "usb_reset_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x30a16418, "lbs_process_rxed_packet" },
	{ 0x6923a98f, "lbs_remove_card" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x121445a5, "skb_pull" },
	{ 0x924df963, "lbs_suspend" },
	{ 0x42a661eb, "lbs_cmd_copyback" },
	{ 0x83aa40e7, "lbs_get_firmware_async" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x96267f10, "__dev_kfree_skb_irq" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x465e4a3e, "lbs_send_tx_feedback" },
	{ 0xea38cdb2, "lbs_queue_event" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf05478bd, "lbs_start_card" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6894491e, "__lbs_cmd" },
	{ 0xe42419fc, "lbs_stop_card" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xe082fc02, "lbs_resume" },
	{ 0xcbc969e7, "lbs_host_sleep_cfg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "722ECF2BB13ECC3E7F1FA72");
