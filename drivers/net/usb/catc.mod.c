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
	{ 0x81873d75, "unregister_netdev" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x4fffca41, "free_netdev" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x48471741, "skb_put" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x34ba1279, "usb_unlink_urb" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xdd64e639, "strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x972a3723, "consume_skb" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x20e19a6e, "alloc_etherdev_mqs" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x92997ed8, "_printk" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x8932f5b, "ethtool_op_get_link" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0423p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0423p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D1p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CF8732C2F4D6F09FDC84673");
