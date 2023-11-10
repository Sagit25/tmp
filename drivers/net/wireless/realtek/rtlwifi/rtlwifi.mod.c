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

SYMBOL_CRC(rtl_tid_to_ac, 0x97e05663, "_gpl");
SYMBOL_CRC(rtl_deinit_deferred_work, 0xe01deda6, "_gpl");
SYMBOL_CRC(rtl_init_rfkill, 0xf195aa34, "");
SYMBOL_CRC(rtl_deinit_rfkill, 0xe21e4bd0, "_gpl");
SYMBOL_CRC(rtl_init_core, 0x60cdf1d4, "_gpl");
SYMBOL_CRC(rtl_deinit_core, 0x0d33d6cc, "_gpl");
SYMBOL_CRC(rtl_init_rx_config, 0x344c8b7b, "_gpl");
SYMBOL_CRC(rtl_mrate_idx_to_arfr_id, 0x546598fd, "");
SYMBOL_CRC(rtlwifi_rate_mapping, 0x85d0d2a2, "");
SYMBOL_CRC(rtl_get_tcb_desc, 0x2652c4b4, "");
SYMBOL_CRC(rtl_tx_mgmt_proc, 0x8825a2d4, "_gpl");
SYMBOL_CRC(rtl_action_proc, 0xb23c10a1, "_gpl");
SYMBOL_CRC(rtl_is_special_data, 0x8c02ca1d, "_gpl");
SYMBOL_CRC(rtl_tx_ackqueue, 0x64d5ab1a, "_gpl");
SYMBOL_CRC(rtl_set_tx_report, 0x3f7fdc42, "_gpl");
SYMBOL_CRC(rtl_tx_report_handler, 0x81a9e90a, "_gpl");
SYMBOL_CRC(rtl_get_hal_edca_param, 0xc6f6c189, "_gpl");
SYMBOL_CRC(rtl_rx_ampdu_apply, 0x2f0e3d26, "");
SYMBOL_CRC(rtl_beacon_statistic, 0x05935ee8, "_gpl");
SYMBOL_CRC(rtl_collect_scan_list, 0x1fc37f44, "");
SYMBOL_CRC(rtl_c2hcmd_enqueue, 0x36736db4, "");
SYMBOL_CRC(rtl_send_smps_action, 0xf06b6c0e, "");
SYMBOL_CRC(rtl_phy_scan_operation_backup, 0x1ec702d8, "");
SYMBOL_CRC(rtl_recognize_peer, 0x6722c627, "_gpl");
SYMBOL_CRC(rtl_global_var, 0x4e94cd48, "_gpl");
SYMBOL_CRC(rtl_cam_add_one_entry, 0xc91a6e44, "");
SYMBOL_CRC(rtl_cam_delete_one_entry, 0x8f79d356, "");
SYMBOL_CRC(rtl_cam_reset_all_entry, 0x7156eff5, "");
SYMBOL_CRC(rtl_cam_mark_invalid, 0x9c77119b, "");
SYMBOL_CRC(rtl_cam_empty_entry, 0x7e591947, "");
SYMBOL_CRC(rtl_cam_get_free_entry, 0x23b03c02, "");
SYMBOL_CRC(rtl_cam_del_entry, 0xacdf654c, "");
SYMBOL_CRC(channel5g, 0x54824f58, "");
SYMBOL_CRC(channel5g_80m, 0x0b038e24, "");
SYMBOL_CRC(rtl_addr_delay, 0x1b945315, "");
SYMBOL_CRC(rtl_rfreg_delay, 0xb6de62a9, "");
SYMBOL_CRC(rtl_bb_delay, 0xa9d1fa28, "");
SYMBOL_CRC(rtl_fw_cb, 0x8ea60059, "");
SYMBOL_CRC(rtl_wowlan_fw_cb, 0xebedfe5f, "");
SYMBOL_CRC(rtl_update_beacon_work_callback, 0x6db3ba37, "_gpl");
SYMBOL_CRC(rtl_hal_pwrseqcmdparsing, 0x97545317, "");
SYMBOL_CRC(rtl_cmd_send_packet, 0xb9a9a001, "");
SYMBOL_CRC(rtl_ops, 0x08580b54, "_gpl");
SYMBOL_CRC(rtl_btc_status_false, 0x2921a4d4, "_gpl");
SYMBOL_CRC(rtl_dm_diginit, 0xcd966bea, "");
SYMBOL_CRC(_rtl_dbg_print, 0xb1c07846, "_gpl");
SYMBOL_CRC(_rtl_dbg_print_data, 0x7f69eb75, "_gpl");
SYMBOL_CRC(rtl_debug_add_one, 0x5b7a727d, "_gpl");
SYMBOL_CRC(rtl_debug_remove_one, 0xed567683, "_gpl");
SYMBOL_CRC(efuse_read_1byte, 0x45b2640d, "");
SYMBOL_CRC(read_efuse_byte, 0x4004967d, "_gpl");
SYMBOL_CRC(efuse_shadow_read, 0xf7c43d67, "");
SYMBOL_CRC(rtl_efuse_shadow_map_update, 0x4f7692a1, "");
SYMBOL_CRC(efuse_one_byte_read, 0xb87b8113, "");
SYMBOL_CRC(efuse_power_switch, 0xbb45b066, "");
SYMBOL_CRC(rtl_get_hwinfo, 0xf62531b5, "_gpl");
SYMBOL_CRC(rtl_fw_block_write, 0x6de5ac8d, "_gpl");
SYMBOL_CRC(rtl_fw_page_write, 0xaf212090, "_gpl");
SYMBOL_CRC(rtl_fill_dummy, 0x2e5382f9, "_gpl");
SYMBOL_CRC(rtl_efuse_ops_init, 0x67aa6dd4, "_gpl");
SYMBOL_CRC(rtl_ps_enable_nic, 0x902d7e68, "");
SYMBOL_CRC(rtl_ps_disable_nic, 0xa171d892, "");
SYMBOL_CRC(rtl_ips_nic_on, 0x105c5a45, "_gpl");
SYMBOL_CRC(rtl_swlps_beacon, 0x6816c51f, "_gpl");
SYMBOL_CRC(rtl_lps_change_work_callback, 0x2d32cdfc, "_gpl");
SYMBOL_CRC(rtl_lps_enter, 0x61f83e51, "_gpl");
SYMBOL_CRC(rtl_lps_leave, 0x091b0bfd, "_gpl");
SYMBOL_CRC(rtl_p2p_info, 0x2126e3b7, "_gpl");
SYMBOL_CRC(rtl_query_rxpwrpercentage, 0x30a956d7, "");
SYMBOL_CRC(rtl_evm_db_to_percentage, 0xed7c8cf2, "");
SYMBOL_CRC(rtl_signal_scale_mapping, 0x7ffeb7f7, "");
SYMBOL_CRC(rtl_process_phyinfo, 0x46ee17c7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xb38b8265, "ieee80211_connection_loss" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x48471741, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x74a05018, "request_firmware" },
	{ 0xff71da08, "ieee80211_start_tx_ba_session" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4994a7b4, "ieee80211_rate_control_unregister" },
	{ 0xa71c2ada, "ieee80211_get_hdrlen_from_skb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4decaaa0, "ieee80211_find_sta" },
	{ 0x92997ed8, "_printk" },
	{ 0xd5ddc6e6, "ieee80211_tx_status_irqsafe" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6c9a4a22, "cfg80211_put_bss" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x35c3640f, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x6d54ec4d, "wiphy_to_ieee80211_hw" },
	{ 0x394f4efd, "simple_open" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x96267f10, "__dev_kfree_skb_irq" },
	{ 0x7c592253, "wiphy_apply_custom_regulatory" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x9760023c, "ieee80211_rate_control_register" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x61caff11, "cfg80211_get_bss" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0xdb73a05c, "skb_unlink" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xdfd6c09f, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x121cad58, "wiphy_rfkill_start_polling" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x707d921f, "freq_reg_info" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x63753675, "ieee80211_resume_disconnect" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x9a099bc2, "ieee80211_beacon_get_tim" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb3c6f341, "single_open" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x25272091, "cfg80211_unlink_bss" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x9060fc6c, "ieee80211_rx_irqsafe" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211,rfkill");


MODULE_INFO(srcversion, "F34BFBE070C17D0014B607A");
