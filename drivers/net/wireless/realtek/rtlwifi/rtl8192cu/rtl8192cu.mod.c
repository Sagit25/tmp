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


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xaab63627, "param_ops_ullong" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0x1835bc35, "rtl92c_phy_sw_chnl" },
	{ 0xa8c58267, "rtl92c_fill_h2c_cmd" },
	{ 0x7c0eabb5, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0x45b2640d, "efuse_read_1byte" },
	{ 0xc1eddc18, "dm_restorepowerindex" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x46ee17c7, "rtl_process_phyinfo" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x972a3723, "consume_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7156eff5, "rtl_cam_reset_all_entry" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0xbdfda412, "rtl92c_phy_query_bb_reg" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0xcda3ca75, "rtl92ce_phy_set_rf_on" },
	{ 0x7e591947, "rtl_cam_empty_entry" },
	{ 0xacdf654c, "rtl_cam_del_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0xb26ea2cf, "rtl92c_phy_rf_config" },
	{ 0x9c77119b, "rtl_cam_mark_invalid" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb1c07846, "_rtl_dbg_print" },
	{ 0x4decaaa0, "ieee80211_find_sta" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x956288b7, "rtl92c_phy_set_io_cmd" },
	{ 0xe86cd91c, "_rtl92c_store_pwrindex_diffrate_offset" },
	{ 0xb6de62a9, "rtl_rfreg_delay" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x43c92b8c, "rtl92c_download_fw" },
	{ 0x37c34f8, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0x85d0d2a2, "rtlwifi_rate_mapping" },
	{ 0x72a217ee, "request_firmware_nowait" },
	{ 0x2dd92b75, "_rtl92c_phy_set_rf_sleep" },
	{ 0x121445a5, "skb_pull" },
	{ 0x7ffeb7f7, "rtl_signal_scale_mapping" },
	{ 0x7f69eb75, "_rtl_dbg_print_data" },
	{ 0xdb5021f8, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x64d7a93, "dm_writepowerindex" },
	{ 0x682280e1, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0x6557c40a, "rtl92c_dm_rf_saving" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf62531b5, "rtl_get_hwinfo" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x902d7e68, "rtl_ps_enable_nic" },
	{ 0xdcb764ad, "memset" },
	{ 0x5ccf94b5, "rtl92c_phy_set_bb_reg" },
	{ 0x5f26210c, "rtl_usb_probe" },
	{ 0xaf53d9a2, "rtl92c_dm_init" },
	{ 0x87d0292b, "rtl92c_phy_iq_calibrate" },
	{ 0xbed273bb, "rtl92c_dm_init_edca_turbo" },
	{ 0x1ec702d8, "rtl_phy_scan_operation_backup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x999e8297, "vfree" },
	{ 0xc91a6e44, "rtl_cam_add_one_entry" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2327d91c, "_rtl92c_phy_calculate_bit_shift" },
	{ 0x5db3a9f3, "rtl92c_phy_lc_calibrate" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2ac50adb, "rtl92c_phy_set_bw_mode" },
	{ 0xf5e0a480, "_rtl92c_phy_rf_serial_read" },
	{ 0x2652c4b4, "rtl_get_tcb_desc" },
	{ 0x42930a1a, "_rtl92c_phy_rf_serial_write" },
	{ 0x7ce4120, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0x9b99214d, "rtl92c_dm_watchdog" },
	{ 0xa171d892, "rtl_ps_disable_nic" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc9ba1be3, "rtl92c_dm_check_txpower_tracking" },
	{ 0x4a9f7bb, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0xbd7b3e8a, "rtl92c_phy_set_txpower_level" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x5096ec91, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0x9d69f15c, "rtl_usb_disconnect" },
	{ 0x23079c19, "rtl92c_phy_set_rfpath_switch" },
	{ 0x23b03c02, "rtl_cam_get_free_entry" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x8ea60059, "rtl_fw_cb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8f79d356, "rtl_cam_delete_one_entry" },
	{ 0xafecdfd, "ieee80211_rx_napi" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "rtlwifi,rtl8192c-common,mac80211,rtl_usb");

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp819Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DC976128B80294D1319DD59");
