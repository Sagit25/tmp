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

SYMBOL_CRC(macvlan_common_setup, 0x67814264, "_gpl");
SYMBOL_CRC(macvlan_common_newlink, 0xf49079cc, "_gpl");
SYMBOL_CRC(macvlan_dellink, 0xabcb34b1, "_gpl");
SYMBOL_CRC(macvlan_link_register, 0xee26b7ce, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x56962cfc, "ether_setup" },
	{ 0x1c22ccfb, "__ethtool_get_link_ksettings" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5006b765, "dev_mc_del" },
	{ 0x8538945, "dev_uc_del" },
	{ 0x643359b4, "dev_mc_add_excl" },
	{ 0xad13c225, "dev_uc_add_excl" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x3b34bd9f, "__netpoll_free" },
	{ 0x459e03b6, "init_net" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x726f2c79, "vlan_vid_del" },
	{ 0xfef6a46f, "vlan_vid_add" },
	{ 0x7c5a6b1f, "dev_set_allmulti" },
	{ 0x1f5ab9ed, "dev_set_promiscuity" },
	{ 0x62a747cb, "dev_uc_unsync" },
	{ 0x5991323d, "dev_mc_unsync" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0xb310efd8, "nla_put" },
	{ 0x3516dcef, "__netpoll_setup" },
	{ 0x37a0cba, "kfree" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x77a75777, "dev_uc_add" },
	{ 0xb31eda53, "dev_set_mac_address" },
	{ 0xea7c6efb, "call_netdevice_notifiers" },
	{ 0x7f89dd3c, "netif_inherit_tso_max" },
	{ 0xc8140cb7, "netdev_update_features" },
	{ 0x76807403, "netif_stacked_transfer_operstate" },
	{ 0xe98913cb, "dev_set_mtu" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0x44278fd8, "netdev_upper_dev_unlink" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xdcb764ad, "memset" },
	{ 0x4cc0cd5, "dev_uc_sync" },
	{ 0x39be3de8, "dev_mc_sync" },
	{ 0x461c9d06, "skb_clone" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xc12806d9, "__dev_forward_skb" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x326f3f18, "netdev_rx_handler_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xd9ff8e23, "__dev_get_by_index" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa8fb060d, "netdev_is_rx_handler_busy" },
	{ 0xe3b40c9a, "netdev_rx_handler_register" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0xa3805593, "netdev_upper_dev_link" },
	{ 0x6a6df43d, "linkwatch_fire_event" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x972a3723, "consume_skb" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x221bb7bf, "__netif_rx" },
	{ 0x1df6c91d, "ip_check_defrag" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xecf74599, "netdev_core_stats_alloc" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0x9deb4f8b, "dev_forward_skb" },
	{ 0x40cda588, "netpoll_send_skb" },
	{ 0x8af203e, "passthru_features_check" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0xa1dbeace, "ndo_dflt_fdb_dump" },
	{ 0x643559f2, "eth_header_parse" },
	{ 0xb16e3a0c, "eth_header_cache" },
	{ 0xb71eccac, "eth_header_cache_update" },
	{ 0x8932f5b, "ethtool_op_get_link" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B34344E8F5E8D52D32FC3DA");
