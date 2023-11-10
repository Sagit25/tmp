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
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x8781239b, "usbnet_read_cmd_nopm" },
	{ 0xf53ff0a4, "usbnet_read_cmd" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0xcd6217f8, "usbnet_write_cmd_nopm" },
	{ 0x4cab5036, "usbnet_write_cmd" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x9023c5f1, "mii_ethtool_set_link_ksettings" },
	{ 0x28498461, "mii_ethtool_get_link_ksettings" },
	{ 0x25617987, "generic_mii_ioctl" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x5d143358, "usbnet_link_change" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x10a196a4, "usbnet_write_cmd_async" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x121445a5, "skb_pull" },
	{ 0x17be2cf7, "usbnet_skb_return" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x85a552e, "netdev_err" },
	{ 0xdca6a77f, "usbnet_suspend" },
	{ 0x41f68fa1, "usbnet_update_max_qlen" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5642dade, "eth_platform_get_mac_address" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x2a9a4a16, "mii_nway_restart" },
	{ 0xd01bf557, "usbnet_get_endpoints" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x51e2dac4, "netif_set_tso_max_size" },
	{ 0x6cb0863b, "usbnet_resume" },
	{ 0xdcb764ad, "memset" },
	{ 0xe7a5a2d3, "mii_ethtool_gset" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0x21ae9df8, "usbnet_open" },
	{ 0xafc5a0b8, "usbnet_stop" },
	{ 0xc936b3be, "usbnet_start_xmit" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x5eee7c81, "usbnet_tx_timeout" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0xbe9b3af2, "usbnet_get_msglevel" },
	{ 0xf3bddacc, "usbnet_set_msglevel" },
	{ 0xf184826, "usbnet_nway_reset" },
	{ 0x8932f5b, "ethtool_op_get_link" },
	{ 0x6a528adb, "ethtool_op_get_ts_info" },
	{ 0xfca66e8f, "usbnet_probe" },
	{ 0xa7571c90, "usbnet_disconnect" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v0930p0A13d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v0711p0179d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v07C9p000Ed*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v07C9p000Fd*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v07C9p0010d*dc*dsc*dp*icFFiscFFip00in*");

MODULE_INFO(srcversion, "4F20279445CFFBEE8F4234B");
