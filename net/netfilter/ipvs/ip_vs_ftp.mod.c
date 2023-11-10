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
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x7e1df3fd, "unregister_ip_vs_app" },
	{ 0xd74555e, "register_ip_vs_app" },
	{ 0x292e50e, "register_ip_vs_app_inc" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x76eb6260, "ip_vs_conn_out_get" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1b96aee1, "ip_vs_tcp_conn_listen" },
	{ 0xace7261f, "ip_vs_conn_put" },
	{ 0x3cb385fd, "__nf_nat_mangle_tcp_packet" },
	{ 0xc6e84a, "ip_vs_nfct_expect_related" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf0d73a63, "ip_vs_conn_new" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x2b96a991, "skb_ensure_writable" },
	{ 0xfe6a8935, "ip_vs_conn_in_get" },
	{ 0xd9653b2f, "param_ops_ushort" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ip_vs,nf_nat");


MODULE_INFO(srcversion, "9C9835176D249C1D8579438");
