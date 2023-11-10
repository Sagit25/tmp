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
	{ 0x34ba1279, "usb_unlink_urb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x5340bf35, "free_candev" },
	{ 0x927bd2fe, "alloc_can_err_skb" },
	{ 0xc04c722c, "netif_rx" },
	{ 0xe2efe534, "can_bus_off" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x85a552e, "netdev_err" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xf5fd8840, "alloc_can_skb" },
	{ 0x3cefa539, "netif_device_detach" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x3b2b78f4, "can_dropped_invalid_skb" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0xffad1d54, "usb_anchor_urb" },
	{ 0x58dcf561, "can_put_echo_skb" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x972a3723, "consume_skb" },
	{ 0x5ca1b2e7, "can_free_echo_skb" },
	{ 0x3c683526, "usb_unanchor_urb" },
	{ 0x71322468, "netdev_printk" },
	{ 0x25d49aec, "alloc_candev_mqs" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd069faf7, "register_candev" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x31dcea25, "open_candev" },
	{ 0x19769b64, "close_candev" },
	{ 0x9900edb, "can_get_echo_skb" },
	{ 0x171a0c7e, "can_change_mtu" },
	{ 0x6a528adb, "ethtool_op_get_ts_info" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v12D6p0444d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C7AFFFD6FCA73BD8695201E");
