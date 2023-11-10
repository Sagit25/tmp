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
	{ 0x15ba50a6, "jiffies" },
	{ 0x92997ed8, "_printk" },
	{ 0x73820201, "register_pernet_device" },
	{ 0x999d9165, "inet6_add_protocol" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0xb1489500, "inet6_del_protocol" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0xac5a5d8, "ip6_tnl_get_cap" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xc162295e, "rt6_lookup" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x56962cfc, "ether_setup" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x459e03b6, "init_net" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa28684c3, "register_netdev" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xd38ee2c7, "__get_hash_from_flowi6" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0x47d9851a, "ip6_tnl_change_mtu" },
	{ 0x3a7cf73c, "ip6_tnl_encap_setup" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x893abd4a, "make_kuid" },
	{ 0x638d6586, "ip6_tnl_parse_tlv_enc_lim" },
	{ 0x1035219c, "icmpv6_ndo_send" },
	{ 0x1546e2dd, "gre_parse_header" },
	{ 0x2069083c, "ip6_redirect" },
	{ 0xde3be455, "ip6_update_pmtu" },
	{ 0x98c7d80b, "__iptunnel_pull_header" },
	{ 0x17a2bdf2, "metadata_dst_alloc" },
	{ 0x1a65425, "ip6_tnl_rcv" },
	{ 0xe705c3fa, "__icmpv6_send" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x9018d7f4, "gro_cells_init" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xdcb764ad, "memset" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x9260438a, "ip6_tnl_xmit" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x5f011766, "iptunnel_handle_offloads" },
	{ 0x204487e7, "icmp_ndo_send" },
	{ 0x46360432, "ip6_tnl_xmit_ctl" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xb310efd8, "nla_put" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdd896e0a, "ns_capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x8a4156aa, "netdev_state_change" },
	{ 0x941d386c, "___pskb_trim" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0x78125a, "ip6_tnl_get_iflink" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0xbb1ed8, "ip6_tnl_get_link_net" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ip6_tunnel,ipv6,gre");


MODULE_INFO(srcversion, "62D362297692DDD122BEED5");
