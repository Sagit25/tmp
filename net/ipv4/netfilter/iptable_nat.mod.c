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
	{ 0x1d0df44e, "xt_register_template" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0xb2d6fe01, "xt_unregister_template" },
	{ 0xc3ee94a2, "ipt_unregister_table_exit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8c7dad6b, "nf_nat_ipv4_unregister_fn" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4552d99, "ipt_alloc_initial_table" },
	{ 0x71e95bd1, "ipt_register_table" },
	{ 0x4838b967, "xt_find_table" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5f75be70, "nf_nat_ipv4_register_fn" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x3df1a921, "ipt_do_table" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "x_tables,ip_tables,nf_nat");


MODULE_INFO(srcversion, "A96B007447F3E782024E28F");
