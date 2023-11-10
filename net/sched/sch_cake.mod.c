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
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x73e827e4, "qdisc_watchdog_cancel" },
	{ 0x4feaa230, "tcf_block_put" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xd0d086e2, "unregister_qdisc" },
	{ 0xb310efd8, "nla_put" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xa69ed606, "flow_keys_dissector" },
	{ 0xad60552e, "__skb_flow_dissect" },
	{ 0x460f4a34, "flow_hash_from_keys" },
	{ 0x6def8563, "nf_ct_get_tuple_skb" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x974fca60, "qdisc_watchdog_init" },
	{ 0x43813f5a, "tcf_block_get" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x720c9cc6, "gnet_stats_copy_queue" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x89599a, "qdisc_tree_reduce_backlog" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0xee262701, "qdisc_watchdog_schedule_range_ns" },
	{ 0xf6485a5d, "tcf_classify" },
	{ 0x972a3723, "consume_skb" },
	{ 0x2ca6692d, "netif_skb_features" },
	{ 0xd3414595, "__skb_gso_segment" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7B4511C6439FAED7C93D676");
