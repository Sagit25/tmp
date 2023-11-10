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

SYMBOL_CRC(nf_conntrack_locks, 0xaf0847f0, "_gpl");
SYMBOL_CRC(nf_conntrack_expect_lock, 0x9adb7399, "_gpl");
SYMBOL_CRC(nf_conntrack_hash, 0x28eff409, "_gpl");
SYMBOL_CRC(nf_conntrack_lock, 0xdba7326b, "_gpl");
SYMBOL_CRC(nf_conntrack_htable_size, 0x8ffe7e89, "_gpl");
SYMBOL_CRC(nf_conntrack_max, 0xf38bcdf3, "_gpl");
SYMBOL_CRC(nf_ct_get_tuplepr, 0x1f2c29a7, "_gpl");
SYMBOL_CRC(nf_ct_invert_tuple, 0xfe731af8, "_gpl");
SYMBOL_CRC(nf_ct_get_id, 0x3605a5b0, "_gpl");
SYMBOL_CRC(nf_ct_tmpl_alloc, 0xf824b36d, "_gpl");
SYMBOL_CRC(nf_ct_tmpl_free, 0x88395a41, "_gpl");
SYMBOL_CRC(nf_ct_destroy, 0x3b08a8f0, "");
SYMBOL_CRC(nf_ct_delete, 0x5432ec60, "_gpl");
SYMBOL_CRC(nf_conntrack_find_get, 0x2706fa0e, "_gpl");
SYMBOL_CRC(nf_conntrack_hash_check_insert, 0x51ddfc08, "_gpl");
SYMBOL_CRC(nf_ct_acct_add, 0x081ebdf8, "_gpl");
SYMBOL_CRC(__nf_conntrack_confirm, 0xb077abf2, "_gpl");
SYMBOL_CRC(nf_conntrack_tuple_taken, 0x0d449ddc, "_gpl");
SYMBOL_CRC(nf_conntrack_alloc, 0x4b4bf1f4, "_gpl");
SYMBOL_CRC(nf_conntrack_free, 0x7f384aee, "_gpl");
SYMBOL_CRC(nf_conntrack_in, 0xbdb7e1d3, "_gpl");
SYMBOL_CRC(nf_conntrack_alter_reply, 0xa625d304, "_gpl");
SYMBOL_CRC(__nf_ct_refresh_acct, 0xb2662372, "_gpl");
SYMBOL_CRC(nf_ct_kill_acct, 0x272ac6d3, "_gpl");
SYMBOL_CRC(nf_ct_port_tuple_to_nlattr, 0xff9a7418, "_gpl");
SYMBOL_CRC(nf_ct_port_nla_policy, 0x1d7675b8, "_gpl");
SYMBOL_CRC(nf_ct_port_nlattr_to_tuple, 0xafbd6cf5, "_gpl");
SYMBOL_CRC(nf_ct_port_nlattr_tuple_size, 0xd505c3e0, "_gpl");
SYMBOL_CRC(nf_ct_iterate_cleanup_net, 0xb4f1f6f6, "_gpl");
SYMBOL_CRC(nf_ct_iterate_destroy, 0x391d6397, "_gpl");
SYMBOL_CRC(nf_ct_alloc_hashtable, 0x289c3714, "_gpl");
SYMBOL_CRC(__nf_ct_change_timeout, 0x1dd58924, "_gpl");
SYMBOL_CRC(__nf_ct_change_status, 0x30449967, "_gpl");
SYMBOL_CRC(nf_ct_change_status_common, 0x7d851e99, "_gpl");
SYMBOL_CRC(nf_conntrack_count, 0x8219fcda, "_gpl");
SYMBOL_CRC(nf_ct_expect_hsize, 0xc18ac88d, "_gpl");
SYMBOL_CRC(nf_ct_expect_hash, 0xec8beba6, "_gpl");
SYMBOL_CRC(nf_ct_unlink_expect_report, 0x3437bc87, "_gpl");
SYMBOL_CRC(nf_ct_remove_expect, 0x44a410d0, "_gpl");
SYMBOL_CRC(__nf_ct_expect_find, 0xc5ec56e6, "_gpl");
SYMBOL_CRC(nf_ct_expect_find_get, 0xdac18135, "_gpl");
SYMBOL_CRC(nf_ct_remove_expectations, 0xd436d300, "_gpl");
SYMBOL_CRC(nf_ct_unexpect_related, 0x8edaa253, "_gpl");
SYMBOL_CRC(nf_ct_expect_alloc, 0x82ff887f, "_gpl");
SYMBOL_CRC(nf_ct_expect_init, 0xac9da20e, "_gpl");
SYMBOL_CRC(nf_ct_expect_put, 0xd4a4f1e9, "_gpl");
SYMBOL_CRC(nf_ct_expect_related_report, 0x9375b582, "_gpl");
SYMBOL_CRC(nf_ct_expect_iterate_destroy, 0x79edab73, "_gpl");
SYMBOL_CRC(nf_ct_expect_iterate_net, 0x7a8c071f, "_gpl");
SYMBOL_CRC(nf_ct_helper_hash, 0x693c3961, "_gpl");
SYMBOL_CRC(nf_ct_helper_hsize, 0xc40f284c, "_gpl");
SYMBOL_CRC(__nf_conntrack_helper_find, 0x0c16bd1c, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_try_module_get, 0x9fa14e4c, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_put, 0xa67b4ae1, "_gpl");
SYMBOL_CRC(nf_nat_helper_try_module_get, 0x0bc00f80, "_gpl");
SYMBOL_CRC(nf_nat_helper_put, 0xe773e9aa, "_gpl");
SYMBOL_CRC(nf_ct_helper_ext_add, 0x53180f40, "_gpl");
SYMBOL_CRC(__nf_ct_try_assign_helper, 0x4441a1ba, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_register, 0x24412923, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_unregister, 0x3faa0205, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_find_by_name, 0xb86e16f0, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_find_by_symbol, 0xf090950f, "_gpl");
SYMBOL_CRC(nf_ct_helper_log, 0xa85f230d, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_register, 0xf1ebc3a4, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_unregister, 0x1c8a81b1, "_gpl");
SYMBOL_CRC(nf_ct_helper_init, 0x8dc41c4e, "_gpl");
SYMBOL_CRC(nf_conntrack_helpers_register, 0xbdb31eb8, "_gpl");
SYMBOL_CRC(nf_conntrack_helpers_unregister, 0x9613d756, "_gpl");
SYMBOL_CRC(nf_nat_helper_register, 0x8546ad36, "_gpl");
SYMBOL_CRC(nf_nat_helper_unregister, 0x977f12bd, "_gpl");
SYMBOL_CRC(nf_l4proto_log_invalid, 0x1154fbf7, "_gpl");
SYMBOL_CRC(nf_ct_l4proto_log_invalid, 0x0370e6ad, "_gpl");
SYMBOL_CRC(nf_ct_l4proto_find, 0x193b2e2d, "_gpl");
SYMBOL_CRC(nf_confirm, 0xdbd5437f, "_gpl");
SYMBOL_CRC(nf_ct_netns_get, 0xbad2fa73, "_gpl");
SYMBOL_CRC(nf_ct_netns_put, 0x50034e1a, "_gpl");
SYMBOL_CRC(nf_ct_bridge_register, 0xbc9cc190, "_gpl");
SYMBOL_CRC(nf_ct_bridge_unregister, 0x7fd683d2, "_gpl");
SYMBOL_CRC(nf_ct_ext_add, 0xbc4507e2, "");
SYMBOL_CRC(__nf_ct_ext_find, 0x414d8c6e, "");
SYMBOL_CRC(nf_ct_seqadj_init, 0xee0419fc, "_gpl");
SYMBOL_CRC(nf_ct_seqadj_set, 0xa5cbdc94, "_gpl");
SYMBOL_CRC(nf_ct_tcp_seqadj_set, 0x601cefd8, "_gpl");
SYMBOL_CRC(nf_ct_seq_adjust, 0x8f9bea99, "_gpl");
SYMBOL_CRC(nf_ct_seq_offset, 0xba7a032a, "_gpl");
SYMBOL_CRC(nf_conn_pernet_ecache, 0x28c3f7f5, "_gpl");
SYMBOL_CRC(nf_conntrack_eventmask_report, 0xa8abdee8, "_gpl");
SYMBOL_CRC(nf_ct_deliver_cached_events, 0x42fdc8b3, "_gpl");
SYMBOL_CRC(nf_conntrack_register_notifier, 0x2dca0649, "_gpl");
SYMBOL_CRC(nf_conntrack_unregister_notifier, 0x41385529, "_gpl");
SYMBOL_CRC(nf_ct_ecache_ext_add, 0x5f25338a, "_gpl");
SYMBOL_CRC(nf_connlabels_replace, 0xcc8ddc5e, "_gpl");
SYMBOL_CRC(nf_connlabels_get, 0x776587e6, "_gpl");
SYMBOL_CRC(nf_connlabels_put, 0xa56cff89, "_gpl");
SYMBOL_CRC(nf_ct_gre_keymap_add, 0x36a86947, "_gpl");
SYMBOL_CRC(nf_ct_gre_keymap_destroy, 0xa905c546, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcc8d633b, "__do_once_done" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x1425e33, "try_module_get" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xfe6fbae5, "nf_defrag_ipv4_disable" },
	{ 0x7229a82b, "nf_ip6_checksum" },
	{ 0xfc03a4ca, "proc_dou8vec_minmax" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x7c85e954, "register_net_sysctl" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfc69a480, "nf_register_sockopt" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0x9d702edb, "param_set_uint" },
	{ 0xa5486dcb, "nf_defrag_ipv4_enable" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0xf12ed1ee, "nf_ct_hook" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xfe74e25e, "nf_unregister_sockopt" },
	{ 0xd2c6dafb, "param_get_uint" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x6e8be4eb, "nf_defrag_ipv6_disable" },
	{ 0x8d4220e0, "ipv6_skip_exthdr" },
	{ 0x70f3cde3, "nf_register_net_hooks" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0xcc793c4a, "module_put" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x8cf1220d, "nf_checksum" },
	{ 0x51d13875, "nf_hooks_lwtunnel_sysctl_handler" },
	{ 0x459e03b6, "init_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0xb310efd8, "nla_put" },
	{ 0xac366eed, "nf_checksum_partial" },
	{ 0x2b96a991, "skb_ensure_writable" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x30ccd6e, "nf_unregister_net_hooks" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0xdcb764ad, "memset" },
	{ 0x19f33626, "nf_ctnetlink_has_listener" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x381ad5cc, "nf_log_packet" },
	{ 0x7749fa1e, "nf_ip_checksum" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7674c3c8, "nla_policy_len" },
	{ 0xb15b4109, "crc32c" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x6a07faff, "__skb_checksum" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xa0def3fd, "inet_proto_csum_replace4" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbed22f19, "nf_defrag_ipv6_enable" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x9e7ada45, "nf_nat_hook" },
	{ 0xf44a904a, "net_ns_barrier" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x21a395dc, "nf_queue_nf_hook_drop" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x53b954a2, "up_read" },
	{ 0xe1a8d7c9, "net_rwsem" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_defrag_ipv4,nf_defrag_ipv6");


MODULE_INFO(srcversion, "BCF99A3672FA218EB2D097C");
