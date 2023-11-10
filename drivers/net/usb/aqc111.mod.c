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
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x121445a5, "skb_pull" },
	{ 0x17be2cf7, "usbnet_skb_return" },
	{ 0x75491ff1, "usbnet_defer_kevent" },
	{ 0x1adea804, "usbnet_get_drvinfo" },
	{ 0xdd64e639, "strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0x10a196a4, "usbnet_write_cmd_async" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xa91d6818, "skb_copy_expand" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x48471741, "skb_put" },
	{ 0xdcb764ad, "memset" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xd68e2560, "usb_autopm_get_interface" },
	{ 0x141b8c4e, "usb_autopm_put_interface" },
	{ 0xf53ff0a4, "usbnet_read_cmd" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0x8781239b, "usbnet_read_cmd_nopm" },
	{ 0x6cb0863b, "usbnet_resume" },
	{ 0x41bc3488, "usb_reset_configuration" },
	{ 0xd01bf557, "usbnet_get_endpoints" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x51e2dac4, "netif_set_tso_max_size" },
	{ 0x708377b4, "usb_driver_set_configuration" },
	{ 0xdca6a77f, "usbnet_suspend" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0x21ae9df8, "usbnet_open" },
	{ 0xafc5a0b8, "usbnet_stop" },
	{ 0xc936b3be, "usbnet_start_xmit" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x5eee7c81, "usbnet_tx_timeout" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0xbe9b3af2, "usbnet_get_msglevel" },
	{ 0xf3bddacc, "usbnet_set_msglevel" },
	{ 0x8932f5b, "ethtool_op_get_link" },
	{ 0xfca66e8f, "usbnet_probe" },
	{ 0xa7571c90, "usbnet_disconnect" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "A5556D97EFD53062C43B750");
