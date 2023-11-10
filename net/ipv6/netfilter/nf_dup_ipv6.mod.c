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

SYMBOL_CRC(nf_dup_ipv6, 0xe8584794, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc84f456a, "__pskb_copy_fclone" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x406c341, "ip6_route_output_flags" },
	{ 0xbd41ac06, "ip6_local_out" },
	{ 0x6a29aec0, "dst_release" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "4BA193ED1C706091CA2EA4D");
