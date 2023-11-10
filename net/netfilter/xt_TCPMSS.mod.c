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
	{ 0xdd327edc, "xt_register_targets" },
	{ 0xdcb764ad, "memset" },
	{ 0x8e48bd37, "nf_route" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2b96a991, "skb_ensure_writable" },
	{ 0xa0def3fd, "inet_proto_csum_replace4" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x48471741, "skb_put" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x8d4220e0, "ipv6_skip_exthdr" },
	{ 0xf90abf79, "xt_unregister_targets" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "50681C6649058C7B3410F5A");
