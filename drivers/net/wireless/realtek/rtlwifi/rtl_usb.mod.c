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

SYMBOL_CRC(rtl_usb_probe, 0x5f26210c, "");
SYMBOL_CRC(rtl_usb_disconnect, 0x9d69f15c, "");
SYMBOL_CRC(rtl_usb_suspend, 0x8360c812, "");
SYMBOL_CRC(rtl_usb_resume, 0xfc83f4e9, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xffad1d54, "usb_anchor_urb" },
	{ 0x5935ee8, "rtl_beacon_statistic" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x48471741, "skb_put" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0xa6257a2f, "complete" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x6603d2cc, "ieee80211_free_hw" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xef9abb20, "ieee80211_register_hw" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb1c07846, "_rtl_dbg_print" },
	{ 0x92997ed8, "_printk" },
	{ 0x8580b54, "rtl_ops" },
	{ 0xd5ddc6e6, "ieee80211_tx_status_irqsafe" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x6db3ba37, "rtl_update_beacon_work_callback" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0x121445a5, "skb_pull" },
	{ 0x344c8b7b, "rtl_init_rx_config" },
	{ 0x2d32cdfc, "rtl_lps_change_work_callback" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xb23c10a1, "rtl_action_proc" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x60cdf1d4, "rtl_init_core" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x69c1efbc, "ieee80211_alloc_hw_nm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x3c683526, "usb_unanchor_urb" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0xd6e7ca0b, "ieee80211_unregister_hw" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6973d8b2, "usb_get_from_anchor" },
	{ 0xd33d6cc, "rtl_deinit_core" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xe01deda6, "rtl_deinit_deferred_work" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xafecdfd, "ieee80211_rx_napi" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "rtlwifi,mac80211");


MODULE_INFO(srcversion, "7047DB6E7BDCFD75C67904A");
