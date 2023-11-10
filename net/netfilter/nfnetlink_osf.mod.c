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

SYMBOL_CRC(nf_osf_fingers, 0x35eff5e0, "_gpl");
SYMBOL_CRC(nf_osf_match, 0x725fd704, "_gpl");
SYMBOL_CRC(nf_osf_find, 0x7921ba57, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8ae85b79, "nfnetlink_subsys_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xc6cbbc89, "capable" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xa07a37f0, "memchr" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xbda4f245, "nfnetlink_subsys_unregister" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x381ad5cc, "nf_log_packet" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "819AC86729520279418334B");
