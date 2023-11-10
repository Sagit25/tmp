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
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0x56962cfc, "ether_setup" },
	{ 0x51e2dac4, "netif_set_tso_max_size" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2eb20b7e, "xdp_return_frame" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xe0c353ee, "__xdp_rxq_info_reg" },
	{ 0x64a75bb8, "xdp_rxq_info_reg_mem_model" },
	{ 0xa719442, "netif_napi_add_weight" },
	{ 0xec985431, "xdp_rxq_info_unreg" },
	{ 0x216dab, "__netif_napi_del" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x5338184f, "ethtool_sprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdd64e639, "strscpy" },
	{ 0x21887833, "dev_lstats_read" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0x90edab77, "netif_set_real_num_tx_queues" },
	{ 0xb2e369fd, "netif_set_real_num_rx_queues" },
	{ 0xd91dbd1f, "xdp_alloc_skb_bulk" },
	{ 0x215cc29c, "napi_gro_receive" },
	{ 0x5890bd07, "__xdp_build_skb_from_frame" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x1777343a, "napi_disable" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x52238ddf, "napi_enable" },
	{ 0x19123cac, "rtnl_nla_parse_ifinfomsg" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xad3c5cd, "rtnl_link_get_net" },
	{ 0xbba10e97, "rtnl_create_link" },
	{ 0x7f89dd3c, "netif_inherit_tso_max" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0xc8140cb7, "netdev_update_features" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0x50219f3b, "rtnl_configure_link" },
	{ 0x5285ddb1, "__put_net" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1de4e5f3, "netdev_features_change" },
	{ 0x92997ed8, "_printk" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0x16bdaf40, "xdp_rxq_info_is_reg" },
	{ 0xc5c55f1e, "bpf_prog_put" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x62f52652, "napi_schedule_prep" },
	{ 0x61c4754b, "__napi_schedule" },
	{ 0xbd5704ec, "__tracepoint_xdp_bulk_tx" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x237f85f4, "__traceiter_xdp_bulk_tx" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x398e4c6f, "xdp_convert_zc_to_xdp_frame" },
	{ 0xbb7195a5, "xdp_warn" },
	{ 0xe34dee5c, "sock_wfree" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x36fa7fdb, "build_skb" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x48471741, "skb_put" },
	{ 0xb0518f62, "skb_copy_header" },
	{ 0xd2ce3cb2, "skb_headers_offset_update" },
	{ 0x86adafd6, "skb_add_rx_frag" },
	{ 0x972a3723, "consume_skb" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x3b814ca, "bpf_dispatcher_xdp_func" },
	{ 0x146cc88f, "bpf_master_redirect_enabled_key" },
	{ 0xad9b3a17, "xdp_do_redirect" },
	{ 0xbf5480fe, "xdp_return_buff" },
	{ 0x2d58278e, "xdp_master_redirect" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0xb1dbe816, "bpf_warn_invalid_xdp_action" },
	{ 0x8b7a698b, "__tracepoint_xdp_exception" },
	{ 0xd96f94bc, "__traceiter_xdp_exception" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0x82d27d3f, "skb_clone_tx_timestamp" },
	{ 0xc12806d9, "__dev_forward_skb" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x221bb7bf, "__netif_rx" },
	{ 0x7eee524d, "skb_tstamp_tx" },
	{ 0x7119c34a, "__dev_kfree_skb_any" },
	{ 0xbbfe0f97, "netif_receive_skb" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0xdcb764ad, "memset" },
	{ 0x54399ba, "bpf_redirect_info" },
	{ 0xb9681621, "xdp_do_flush" },
	{ 0x2a306880, "napi_complete_done" },
	{ 0x8af203e, "passthru_features_check" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0x8932f5b, "ethtool_op_get_link" },
	{ 0x6a528adb, "ethtool_op_get_ts_info" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C0B50D6E5E1013631F729E8");
