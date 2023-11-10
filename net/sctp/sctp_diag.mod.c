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
	{ 0x729ae44d, "netlink_net_capable" },
	{ 0xe644e4d0, "sctp_for_each_endpoint" },
	{ 0x32eda791, "sctp_get_sctp_info" },
	{ 0xdfee683f, "sctp_transport_traverse_process" },
	{ 0x68c4428a, "__nlmsg_put" },
	{ 0x70de4cfa, "inet_diag_register" },
	{ 0xec6d9454, "nla_reserve" },
	{ 0x18e83dcc, "sock_diag_save_cookie" },
	{ 0xe1364171, "sock_diag_check_cookie" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xb246dadf, "inet_diag_msg_common_fill" },
	{ 0x6d8dd703, "nla_reserve_64bit" },
	{ 0x8cc61846, "netlink_unicast" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xb310efd8, "nla_put" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xdcb764ad, "memset" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe6983713, "inet_diag_msg_attrs_fill" },
	{ 0x8f6b63c3, "inet_diag_unregister" },
	{ 0xb2b6204f, "sctp_transport_lookup_process" },
	{ 0x6b2baf52, "release_sock" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "sctp,inet_diag");


MODULE_INFO(srcversion, "B3996434E82DB1BD42243B8");
