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
	{ 0xeebb6a06, "xt_register_match" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xdcb764ad, "memset" },
	{ 0x76b4c315, "l3mdev_master_ifindex_rcu" },
	{ 0x893abd4a, "make_kuid" },
	{ 0xa0cfea92, "ip6_route_lookup" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbb307af7, "xt_unregister_match" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "x_tables,ipv6");


MODULE_INFO(srcversion, "B0755C5A564BCE1677A7F69");
