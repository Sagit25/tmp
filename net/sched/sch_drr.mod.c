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
	{ 0x3f4db9e3, "register_qdisc" },
	{ 0x2a57b2cc, "qdisc_reset" },
	{ 0xd0d086e2, "unregister_qdisc" },
	{ 0x43813f5a, "tcf_block_get" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xb310efd8, "nla_put" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xa47923f9, "gnet_stats_copy_basic" },
	{ 0x56b3282a, "gnet_stats_copy_rate_est" },
	{ 0x720c9cc6, "gnet_stats_copy_queue" },
	{ 0xca0511a4, "gnet_stats_copy_app" },
	{ 0x4feaa230, "tcf_block_put" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x4a6c4548, "qdisc_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x89599a, "qdisc_tree_reduce_backlog" },
	{ 0x91a7b1da, "qdisc_class_hash_remove" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x207ee486, "pfifo_qdisc_ops" },
	{ 0xb2fc453e, "qdisc_create_dflt" },
	{ 0xde7f3e4b, "noop_qdisc" },
	{ 0xf6485a5d, "tcf_classify" },
	{ 0xc35eecce, "__qdisc_calculate_pkt_len" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xf630261, "gen_replace_estimator" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0x5f6c4c60, "qdisc_hash_add" },
	{ 0xc4212ab9, "qdisc_class_hash_insert" },
	{ 0x9f605160, "qdisc_class_hash_grow" },
	{ 0xef766e9b, "qdisc_warn_nonwc" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "38E81523323CF715ECCB75A");
