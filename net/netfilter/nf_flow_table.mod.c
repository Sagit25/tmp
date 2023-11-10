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

SYMBOL_CRC(flow_offload_alloc, 0x34d9f4a9, "_gpl");
SYMBOL_CRC(flow_offload_route_init, 0x1789bc02, "_gpl");
SYMBOL_CRC(flow_offload_free, 0x18560358, "_gpl");
SYMBOL_CRC(flow_offload_add, 0x94ccce91, "_gpl");
SYMBOL_CRC(flow_offload_refresh, 0x333d2d74, "_gpl");
SYMBOL_CRC(flow_offload_teardown, 0xcfc48744, "_gpl");
SYMBOL_CRC(flow_offload_lookup, 0xf280b8df, "_gpl");
SYMBOL_CRC(nf_flow_snat_port, 0x6b386c8e, "_gpl");
SYMBOL_CRC(nf_flow_dnat_port, 0x0a1ef8bc, "_gpl");
SYMBOL_CRC(nf_flow_table_init, 0xacf61f19, "_gpl");
SYMBOL_CRC(nf_flow_table_cleanup, 0xeff9ea11, "_gpl");
SYMBOL_CRC(nf_flow_table_free, 0x190a61cb, "_gpl");
SYMBOL_CRC(nf_flow_offload_ip_hook, 0x5c8172b3, "_gpl");
SYMBOL_CRC(nf_flow_offload_ipv6_hook, 0x641f5f75, "_gpl");
SYMBOL_CRC(nf_flow_rule_route_ipv4, 0x6b6875a7, "_gpl");
SYMBOL_CRC(nf_flow_rule_route_ipv6, 0x43f72250, "_gpl");
SYMBOL_CRC(nf_flow_table_offload_setup, 0x9c22ef61, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x200b2041, "in6addr_any" },
	{ 0x2cf64245, "flow_rule_alloc" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xbea24851, "skb_gso_validate_network_len" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x35010199, "neigh_xmit" },
	{ 0xb413f19e, "flow_block_cb_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x121445a5, "skb_pull" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x41f9298d, "dev_get_by_index" },
	{ 0xb25dc613, "dev_get_by_index_rcu" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x60c20e99, "flow_indr_dev_setup_offload" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0xdcb764ad, "memset" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x668b19a1, "down_read" },
	{ 0x47f60cfa, "inet_proto_csum_replace16" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x13b2ca70, "neigh_destroy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa0def3fd, "inet_proto_csum_replace4" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x81ebdf8, "nf_ct_acct_add" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x53b954a2, "up_read" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "496774ADE3A64B83D6FE188");
