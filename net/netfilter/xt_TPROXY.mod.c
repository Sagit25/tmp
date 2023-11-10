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
	{ 0x6e8be4eb, "nf_defrag_ipv6_disable" },
	{ 0xfe6fbae5, "nf_defrag_ipv4_disable" },
	{ 0xf90abf79, "xt_unregister_targets" },
	{ 0xbed22f19, "nf_defrag_ipv6_enable" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xa5486dcb, "nf_defrag_ipv4_enable" },
	{ 0x21ed2aba, "ipv6_find_hdr" },
	{ 0xc2951acd, "nf_tproxy_get_sock_v6" },
	{ 0xf9922513, "nf_tproxy_laddr6" },
	{ 0x840a5ab1, "sock_gen_put" },
	{ 0x2ff3f0dd, "sock_edemux" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xf16de5aa, "nf_tproxy_handle_time_wait6" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8f776f8c, "nf_tproxy_get_sock_v4" },
	{ 0x102b390, "nf_tproxy_laddr4" },
	{ 0x7ee6ba88, "nf_tproxy_handle_time_wait4" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_defrag_ipv6,nf_defrag_ipv4,nf_tproxy_ipv6,nf_tproxy_ipv4");


MODULE_INFO(srcversion, "78820E3D40A1C0C1DE8D1EE");
