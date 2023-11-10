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

SYMBOL_CRC(gre_add_protocol, 0xc98d595a, "_gpl");
SYMBOL_CRC(gre_del_protocol, 0xf346c18c, "_gpl");
SYMBOL_CRC(gre_parse_header, 0x1546e2dd, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x51465ae1, "__skb_checksum_complete" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x826bf818, "inet_add_protocol" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x2934042d, "inet_del_protocol" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AAADDD31CCE61A2B7418302");
