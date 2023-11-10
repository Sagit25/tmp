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
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x3f4db9e3, "register_qdisc" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xae9916f0, "rtnl_kfree_skbs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdaab728f, "__skb_get_hash" },
	{ 0xf2b49dc9, "kmem_cache_free_bulk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd0d086e2, "unregister_qdisc" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x73e827e4, "qdisc_watchdog_cancel" },
	{ 0xb310efd8, "nla_put" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xca0511a4, "gnet_stats_copy_app" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xee262701, "qdisc_watchdog_schedule_range_ns" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xdcb764ad, "memset" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x89599a, "qdisc_tree_reduce_backlog" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0xd91f559, "qdisc_watchdog_init_clockid" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2D9CB2D23522FEE608636F9");
