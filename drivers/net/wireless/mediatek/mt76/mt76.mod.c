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

SYMBOL_CRC(mt76_set_irq_mask, 0xa1a5fb82, "_gpl");
SYMBOL_CRC(mt76_mmio_init, 0x5d94442c, "_gpl");
SYMBOL_CRC(__mt76_poll, 0x53039629, "_gpl");
SYMBOL_CRC(____mt76_poll_msec, 0xfccfc18b, "_gpl");
SYMBOL_CRC(mt76_wcid_alloc, 0xe40b66ef, "_gpl");
SYMBOL_CRC(mt76_get_min_avg_rssi, 0xba6a69ea, "_gpl");
SYMBOL_CRC(__mt76_worker_fn, 0x1ec57b4f, "_gpl");
SYMBOL_CRC(__tracepoint_mac_txdone, 0x5d1b4e42, "_gpl");
SYMBOL_CRC(__traceiter_mac_txdone, 0x0bf43fc9, "_gpl");
SYMBOL_CRC(__SCK__tp_func_mac_txdone, 0xc6315d8e, "_gpl");
SYMBOL_CRC(__tracepoint_dev_irq, 0x1f8ac718, "_gpl");
SYMBOL_CRC(__traceiter_dev_irq, 0xa6884b73, "_gpl");
SYMBOL_CRC(__SCK__tp_func_dev_irq, 0x805fc13a, "_gpl");
SYMBOL_CRC(mt76_put_txwi, 0xb183bc30, "_gpl");
SYMBOL_CRC(mt76_dma_rx_poll, 0x6bca6900, "_gpl");
SYMBOL_CRC(mt76_dma_attach, 0x4052d0a1, "_gpl");
SYMBOL_CRC(mt76_dma_cleanup, 0xe3b1cda2, "_gpl");
SYMBOL_CRC(mt76_rates, 0x17f568e9, "_gpl");
SYMBOL_CRC(mt76_set_stream_caps, 0xa292531a, "_gpl");
SYMBOL_CRC(mt76_alloc_phy, 0x3108c79d, "_gpl");
SYMBOL_CRC(mt76_register_phy, 0x737df325, "_gpl");
SYMBOL_CRC(mt76_unregister_phy, 0x854dd9d7, "_gpl");
SYMBOL_CRC(mt76_alloc_device, 0x3ca66319, "_gpl");
SYMBOL_CRC(mt76_register_device, 0x221ff9c1, "_gpl");
SYMBOL_CRC(mt76_unregister_device, 0x0908baa2, "_gpl");
SYMBOL_CRC(mt76_free_device, 0xac1f0e6d, "_gpl");
SYMBOL_CRC(mt76_rx, 0xe5187f64, "_gpl");
SYMBOL_CRC(mt76_has_tx_pending, 0xa49be482, "_gpl");
SYMBOL_CRC(mt76_update_survey_active_time, 0x71327803, "_gpl");
SYMBOL_CRC(mt76_update_survey, 0xab67581c, "_gpl");
SYMBOL_CRC(mt76_set_channel, 0x925dabb0, "_gpl");
SYMBOL_CRC(mt76_get_survey, 0xadd143ad, "_gpl");
SYMBOL_CRC(mt76_wcid_key_setup, 0xa9d97bac, "");
SYMBOL_CRC(mt76_rx_poll_complete, 0xee198fca, "_gpl");
SYMBOL_CRC(__mt76_sta_remove, 0x18b22f0c, "_gpl");
SYMBOL_CRC(mt76_sta_state, 0x1d39ab88, "_gpl");
SYMBOL_CRC(mt76_sta_pre_rcu_remove, 0xb399b71f, "_gpl");
SYMBOL_CRC(mt76_get_txpower, 0xa0c0af00, "_gpl");
SYMBOL_CRC(mt76_init_sar_power, 0x1d82fe97, "_gpl");
SYMBOL_CRC(mt76_get_sar_power, 0xf9849971, "_gpl");
SYMBOL_CRC(mt76_csa_finish, 0x9e012e62, "_gpl");
SYMBOL_CRC(mt76_csa_check, 0xe974ee17, "_gpl");
SYMBOL_CRC(mt76_set_tim, 0x959a5838, "_gpl");
SYMBOL_CRC(mt76_insert_ccmp_hdr, 0x08a3d37b, "_gpl");
SYMBOL_CRC(mt76_get_rate, 0x6c7e3a82, "_gpl");
SYMBOL_CRC(mt76_sw_scan, 0x45801516, "_gpl");
SYMBOL_CRC(mt76_sw_scan_complete, 0x829acaa9, "_gpl");
SYMBOL_CRC(mt76_get_antenna, 0x8a163e96, "_gpl");
SYMBOL_CRC(mt76_init_queue, 0xb18a7600, "_gpl");
SYMBOL_CRC(mt76_calculate_default_rate, 0xd33a999d, "_gpl");
SYMBOL_CRC(mt76_ethtool_worker, 0xba6e47f1, "_gpl");
SYMBOL_CRC(mt76_phy_dfs_state, 0x250b3a37, "_gpl");
SYMBOL_CRC(mt76_queues_read, 0x66ff58da, "_gpl");
SYMBOL_CRC(mt76_seq_puts_array, 0x2c39ff9b, "_gpl");
SYMBOL_CRC(mt76_register_debugfs_fops, 0xeb197734, "_gpl");
SYMBOL_CRC(mt76_get_of_eeprom, 0x3c10aebb, "_gpl");
SYMBOL_CRC(mt76_eeprom_override, 0xaebe659d, "_gpl");
SYMBOL_CRC(mt76_get_rate_power_limits, 0xce8992bc, "_gpl");
SYMBOL_CRC(mt76_eeprom_init, 0xb51c44cf, "_gpl");
SYMBOL_CRC(mt76_tx_check_agg_ssn, 0xa9639ee7, "_gpl");
SYMBOL_CRC(mt76_tx_status_lock, 0x88168a05, "_gpl");
SYMBOL_CRC(mt76_tx_status_unlock, 0x19021900, "_gpl");
SYMBOL_CRC(mt76_tx_status_skb_done, 0x91c58e87, "_gpl");
SYMBOL_CRC(mt76_tx_status_skb_add, 0xfaa089a8, "_gpl");
SYMBOL_CRC(mt76_tx_status_skb_get, 0x9d139492, "_gpl");
SYMBOL_CRC(mt76_tx_status_check, 0x7e19af4a, "_gpl");
SYMBOL_CRC(__mt76_tx_complete_skb, 0x1cc1fb3d, "_gpl");
SYMBOL_CRC(mt76_tx, 0x704023d3, "_gpl");
SYMBOL_CRC(mt76_release_buffered_frames, 0x68f05435, "_gpl");
SYMBOL_CRC(mt76_txq_schedule, 0xeb8b60f8, "_gpl");
SYMBOL_CRC(mt76_txq_schedule_all, 0x45a27d97, "_gpl");
SYMBOL_CRC(mt76_tx_worker_run, 0x75775f62, "_gpl");
SYMBOL_CRC(mt76_stop_tx_queues, 0x26663b56, "_gpl");
SYMBOL_CRC(mt76_wake_tx_queue, 0xa5ff2a8a, "_gpl");
SYMBOL_CRC(mt76_ac_to_hwq, 0xc6634315, "_gpl");
SYMBOL_CRC(mt76_skb_adjust_pad, 0x02058be1, "_gpl");
SYMBOL_CRC(mt76_queue_tx_complete, 0x7847398c, "_gpl");
SYMBOL_CRC(__mt76_set_tx_blocked, 0xd64e6e3e, "_gpl");
SYMBOL_CRC(mt76_token_consume, 0x34a15518, "_gpl");
SYMBOL_CRC(mt76_token_release, 0x231e5e43, "_gpl");
SYMBOL_CRC(mt76_rx_aggr_start, 0x05520f40, "_gpl");
SYMBOL_CRC(mt76_rx_aggr_stop, 0x6518a263, "_gpl");
SYMBOL_CRC(__mt76_mcu_msg_alloc, 0x12c7531a, "_gpl");
SYMBOL_CRC(mt76_mcu_get_response, 0x076ac782, "_gpl");
SYMBOL_CRC(mt76_mcu_rx_event, 0xb47f89bc, "_gpl");
SYMBOL_CRC(mt76_mcu_send_and_get_msg, 0xe93fe907, "_gpl");
SYMBOL_CRC(mt76_mcu_skb_send_and_get_msg, 0x1ba75c29, "_gpl");
SYMBOL_CRC(__mt76_mcu_send_firmware, 0xf2c07279, "_gpl");
SYMBOL_CRC(mt76_pci_disable_aspm, 0xa9c2153d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa091234b, "ieee80211_sta_register_airtime" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xd77a4c98, "pcie_capability_read_word" },
	{ 0xf5ce0a22, "__skb_pad" },
	{ 0x275ae254, "simple_attr_open" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xb607d110, "__ieee80211_schedule_txq" },
	{ 0x8dad64f7, "debugfs_attr_write" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x48471741, "skb_put" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x972a3723, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xa719442, "netif_napi_add_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc9251010, "dmam_alloc_attrs" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0x6b8bf149, "netif_receive_skb_list" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6603d2cc, "ieee80211_free_hw" },
	{ 0xa951a544, "dma_unmap_page_attrs" },
	{ 0x98684600, "ieee80211_txq_schedule_start" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x631baa5b, "dma_sync_single_for_device" },
	{ 0x86adafd6, "skb_add_rx_frag" },
	{ 0x1305adc9, "ieee80211_tx_status_ext" },
	{ 0x1271bec7, "debugfs_create_blob" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0xef9abb20, "ieee80211_register_hw" },
	{ 0x771d5acf, "led_classdev_unregister" },
	{ 0x29c4a10, "__ieee80211_create_tpt_led_trigger" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4a0209a8, "ieee80211_sta_eosp" },
	{ 0xa71c2ada, "ieee80211_get_hdrlen_from_skb" },
	{ 0xe2964344, "__wake_up" },
	{ 0x216dab, "__netif_napi_del" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x84b2bed2, "kthread_park" },
	{ 0xa59295f, "sched_set_fifo_low" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x13753f07, "dma_map_page_attrs" },
	{ 0x2a306880, "napi_complete_done" },
	{ 0x293f231f, "ieee80211_get_tx_rates" },
	{ 0x7f5370c6, "ieee80211_send_bar" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0xaeb9a917, "ieee80211_get_key_rx_seq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xf67bf87a, "ieee80211_sta_uapsd_trigger" },
	{ 0xbeedee72, "of_get_next_child" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9108a880, "debugfs_create_devm_seqfile" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xb719c8e8, "pci_disable_link_state" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x215cc29c, "napi_gro_receive" },
	{ 0x5b81004c, "of_get_mac_address" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x2de125c0, "page_frag_alloc_align" },
	{ 0xc658ea40, "dev_set_threaded" },
	{ 0x36fa7fdb, "build_skb" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x6035d020, "of_get_child_by_name" },
	{ 0x57827ec9, "debugfs_attr_read" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7996285a, "ieee80211_queue_delayed_work" },
	{ 0x7ea31e0c, "devm_kmemdup" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc824dc99, "of_prop_next_string" },
	{ 0xae132803, "debugfs_create_file_unsafe" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xea15f280, "simple_attr_release" },
	{ 0xfe844982, "ieee80211_calc_rx_airtime" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x683b15f6, "ieee80211_find_sta_by_ifaddr" },
	{ 0x8c7bbc1c, "ieee80211_next_txq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x17c7c8b7, "pcie_capability_clear_and_set_word_locked" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x5792f848, "strlcpy" },
	{ 0x52238ddf, "napi_enable" },
	{ 0x2b750f85, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x310f9240, "ieee80211_sta_pspoll" },
	{ 0x3801776b, "__ioread32_copy" },
	{ 0xed815740, "wiphy_read_of_freq_limits" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0x2e077701, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x69c1efbc, "ieee80211_alloc_hw_nm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xfaa32eb0, "ieee80211_tx_dequeue" },
	{ 0x999e462e, "ieee80211_rx_list" },
	{ 0x271438e, "dma_sync_single_for_cpu" },
	{ 0xdcb764ad, "memset" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x1fa115ba, "debugfs_create_u32" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x575ad6b5, "cfg80211_reg_can_beacon" },
	{ 0x7de4bde7, "bpf_trace_run3" },
	{ 0x15ab450d, "__page_frag_cache_drain" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0x3fa29299, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd6e7ca0b, "ieee80211_unregister_hw" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xabb617af, "ieee80211_sta_ps_transition" },
	{ 0xb696a3e3, "debugfs_create_u8" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x9d797868, "init_dummy_netdev" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4da19555, "ieee80211_csa_finish" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "F053CB3C5EE8BD92D12EC94");
