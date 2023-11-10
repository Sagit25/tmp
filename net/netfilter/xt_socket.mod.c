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
	{ 0x671f94f3, "xt_register_matches" },
	{ 0xb2f056fb, "nf_sk_lookup_slow_v6" },
	{ 0x840a5ab1, "sock_gen_put" },
	{ 0xfe6fbae5, "nf_defrag_ipv4_disable" },
	{ 0x6e8be4eb, "nf_defrag_ipv6_disable" },
	{ 0x3597f792, "nf_sk_lookup_slow_v4" },
	{ 0xeb7d9700, "xt_unregister_matches" },
	{ 0xa5486dcb, "nf_defrag_ipv4_enable" },
	{ 0xbed22f19, "nf_defrag_ipv6_enable" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_socket_ipv6,nf_defrag_ipv4,nf_defrag_ipv6,nf_socket_ipv4");


MODULE_INFO(srcversion, "8ECA7B6806D25C33F35B781");
