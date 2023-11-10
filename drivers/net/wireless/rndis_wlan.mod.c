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
	{ 0x2d2c8a89, "usbnet_pause_rx" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x53222b18, "cfg80211_michael_mic_failure" },
	{ 0xb8cc49f8, "cfg80211_pmksa_candidate_notify" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1f6718e8, "rndis_command" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x5fad0041, "ieee80211_get_channel_khz" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xa2db0b1a, "cfg80211_connect_done" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x98cf60b3, "strlen" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6121104b, "cfg80211_inform_bss_data" },
	{ 0x6c9a4a22, "cfg80211_put_bss" },
	{ 0xd102dec2, "cfg80211_scan_done" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x71d552ca, "cfg80211_cqm_rssi_notify" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x5a7c0c1c, "usbnet_resume_rx" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0x11132c7a, "cfg80211_ibss_joined" },
	{ 0xbf293c89, "cfg80211_roamed" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xea94f4e9, "rndis_unbind" },
	{ 0x194a2f46, "wiphy_unregister" },
	{ 0x123109a9, "wiphy_free" },
	{ 0xf9a482f9, "msleep" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0x342c795a, "cfg80211_disconnected" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xcadc3b58, "usbnet_purge_paused_rxq" },
	{ 0x85a552e, "netdev_err" },
	{ 0x453931da, "wiphy_new_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbc39d18, "generic_rndis_bind" },
	{ 0xa24166ef, "wiphy_register" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x21ae9df8, "usbnet_open" },
	{ 0xafc5a0b8, "usbnet_stop" },
	{ 0xc936b3be, "usbnet_start_xmit" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x5eee7c81, "usbnet_tx_timeout" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0x43687a1e, "rndis_status" },
	{ 0x952a1c5d, "rndis_rx_fixup" },
	{ 0x2980ff80, "rndis_tx_fixup" },
	{ 0xfca66e8f, "usbnet_probe" },
	{ 0xa7571c90, "usbnet_disconnect" },
	{ 0xdca6a77f, "usbnet_suspend" },
	{ 0x6cb0863b, "usbnet_resume" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xdc58f5d4, "param_ops_string" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cfg80211,rndis_host");

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");

MODULE_INFO(srcversion, "E909FA5C8B7957C86B4B1B4");
