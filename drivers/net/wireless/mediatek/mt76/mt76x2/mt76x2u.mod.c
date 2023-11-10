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
	{ 0x76291438, "mt76x02u_tx_complete_skb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x620e604b, "mt76x02_set_ethtool_fwver" },
	{ 0x7697b811, "mt76x02_set_key" },
	{ 0x68f05435, "mt76_release_buffered_frames" },
	{ 0x74a05018, "request_firmware" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0xa0c0af00, "mt76_get_txpower" },
	{ 0x96fc271c, "mt76_write_mac_initvals" },
	{ 0xef1e126b, "mt76x2_reset_wlan" },
	{ 0x3b301be5, "mt76x2_mcu_set_channel" },
	{ 0x130c4a7f, "mt76x02_mcu_set_radio_state" },
	{ 0xa5ff2a8a, "mt76_wake_tx_queue" },
	{ 0x8a163e96, "mt76_get_antenna" },
	{ 0x5f320626, "mt76x2_apply_gain_adj" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x548ee477, "mt76x02_sta_ps" },
	{ 0xe27c580b, "mt76x2_set_sar_specs" },
	{ 0x6588e37c, "mt76u_resume_rx" },
	{ 0x9cee9c35, "mt76x02_sta_rate_tbl_update" },
	{ 0x3ca66319, "mt76_alloc_device" },
	{ 0x69c7583b, "mt76x02_mac_shared_key_setup" },
	{ 0x470897c7, "mt76x02_ext_pa_enabled" },
	{ 0x934246ca, "mt76x2_mac_stop" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0xec80a4a6, "usb_reset_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xeeacaa42, "mt76x02_update_channel" },
	{ 0x5126e534, "mt76x2_configure_tx_delay" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x427ae6f3, "mt76x02_configure_filter" },
	{ 0xac1f0e6d, "mt76_free_device" },
	{ 0x4daa1a24, "mt76x02_queue_rx_skb" },
	{ 0x53cd83f9, "mt76u_queues_deinit" },
	{ 0x7996285a, "ieee80211_queue_delayed_work" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4eab5bb6, "mt76x02u_mcu_fw_reset" },
	{ 0x943eb60d, "mt76x02_mac_setaddr" },
	{ 0x221ff9c1, "mt76_register_device" },
	{ 0x959a5838, "mt76_set_tim" },
	{ 0x3516656a, "mt76x02_sw_scan_complete" },
	{ 0x9e0a96db, "mt76x02_phy_set_bw" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe98f2f9b, "mt76x02_phy_set_band" },
	{ 0x925dabb0, "mt76_set_channel" },
	{ 0xccb92072, "mt76x02_init_device" },
	{ 0xe16eb0f, "mt76x02_tx" },
	{ 0xac6775d6, "ieee80211_wake_queues" },
	{ 0xcfb66a75, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x19e02431, "mt76x02_sta_remove" },
	{ 0x7e64eca5, "mt76x02_phy_set_rxpath" },
	{ 0xfd4163ff, "mt76x02_edcca_init" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xeb40c576, "mt76x02_tx_status_data" },
	{ 0xd0f13e52, "mt76x02_sta_add" },
	{ 0x276d9c2d, "mt76x2_mcu_load_cr" },
	{ 0x15cbd653, "mt76x2_init_txpower" },
	{ 0x371be2b5, "mt76x02u_mcu_fw_send_data" },
	{ 0x8f507f30, "mt76u_init" },
	{ 0xadd143ad, "mt76_get_survey" },
	{ 0x1d9ad0, "mt76x02_init_debugfs" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x446749d5, "mt76x02u_init_mcu" },
	{ 0xcdd3395d, "mt76x02u_tx_prepare_skb" },
	{ 0x48c0a2e1, "mt76x2_mcu_init_gain" },
	{ 0x1d39ab88, "mt76_sta_state" },
	{ 0x6d99780f, "mt76x2_phy_tssi_compensate" },
	{ 0x2ca5657c, "ieee80211_stop_queues" },
	{ 0x5e5b3fd1, "mt76x02u_mac_start" },
	{ 0xfc952662, "mt76x02_mac_cc_reset" },
	{ 0xd81c5b82, "mt76x02_bss_info_changed" },
	{ 0x6d3a1f4b, "mt76x02_init_agc_gain" },
	{ 0x38580c27, "mt76x2_phy_update_channel_gain" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x45a27d97, "mt76_txq_schedule_all" },
	{ 0x2fbf113b, "mt76u_alloc_queues" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6c06db4e, "mt76u_stop_tx" },
	{ 0xba66ad44, "mt76x02u_init_beacon_config" },
	{ 0xd6e7ca0b, "ieee80211_unregister_hw" },
	{ 0x496aa88c, "mt76u_vendor_request" },
	{ 0x5abe01ae, "mt76x02_add_interface" },
	{ 0xfccfc18b, "____mt76_poll_msec" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf9849971, "mt76_get_sar_power" },
	{ 0xdb976afe, "mt76u_stop_rx" },
	{ 0x42283efe, "mt76x02_ampdu_action" },
	{ 0x6ff8f8ae, "mt76x02_mcu_calibrate" },
	{ 0x2902cdf9, "mt76x02_conf_tx" },
	{ 0xb6aacbaa, "mt76x02_mcu_function_select" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x45801516, "mt76_sw_scan" },
	{ 0xb399b71f, "mt76_sta_pre_rcu_remove" },
	{ 0x9c427b0b, "mt76x02_mac_wcid_setup" },
	{ 0x53039629, "__mt76_poll" },
	{ 0xfd2e61c7, "mt76x2_read_rx_gain" },
	{ 0x3728f297, "mt76x2_phy_set_txpower_regs" },
	{ 0x1c2dbc4, "mt76x2_phy_set_txpower" },
	{ 0xe16acb52, "mt76x02_phy_set_txdac" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcda242ec, "mt76x02_remove_interface" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mt76x02-usb,mt76x02-lib,mt76,mt76x2-common,mt76-usb,mac80211");

MODULE_ALIAS("usb:v0B05p1833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p180Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C4Ep0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02FEd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FB502FCA5C1A06BA82C3DF7");
