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

SYMBOL_CRC(lowpan_register_netdevice, 0xa3abcace, "");
SYMBOL_CRC(lowpan_register_netdev, 0xeed66407, "");
SYMBOL_CRC(lowpan_unregister_netdevice, 0x87b209c5, "");
SYMBOL_CRC(lowpan_unregister_netdev, 0x2a3165c4, "");
SYMBOL_CRC(lowpan_header_decompress, 0x87b59916, "_gpl");
SYMBOL_CRC(lowpan_header_compress, 0x9015f570, "_gpl");
SYMBOL_CRC(lowpan_nhc_add, 0x6cbbc72c, "");
SYMBOL_CRC(lowpan_nhc_del, 0x5a817be3, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe8357ac4, "__ndisc_fill_addr_option" },
	{ 0xfe27a064, "addrconf_add_linklocal" },
	{ 0x4829a47e, "memcpy" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x1e949992, "addrconf_prefix_rcv_add_addr" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x121445a5, "skb_pull" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "BA83429FFC3036E12C8BEA3");
