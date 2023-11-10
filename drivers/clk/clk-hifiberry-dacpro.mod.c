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
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xc2b9653c, "of_clk_del_provider" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x214f6bab, "of_match_node" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa92a150c, "devm_clk_register" },
	{ 0x228fdf1a, "of_clk_src_simple_get" },
	{ 0x2b2ee70c, "of_clk_add_provider" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Chifiberry,dacpro-clk");
MODULE_ALIAS("of:N*T*Chifiberry,dacpro-clkC*");
MODULE_ALIAS("of:N*T*Callo,dac-clk");
MODULE_ALIAS("of:N*T*Callo,dac-clkC*");

MODULE_INFO(srcversion, "A755134B7BAFF9451DE2950");
