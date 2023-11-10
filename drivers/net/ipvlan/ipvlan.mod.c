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

SYMBOL_CRC(ipvlan_count_rx, 0xa8cbe3dc, "_gpl");
SYMBOL_CRC(ipvlan_link_new, 0x6925ac44, "_gpl");
SYMBOL_CRC(ipvlan_link_delete, 0x0a7be867, "_gpl");
SYMBOL_CRC(ipvlan_link_setup, 0xd2a23985, "_gpl");
SYMBOL_CRC(ipvlan_link_register, 0x1bad7ef4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcc8d633b, "__do_once_done" },
	{ 0x5c4d2d9f, "ip6_route_input_lookup" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x5b18f5eb, "dev_pre_changeaddr_notify" },
	{ 0x39be3de8, "dev_mc_sync" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xa8fb060d, "netdev_is_rx_handler_busy" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc8140cb7, "netdev_update_features" },
	{ 0x972a3723, "consume_skb" },
	{ 0xbd41ac06, "ip6_local_out" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4cc0cd5, "dev_uc_sync" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0x7f89dd3c, "netif_inherit_tso_max" },
	{ 0xb16e3a0c, "eth_header_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x50f1d92d, "ip_route_output_flow" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x62a747cb, "dev_uc_unsync" },
	{ 0x56962cfc, "ether_setup" },
	{ 0x85a552e, "netdev_err" },
	{ 0xa3805593, "netdev_upper_dev_link" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0xecf74599, "netdev_core_stats_alloc" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x643559f2, "eth_header_parse" },
	{ 0x326f3f18, "netdev_rx_handler_unregister" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb71eccac, "eth_header_cache_update" },
	{ 0x70f3cde3, "nf_register_net_hooks" },
	{ 0x406c341, "ip6_route_output_flags" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x39f35a13, "ip_route_input_noref" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xd9ff8e23, "__dev_get_by_index" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x121445a5, "skb_pull" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x76807403, "netif_stacked_transfer_operstate" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x44278fd8, "netdev_upper_dev_unlink" },
	{ 0xb310efd8, "nla_put" },
	{ 0xffb7c514, "ida_free" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xdd896e0a, "ns_capable" },
	{ 0x30ccd6e, "nf_unregister_net_hooks" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x8932f5b, "ethtool_op_get_link" },
	{ 0x1c22ccfb, "__ethtool_get_link_ksettings" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xdcb764ad, "memset" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x25c7d07c, "skb_scrub_packet" },
	{ 0xdd64e639, "strscpy" },
	{ 0x47c65bfc, "unregister_inet6addr_validator_notifier" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xfef6a46f, "vlan_vid_add" },
	{ 0xea7c6efb, "call_netdevice_notifiers" },
	{ 0x726f2c79, "vlan_vid_del" },
	{ 0x7c5a6b1f, "dev_set_allmulti" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x461c9d06, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6a29aec0, "dst_release" },
	{ 0xe3b40c9a, "netdev_rx_handler_register" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xab63baa5, "unregister_inetaddr_validator_notifier" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x818a0f2d, "ip_local_out" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc32c71af, "register_inetaddr_validator_notifier" },
	{ 0x5991323d, "dev_mc_unsync" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xef32f955, "dev_change_flags" },
	{ 0x9deb4f8b, "dev_forward_skb" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xa77bfd29, "register_inet6addr_validator_notifier" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "CF55A6AC52193A68F74DF98");
