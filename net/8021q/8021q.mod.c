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
	{ 0xe98913cb, "dev_set_mtu" },
	{ 0xc859660a, "dev_get_stats" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x39be3de8, "dev_mc_sync" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc8140cb7, "netdev_update_features" },
	{ 0x933dc050, "__nla_validate" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3b34bd9f, "__netpoll_free" },
	{ 0x4cc0cd5, "dev_uc_sync" },
	{ 0x8538945, "dev_uc_del" },
	{ 0x40cda588, "netpoll_send_skb" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0x7f89dd3c, "netif_inherit_tso_max" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f5ab9ed, "dev_set_promiscuity" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0xb97e288f, "netdev_warn" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x69091b4, "garp_unregister_application" },
	{ 0xa262bd0c, "__dev_get_by_name" },
	{ 0x62a747cb, "dev_uc_unsync" },
	{ 0x56962cfc, "ether_setup" },
	{ 0xc5b3969b, "proc_create_net_data" },
	{ 0xa3805593, "netdev_upper_dev_link" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x643559f2, "eth_header_parse" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xf362c0a9, "garp_request_leave" },
	{ 0xd9ff8e23, "__dev_get_by_index" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x76807403, "netif_stacked_transfer_operstate" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xfbb8a761, "strscpy_pad" },
	{ 0x44278fd8, "netdev_upper_dev_unlink" },
	{ 0xb310efd8, "nla_put" },
	{ 0xfe90821f, "garp_register_application" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xdd896e0a, "ns_capable" },
	{ 0x8932f5b, "ethtool_op_get_link" },
	{ 0x1c22ccfb, "__ethtool_get_link_ksettings" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x26e89f31, "vlan_ioctl_set" },
	{ 0x5da0a311, "proc_remove" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x2fb0196c, "garp_init_applicant" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3516dcef, "__netpoll_setup" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0xfef6a46f, "vlan_vid_add" },
	{ 0x6a6df43d, "linkwatch_fire_event" },
	{ 0xea7c6efb, "call_netdevice_notifiers" },
	{ 0x726f2c79, "vlan_vid_del" },
	{ 0x7c5a6b1f, "dev_set_allmulti" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6f3d4c8a, "netif_carrier_off" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x361ea3f3, "netif_carrier_on" },
	{ 0xb016fded, "vlan_uses_dev" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x998ed1cf, "garp_request_join" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x23394e33, "_proc_mkdir" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x77a75777, "dev_uc_add" },
	{ 0x5a138216, "vlan_dev_vlan_id" },
	{ 0x2b2bdb90, "garp_uninit_applicant" },
	{ 0xb7f8c5fb, "proc_create_single_data" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x104b74ce, "dev_get_flags" },
	{ 0xa07691ee, "vlan_filter_drop_vids" },
	{ 0x5991323d, "dev_mc_unsync" },
	{ 0x5c8eb4cb, "vlan_filter_push_vids" },
	{ 0xef32f955, "dev_change_flags" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "garp");


MODULE_INFO(srcversion, "40BBD52385364E792BB7739");
