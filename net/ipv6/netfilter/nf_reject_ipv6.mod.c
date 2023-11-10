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

SYMBOL_CRC(nf_reject_skb_v6_tcp_reset, 0x90461c5d, "_gpl");
SYMBOL_CRC(nf_reject_skb_v6_unreach, 0xbb3a0902, "_gpl");
SYMBOL_CRC(nf_reject_ip6_tcphdr_get, 0xe124c9e2, "_gpl");
SYMBOL_CRC(nf_reject_ip6hdr_put, 0x17dad751, "_gpl");
SYMBOL_CRC(nf_reject_ip6_tcphdr_put, 0xb4cb3c8b, "_gpl");
SYMBOL_CRC(nf_send_reset6, 0xe51dbb73, "_gpl");
SYMBOL_CRC(nf_send_unreach6, 0x2629d7d6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x48471741, "skb_put" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x8d4220e0, "ipv6_skip_exthdr" },
	{ 0x7229a82b, "nf_ip6_checksum" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x2d8a8447, "nf_ipv6_ops" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xe705c3fa, "__icmpv6_send" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x38947782, "pskb_trim_rcsum_slow" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x76b4c315, "l3mdev_master_ifindex_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x406c341, "ip6_route_output_flags" },
	{ 0xa8b72897, "xfrm_lookup" },
	{ 0x541fa5f9, "ip6_dst_hoplimit" },
	{ 0xb23f98e1, "nf_ct_attach" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0x6a29aec0, "dst_release" },
	{ 0xbd41ac06, "ip6_local_out" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "ADAAB47DF1FFC2B710F664D");
