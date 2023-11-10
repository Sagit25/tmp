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
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xffad1d54, "usb_anchor_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x6941e78b, "ath9k_hw_reset_calvalid" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x48471741, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6d3e817c, "ath_key_config" },
	{ 0xfe7135a5, "ath9k_hw_btcoex_init_3wire" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x4f43cb53, "ath9k_cmn_rx_accept" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x6603d2cc, "ieee80211_free_hw" },
	{ 0xe456d1de, "ath9k_hw_reset" },
	{ 0x74a05018, "request_firmware" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x17d90fbe, "ath9k_hw_setuptxqueue" },
	{ 0xc602390a, "ath9k_hw_startpcureceive" },
	{ 0x7b32714f, "ath9k_hw_gpio_request_out" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xff71da08, "ieee80211_start_tx_ba_session" },
	{ 0xb0e7391b, "ath9k_hw_setmcastfilter" },
	{ 0x4829a47e, "memcpy" },
	{ 0x98ff2517, "regulatory_hint" },
	{ 0x37a0cba, "kfree" },
	{ 0xb826cdad, "ath9k_hw_btcoex_set_weight" },
	{ 0x771d5acf, "led_classdev_unregister" },
	{ 0xef9abb20, "ieee80211_register_hw" },
	{ 0x29c4a10, "__ieee80211_create_tpt_led_trigger" },
	{ 0x63910dbf, "ath9k_hw_setpower" },
	{ 0xa71c2ada, "ieee80211_get_hdrlen_from_skb" },
	{ 0x3c7c3b9d, "__ieee80211_get_radio_led_name" },
	{ 0x4ddf648c, "ath9k_hw_phy_disable" },
	{ 0x51e48c0, "ath9k_cmn_rx_skb_postprocess" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd77403e3, "ath_hw_setbssidmask" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7c5a45b3, "ath9k_cmn_beacon_config_sta" },
	{ 0x19768083, "ath9k_hw_setrxabort" },
	{ 0xe6e64041, "ath9k_hw_btcoex_bt_stomp" },
	{ 0x188a1c6e, "ath9k_hw_gpio_free" },
	{ 0x4c7a4d79, "usb_interrupt_msg" },
	{ 0x27aa4858, "ieee80211_get_buffered_bc" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x4decaaa0, "ieee80211_find_sta" },
	{ 0x92997ed8, "_printk" },
	{ 0x7307f5ae, "ath9k_hw_beaconinit" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc48b70bb, "ath9k_hw_settsf64" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xc87bf200, "ath9k_hw_init_global_settings" },
	{ 0x3503ecf3, "ath9k_hw_name" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xebae89b, "ath9k_hw_beaconq_setup" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0x35c3640f, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x1a4d3699, "ath9k_hw_init_btcoex_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x6d54ec4d, "wiphy_to_ieee80211_hw" },
	{ 0xe9357981, "ath_reg_notifier_apply" },
	{ 0x7996285a, "ieee80211_queue_delayed_work" },
	{ 0x25a871ba, "ath9k_hw_write_associd" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x72a217ee, "request_firmware_nowait" },
	{ 0x121445a5, "skb_pull" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x5a921311, "strncmp" },
	{ 0xec010765, "ath9k_cmn_process_rssi" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x19dd1a4, "ath9k_cmn_beacon_config_adhoc" },
	{ 0x2b750f85, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0x2b654e23, "ath_is_mybeacon" },
	{ 0x93d4582d, "ath9k_hw_ani_monitor" },
	{ 0x4f546e9, "ath9k_hw_getrxfilter" },
	{ 0x1c6ee61, "ath9k_hw_btcoex_disable" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xac6775d6, "ieee80211_wake_queues" },
	{ 0xc9a77c08, "ath9k_cmn_beacon_config_ap" },
	{ 0xd0361efe, "ath9k_hw_set_tsfadjust" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x1b186335, "ath9k_hw_set_sta_beacon_timers" },
	{ 0x2e077701, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x69c1efbc, "ieee80211_alloc_hw_nm" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xfa6bcaa7, "ath9k_hw_gettsf64" },
	{ 0x19808540, "ath9k_hw_resettxqueue" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e47dc74, "ath9k_hw_disable" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xc927bce9, "ath9k_hw_setopmode" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x22cc646f, "ath_printk" },
	{ 0xae021234, "ieee80211_tx_status" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x3c683526, "usb_unanchor_urb" },
	{ 0x2ca5657c, "ieee80211_stop_queues" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x92f5b58, "ath9k_cmn_init_channels_rates" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfd6c09f, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x746108be, "ath9k_cmn_reload_chainmask" },
	{ 0x446072ae, "usb_get_urb" },
	{ 0x121cad58, "wiphy_rfkill_start_polling" },
	{ 0xf2539ec9, "ath9k_hw_reset_tsf" },
	{ 0x340d5ea6, "ath9k_hw_releasetxqueue" },
	{ 0x716d3e3b, "ath9k_hw_get_txq_props" },
	{ 0xc907dead, "ath9k_hw_setrxfilter" },
	{ 0x3fa29299, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0xd6e7ca0b, "ieee80211_unregister_hw" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2a65ce66, "ath_regd_init" },
	{ 0x3ec732c3, "ath9k_hw_gpio_get" },
	{ 0x9a099bc2, "ieee80211_beacon_get_tim" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xae8422f3, "ath9k_cmn_update_txpow" },
	{ 0x44a42e6d, "ath_key_delete" },
	{ 0x8c4e485b, "ath9k_hw_stopdmarecv" },
	{ 0xc24d82a8, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0x81e0e12e, "ath9k_hw_wait" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x832a3cb5, "ath9k_hw_btcoex_enable" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x1826219e, "ath9k_cmn_process_rate" },
	{ 0xc673cb62, "ieee80211_queue_work" },
	{ 0xbb42d49a, "ath9k_cmn_init_crypto" },
	{ 0x70e2dc9a, "ath9k_hw_set_gpio" },
	{ 0x518262a, "device_release_driver" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x76baa89, "ath9k_hw_deinit" },
	{ 0x39fb3c4f, "ath9k_cmn_get_channel" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xed66cf8, "ath9k_hw_init" },
	{ 0x4da19555, "ieee80211_csa_finish" },
	{ 0x8b544145, "ath9k_hw_set_txq_props" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xafecdfd, "ieee80211_rx_napi" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ath9k_hw,ath,ath9k_common,mac80211,cfg80211,rfkill");

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9FF018EA794EF7B0AFC98B6");
