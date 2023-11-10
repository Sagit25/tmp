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

SYMBOL_CRC(fou_encap_hlen, 0x1757d1a4, "");
SYMBOL_CRC(gue_encap_hlen, 0xf13914b3, "");
SYMBOL_CRC(__fou_build_header, 0xd08162d3, "");
SYMBOL_CRC(__gue_build_header, 0x6c8682a2, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1d31e280, "inet_offloads" },
	{ 0x95723647, "inet6_offloads" },
	{ 0x73820201, "register_pernet_device" },
	{ 0xa67cd91b, "genl_register_family" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0xfc2bbbe6, "genl_unregister_family" },
	{ 0x942352e7, "genlmsg_put" },
	{ 0xb310efd8, "nla_put" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdcb764ad, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5f011766, "iptunnel_handle_offloads" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xb137fef2, "inet_get_local_port_range" },
	{ 0xdaab728f, "__skb_get_hash" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0x40eaee96, "udp_tunnel_sock_release" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x8cc61846, "netlink_unicast" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xf1f700d0, "udp_sock_create6" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x545b5c4b, "setup_udp_tunnel_sock" },
	{ 0x22ee06e, "udp_sock_create4" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x51465ae1, "__skb_checksum_complete" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "udp_tunnel,ip6_udp_tunnel");


MODULE_INFO(srcversion, "E4BCA1DFB65A1EE29EE1441");
