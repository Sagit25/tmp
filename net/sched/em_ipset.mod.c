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
	{ 0x478dc591, "tcf_em_register" },
	{ 0xc8aad5d0, "ip_set_nfnl_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xa0a7c649, "ip_set_nfnl_get_byindex" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5bf89dcc, "tcf_em_unregister" },
	{ 0x121445a5, "skb_pull" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9a2a1d0b, "ip_set_test" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xb25dc613, "dev_get_by_index_rcu" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "2FFEEF47248D946AED3F588");
