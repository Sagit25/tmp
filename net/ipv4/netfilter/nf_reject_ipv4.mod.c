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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(nf_reject_skb_v4_tcp_reset, 0xdbe95451, "_gpl");
SYMBOL_CRC(nf_reject_skb_v4_unreach, 0xcce98b59, "_gpl");
SYMBOL_CRC(nf_reject_ip_tcphdr_get, 0xc1172017, "_gpl");
SYMBOL_CRC(nf_reject_iphdr_put, 0xe9262187, "_gpl");
SYMBOL_CRC(nf_reject_ip_tcphdr_put, 0xf43e831d, "_gpl");
SYMBOL_CRC(nf_send_reset, 0x1a89d1d7, "_gpl");
SYMBOL_CRC(nf_send_unreach, 0xaab3cd8c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x48471741, "skb_put" },
	{ 0xdcb764ad, "memset" },
	{ 0x5815ba8c, "nf_ip_route" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x7749fa1e, "nf_ip_checksum" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xbead4410, "ip_route_me_harder" },
	{ 0xb23f98e1, "nf_ct_attach" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x818a0f2d, "ip_local_out" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x38947782, "pskb_trim_rcsum_slow" },
	{ 0x439170c5, "__icmp_send" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1F5C43C164D56D502C9BFB0");
