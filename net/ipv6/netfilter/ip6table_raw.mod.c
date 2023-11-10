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
	{ 0x6bb78cef, "ip6t_unregister_table_exit" },
	{ 0xf27da234, "ip6t_unregister_table_pre_exit" },
	{ 0xf7051245, "ip6t_alloc_initial_table" },
	{ 0xf62c82a0, "ip6t_register_table" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d0df44e, "xt_register_template" },
	{ 0xa4a5156f, "ip6t_do_table" },
	{ 0x838449d5, "xt_hook_ops_alloc" },
	{ 0xb2d6fe01, "xt_unregister_template" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ip6_tables,x_tables");


MODULE_INFO(srcversion, "F8725AD0398247D9142900B");
