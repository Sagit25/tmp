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

SYMBOL_CRC(udp_sock_create6, 0xf1f700d0, "_gpl");
SYMBOL_CRC(udp_tunnel6_xmit_skb, 0x011f0b61, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdd65439c, "sock_create_kern" },
	{ 0xddc7b3cb, "sock_bindtoindex" },
	{ 0xf347a9fb, "kernel_bind" },
	{ 0xc5a81d59, "kernel_sock_shutdown" },
	{ 0xacaa2c9e, "sock_release" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x265aa3d5, "kernel_connect" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x81c9a25d, "udp6_set_csum" },
	{ 0xbd41ac06, "ip6_local_out" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9F50A9632EDFF8B1C88BAE3");
