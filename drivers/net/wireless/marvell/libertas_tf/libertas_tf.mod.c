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

SYMBOL_CRC(lbtf_debug, 0xc85e6899, "_gpl");
SYMBOL_CRC(lbtf_rx, 0x2349550e, "_gpl");
SYMBOL_CRC(lbtf_add_card, 0xcc787f77, "_gpl");
SYMBOL_CRC(lbtf_remove_card, 0x8fe5ba89, "_gpl");
SYMBOL_CRC(lbtf_send_tx_feedback, 0x0d9b9bc4, "_gpl");
SYMBOL_CRC(lbtf_bcn_sent, 0xb1e6fe42, "_gpl");
SYMBOL_CRC(lbtf_cmd_copyback, 0x618d2623, "_gpl");
SYMBOL_CRC(__lbtf_cmd, 0x0e2adb60, "_gpl");
SYMBOL_CRC(lbtf_cmd_response_rx, 0x031b1e25, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6603d2cc, "ieee80211_free_hw" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xef9abb20, "ieee80211_register_hw" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x27aa4858, "ieee80211_get_buffered_bc" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xd5ddc6e6, "ieee80211_tx_status_irqsafe" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x121445a5, "skb_pull" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xac6775d6, "ieee80211_wake_queues" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x69c1efbc, "ieee80211_alloc_hw_nm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2ca5657c, "ieee80211_stop_queues" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0xd6e7ca0b, "ieee80211_unregister_hw" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9a099bc2, "ieee80211_beacon_get_tim" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x9060fc6c, "ieee80211_rx_irqsafe" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mac80211");


MODULE_INFO(srcversion, "507A7826B6AE12B5B9BB410");
