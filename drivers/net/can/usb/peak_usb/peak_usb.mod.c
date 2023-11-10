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
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x5ca1b2e7, "can_free_echo_skb" },
	{ 0x58dcf561, "can_put_echo_skb" },
	{ 0x972a3723, "consume_skb" },
	{ 0x9900edb, "can_get_echo_skb" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x280f4bd8, "alloc_canfd_skb" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31dcea25, "open_candev" },
	{ 0x85a552e, "netdev_err" },
	{ 0x92997ed8, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xf5fd8840, "alloc_can_skb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x3cefa539, "netif_device_detach" },
	{ 0x681b09e9, "unregister_candev" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x884d434d, "can_change_state" },
	{ 0x171a0c7e, "can_change_mtu" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x3b2b78f4, "can_dropped_invalid_skb" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x5340bf35, "free_candev" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x25d49aec, "alloc_candev_mqs" },
	{ 0x6047ede6, "can_fd_len2dlc" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x71322468, "netdev_printk" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xf12d9387, "can_fd_dlc2len" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x19769b64, "close_candev" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc04c722c, "netif_rx" },
	{ 0xe2efe534, "can_bus_off" },
	{ 0x3c683526, "usb_unanchor_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7deb4ca9, "driver_for_each_device" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x927bd2fe, "alloc_can_err_skb" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd069faf7, "register_candev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v0C72p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0014d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5B882E0148BC3AD86D950A8");
