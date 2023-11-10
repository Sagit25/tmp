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

SYMBOL_CRC(mwifiex_queue_main_work, 0xbaf57e3b, "_gpl");
SYMBOL_CRC(mwifiex_main_process, 0xae8932dc, "_gpl");
SYMBOL_CRC(mwifiex_multi_chan_resync, 0x486b5d92, "_gpl");
SYMBOL_CRC(mwifiex_upload_device_dump, 0x3b9a0924, "_gpl");
SYMBOL_CRC(mwifiex_drv_info_dump, 0xe44e5bbd, "_gpl");
SYMBOL_CRC(mwifiex_prepare_fw_dump_info, 0xa89a4a52, "_gpl");
SYMBOL_CRC(mwifiex_shutdown_sw, 0xb38e2bdf, "_gpl");
SYMBOL_CRC(mwifiex_reinit_sw, 0xb52508fa, "_gpl");
SYMBOL_CRC(mwifiex_add_card, 0xcbcb770e, "_gpl");
SYMBOL_CRC(mwifiex_remove_card, 0x1ac4575c, "_gpl");
SYMBOL_CRC(_mwifiex_dbg, 0xdef0904a, "_gpl");
SYMBOL_CRC(mwifiex_dnld_fw, 0x668bd081, "_gpl");
SYMBOL_CRC(mwifiex_process_hs_config, 0xfecd5c4a, "_gpl");
SYMBOL_CRC(mwifiex_process_sleep_confirm_resp, 0x44501d02, "_gpl");
SYMBOL_CRC(mwifiex_init_shutdown_fw, 0xa211092b, "_gpl");
SYMBOL_CRC(mwifiex_alloc_dma_align_buf, 0xd4dad9f3, "_gpl");
SYMBOL_CRC(mwifiex_fw_dump_event, 0xc97c37a1, "_gpl");
SYMBOL_CRC(mwifiex_handle_rx_packet, 0xf25075f5, "_gpl");
SYMBOL_CRC(mwifiex_write_data_complete, 0x84619e6c, "_gpl");
SYMBOL_CRC(mwifiex_deauthenticate_all, 0x3f54362d, "_gpl");
SYMBOL_CRC(mwifiex_cancel_hs, 0xf178d9f0, "_gpl");
SYMBOL_CRC(mwifiex_enable_hs, 0x34ce5d71, "_gpl");
SYMBOL_CRC(mwifiex_disable_auto_ds, 0xc8073963, "_gpl");
SYMBOL_CRC(mwifiex_add_virtual_intf, 0x091b2d38, "_gpl");
SYMBOL_CRC(mwifiex_del_virtual_intf, 0x2e5de3a3, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1f258bf4, "cfg80211_sched_scan_results" },
	{ 0x29d5ccea, "skb_complete_wifi_ack" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7d45a939, "cfg80211_mgmt_tx_status_ext" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x48471741, "skb_put" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2d11db92, "cfg80211_chandef_dfs_required" },
	{ 0xd102dec2, "cfg80211_scan_done" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6dce2310, "cfg80211_sched_scan_stopped" },
	{ 0xd9653b2f, "param_ops_ushort" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x342b626e, "cfg80211_remain_on_channel_expired" },
	{ 0x2248d4c8, "cfg80211_cac_event" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe0e5d536, "cfg80211_register_netdevice" },
	{ 0x74a05018, "request_firmware" },
	{ 0x96848186, "scnprintf" },
	{ 0xc0d228bc, "ieee80211_amsdu_to_8023s" },
	{ 0x210c3af6, "cfg80211_ref_bss" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x98ff2517, "regulatory_hint" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xc4b4fc27, "cfg80211_chandef_valid" },
	{ 0x77734a0f, "cfg80211_new_sta" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0x342c795a, "cfg80211_disconnected" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x56962cfc, "ether_setup" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x453931da, "wiphy_new_nm" },
	{ 0x92997ed8, "_printk" },
	{ 0x432d1588, "cfg80211_ready_on_channel" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x9094dcde, "cfg80211_classify8021d" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x79b82a71, "cfg80211_find_vendor_elem" },
	{ 0xa24166ef, "wiphy_register" },
	{ 0x6c9a4a22, "cfg80211_put_bss" },
	{ 0x3cefa539, "netif_device_detach" },
	{ 0xb7d8120c, "cfg80211_ch_switch_notify" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xe065ce9d, "netif_device_attach" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x5fad0041, "ieee80211_get_channel_khz" },
	{ 0xa43c3d5d, "__cfg80211_radar_event" },
	{ 0x95d109f0, "cfg80211_tdls_oper_request" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x11132c7a, "cfg80211_ibss_joined" },
	{ 0x72a217ee, "request_firmware_nowait" },
	{ 0x394f4efd, "simple_open" },
	{ 0x121445a5, "skb_pull" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7c592253, "wiphy_apply_custom_regulatory" },
	{ 0x53222b18, "cfg80211_michael_mic_failure" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x1cdbdf56, "dev_close" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x5792f848, "strlcpy" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x1d0f24a3, "cfg80211_del_sta_sinfo" },
	{ 0x194a2f46, "wiphy_unregister" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x549241c, "dev_coredumpv" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x61caff11, "cfg80211_get_bss" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x11fe2f4d, "netif_tx_stop_all_queues" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xdcb764ad, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1196dca3, "of_property_read_variable_u8_array" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xdb73a05c, "skb_unlink" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa513e0b, "cfg80211_sched_scan_stopped_locked" },
	{ 0x260f4559, "skb_realloc_headroom" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xff06ce79, "cfg80211_unregister_wdev" },
	{ 0x999e8297, "vfree" },
	{ 0xafa88d4c, "cfg80211_rx_mgmt_ext" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1f1bbd31, "skb_copy" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0x6ca71fd, "cfg80211_chandef_create" },
	{ 0x99e91096, "cfg80211_report_wowlan_wakeup" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x6121104b, "cfg80211_inform_bss_data" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x20af50d6, "irq_of_parse_and_map" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x429c0c31, "ieee80211_bss_get_elem" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa2db0b1a, "cfg80211_connect_done" },
	{ 0x123109a9, "wiphy_free" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x71d552ca, "cfg80211_cqm_rssi_notify" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6d385d04, "skb_queue_head" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "C0F1A985144BAE05B470492");
