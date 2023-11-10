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
	{ 0x78095e5b, "mt76x0_set_sar_specs" },
	{ 0x5710317b, "firmware_request_nowarn" },
	{ 0x7697b811, "mt76x02_set_key" },
	{ 0x68f05435, "mt76_release_buffered_frames" },
	{ 0x74a05018, "request_firmware" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0xa0c0af00, "mt76_get_txpower" },
	{ 0xa5ff2a8a, "mt76_wake_tx_queue" },
	{ 0x8a163e96, "mt76_get_antenna" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x548ee477, "mt76x02_sta_ps" },
	{ 0x6588e37c, "mt76u_resume_rx" },
	{ 0x9cee9c35, "mt76x02_sta_rate_tbl_update" },
	{ 0x3ca66319, "mt76_alloc_device" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0xec80a4a6, "usb_reset_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xeeacaa42, "mt76x02_update_channel" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x427ae6f3, "mt76x02_configure_filter" },
	{ 0xac1f0e6d, "mt76_free_device" },
	{ 0xdedac6db, "mt76x0_chip_onoff" },
	{ 0x4daa1a24, "mt76x02_queue_rx_skb" },
	{ 0x53cd83f9, "mt76u_queues_deinit" },
	{ 0x7996285a, "ieee80211_queue_delayed_work" },
	{ 0xce89540e, "mt76x0_config" },
	{ 0x4c71131d, "mt76x0_register_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4eab5bb6, "mt76x02u_mcu_fw_reset" },
	{ 0x673a5f85, "mt76x0_phy_calibrate" },
	{ 0x959a5838, "mt76_set_tim" },
	{ 0x3516656a, "mt76x02_sw_scan_complete" },
	{ 0xe16eb0f, "mt76x02_tx" },
	{ 0x19e02431, "mt76x02_sta_remove" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xeb40c576, "mt76x02_tx_status_data" },
	{ 0xd0f13e52, "mt76x02_sta_add" },
	{ 0x2b48f9b8, "mt76x0_mac_stop" },
	{ 0x371be2b5, "mt76x02u_mcu_fw_send_data" },
	{ 0x8f507f30, "mt76u_init" },
	{ 0xadd143ad, "mt76_get_survey" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x446749d5, "mt76x02u_init_mcu" },
	{ 0xcdd3395d, "mt76x02u_tx_prepare_skb" },
	{ 0x5e09f4db, "mt76x02_set_rts_threshold" },
	{ 0x1d39ab88, "mt76_sta_state" },
	{ 0xa04e2b1b, "mt76x0_init_hardware" },
	{ 0x5e5b3fd1, "mt76x02u_mac_start" },
	{ 0xd81c5b82, "mt76x02_bss_info_changed" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2fbf113b, "mt76u_alloc_queues" },
	{ 0x6c06db4e, "mt76u_stop_tx" },
	{ 0xba66ad44, "mt76x02u_init_beacon_config" },
	{ 0xd6e7ca0b, "ieee80211_unregister_hw" },
	{ 0x496aa88c, "mt76u_vendor_request" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5abe01ae, "mt76x02_add_interface" },
	{ 0xfccfc18b, "____mt76_poll_msec" },
	{ 0xc053666a, "mt76x02u_exit_beacon_config" },
	{ 0xdb976afe, "mt76u_stop_rx" },
	{ 0x42283efe, "mt76x02_ampdu_action" },
	{ 0x2902cdf9, "mt76x02_conf_tx" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x45801516, "mt76_sw_scan" },
	{ 0xb399b71f, "mt76_sta_pre_rcu_remove" },
	{ 0x53039629, "__mt76_poll" },
	{ 0xcda242ec, "mt76x02_remove_interface" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mt76x02-usb,mt76x0-common,mt76x02-lib,mt76,mt76-usb,mac80211");

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "20B52C57B584EDE78FB41E1");
