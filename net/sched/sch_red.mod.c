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
	{ 0xca0511a4, "gnet_stats_copy_app" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2a57b2cc, "qdisc_reset" },
	{ 0xd0d086e2, "unregister_qdisc" },
	{ 0x41dab3c5, "qdisc_offload_dump_helper" },
	{ 0xb310efd8, "nla_put" },
	{ 0xc48517fa, "tcf_qevent_dump" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xfa77305f, "tcf_qevent_destroy" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4a6c4548, "qdisc_put" },
	{ 0xc35eecce, "__qdisc_calculate_pkt_len" },
	{ 0x82547902, "tcf_qevent_handle" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xde7f3e4b, "noop_qdisc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x89599a, "qdisc_tree_reduce_backlog" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa8ef2d8d, "qdisc_offload_graft_helper" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x41f9ff7b, "bfifo_qdisc_ops" },
	{ 0x5f5720b6, "fifo_create_dflt" },
	{ 0x5f6c4c60, "qdisc_hash_add" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x2d60dc52, "tcf_qevent_validate_change" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x76edfaec, "tcf_qevent_init" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "170A78CE87A1F682F3247F1");
