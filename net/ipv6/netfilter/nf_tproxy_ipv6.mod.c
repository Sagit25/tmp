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

SYMBOL_CRC(nf_tproxy_laddr6, 0xf9922513, "_gpl");
SYMBOL_CRC(nf_tproxy_handle_time_wait6, 0xf16de5aa, "_gpl");
SYMBOL_CRC(nf_tproxy_get_sock_v6, 0xc2951acd, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x86c77969, "__inet6_lookup_established" },
	{ 0x3393e3e6, "udp6_lib_lookup" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xbca8f335, "inet6_lookup_listener" },
	{ 0x6efd18ac, "sk_free" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x93290552, "inet_twsk_deschedule_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd56f3b9a, "inet_twsk_put" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "EFBE83AB24F234B2D85BF98");
