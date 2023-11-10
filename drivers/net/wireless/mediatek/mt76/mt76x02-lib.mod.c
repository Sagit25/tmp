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

SYMBOL_CRC(mt76x02_rates, 0x5bd84fd5, "_gpl");
SYMBOL_CRC(mt76x02_init_device, 0xccb92072, "_gpl");
SYMBOL_CRC(mt76x02_configure_filter, 0x427ae6f3, "_gpl");
SYMBOL_CRC(mt76x02_sta_add, 0xd0f13e52, "_gpl");
SYMBOL_CRC(mt76x02_sta_remove, 0x19e02431, "_gpl");
SYMBOL_CRC(mt76x02_add_interface, 0x5abe01ae, "_gpl");
SYMBOL_CRC(mt76x02_remove_interface, 0xcda242ec, "_gpl");
SYMBOL_CRC(mt76x02_ampdu_action, 0x42283efe, "_gpl");
SYMBOL_CRC(mt76x02_set_key, 0x7697b811, "_gpl");
SYMBOL_CRC(mt76x02_conf_tx, 0x2902cdf9, "_gpl");
SYMBOL_CRC(mt76x02_set_tx_ackto, 0x2441842d, "_gpl");
SYMBOL_CRC(mt76x02_set_coverage_class, 0x6f68d822, "_gpl");
SYMBOL_CRC(mt76x02_set_rts_threshold, 0x5e09f4db, "_gpl");
SYMBOL_CRC(mt76x02_sta_rate_tbl_update, 0x9cee9c35, "_gpl");
SYMBOL_CRC(mt76x02_remove_hdr_pad, 0xcf646aca, "_gpl");
SYMBOL_CRC(mt76x02_sw_scan_complete, 0x3516656a, "_gpl");
SYMBOL_CRC(mt76x02_sta_ps, 0x548ee477, "_gpl");
SYMBOL_CRC(mt76x02_bss_info_changed, 0xd81c5b82, "_gpl");
SYMBOL_CRC(mt76x02_config_mac_addr_list, 0xb265006f, "_gpl");
SYMBOL_CRC(mt76x02_mac_reset_counters, 0xff95d37b, "_gpl");
SYMBOL_CRC(mt76x02_mac_shared_key_setup, 0x69c7583b, "_gpl");
SYMBOL_CRC(mt76x02_mac_wcid_setup, 0x9c427b0b, "_gpl");
SYMBOL_CRC(mt76x02_mac_write_txwi, 0xbd826a27, "_gpl");
SYMBOL_CRC(mt76x02_mac_setaddr, 0x943eb60d, "_gpl");
SYMBOL_CRC(mt76x02_tx_complete_skb, 0x7c91d1c0, "_gpl");
SYMBOL_CRC(mt76x02_update_channel, 0xeeacaa42, "_gpl");
SYMBOL_CRC(mt76x02_edcca_init, 0xfd4163ff, "_gpl");
SYMBOL_CRC(mt76x02_mac_cc_reset, 0xfc952662, "_gpl");
SYMBOL_CRC(mt76x02_mcu_parse_response, 0xa63ffbfc, "_gpl");
SYMBOL_CRC(mt76x02_mcu_msg_send, 0x58b4099c, "_gpl");
SYMBOL_CRC(mt76x02_mcu_function_select, 0xb6aacbaa, "_gpl");
SYMBOL_CRC(mt76x02_mcu_set_radio_state, 0x130c4a7f, "_gpl");
SYMBOL_CRC(mt76x02_mcu_calibrate, 0x6ff8f8ae, "_gpl");
SYMBOL_CRC(mt76x02_mcu_cleanup, 0x7ccb3dbd, "_gpl");
SYMBOL_CRC(mt76x02_set_ethtool_fwver, 0x620e604b, "_gpl");
SYMBOL_CRC(mt76x02_eeprom_copy, 0x1cb257d4, "_gpl");
SYMBOL_CRC(mt76x02_get_efuse_data, 0x12835468, "_gpl");
SYMBOL_CRC(mt76x02_eeprom_parse_hw_cap, 0xcfb66a75, "_gpl");
SYMBOL_CRC(mt76x02_ext_pa_enabled, 0x470897c7, "_gpl");
SYMBOL_CRC(mt76x02_get_rx_gain, 0xfab786a3, "_gpl");
SYMBOL_CRC(mt76x02_get_lna_gain, 0x2f133158, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_rxpath, 0x7e64eca5, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_txdac, 0xe16acb52, "_gpl");
SYMBOL_CRC(mt76x02_get_max_rate_power, 0x0d4023ec, "_gpl");
SYMBOL_CRC(mt76x02_limit_rate_power, 0x35d2834d, "_gpl");
SYMBOL_CRC(mt76x02_add_rate_power_offset, 0x0462ce68, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_txpower, 0xf6304f43, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_bw, 0x9e0a96db, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_band, 0xe98f2f9b, "_gpl");
SYMBOL_CRC(mt76x02_phy_adjust_vga_gain, 0xe73fd251, "_gpl");
SYMBOL_CRC(mt76x02_init_agc_gain, 0x6d3a1f4b, "_gpl");
SYMBOL_CRC(mt76x02e_init_beacon_config, 0x1d7bbc8c, "_gpl");
SYMBOL_CRC(mt76x02_dma_init, 0xa6930a12, "_gpl");
SYMBOL_CRC(mt76x02_rx_poll_complete, 0xe93622d7, "_gpl");
SYMBOL_CRC(mt76x02_irq_handler, 0x91d5b9ee, "_gpl");
SYMBOL_CRC(mt76x02_dma_disable, 0xdb34abab, "_gpl");
SYMBOL_CRC(mt76x02_mac_start, 0x74313c5d, "_gpl");
SYMBOL_CRC(mt76x02_reconfig_complete, 0xfddf1666, "_gpl");
SYMBOL_CRC(mt76x02_tx, 0x0e16eb0f, "_gpl");
SYMBOL_CRC(mt76x02_queue_rx_skb, 0x4daa1a24, "_gpl");
SYMBOL_CRC(mt76x02_tx_set_txpwr_auto, 0x119e0b00, "_gpl");
SYMBOL_CRC(mt76x02_tx_status_data, 0xeb40c576, "_gpl");
SYMBOL_CRC(mt76x02_tx_prepare_skb, 0x6d99e2fb, "_gpl");
SYMBOL_CRC(mt76x02_init_debugfs, 0x001d9ad0, "_gpl");
SYMBOL_CRC(mt76x02_phy_dfs_adjust_agc, 0xe9378d26, "_gpl");
SYMBOL_CRC(mt76x02_dfs_init_params, 0x2b123566, "_gpl");
SYMBOL_CRC(mt76x02_mac_set_beacon, 0x8c128671, "_gpl");
SYMBOL_CRC(mt76x02_resync_beacon_timer, 0x94d0e0e0, "_gpl");
SYMBOL_CRC(mt76x02_update_beacon_iter, 0xc3821288, "_gpl");
SYMBOL_CRC(mt76x02_enqueue_buffered_bc, 0x8f7faafb, "_gpl");
SYMBOL_CRC(mt76x02_init_beacon_config, 0x72bc4d57, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa091234b, "ieee80211_sta_register_airtime" },
	{ 0xbf43fc9, "__traceiter_mac_txdone" },
	{ 0x6bca6900, "mt76_dma_rx_poll" },
	{ 0x19021900, "mt76_tx_status_unlock" },
	{ 0x275ae254, "simple_attr_open" },
	{ 0x8dad64f7, "debugfs_attr_write" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x972a3723, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xa719442, "netif_napi_add_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9d139492, "mt76_tx_status_skb_get" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0x88168a05, "mt76_tx_status_lock" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0xe974ee17, "mt76_csa_check" },
	{ 0xfaa089a8, "mt76_tx_status_skb_add" },
	{ 0x5d1b4e42, "__tracepoint_mac_txdone" },
	{ 0xa6884b73, "__traceiter_dev_irq" },
	{ 0xa9639ee7, "mt76_tx_check_agg_ssn" },
	{ 0x1305adc9, "ieee80211_tx_status_ext" },
	{ 0x26663b56, "mt76_stop_tx_queues" },
	{ 0x941d386c, "___pskb_trim" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1cc1fb3d, "__mt76_tx_complete_skb" },
	{ 0x655cade0, "seq_lseek" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd6828218, "ieee80211_restart_hw" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0xa71c2ada, "ieee80211_get_hdrlen_from_skb" },
	{ 0x84b2bed2, "kthread_park" },
	{ 0xb47f89bc, "mt76_mcu_rx_event" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7e19af4a, "mt76_tx_status_check" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x27aa4858, "ieee80211_get_buffered_bc" },
	{ 0x2a306880, "napi_complete_done" },
	{ 0x293f231f, "ieee80211_get_tx_rates" },
	{ 0x7f5370c6, "ieee80211_send_bar" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9108a880, "debugfs_create_devm_seqfile" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x704023d3, "mt76_tx" },
	{ 0x61c4754b, "__napi_schedule" },
	{ 0x9e012e62, "mt76_csa_finish" },
	{ 0xe40b66ef, "mt76_wcid_alloc" },
	{ 0xa9d97bac, "mt76_wcid_key_setup" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x35c3640f, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xe5187f64, "mt76_rx" },
	{ 0x517d9b91, "kthread_unpark" },
	{ 0x250b3a37, "mt76_phy_dfs_state" },
	{ 0x6d54ec4d, "wiphy_to_ieee80211_hw" },
	{ 0xb18a7600, "mt76_init_queue" },
	{ 0x57827ec9, "debugfs_attr_read" },
	{ 0x18b22f0c, "__mt76_sta_remove" },
	{ 0x91c58e87, "mt76_tx_status_skb_done" },
	{ 0x7996285a, "ieee80211_queue_delayed_work" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x49e3a4b, "debugfs_create_bool" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x121445a5, "skb_pull" },
	{ 0xea15f280, "simple_attr_release" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x5792f848, "strlcpy" },
	{ 0x52238ddf, "napi_enable" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0xab67581c, "mt76_update_survey" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xc6634315, "mt76_ac_to_hwq" },
	{ 0xac6775d6, "ieee80211_wake_queues" },
	{ 0xe93fe907, "mt76_mcu_send_and_get_msg" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xcffbe798, "ieee80211_iter_keys_rcu" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x12c7531a, "__mt76_mcu_msg_alloc" },
	{ 0xa1a5fb82, "mt76_set_irq_mask" },
	{ 0x27e4ffed, "bpf_trace_run1" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xdcb764ad, "memset" },
	{ 0xd23cde9, "ieee80211_calc_tx_airtime" },
	{ 0x1fa115ba, "debugfs_create_u32" },
	{ 0x2c39ff9b, "mt76_seq_puts_array" },
	{ 0x2ca5657c, "ieee80211_stop_queues" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1f8ac718, "__tracepoint_dev_irq" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x76ac782, "mt76_mcu_get_response" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0x3fa29299, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x45a27d97, "mt76_txq_schedule_all" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x5520f40, "mt76_rx_aggr_start" },
	{ 0xfccfc18b, "____mt76_poll_msec" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x9a099bc2, "ieee80211_beacon_get_tim" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xdcebe45, "seq_puts" },
	{ 0xac984a2e, "ieee80211_radar_detected" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x66ff58da, "mt76_queues_read" },
	{ 0xeb197734, "mt76_register_debugfs_fops" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x62f52652, "napi_schedule_prep" },
	{ 0x1777343a, "napi_disable" },
	{ 0x53039629, "__mt76_poll" },
	{ 0x6518a263, "mt76_rx_aggr_stop" },
	{ 0xb696a3e3, "debugfs_create_u8" },
	{ 0xb3c6f341, "single_open" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4052d0a1, "mt76_dma_attach" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mac80211,mt76,cfg80211");


MODULE_INFO(srcversion, "1647352DE5E4A656F76977D");
