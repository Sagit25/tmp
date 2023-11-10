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
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x34ba1279, "usb_unlink_urb" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x20e19a6e, "alloc_etherdev_mqs" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb0f671c4, "usb_altnum_to_altsetting" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0x11fe2f4d, "netif_tx_stop_all_queues" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0xdcb764ad, "memset" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFiscFDip01in*");

MODULE_INFO(srcversion, "702E668BCF5697B2D430FE8");
