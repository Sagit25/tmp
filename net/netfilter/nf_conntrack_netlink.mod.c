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
	{ 0x8ae85b79, "nfnetlink_subsys_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0xbda4f245, "nfnetlink_subsys_unregister" },
	{ 0x41385529, "nf_conntrack_unregister_notifier" },
	{ 0x2dca0649, "nf_conntrack_register_notifier" },
	{ 0xb310efd8, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xcc8d633b, "__do_once_done" },
	{ 0x584ea4e, "__netlink_dump_start" },
	{ 0xd4a4f1e9, "nf_ct_expect_put" },
	{ 0x9e7ada45, "nf_nat_hook" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xcc8ddc5e, "nf_connlabels_replace" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x193b2e2d, "nf_ct_l4proto_find" },
	{ 0x933dc050, "__nla_validate" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xdac18135, "nf_ct_expect_find_get" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3437bc87, "nf_ct_unlink_expect_report" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x7a8c071f, "nf_ct_expect_iterate_net" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x68c4428a, "__nlmsg_put" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0x82ff887f, "nf_ct_expect_alloc" },
	{ 0xb86e16f0, "nf_ct_helper_expectfn_find_by_name" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdcb764ad, "memset" },
	{ 0xf090950f, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0xa22fa941, "nfnetlink_has_listeners" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xc391f8ec, "nfnetlink_set_err" },
	{ 0x68619569, "nfnetlink_send" },
	{ 0x8219fcda, "nf_conntrack_count" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0xd3c6d6dc, "nfnetlink_unicast" },
	{ 0x3605a5b0, "nf_ct_get_id" },
	{ 0x2706fa0e, "nf_conntrack_find_get" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xaf0847f0, "nf_conntrack_locks" },
	{ 0xdba7326b, "nf_conntrack_lock" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5432ec60, "nf_ct_delete" },
	{ 0xc16bd1c, "__nf_conntrack_helper_find" },
	{ 0x9375b582, "nf_ct_expect_related_report" },
	{ 0xc5ec56e6, "__nf_ct_expect_find" },
	{ 0x24d273d1, "add_timer" },
	{ 0x28c3f7f5, "nf_conn_pernet_ecache" },
	{ 0x7674c3c8, "nla_policy_len" },
	{ 0x4b4bf1f4, "nf_conntrack_alloc" },
	{ 0x53180f40, "nf_ct_helper_ext_add" },
	{ 0xbc4507e2, "nf_ct_ext_add" },
	{ 0x5f25338a, "nf_ct_ecache_ext_add" },
	{ 0x7d851e99, "nf_ct_change_status_common" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x51ddfc08, "nf_conntrack_hash_check_insert" },
	{ 0x7f384aee, "nf_conntrack_free" },
	{ 0xa8abdee8, "nf_conntrack_eventmask_report" },
	{ 0x1dd58924, "__nf_ct_change_timeout" },
	{ 0xd436d300, "nf_ct_remove_expectations" },
	{ 0xb4f1f6f6, "nf_ct_iterate_cleanup_net" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "66FB6FBE50FD0C9E6FE49AD");
