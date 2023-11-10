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

SYMBOL_CRC(mt76_connac_mcu_start_firmware, 0x6de7b3a7, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_patch_sem_ctrl, 0xb333b7c0, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_start_patch, 0xd7d04658, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_init_download, 0x3ec24b9b, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_channel_domain, 0x4fcb99ef, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_mac_enable, 0xcb2c37ce, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_vif_ps, 0x7f886eef, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_rts_thresh, 0x23065aa2, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_beacon_loss_iter, 0xa91b26b7, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_add_nested_tlv, 0x8cb86198, "_gpl");
SYMBOL_CRC(__mt76_connac_mcu_alloc_sta_req, 0x60e25fb8, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_alloc_wtbl_req, 0xf83c03b8, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_bss_omac_tlv, 0x6647dc27, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_basic_tlv, 0xb3864472, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_uapsd, 0xb88d27d2, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_hdr_trans_tlv, 0x99b90787, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_update_hdr_trans, 0xfe3471bf, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_update_hdr_trans, 0x928f7f5c, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_generic_tlv, 0x6372583d, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_tlv, 0x6b994d38, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_smps_tlv, 0xa1c2f280, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_ht_tlv, 0x3d11eb2d, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_cmd, 0xa4ffc41d, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_ba_tlv, 0xac3ed27b, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_uni_add_dev, 0xf066e5ad, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_ba_tlv, 0x41d36d12, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_ba, 0xbe414b08, "_gpl");
SYMBOL_CRC(mt76_connac_get_phy_mode, 0x10f46005, "_gpl");
SYMBOL_CRC(mt76_connac_get_he_phy_cap, 0xb85a5fe3, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_uni_add_bss, 0x02e901b1, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_hw_scan, 0xc513a356, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_cancel_hw_scan, 0x2932bf3f, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sched_scan_req, 0x4985fd8c, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sched_scan_enable, 0x66c8eac2, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_chip_config, 0xc1c0b97e, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_deep_sleep, 0x79c9ca31, "_gpl");
SYMBOL_CRC(mt76_connac_sta_state_dp, 0xfdde1d50, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_coredump_event, 0x2cbc37b0, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_get_nic_capability, 0xcdb1718b, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_rate_txpower, 0xad2e56d9, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_update_arp_filter, 0x2a154d58, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_p2p_oppps, 0x5e8d453c, "_gpl");
SYMBOL_CRC(mt76_connac_wowlan_support, 0x908ca40c, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_update_gtk_rekey, 0xd9743e65, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_hif_suspend, 0x1028c195, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_suspend_iter, 0xc383a0f0, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_reg_rr, 0x508ab2ad, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_reg_wr, 0x2d859dcd, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_add_key, 0x74cc891a, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_bss_ext_tlv, 0x31369362, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_bss_basic_tlv, 0x87df5d9a, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_pm, 0x263a135a, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_restart, 0x9043be75, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_rdd_cmd, 0xe524de43, "_gpl");
SYMBOL_CRC(mt76_connac2_load_ram, 0x2937b338, "_gpl");
SYMBOL_CRC(mt76_connac2_load_patch, 0x37aee44a, "_gpl");
SYMBOL_CRC(mt76_connac2_mcu_fill_message, 0x528098c4, "_gpl");
SYMBOL_CRC(mt76_connac_pm_wake, 0x63c75d14, "_gpl");
SYMBOL_CRC(mt76_connac_power_save_sched, 0x1dccf26f, "_gpl");
SYMBOL_CRC(mt76_connac_free_pending_tx_skbs, 0x63d5d484, "_gpl");
SYMBOL_CRC(mt76_connac_pm_queue_skb, 0xa1618ffe, "_gpl");
SYMBOL_CRC(mt76_connac_pm_dequeue_skbs, 0xc76b993c, "_gpl");
SYMBOL_CRC(mt76_connac_tx_complete_skb, 0x6225f060, "_gpl");
SYMBOL_CRC(mt76_connac_write_hw_txp, 0x66db675f, "_gpl");
SYMBOL_CRC(mt76_connac_txp_skb_unmap, 0xf238b5a6, "_gpl");
SYMBOL_CRC(mt76_connac_init_tx_queues, 0x5a12f393, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_write_txwi, 0x17a641f9, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_fill_txs, 0x8b84d40b, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_add_txs_skb, 0xa15f76a2, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_decode_he_radiotap, 0xaf74730a, "_gpl");
SYMBOL_CRC(mt76_connac2_reverse_frag0_hdr_trans, 0xb7255abd, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_fill_rx_rate, 0xfe911ded, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x19021900, "mt76_tx_status_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x48471741, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x972a3723, "consume_skb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9d139492, "mt76_tx_status_skb_get" },
	{ 0x88168a05, "mt76_tx_status_lock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa951a544, "dma_unmap_page_attrs" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x74a05018, "request_firmware" },
	{ 0x6c7e3a82, "mt76_get_rate" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb324b9a3, "ieee80211_beacon_loss" },
	{ 0x1cc1fb3d, "__mt76_tx_complete_skb" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xa71c2ada, "ieee80211_get_hdrlen_from_skb" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x4decaaa0, "ieee80211_find_sta" },
	{ 0xd33a999d, "mt76_calculate_default_rate" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x704023d3, "mt76_tx" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb18a7600, "mt76_init_queue" },
	{ 0x91c58e87, "mt76_tx_status_skb_done" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x121445a5, "skb_pull" },
	{ 0x1ba75c29, "mt76_mcu_skb_send_and_get_msg" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xac6775d6, "ieee80211_wake_queues" },
	{ 0xe93fe907, "mt76_mcu_send_and_get_msg" },
	{ 0xcffbe798, "ieee80211_iter_keys_rcu" },
	{ 0x12c7531a, "__mt76_mcu_msg_alloc" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xdcb764ad, "memset" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0xf2c07279, "__mt76_mcu_send_firmware" },
	{ 0x2ca5657c, "ieee80211_stop_queues" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xce8992bc, "mt76_get_rate_power_limits" },
	{ 0x5ebe9ad0, "ieee80211_scan_completed" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0xf9849971, "mt76_get_sar_power" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mt76,mac80211,cfg80211");


MODULE_INFO(srcversion, "2A9BDB33E10E8DB425E3310");
