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

SYMBOL_CRC(rt2x00lib_get_bssidx, 0xfdaf6535, "_gpl");
SYMBOL_CRC(rt2x00lib_beacondone, 0xfd88c417, "_gpl");
SYMBOL_CRC(rt2x00lib_pretbtt, 0x4c642ebc, "_gpl");
SYMBOL_CRC(rt2x00lib_dmastart, 0x84ca35cb, "_gpl");
SYMBOL_CRC(rt2x00lib_dmadone, 0xe588064e, "_gpl");
SYMBOL_CRC(rt2x00lib_txdone_nomatch, 0xa9087bb2, "_gpl");
SYMBOL_CRC(rt2x00lib_txdone, 0xa895f2e8, "_gpl");
SYMBOL_CRC(rt2x00lib_txdone_noinfo, 0x5aeae75c, "_gpl");
SYMBOL_CRC(rt2x00lib_rxdone, 0xd6661848, "_gpl");
SYMBOL_CRC(rt2x00lib_set_mac_address, 0x20732b33, "_gpl");
SYMBOL_CRC(rt2x00lib_probe_dev, 0x264e3e66, "_gpl");
SYMBOL_CRC(rt2x00lib_remove_dev, 0xfbe5af97, "_gpl");
SYMBOL_CRC(rt2x00lib_suspend, 0xc3c91c5b, "_gpl");
SYMBOL_CRC(rt2x00lib_resume, 0x91918cd3, "_gpl");
SYMBOL_CRC(rt2x00mac_tx, 0xb77a168c, "_gpl");
SYMBOL_CRC(rt2x00mac_start, 0x63023082, "_gpl");
SYMBOL_CRC(rt2x00mac_stop, 0x57f91626, "_gpl");
SYMBOL_CRC(rt2x00mac_reconfig_complete, 0x00dc69c1, "_gpl");
SYMBOL_CRC(rt2x00mac_add_interface, 0x4ea13b4b, "_gpl");
SYMBOL_CRC(rt2x00mac_remove_interface, 0x30d77067, "_gpl");
SYMBOL_CRC(rt2x00mac_config, 0xfccc52fc, "_gpl");
SYMBOL_CRC(rt2x00mac_configure_filter, 0x534a136e, "_gpl");
SYMBOL_CRC(rt2x00mac_set_tim, 0xf27cc2ad, "_gpl");
SYMBOL_CRC(rt2x00mac_set_key, 0xdd770ff0, "_gpl");
SYMBOL_CRC(rt2x00mac_sw_scan_start, 0x6ad683ab, "_gpl");
SYMBOL_CRC(rt2x00mac_sw_scan_complete, 0x6a24a9ef, "_gpl");
SYMBOL_CRC(rt2x00mac_get_stats, 0x8cd6c526, "_gpl");
SYMBOL_CRC(rt2x00mac_bss_info_changed, 0x8b5a1266, "_gpl");
SYMBOL_CRC(rt2x00mac_conf_tx, 0x15158ca9, "_gpl");
SYMBOL_CRC(rt2x00mac_rfkill_poll, 0x505aa8b5, "_gpl");
SYMBOL_CRC(rt2x00mac_flush, 0x29736be8, "_gpl");
SYMBOL_CRC(rt2x00mac_set_antenna, 0xde2e8cfd, "_gpl");
SYMBOL_CRC(rt2x00mac_get_antenna, 0x61f11295, "_gpl");
SYMBOL_CRC(rt2x00mac_get_ringparam, 0x41e9eb03, "_gpl");
SYMBOL_CRC(rt2x00mac_tx_frames_pending, 0x9be55bdc, "_gpl");
SYMBOL_CRC(rt2x00queue_map_txskb, 0x1ee0a98d, "_gpl");
SYMBOL_CRC(rt2x00queue_unmap_skb, 0x4905334b, "_gpl");
SYMBOL_CRC(rt2x00queue_for_each_entry, 0xb6ba8921, "_gpl");
SYMBOL_CRC(rt2x00queue_get_entry, 0xa723eefc, "_gpl");
SYMBOL_CRC(rt2x00queue_pause_queue, 0x7fda2216, "_gpl");
SYMBOL_CRC(rt2x00queue_unpause_queue, 0x53dc069f, "_gpl");
SYMBOL_CRC(rt2x00queue_start_queue, 0x6e0bbb21, "_gpl");
SYMBOL_CRC(rt2x00queue_stop_queue, 0x39db15c0, "_gpl");
SYMBOL_CRC(rt2x00queue_flush_queue, 0x03cb9aa3, "_gpl");
SYMBOL_CRC(rt2x00queue_start_queues, 0x08b04be4, "_gpl");
SYMBOL_CRC(rt2x00queue_stop_queues, 0xdfea49a4, "_gpl");
SYMBOL_CRC(rt2x00queue_flush_queues, 0x5540bb29, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x5e074531, "ieee80211_iterate_interfaces" },
	{ 0x48471741, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x972a3723, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa951a544, "dma_unmap_page_attrs" },
	{ 0x74a05018, "request_firmware" },
	{ 0xc89c2472, "led_classdev_suspend" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x1305adc9, "ieee80211_tx_status_ext" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x771d5acf, "led_classdev_unregister" },
	{ 0xef9abb20, "ieee80211_register_hw" },
	{ 0x29c4a10, "__ieee80211_create_tpt_led_trigger" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xa71c2ada, "ieee80211_get_hdrlen_from_skb" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xf3039661, "ieee80211_wake_queue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x27aa4858, "ieee80211_get_buffered_bc" },
	{ 0x13753f07, "dma_map_page_attrs" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x5b81004c, "of_get_mac_address" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7996285a, "ieee80211_queue_delayed_work" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xc27ad2f3, "ieee80211_ctstoself_get" },
	{ 0x121445a5, "skb_pull" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x61685b5a, "ieee80211_free_txskb" },
	{ 0x2e077701, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xae021234, "ieee80211_tx_status" },
	{ 0x30259cac, "ieee80211_stop_queue" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x2ca5657c, "ieee80211_stop_queues" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdfd6c09f, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x121cad58, "wiphy_rfkill_start_polling" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x3fa29299, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4478d567, "led_classdev_resume" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0xd6e7ca0b, "ieee80211_unregister_hw" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9a099bc2, "ieee80211_beacon_get_tim" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x49c5acae, "ieee80211_rts_get" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xc673cb62, "ieee80211_queue_work" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xafecdfd, "ieee80211_rx_napi" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211,rfkill");


MODULE_INFO(srcversion, "BB0C7B99057FB801B3DE19C");
