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
	{ 0xef4f6173, "mdiobus_alloc_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf3bddacc, "usbnet_set_msglevel" },
	{ 0x4cab5036, "usbnet_write_cmd" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x48471741, "skb_put" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xf65a7a8c, "mii_link_ok" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x72dedd2c, "phy_connect" },
	{ 0x7df03e73, "usbnet_change_mtu" },
	{ 0x10a196a4, "usbnet_write_cmd_async" },
	{ 0xc090c376, "net_selftest_get_strings" },
	{ 0x77e3f80d, "phy_attached_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9c253124, "phy_ethtool_set_link_ksettings" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0x5efcbcf9, "usbnet_unlink_rx_urbs" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0x671de599, "usbnet_set_link_ksettings_mii" },
	{ 0x85a552e, "netdev_err" },
	{ 0xf60e53d5, "phylink_create" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0xbe9b3af2, "usbnet_get_msglevel" },
	{ 0xfd28f65, "mii_check_media" },
	{ 0x21ae9df8, "usbnet_open" },
	{ 0x17be2cf7, "usbnet_skb_return" },
	{ 0x7b501d1e, "genphy_resume" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5eee7c81, "usbnet_tx_timeout" },
	{ 0x16ca1a8a, "phylink_suspend" },
	{ 0xa6c6067, "usbnet_get_link_ksettings_mii" },
	{ 0xf53ff0a4, "usbnet_read_cmd" },
	{ 0xa91d6818, "skb_copy_expand" },
	{ 0x14dfe0cb, "phy_ethtool_get_link_ksettings" },
	{ 0xcd6217f8, "usbnet_write_cmd_nopm" },
	{ 0xf789626d, "usbnet_get_link" },
	{ 0xa08a64fb, "phy_suspend" },
	{ 0xdca6a77f, "usbnet_suspend" },
	{ 0xc936b3be, "usbnet_start_xmit" },
	{ 0x983276da, "phylink_disconnect_phy" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8781239b, "usbnet_read_cmd_nopm" },
	{ 0xf8fe5642, "phylink_ethtool_get_pauseparam" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x1adea804, "usbnet_get_drvinfo" },
	{ 0xd01bf557, "usbnet_get_endpoints" },
	{ 0x911fcd6c, "phylink_start" },
	{ 0x4a18c122, "mdiobus_free" },
	{ 0xc0a8f4be, "phylink_resume" },
	{ 0x37d66513, "phylink_generic_validate" },
	{ 0x5642dade, "eth_platform_get_mac_address" },
	{ 0x15c4e3e2, "phylink_ethtool_set_pauseparam" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x2a9a4a16, "mii_nway_restart" },
	{ 0x152b21a2, "phy_start" },
	{ 0xdcb764ad, "memset" },
	{ 0xf184826, "usbnet_nway_reset" },
	{ 0xdcb0a2c0, "phylink_stop" },
	{ 0x6e3803b2, "phy_print_status" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0x7772754f, "__netdev_alloc_skb" },
	{ 0x4e51e9b0, "net_selftest" },
	{ 0x5b68cf1f, "mdiobus_unregister" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x41f68fa1, "usbnet_update_max_qlen" },
	{ 0xafc5a0b8, "usbnet_stop" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0x25617987, "generic_mii_ioctl" },
	{ 0x33c8cc41, "mdiobus_get_phy" },
	{ 0xa7571c90, "usbnet_disconnect" },
	{ 0x7ba01658, "phy_ethtool_nway_reset" },
	{ 0xf3083a1d, "phylink_destroy" },
	{ 0xd8cffaaf, "__mdiobus_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5d143358, "usbnet_link_change" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xfca66e8f, "usbnet_probe" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x24ccdf71, "phy_stop" },
	{ 0x8e6b1a9e, "net_selftest_get_count" },
	{ 0xcc3fcd09, "phy_do_ioctl_running" },
	{ 0x6cb0863b, "usbnet_resume" },
	{ 0x395a4562, "phy_disconnect" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe7a5a2d3, "mii_ethtool_gset" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x4153bbbc, "phylink_connect_phy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "77969A7B3723A1C9F701C43");
