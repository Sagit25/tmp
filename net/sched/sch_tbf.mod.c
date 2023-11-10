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
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3f4db9e3, "register_qdisc" },
	{ 0x73e827e4, "qdisc_watchdog_cancel" },
	{ 0x4a6c4548, "qdisc_put" },
	{ 0x2a57b2cc, "qdisc_reset" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd0d086e2, "unregister_qdisc" },
	{ 0x7bcde0f0, "skb_gso_validate_mac_len" },
	{ 0x2ca6692d, "netif_skb_features" },
	{ 0xd3414595, "__skb_gso_segment" },
	{ 0xc35eecce, "__qdisc_calculate_pkt_len" },
	{ 0x89599a, "qdisc_tree_reduce_backlog" },
	{ 0x972a3723, "consume_skb" },
	{ 0x41dab3c5, "qdisc_offload_dump_helper" },
	{ 0xb310efd8, "nla_put" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xde7f3e4b, "noop_qdisc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa8ef2d8d, "qdisc_offload_graft_helper" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb6e36ce2, "psched_ratecfg_precompute" },
	{ 0x774d88cc, "fifo_set_limit" },
	{ 0xd9a71267, "qdisc_get_rtab" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x41f9ff7b, "bfifo_qdisc_ops" },
	{ 0x5f5720b6, "fifo_create_dflt" },
	{ 0x5f6c4c60, "qdisc_hash_add" },
	{ 0x974fca60, "qdisc_watchdog_init" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xee262701, "qdisc_watchdog_schedule_range_ns" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C2B5513BBEA7852A48627D7");
