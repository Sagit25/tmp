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

SYMBOL_CRC(ath6kl_printk, 0xb881b1a9, "");
SYMBOL_CRC(ath6kl_info, 0x3502feef, "");
SYMBOL_CRC(ath6kl_err, 0xb9a689dd, "");
SYMBOL_CRC(ath6kl_warn, 0x1354043d, "");
SYMBOL_CRC(ath6kl_read_tgt_stats, 0x1b1fd49c, "");
SYMBOL_CRC(ath6kl_hif_rw_comp_handler, 0x91cfb84a, "");
SYMBOL_CRC(ath6kl_hif_intr_bh_handler, 0xb18249d9, "");
SYMBOL_CRC(ath6kl_cfg80211_suspend, 0x4a5ec1e6, "");
SYMBOL_CRC(ath6kl_cfg80211_resume, 0xe7ca3161, "");
SYMBOL_CRC(ath6kl_stop_txrx, 0xb22732d5, "");
SYMBOL_CRC(ath6kl_core_tx_complete, 0xf8392f83, "");
SYMBOL_CRC(ath6kl_core_rx_complete, 0xae8ed765, "");
SYMBOL_CRC(ath6kl_core_init, 0x4894e3b4, "");
SYMBOL_CRC(ath6kl_core_create, 0x0817005e, "");
SYMBOL_CRC(ath6kl_core_cleanup, 0x759f1c81, "");
SYMBOL_CRC(ath6kl_core_destroy, 0x28630ecd, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1f258bf4, "cfg80211_sched_scan_results" },
	{ 0xf2d9e1e, "cfg80211_cqm_txe_notify" },
	{ 0x7d45a939, "cfg80211_mgmt_tx_status_ext" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x48471741, "skb_put" },
	{ 0xd102dec2, "cfg80211_scan_done" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6dce2310, "cfg80211_sched_scan_stopped" },
	{ 0x972a3723, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x342b626e, "cfg80211_remain_on_channel_expired" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe0e5d536, "cfg80211_register_netdevice" },
	{ 0x74a05018, "request_firmware" },
	{ 0x96848186, "scnprintf" },
	{ 0xcf2a6966, "up" },
	{ 0x4829a47e, "memcpy" },
	{ 0x98ff2517, "regulatory_hint" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x77734a0f, "cfg80211_new_sta" },
	{ 0x224d2e4, "netdev_set_default_ethtool_ops" },
	{ 0x342c795a, "cfg80211_disconnected" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x56962cfc, "ether_setup" },
	{ 0x1dac9fc8, "of_get_property" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x58c9f362, "of_find_compatible_node" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x453931da, "wiphy_new_nm" },
	{ 0x92997ed8, "_printk" },
	{ 0x432d1588, "cfg80211_ready_on_channel" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa24166ef, "wiphy_register" },
	{ 0x6c9a4a22, "cfg80211_put_bss" },
	{ 0xbf293c89, "cfg80211_roamed" },
	{ 0xb7d8120c, "cfg80211_ch_switch_notify" },
	{ 0xa91d6818, "skb_copy_expand" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x5fad0041, "ieee80211_get_channel_khz" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x9d5eadfa, "cfg80211_get_drvinfo" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x11132c7a, "cfg80211_ibss_joined" },
	{ 0x121445a5, "skb_pull" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x53222b18, "cfg80211_michael_mic_failure" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x1d0f24a3, "cfg80211_del_sta_sinfo" },
	{ 0x194a2f46, "wiphy_unregister" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8932f5b, "ethtool_op_get_link" },
	{ 0x61caff11, "cfg80211_get_bss" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0xdcb764ad, "memset" },
	{ 0xb8cc49f8, "cfg80211_pmksa_candidate_notify" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xbe39b3a, "cfg80211_check_station_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdd64e639, "strscpy" },
	{ 0xff06ce79, "cfg80211_unregister_wdev" },
	{ 0x999e8297, "vfree" },
	{ 0xafa88d4c, "cfg80211_rx_mgmt_ext" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x1f1bbd31, "skb_copy" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0x6ca71fd, "cfg80211_chandef_create" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x793856eb, "cfg80211_conn_failed" },
	{ 0x6121104b, "cfg80211_inform_bss_data" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa2db0b1a, "cfg80211_connect_done" },
	{ 0x123109a9, "wiphy_free" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "D544C964F783D691C29B7A4");
