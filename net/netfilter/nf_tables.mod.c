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

SYMBOL_CRC(nft_do_chain, 0x5e55bc29, "_gpl");
SYMBOL_CRC(nft_reg_track_update, 0x6c776b26, "_gpl");
SYMBOL_CRC(nft_reg_track_cancel, 0x25a7c045, "_gpl");
SYMBOL_CRC(__nft_reg_track_cancel, 0xae8b5c7e, "_gpl");
SYMBOL_CRC(nft_request_module, 0xf8b338ec, "_gpl");
SYMBOL_CRC(nft_register_chain_type, 0x0a7a63b9, "_gpl");
SYMBOL_CRC(nft_unregister_chain_type, 0x41efb275, "_gpl");
SYMBOL_CRC(nft_register_expr, 0x4caa31be, "_gpl");
SYMBOL_CRC(nft_unregister_expr, 0xaa4c18e5, "_gpl");
SYMBOL_CRC(nft_chain_validate, 0x18e53c82, "_gpl");
SYMBOL_CRC(nft_set_lookup_global, 0xdd49bdc5, "_gpl");
SYMBOL_CRC(nf_tables_bind_set, 0xae0dd456, "_gpl");
SYMBOL_CRC(nf_tables_activate_set, 0xb4dfc2e7, "_gpl");
SYMBOL_CRC(nf_tables_deactivate_set, 0xffc2b86e, "_gpl");
SYMBOL_CRC(nf_tables_destroy_set, 0xb36c34a0, "_gpl");
SYMBOL_CRC(nft_set_elem_destroy, 0xdae0f7c5, "_gpl");
SYMBOL_CRC(nft_set_catchall_lookup, 0x20a67779, "_gpl");
SYMBOL_CRC(nft_register_obj, 0x38745ba5, "_gpl");
SYMBOL_CRC(nft_unregister_obj, 0xa4ee8d41, "_gpl");
SYMBOL_CRC(nft_obj_lookup, 0x2ca67b51, "_gpl");
SYMBOL_CRC(nft_obj_notify, 0x34310e61, "_gpl");
SYMBOL_CRC(nft_register_flowtable_type, 0xe00db3fa, "_gpl");
SYMBOL_CRC(nft_unregister_flowtable_type, 0x3afcb584, "_gpl");
SYMBOL_CRC(nft_flowtable_lookup, 0x1bb39a9b, "_gpl");
SYMBOL_CRC(nf_tables_deactivate_flowtable, 0x2d6bc0ad, "_gpl");
SYMBOL_CRC(nf_tables_trans_destroy_flush_work, 0x3251d762, "_gpl");
SYMBOL_CRC(nft_chain_validate_dependency, 0x5d0f4059, "_gpl");
SYMBOL_CRC(nft_chain_validate_hooks, 0xae47eb8d, "_gpl");
SYMBOL_CRC(nft_parse_u32_check, 0xde57b5f5, "_gpl");
SYMBOL_CRC(nft_dump_register, 0x04a5a1bc, "_gpl");
SYMBOL_CRC(nft_parse_register_load, 0xe2b8cc13, "_gpl");
SYMBOL_CRC(nft_parse_register_store, 0xd5262ee8, "_gpl");
SYMBOL_CRC(nft_data_init, 0x993d8ab6, "_gpl");
SYMBOL_CRC(nft_data_release, 0x5fb53a4c, "_gpl");
SYMBOL_CRC(nft_data_dump, 0xd0926850, "_gpl");
SYMBOL_CRC(__nft_release_basechain, 0x676c1890, "_gpl");
SYMBOL_CRC(nft_trace_enabled, 0x41b71e65, "_gpl");
SYMBOL_CRC(nft_expr_reduce_bitwise, 0x9ccf9433, "_gpl");
SYMBOL_CRC(nft_meta_get_eval, 0x5af01c2d, "_gpl");
SYMBOL_CRC(nft_meta_set_eval, 0x1e3be5aa, "_gpl");
SYMBOL_CRC(nft_meta_policy, 0xc015c870, "_gpl");
SYMBOL_CRC(nft_meta_get_init, 0xd47bd247, "_gpl");
SYMBOL_CRC(nft_meta_set_validate, 0x61207a9a, "_gpl");
SYMBOL_CRC(nft_meta_set_init, 0x7d7fbff5, "_gpl");
SYMBOL_CRC(nft_meta_get_dump, 0xd7fbed9c, "_gpl");
SYMBOL_CRC(nft_meta_set_dump, 0x90771972, "_gpl");
SYMBOL_CRC(nft_meta_set_destroy, 0xdf814abf, "_gpl");
SYMBOL_CRC(nft_meta_get_reduce, 0x5571de2f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcc8d633b, "__do_once_done" },
	{ 0x584ea4e, "__netlink_dump_start" },
	{ 0x2cf64245, "flow_rule_alloc" },
	{ 0x1425e33, "try_module_get" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x9968aacb, "__audit_log_nfcfg" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x68c4428a, "__nlmsg_put" },
	{ 0x48471741, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8e92f7c4, "static_key_slow_inc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xec6d9454, "nla_reserve" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7a53a06d, "flow_indr_dev_exists" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0xca9360b5, "rb_next" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xc391f8ec, "nfnetlink_set_err" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x6d7c7dcc, "bitmap_cut" },
	{ 0xb413f19e, "flow_block_cb_free" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8ae85b79, "nfnetlink_subsys_register" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x9303f7be, "__module_get" },
	{ 0x148653, "vsnprintf" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa262bd0c, "__dev_get_by_name" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0xc8e5bff8, "__ip_options_compile" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x8e48bd37, "nf_route" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x2d8a8447, "nf_ipv6_ops" },
	{ 0xcc793c4a, "module_put" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x41165dd5, "nf_unregister_net_hook" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x638defdb, "nf_register_net_hook" },
	{ 0xdaab728f, "__skb_get_hash" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xbead4410, "ip_route_me_harder" },
	{ 0x24ae767, "skb_store_bits" },
	{ 0xb25dc613, "dev_get_by_index_rcu" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd3c6d6dc, "nfnetlink_unicast" },
	{ 0xb310efd8, "nla_put" },
	{ 0x9166fada, "strncpy" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x2b96a991, "skb_ensure_writable" },
	{ 0xc0ff12fb, "nla_strdup" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x60c20e99, "flow_indr_dev_setup_offload" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x838d2bc8, "siphash_3u32" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x7f6cee89, "rhashtable_free_and_destroy" },
	{ 0x7f2d3a3b, "skb_checksum" },
	{ 0xdcb764ad, "memset" },
	{ 0x92ec510d, "jiffies64_to_msecs" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x68619569, "nfnetlink_send" },
	{ 0x55e6c216, "__get_task_comm" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xece784c2, "rb_first" },
	{ 0xbda4f245, "nfnetlink_subsys_unregister" },
	{ 0x9960cce1, "from_kgid_munged" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x5285ddb1, "__put_net" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x21ed2aba, "ipv6_find_hdr" },
	{ 0xb15b4109, "crc32c" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x6a07faff, "__skb_checksum" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa0def3fd, "inet_proto_csum_replace4" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3ac3feba, "rhltable_init" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x4afd9810, "from_kuid_munged" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x98cf60b3, "strlen" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa22fa941, "nfnetlink_has_listeners" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "1AB7DC894F221631FA68124");
