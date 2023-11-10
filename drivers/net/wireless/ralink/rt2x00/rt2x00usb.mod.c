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

SYMBOL_CRC(rt2x00usb_vendor_request, 0x5080b9df, "_gpl");
SYMBOL_CRC(rt2x00usb_vendor_req_buff_lock, 0x98d69917, "_gpl");
SYMBOL_CRC(rt2x00usb_vendor_request_buff, 0x026f5c8c, "_gpl");
SYMBOL_CRC(rt2x00usb_regbusy_read, 0x8c98fed4, "_gpl");
SYMBOL_CRC(rt2x00usb_register_read_async, 0xc310d740, "_gpl");
SYMBOL_CRC(rt2x00usb_kick_queue, 0x724b175d, "_gpl");
SYMBOL_CRC(rt2x00usb_flush_queue, 0xad4ab28b, "_gpl");
SYMBOL_CRC(rt2x00usb_watchdog, 0x4537ba33, "_gpl");
SYMBOL_CRC(rt2x00usb_disable_radio, 0xc0039a35, "_gpl");
SYMBOL_CRC(rt2x00usb_clear_entry, 0xd276d8fa, "_gpl");
SYMBOL_CRC(rt2x00usb_initialize, 0x3e23e994, "_gpl");
SYMBOL_CRC(rt2x00usb_uninitialize, 0x2b3621cc, "_gpl");
SYMBOL_CRC(rt2x00usb_probe, 0x6dbeffcc, "_gpl");
SYMBOL_CRC(rt2x00usb_disconnect, 0xfb48c7f7, "_gpl");
SYMBOL_CRC(rt2x00usb_suspend, 0x3b640662, "_gpl");
SYMBOL_CRC(rt2x00usb_resume, 0x244a4737, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xffad1d54, "usb_anchor_urb" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c683526, "usb_unanchor_urb" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xe588064e, "rt2x00lib_dmadone" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb6ba8921, "rt2x00queue_for_each_entry" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xa723eefc, "rt2x00queue_get_entry" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x39db15c0, "rt2x00queue_stop_queue" },
	{ 0x3cb9aa3, "rt2x00queue_flush_queue" },
	{ 0x6e0bbb21, "rt2x00queue_start_queue" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x5aeae75c, "rt2x00lib_txdone_noinfo" },
	{ 0xd6661848, "rt2x00lib_rxdone" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc3c91c5b, "rt2x00lib_suspend" },
	{ 0x91918cd3, "rt2x00lib_resume" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x84ca35cb, "rt2x00lib_dmastart" },
	{ 0xf5ce0a22, "__skb_pad" },
	{ 0xfbe5af97, "rt2x00lib_remove_dev" },
	{ 0x6603d2cc, "ieee80211_free_hw" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xec80a4a6, "usb_reset_device" },
	{ 0x69c1efbc, "ieee80211_alloc_hw_nm" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x264e3e66, "rt2x00lib_probe_dev" },
	{ 0x92997ed8, "_printk" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "6F447F82018DD206728E438");
