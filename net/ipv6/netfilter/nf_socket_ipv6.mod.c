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

SYMBOL_CRC(nf_sk_lookup_slow_v6, 0xb2f056fb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x21ed2aba, "ipv6_find_hdr" },
	{ 0x3393e3e6, "udp6_lib_lookup" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x8d4220e0, "ipv6_skip_exthdr" },
	{ 0xd2f59ee7, "inet6_lookup" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "971173D78BA572BA53D4564");
