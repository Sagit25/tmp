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

SYMBOL_CRC(mt7921_sta_ps, 0xa38cc84a, "_gpl");
SYMBOL_CRC(mt7921_mac_sta_poll, 0x00fc2845, "_gpl");
SYMBOL_CRC(mt7921_txwi_free, 0xea7d83e3, "_gpl");
SYMBOL_CRC(mt7921_rx_check, 0x7d3fbc8e, "_gpl");
SYMBOL_CRC(mt7921_queue_rx_skb, 0xbdc84eb0, "_gpl");
SYMBOL_CRC(mt7921_update_channel, 0xd71ad3b3, "_gpl");
SYMBOL_CRC(mt7921_reset, 0x2cd74fd6, "_gpl");
SYMBOL_CRC(mt7921_usb_sdio_tx_prepare_skb, 0x3ca9f4be, "_gpl");
SYMBOL_CRC(mt7921_usb_sdio_tx_complete_skb, 0x54224c67, "_gpl");
SYMBOL_CRC(mt7921_usb_sdio_tx_status_data, 0xe1f51896, "_gpl");
SYMBOL_CRC(mt7921_mcu_parse_response, 0x8c6ad2fc, "_gpl");
SYMBOL_CRC(mt7921_run_firmware, 0x8b041c38, "_gpl");
SYMBOL_CRC(mt7921_mcu_set_eeprom, 0x0baa0310, "_gpl");
SYMBOL_CRC(mt7921_mcu_drv_pmctrl, 0xe67c2bc2, "_gpl");
SYMBOL_CRC(mt7921_mcu_fw_pmctrl, 0x5d03f298, "_gpl");
SYMBOL_CRC(__mt7921_start, 0xca658c34, "_gpl");
SYMBOL_CRC(mt7921_stop, 0xf31425f2, "_gpl");
SYMBOL_CRC(mt7921_mac_sta_add, 0x60ac2671, "_gpl");
SYMBOL_CRC(mt7921_mac_sta_assoc, 0xfcfb7dde, "_gpl");
SYMBOL_CRC(mt7921_mac_sta_remove, 0xec31fb8f, "_gpl");
SYMBOL_CRC(mt7921_ops, 0xeb8d197e, "_gpl");
SYMBOL_CRC(mt7921_mac_init, 0x4138e5ba, "_gpl");
SYMBOL_CRC(mt7921_register_device, 0x79d588f1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd9743e65, "mt76_connac_mcu_update_gtk_rekey" },
	{ 0xad2e56d9, "mt76_connac_mcu_set_rate_txpower" },
	{ 0xa091234b, "ieee80211_sta_register_airtime" },
	{ 0x1d82fe97, "mt76_init_sar_power" },
	{ 0xb38b8265, "ieee80211_connection_loss" },
	{ 0x19021900, "mt76_tx_status_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x275ae254, "simple_attr_open" },
	{ 0x5e074531, "ieee80211_iterate_interfaces" },
	{ 0x8dad64f7, "debugfs_attr_write" },
	{ 0xfe3471bf, "mt76_connac_mcu_sta_update_hdr_trans" },
	{ 0x66c8eac2, "mt76_connac_mcu_sched_scan_enable" },
	{ 0x48471741, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x972a3723, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9d139492, "mt76_tx_status_skb_get" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0x88168a05, "mt76_tx_status_lock" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x23065aa2, "mt76_connac_mcu_set_rts_thresh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4fcb99ef, "mt76_connac_mcu_set_channel_domain" },
	{ 0xf066e5ad, "mt76_connac_mcu_uni_add_dev" },
	{ 0x68f05435, "mt76_release_buffered_frames" },
	{ 0x74a05018, "request_firmware" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0xa0c0af00, "mt76_get_txpower" },
	{ 0xfaa089a8, "mt76_tx_status_skb_add" },
	{ 0x517cca97, "ieee80211_iterate_stations_atomic" },
	{ 0x63c75d14, "mt76_connac_pm_wake" },
	{ 0xfe911ded, "mt76_connac2_mac_fill_rx_rate" },
	{ 0x79c9ca31, "mt76_connac_mcu_set_deep_sleep" },
	{ 0xa5ff2a8a, "mt76_wake_tx_queue" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0xff71da08, "ieee80211_start_tx_ba_session" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc1c0b97e, "mt76_connac_mcu_chip_config" },
	{ 0x8a163e96, "mt76_get_antenna" },
	{ 0xa49be482, "mt76_has_tx_pending" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x1cc1fb3d, "__mt76_tx_complete_skb" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xa292531a, "mt76_set_stream_caps" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xa71c2ada, "ieee80211_get_hdrlen_from_skb" },
	{ 0xe2964344, "__wake_up" },
	{ 0x2a154d58, "mt76_connac_mcu_update_arp_filter" },
	{ 0xb47f89bc, "mt76_mcu_rx_event" },
	{ 0xa1618ffe, "mt76_connac_pm_queue_skb" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x7e19af4a, "mt76_tx_status_check" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x63d5d484, "mt76_connac_free_pending_tx_skbs" },
	{ 0x1dccf26f, "mt76_connac_power_save_sched" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0xf238b5a6, "mt76_connac_txp_skb_unmap" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9108a880, "debugfs_create_devm_seqfile" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x704023d3, "mt76_tx" },
	{ 0x61c4754b, "__napi_schedule" },
	{ 0xcb2c37ce, "mt76_connac_mcu_set_mac_enable" },
	{ 0xe40b66ef, "mt76_wcid_alloc" },
	{ 0xa9d97bac, "mt76_wcid_key_setup" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x35c3640f, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xe5187f64, "mt76_rx" },
	{ 0x4985fd8c, "mt76_connac_mcu_sched_scan_req" },
	{ 0x2e901b1, "mt76_connac_mcu_uni_add_bss" },
	{ 0xa15f76a2, "mt76_connac2_mac_add_txs_skb" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x6d54ec4d, "wiphy_to_ieee80211_hw" },
	{ 0x57827ec9, "debugfs_attr_read" },
	{ 0xc513a356, "mt76_connac_mcu_hw_scan" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7996285a, "ieee80211_queue_delayed_work" },
	{ 0x7ea31e0c, "devm_kmemdup" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x121445a5, "skb_pull" },
	{ 0x221ff9c1, "mt76_register_device" },
	{ 0x2937b338, "mt76_connac2_load_ram" },
	{ 0x1ba75c29, "mt76_mcu_skb_send_and_get_msg" },
	{ 0xea15f280, "simple_attr_release" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x925dabb0, "mt76_set_channel" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xab67581c, "mt76_update_survey" },
	{ 0xac6775d6, "ieee80211_wake_queues" },
	{ 0xe93fe907, "mt76_mcu_send_and_get_msg" },
	{ 0x4253a2b5, "ieee80211_beacon_get_template" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xaebe659d, "mt76_eeprom_override" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x549241c, "dev_coredumpv" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x12c7531a, "__mt76_mcu_msg_alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x908ca40c, "mt76_connac_wowlan_support" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xc76b993c, "mt76_connac_pm_dequeue_skbs" },
	{ 0xadd143ad, "mt76_get_survey" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xdcb764ad, "memset" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x231e5e43, "mt76_token_release" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x1d39ab88, "mt76_sta_state" },
	{ 0x2ca5657c, "ieee80211_stop_queues" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x575ad6b5, "cfg80211_reg_can_beacon" },
	{ 0xae7a9a01, "seq_read" },
	{ 0xcdb1718b, "mt76_connac_mcu_get_nic_capability" },
	{ 0x17f568e9, "mt76_rates" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x2932bf3f, "mt76_connac_mcu_cancel_hw_scan" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0xade4e81, "ieee80211_sched_scan_results" },
	{ 0x5ebe9ad0, "ieee80211_scan_completed" },
	{ 0x3fa29299, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8a3d37b, "mt76_insert_ccmp_hdr" },
	{ 0x45a27d97, "mt76_txq_schedule_all" },
	{ 0xa4ffc41d, "mt76_connac_mcu_sta_cmd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xb7255abd, "mt76_connac2_reverse_frag0_hdr_trans" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x37aee44a, "mt76_connac2_load_patch" },
	{ 0x5520f40, "mt76_rx_aggr_start" },
	{ 0xfccfc18b, "____mt76_poll_msec" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x2cbc37b0, "mt76_connac_mcu_coredump_event" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x2058be1, "mt76_skb_adjust_pad" },
	{ 0xb183bc30, "mt76_put_txwi" },
	{ 0xdcebe45, "seq_puts" },
	{ 0xfdde1d50, "mt76_connac_sta_state_dp" },
	{ 0xc383a0f0, "mt76_connac_mcu_set_suspend_iter" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x66ff58da, "mt76_queues_read" },
	{ 0xb399b71f, "mt76_sta_pre_rcu_remove" },
	{ 0xeb197734, "mt76_register_debugfs_fops" },
	{ 0x17a641f9, "mt76_connac2_mac_write_txwi" },
	{ 0xd64e6e3e, "__mt76_set_tx_blocked" },
	{ 0xbe414b08, "mt76_connac_mcu_sta_ba" },
	{ 0xaf74730a, "mt76_connac2_mac_decode_he_radiotap" },
	{ 0xc673cb62, "ieee80211_queue_work" },
	{ 0x62f52652, "napi_schedule_prep" },
	{ 0x715e50b, "napi_consume_skb" },
	{ 0x53039629, "__mt76_poll" },
	{ 0x6518a263, "mt76_rx_aggr_stop" },
	{ 0xb3c6f341, "single_open" },
	{ 0x74cc891a, "mt76_connac_mcu_add_key" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xba6e47f1, "mt76_ethtool_worker" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe257135b, "ieee80211_disconnect" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mt76-connac-lib,mac80211,mt76,cfg80211");


MODULE_INFO(srcversion, "97CBB51787DF85AEAFC1E29");
