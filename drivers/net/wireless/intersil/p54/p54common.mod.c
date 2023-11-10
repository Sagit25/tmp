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

SYMBOL_CRC(p54_parse_eeprom, 0x21e24b1e, "_gpl");
SYMBOL_CRC(p54_read_eeprom, 0xdea9f558, "_gpl");
SYMBOL_CRC(p54_parse_firmware, 0xa9257444, "_gpl");
SYMBOL_CRC(p54_free_skb, 0x621ef4f0, "_gpl");
SYMBOL_CRC(p54_rx, 0x83336e23, "_gpl");
SYMBOL_CRC(p54_init_common, 0x43ecabd0, "_gpl");
SYMBOL_CRC(p54_register_common, 0x27be2410, "_gpl");
SYMBOL_CRC(p54_free_common, 0x9b3bc2fc, "_gpl");
SYMBOL_CRC(p54_unregister_common, 0x87a7575a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x48471741, "skb_put" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x972a3723, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x6603d2cc, "ieee80211_free_hw" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb324b9a3, "ieee80211_beacon_loss" },
	{ 0x98ff2517, "regulatory_hint" },
	{ 0x37a0cba, "kfree" },
	{ 0x771d5acf, "led_classdev_unregister" },
	{ 0xef9abb20, "ieee80211_register_hw" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa71c2ada, "ieee80211_get_hdrlen_from_skb" },
	{ 0x3c7c3b9d, "__ieee80211_get_radio_led_name" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xf3039661, "ieee80211_wake_queue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x3ee625a5, "__ieee80211_get_tx_led_name" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0x92997ed8, "_printk" },
	{ 0xd5ddc6e6, "ieee80211_tx_status_irqsafe" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0xb9155f06, "__ieee80211_get_rx_led_name" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x7996285a, "ieee80211_queue_delayed_work" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb7c0f443, "sort" },
	{ 0x121445a5, "skb_pull" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x61685b5a, "ieee80211_free_txskb" },
	{ 0x2e077701, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x69c1efbc, "ieee80211_alloc_hw_nm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x30259cac, "ieee80211_stop_queue" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xdb73a05c, "skb_unlink" },
	{ 0xdfd6c09f, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x9ac598cb, "__ieee80211_get_assoc_led_name" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0xd6e7ca0b, "ieee80211_unregister_hw" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9a099bc2, "ieee80211_beacon_get_tim" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x97f91466, "_dev_printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x9060fc6c, "ieee80211_rx_irqsafe" },
	{ 0x6d385d04, "skb_queue_head" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211,crc-ccitt");


MODULE_INFO(srcversion, "048589178C84678EEBE79C4");
