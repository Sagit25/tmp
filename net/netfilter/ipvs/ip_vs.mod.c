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

SYMBOL_CRC(ip_vs_conn_in_get_proto, 0x3710be2d, "_gpl");
SYMBOL_CRC(ip_vs_conn_out_get_proto, 0x8f7c4b17, "_gpl");
SYMBOL_CRC(register_ip_vs_scheduler, 0x59d40baa, "");
SYMBOL_CRC(unregister_ip_vs_scheduler, 0x4a8d81d6, "");
SYMBOL_CRC(ip_vs_proto_name, 0xd831a1a2, "");
SYMBOL_CRC(ip_vs_conn_new, 0xf0d73a63, "");
SYMBOL_CRC(ip_vs_conn_in_get, 0xfe6a8935, "");
SYMBOL_CRC(ip_vs_conn_out_get, 0x76eb6260, "");
SYMBOL_CRC(ip_vs_tcp_conn_listen, 0x1b96aee1, "");
SYMBOL_CRC(ip_vs_conn_put, 0xace7261f, "");
SYMBOL_CRC(ip_vs_new_conn_out, 0x586248bd, "");
SYMBOL_CRC(ip_vs_scheduler_err, 0xcc38913e, "");
SYMBOL_CRC(register_ip_vs_app, 0x0d74555e, "");
SYMBOL_CRC(unregister_ip_vs_app, 0x7e1df3fd, "");
SYMBOL_CRC(register_ip_vs_app_inc, 0x0292e50e, "");
SYMBOL_CRC(ip_vs_proto_get, 0x07914963, "");
SYMBOL_CRC(ip_vs_proto_data_get, 0x5c3b832c, "");
SYMBOL_CRC(register_ip_vs_pe, 0xd9c400ff, "_gpl");
SYMBOL_CRC(unregister_ip_vs_pe, 0xff7d3df9, "_gpl");
SYMBOL_CRC(ip_vs_nfct_expect_related, 0x00c6e84a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbc4507e2, "nf_ct_ext_add" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2706fa0e, "nf_conntrack_find_get" },
	{ 0x1425e33, "try_module_get" },
	{ 0x952c6b82, "__ip_select_ident" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xb137fef2, "inet_get_local_port_range" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x27fa66e1, "nr_free_buffer_pages" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xa8b72897, "xfrm_lookup" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x7c85e954, "register_net_sysctl" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x972a3723, "consume_skb" },
	{ 0xbd41ac06, "ip6_local_out" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfc69a480, "nf_register_sockopt" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0xbad2fa73, "nf_ct_netns_get" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0xf347a9fb, "kernel_bind" },
	{ 0x942352e7, "genlmsg_put" },
	{ 0xcb6dba5a, "udp_set_csum" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf7cdd94a, "ip6_route_me_harder" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9303f7be, "__module_get" },
	{ 0x50f1d92d, "ip_route_output_flow" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x5f011766, "iptunnel_handle_offloads" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa262bd0c, "__dev_get_by_name" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xc5b3969b, "proc_create_net_data" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xfe74e25e, "nf_unregister_sockopt" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x70f3cde3, "nf_register_net_hooks" },
	{ 0x406c341, "ip6_route_output_flags" },
	{ 0xa916b694, "strnlen" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0xafd69439, "ipv6_sock_mc_join" },
	{ 0xcc793c4a, "module_put" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xfac8865f, "sysctl_wmem_max" },
	{ 0xb05fc310, "sysctl_rmem_max" },
	{ 0x5cc29983, "ipv6_dev_get_saddr" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdaab728f, "__skb_get_hash" },
	{ 0x459e03b6, "init_net" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x8cc61846, "netlink_unicast" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9375b582, "nf_ct_expect_related_report" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xa625d304, "nf_conntrack_alter_reply" },
	{ 0xbead4410, "ip_route_me_harder" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0xab93c2ef, "seq_putc" },
	{ 0xb310efd8, "nla_put" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x82ff887f, "nf_ct_expect_alloc" },
	{ 0x2b96a991, "skb_ensure_writable" },
	{ 0x9055cb3a, "iov_iter_kvec" },
	{ 0x35da4df2, "ip_mc_join_group" },
	{ 0xd4a4f1e9, "nf_ct_expect_put" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xdd896e0a, "ns_capable" },
	{ 0x30ccd6e, "nf_unregister_net_hooks" },
	{ 0x7736f34b, "inet_select_addr" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x47061780, "inet_addr_type" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb077abf2, "__nf_conntrack_confirm" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x265aa3d5, "kernel_connect" },
	{ 0x7f2d3a3b, "skb_checksum" },
	{ 0xdcb764ad, "memset" },
	{ 0xbb6234da, "ip_defrag" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe705c3fa, "__icmpv6_send" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x5432ec60, "nf_ct_delete" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xabe18ee5, "nf_hook_slow" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x42fdc8b3, "nf_ct_deliver_cached_events" },
	{ 0x260f4559, "skb_realloc_headroom" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x21ed2aba, "ipv6_find_hdr" },
	{ 0xb15b4109, "crc32c" },
	{ 0xdd64e639, "strscpy" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x439170c5, "__icmp_send" },
	{ 0x999e8297, "vfree" },
	{ 0x26584b42, "skb_set_owner_w" },
	{ 0x6a07faff, "__skb_checksum" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xdd65439c, "sock_create_kern" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0xac9da20e, "nf_ct_expect_init" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x281fa3b3, "sock_recvmsg" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcba5ca01, "proc_create_net_single" },
	{ 0xedec3bc2, "ipv4_update_pmtu" },
	{ 0xbed22f19, "nf_defrag_ipv6_enable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6a29aec0, "dst_release" },
	{ 0xacaa2c9e, "sock_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x818a0f2d, "ip_local_out" },
	{ 0xfc2bbbe6, "genl_unregister_family" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x98cf60b3, "strlen" },
	{ 0x81c9a25d, "udp6_set_csum" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa67cd91b, "genl_register_family" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1e0a2844, "kernel_sendmsg" },
	{ 0x50034e1a, "nf_ct_netns_put" },
	{ 0x73820201, "register_pernet_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0x6b2baf52, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,ipv6,nf_defrag_ipv6");


MODULE_INFO(srcversion, "CE62ABAF5D9539F62A87CC9");
