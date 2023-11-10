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
	{ 0xdd327edc, "xt_register_targets" },
	{ 0xeb7d9700, "xt_unregister_matches" },
	{ 0xc8aad5d0, "ip_set_nfnl_put" },
	{ 0xa0a7c649, "ip_set_nfnl_get_byindex" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdcb764ad, "memset" },
	{ 0xaed3709f, "ip_set_add" },
	{ 0xa01f373c, "ip_set_del" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9a2a1d0b, "ip_set_test" },
	{ 0xf90abf79, "xt_unregister_targets" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "x_tables,ip_set");


MODULE_INFO(srcversion, "2664E89D13CED67CA5A2AEC");
