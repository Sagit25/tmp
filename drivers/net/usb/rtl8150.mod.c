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
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x48471741, "skb_put" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x3cefa539, "netif_device_detach" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x34ba1279, "usb_unlink_urb" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xdd64e639, "strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x96267f10, "__dev_kfree_skb_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x81873d75, "unregister_netdev" },
	{ 0x972a3723, "consume_skb" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0xe065ce9d, "netif_device_attach" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x1dc09e9b, "usb_control_msg_send" },
	{ 0xd78c45f2, "usb_control_msg_recv" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x20e19a6e, "alloc_etherdev_mqs" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x7689a217, "netdev_notice" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x8932f5b, "ethtool_op_get_link" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2325F9DEB5F7347D83298D4");
