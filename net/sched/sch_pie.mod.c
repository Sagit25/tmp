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

SYMBOL_CRC(pie_drop_early, 0xb84f9889, "_gpl");
SYMBOL_CRC(pie_process_dequeue, 0xb911e3f3, "_gpl");
SYMBOL_CRC(pie_calculate_probability, 0x6ce9b467, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3f4db9e3, "register_qdisc" },
	{ 0xca0511a4, "gnet_stats_copy_app" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xae9916f0, "rtnl_kfree_skbs" },
	{ 0x56470118, "__warn_printk" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd0d086e2, "unregister_qdisc" },
	{ 0xb310efd8, "nla_put" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x89599a, "qdisc_tree_reduce_backlog" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ABF0BBC0C22A6BDA898C08E");
