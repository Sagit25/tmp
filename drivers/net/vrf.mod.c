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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x1b20c1fa, "l3mdev_table_lookup_register" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0x44c58f3, "l3mdev_table_lookup_unregister" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb310efd8, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xef32f955, "dev_change_flags" },
	{ 0x85a552e, "netdev_err" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xdd64e639, "strscpy" },
	{ 0x79eaefbe, "ip6_pol_route" },
	{ 0xdcb764ad, "memset" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7c85e954, "register_net_sysctl" },
	{ 0xf71b2bf1, "netdev_master_upper_dev_get" },
	{ 0x44278fd8, "netdev_upper_dev_unlink" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x7755f959, "netdev_master_upper_dev_link" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x68c4428a, "__nlmsg_put" },
	{ 0xd9d085e8, "fib_nl_newrule" },
	{ 0x30709748, "fib_nl_delrule" },
	{ 0x56962cfc, "ether_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x809b266a, "dev_queue_xmit_nit" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x121445a5, "skb_pull" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xbfbd3ad2, "netdev_lower_get_next" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0xd83898d5, "nf_hooks_needed" },
	{ 0xabe18ee5, "nf_hook_slow" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x48b62e4b, "arp_tbl" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1eb18df7, "skb_expand_head" },
	{ 0xd2ff8867, "__neigh_create" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0x68227490, "ipv6_stub" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x8c578cea, "fib_new_table" },
	{ 0xf23c3fb6, "rt_dst_alloc" },
	{ 0xd87718e, "fib6_new_table" },
	{ 0x5b468353, "ip6_dst_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0x221bb7bf, "__netif_rx" },
	{ 0x50f1d92d, "ip_route_output_flow" },
	{ 0xc07bc866, "ip6_dst_lookup_flow" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x7736f34b, "inet_select_addr" },
	{ 0x524e3b9f, "nd_tbl" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "8E952356A71CA0F674292DB");
