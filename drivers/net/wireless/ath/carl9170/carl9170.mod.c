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
	{ 0xebfa3f6a, "ieee80211_queue_stopped" },
	{ 0x138e1ab3, "ieee80211_stop_tx_ba_session" },
	{ 0x219ec1bf, "usb_put_intf" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xffad1d54, "usb_anchor_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x48471741, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x86b13d2a, "usb_unpoison_anchored_urbs" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xcb319d8, "usb_ifnum_to_if" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x6603d2cc, "ieee80211_free_hw" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x98ff2517, "regulatory_hint" },
	{ 0x37a0cba, "kfree" },
	{ 0x771d5acf, "led_classdev_unregister" },
	{ 0xef9abb20, "ieee80211_register_hw" },
	{ 0xd6828218, "ieee80211_restart_hw" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf3039661, "ieee80211_wake_queue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x878e81de, "usb_get_intf" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x842f046d, "usb_poison_anchored_urbs" },
	{ 0x3ee625a5, "__ieee80211_get_tx_led_name" },
	{ 0x4decaaa0, "ieee80211_find_sta" },
	{ 0x293f231f, "ieee80211_get_tx_rates" },
	{ 0x5de2d534, "usb_driver_release_interface" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0xd5ddc6e6, "ieee80211_tx_status_irqsafe" },
	{ 0xf1564295, "input_register_device" },
	{ 0xec80a4a6, "usb_reset_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xa916b694, "strnlen" },
	{ 0xb1ab353, "ath_regd_get_band_ctl" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xa8a6063f, "usb_queue_reset_device" },
	{ 0x35c3640f, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x55e99001, "devm_bitmap_zalloc" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x6d54ec4d, "wiphy_to_ieee80211_hw" },
	{ 0xe9357981, "ath_reg_notifier_apply" },
	{ 0x7996285a, "ieee80211_queue_delayed_work" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x72a217ee, "request_firmware_nowait" },
	{ 0x121445a5, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x56385311, "ieee80211_sta_block_awake" },
	{ 0x96267f10, "__dev_kfree_skb_irq" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x2b654e23, "ath_is_mybeacon" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xac6775d6, "ieee80211_wake_queues" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x61685b5a, "ieee80211_free_txskb" },
	{ 0x2e077701, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x69c1efbc, "ieee80211_alloc_hw_nm" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x441916ec, "input_event" },
	{ 0x30259cac, "ieee80211_stop_queue" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x3c683526, "usb_unanchor_urb" },
	{ 0x2ca5657c, "ieee80211_stop_queues" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ac598cb, "__ieee80211_get_assoc_led_name" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0xd6e7ca0b, "ieee80211_unregister_hw" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2a65ce66, "ath_regd_init" },
	{ 0x9a099bc2, "ieee80211_beacon_get_tim" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6973d8b2, "usb_get_from_anchor" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xc673cb62, "ieee80211_queue_work" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xafecdfd, "ieee80211_rx_napi" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211,ath");

MODULE_ALIAS("usb:v0CF3p9170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vCACEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0804d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0326d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3417d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p02B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p9170d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A435C045F8643D6A014D6A9");
