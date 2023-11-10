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
	{ 0x37a0cba, "kfree" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x98cf60b3, "strlen" },
	{ 0xdcb764ad, "memset" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x34ba1279, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xe065ce9d, "netif_device_attach" },
	{ 0x3cefa539, "netif_device_detach" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0xf9a482f9, "msleep" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x20e19a6e, "alloc_etherdev_mqs" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x74a05018, "request_firmware" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xe2964344, "__wake_up" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0x91e3fbf7, "wireless_send_event" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v0586p3400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp6051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6823d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "149346235843A06966B3F5B");
