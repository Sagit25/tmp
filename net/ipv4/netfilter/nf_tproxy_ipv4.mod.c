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

SYMBOL_CRC(nf_tproxy_handle_time_wait4, 0x7ee6ba88, "_gpl");
SYMBOL_CRC(nf_tproxy_laddr4, 0x0102b390, "_gpl");
SYMBOL_CRC(nf_tproxy_get_sock_v4, 0x8f776f8c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x33beb696, "__inet_lookup_established" },
	{ 0x8601ab5f, "udp4_lib_lookup" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xaf1e3327, "__inet_lookup_listener" },
	{ 0x6efd18ac, "sk_free" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x93290552, "inet_twsk_deschedule_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd56f3b9a, "inet_twsk_put" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5E66A76241BAC598D0FF1F6");
