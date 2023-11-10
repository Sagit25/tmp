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
	{ 0x11f43b59, "ebt_register_template" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0xa8738fb7, "ebt_unregister_template" },
	{ 0x62d07734, "ebt_unregister_table" },
	{ 0x635d314d, "ebt_unregister_table_pre_exit" },
	{ 0xe5a7f1b5, "ebt_register_table" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x993c5a99, "ebt_do_table" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ebtables");


MODULE_INFO(srcversion, "33820DB22BAD83784C9B5CC");
