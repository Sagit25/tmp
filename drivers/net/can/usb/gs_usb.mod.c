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
	{ 0x63230d82, "usb_register_driver" },
	{ 0x1dc09e9b, "usb_control_msg_send" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd78c45f2, "usb_control_msg_recv" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x25d49aec, "alloc_candev_mqs" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd069faf7, "register_candev" },
	{ 0x5340bf35, "free_candev" },
	{ 0x6a528adb, "ethtool_op_get_ts_info" },
	{ 0x46d9df31, "can_ethtool_op_get_ts_info_hwts" },
	{ 0x68fd1fd8, "can_eth_ioctl_hwts" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x681b09e9, "unregister_candev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x85a552e, "netdev_err" },
	{ 0x9900edb, "can_get_echo_skb" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x3cefa539, "netif_device_detach" },
	{ 0x280f4bd8, "alloc_canfd_skb" },
	{ 0xf12d9387, "can_fd_dlc2len" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x927bd2fe, "alloc_can_err_skb" },
	{ 0xf5fd8840, "alloc_can_skb" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x3b2b78f4, "can_dropped_invalid_skb" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xffad1d54, "usb_anchor_urb" },
	{ 0x58dcf561, "can_put_echo_skb" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x6047ede6, "can_fd_len2dlc" },
	{ 0x972a3723, "consume_skb" },
	{ 0x5ca1b2e7, "can_free_echo_skb" },
	{ 0x3c683526, "usb_unanchor_urb" },
	{ 0x71322468, "netdev_printk" },
	{ 0x31dcea25, "open_candev" },
	{ 0x19769b64, "close_candev" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x862258db, "timecounter_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0x171a0c7e, "can_change_mtu" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v1D50p606Fd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1209p2323d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1CD2p606Fd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D0p10B8d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "99E987BA830C4DB69149681");
