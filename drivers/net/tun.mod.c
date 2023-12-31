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

SYMBOL_CRC(tun_ptr_free, 0x4099f919, "_gpl");
SYMBOL_CRC(tun_get_socket, 0x2b3cb3be, "_gpl");
SYMBOL_CRC(tun_get_tx_ring, 0x5c084fc2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x2eb20b7e, "xdp_return_frame" },
	{ 0x83d5b943, "fasync_helper" },
	{ 0x6e260bd, "__f_setown" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xec1d9fb5, "netdev_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xb310efd8, "nla_put" },
	{ 0x9960cce1, "from_kgid_munged" },
	{ 0x4afd9810, "from_kuid_munged" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xab460d7f, "bpf_prog_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0x11fe2f4d, "netif_tx_stop_all_queues" },
	{ 0x92997ed8, "_printk" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0x96601bbe, "misc_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xba220db7, "__wake_up_sync_key" },
	{ 0x5570945b, "kill_fasync" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0xdd64e639, "strscpy" },
	{ 0x36fa7fdb, "build_skb" },
	{ 0x48471741, "skb_put" },
	{ 0x26584b42, "skb_set_owner_w" },
	{ 0x215cc29c, "napi_gro_receive" },
	{ 0x2a306880, "napi_complete_done" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc5c55f1e, "bpf_prog_put" },
	{ 0xa70b86f4, "sk_alloc" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5df91d9d, "sock_init_data_uid" },
	{ 0x6efd18ac, "sk_free" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x50097088, "security_tun_dev_free_security" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x1777343a, "napi_disable" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xec985431, "xdp_rxq_info_unreg" },
	{ 0x216dab, "__netif_napi_del" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xcc793c4a, "module_put" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9fe006fd, "bpf_prog_get_type_dev" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x90edab77, "netif_set_real_num_tx_queues" },
	{ 0xb2e369fd, "netif_set_real_num_rx_queues" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8a4156aa, "netdev_state_change" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88add2cb, "skb_partial_csum_set" },
	{ 0xb3707e6e, "flow_keys_basic_dissector" },
	{ 0xad60552e, "__skb_flow_dissect" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x9be7bde4, "security_tun_dev_attach" },
	{ 0x16bdaf40, "xdp_rxq_info_is_reg" },
	{ 0xe0c353ee, "__xdp_rxq_info_reg" },
	{ 0x64a75bb8, "xdp_rxq_info_reg_mem_model" },
	{ 0xa719442, "netif_napi_add_weight" },
	{ 0x52238ddf, "napi_enable" },
	{ 0x3615d0e9, "lock_sock_nested" },
	{ 0x7a443005, "sk_attach_filter" },
	{ 0x6b2baf52, "release_sock" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x438610bd, "security_tun_dev_alloc_security" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xecf74599, "netdev_core_stats_alloc" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd62ecd49, "rps_sock_flow_table" },
	{ 0x56802ae8, "rps_cpu_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe914e41e, "strcpy" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xbcacd7f6, "_copy_to_iter" },
	{ 0x1ca380be, "iov_iter_advance" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbae9bec7, "skb_copy_datagram_iter" },
	{ 0x972a3723, "consume_skb" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x22a09382, "sock_recv_errqueue" },
	{ 0x7988a68e, "sk_filter_trim_cap" },
	{ 0x49608959, "migrate_disable" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x4d7272e4, "migrate_enable" },
	{ 0x82d27d3f, "skb_clone_tx_timestamp" },
	{ 0x6f1ea0d5, "skb_copy_ubufs" },
	{ 0xeb7088f3, "skb_tx_error" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0x8761c87b, "rps_needed" },
	{ 0x7eee524d, "skb_tstamp_tx" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x36941eb8, "__skb_get_hash_symmetric" },
	{ 0x941d386c, "___pskb_trim" },
	{ 0xad9b3a17, "xdp_do_redirect" },
	{ 0xb1dbe816, "bpf_warn_invalid_xdp_action" },
	{ 0x8b7a698b, "__tracepoint_xdp_exception" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xd96f94bc, "__traceiter_xdp_exception" },
	{ 0xc03d7feb, "xdp_return_frame_rx_napi" },
	{ 0x398e4c6f, "xdp_convert_zc_to_xdp_frame" },
	{ 0xbb7195a5, "xdp_warn" },
	{ 0xcfd00b76, "skb_page_frag_refill" },
	{ 0xe412fbd2, "copy_page_from_iter" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x3b814ca, "bpf_dispatcher_xdp_func" },
	{ 0x146cc88f, "bpf_master_redirect_enabled_key" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2d58278e, "xdp_master_redirect" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0xb9681621, "xdp_do_flush" },
	{ 0xb7f92f7e, "_copy_from_iter" },
	{ 0xa0d34b62, "iov_iter_npages" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2672b6e9, "sock_alloc_send_pskb" },
	{ 0x4717362a, "zerocopy_sg_from_iter" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0x5b37e63a, "skb_copy_datagram_from_iter" },
	{ 0xdb9788b3, "napi_get_frags" },
	{ 0x1575f4e9, "iov_iter_single_seg_count" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x91a488ac, "__netdev_alloc_frag_align" },
	{ 0xe7ee908e, "do_xdp_generic" },
	{ 0xa4b2101f, "iov_iter_revert" },
	{ 0xbbfe0f97, "netif_receive_skb" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x3c42fedb, "eth_get_headlen" },
	{ 0x62f52652, "napi_schedule_prep" },
	{ 0x544b64c3, "napi_gro_frags" },
	{ 0x61c4754b, "__napi_schedule" },
	{ 0x15ab450d, "__page_frag_cache_drain" },
	{ 0xdd896e0a, "ns_capable" },
	{ 0xd3f9c364, "get_net_ns" },
	{ 0xa96f8ba8, "open_related_ns" },
	{ 0x57e53654, "dev_get_mac_address" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xc6300f56, "make_kgid" },
	{ 0x34f3484e, "security_tun_dev_attach_queue" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa262bd0c, "__dev_get_by_name" },
	{ 0xda3d10a8, "security_tun_dev_open" },
	{ 0x39461d6a, "in_egroup_p" },
	{ 0x4f1cd128, "security_tun_dev_create" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0xb968fbe4, "ip_tunnel_header_ops" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0x893abd4a, "make_kuid" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0xca85377c, "from_kuid" },
	{ 0xb767c713, "sk_detach_filter" },
	{ 0xc8140cb7, "netdev_update_features" },
	{ 0x92293e45, "dev_set_mac_address_user" },
	{ 0xd34a34ea, "netif_tx_wake_queue" },
	{ 0x56962cfc, "ether_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0xea7c6efb, "call_netdevice_notifiers" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x9303f7be, "__module_get" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x253d3ad8, "from_kgid" },
	{ 0x8932f5b, "ethtool_op_get_link" },
	{ 0x6a528adb, "ethtool_op_get_ts_info" },
	{ 0x8af203e, "passthru_features_check" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DDD704D05309CAB515E8241");
