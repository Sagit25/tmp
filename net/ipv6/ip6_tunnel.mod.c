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

SYMBOL_CRC(ip6_tnl_parse_tlv_enc_lim, 0x638d6586, "");
SYMBOL_CRC(ip6_tnl_get_cap, 0x0ac5a5d8, "");
SYMBOL_CRC(ip6_tnl_rcv_ctl, 0xcfaf28d1, "_gpl");
SYMBOL_CRC(ip6_tnl_rcv, 0x01a65425, "");
SYMBOL_CRC(ip6_tnl_xmit_ctl, 0x46360432, "_gpl");
SYMBOL_CRC(ip6_tnl_xmit, 0x9260438a, "");
SYMBOL_CRC(ip6_tnl_change_mtu, 0x47d9851a, "");
SYMBOL_CRC(ip6_tnl_get_iflink, 0x0078125a, "");
SYMBOL_CRC(ip6_tnl_encap_add_ops, 0xf10aee27, "");
SYMBOL_CRC(ip6_tnl_encap_del_ops, 0x11af3594, "");
SYMBOL_CRC(ip6_tnl_encap_setup, 0x3a7cf73c, "_gpl");
SYMBOL_CRC(ip6_tnl_get_link_net, 0x00bb1ed8, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x14f9cb18, "ipv6_chk_addr_and_flags" },
	{ 0xb25dc613, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xbd43497a, "ip6tun_encaps" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x73820201, "register_pernet_device" },
	{ 0xa9788733, "xfrm6_tunnel_register" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0x40416c0d, "xfrm6_tunnel_deregister" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0xb310efd8, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0xdcb764ad, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0xc162295e, "rt6_lookup" },
	{ 0x6a29aec0, "dst_release" },
	{ 0xd9ff8e23, "__dev_get_by_index" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb968fbe4, "ip_tunnel_header_ops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x459e03b6, "init_net" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0xa28684c3, "register_netdev" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0xd38ee2c7, "__get_hash_from_flowi6" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x9018d7f4, "gro_cells_init" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3e903560, "ip_tunnel_netlink_encap_parms" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8a4156aa, "netdev_state_change" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x893abd4a, "make_kuid" },
	{ 0x2069083c, "ip6_redirect" },
	{ 0xde3be455, "ip6_update_pmtu" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x121445a5, "skb_pull" },
	{ 0xe705c3fa, "__icmpv6_send" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x50f1d92d, "ip_route_output_flow" },
	{ 0x39f35a13, "ip_route_input_noref" },
	{ 0x439170c5, "__icmp_send" },
	{ 0x24462807, "dst_cache_get" },
	{ 0x406c341, "ip6_route_output_flags" },
	{ 0xa8b72897, "xfrm_lookup" },
	{ 0x25c7d07c, "skb_scrub_packet" },
	{ 0x260f4559, "skb_realloc_headroom" },
	{ 0x26584b42, "skb_set_owner_w" },
	{ 0x972a3723, "consume_skb" },
	{ 0x5df1c794, "ipv6_push_frag_opts" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xbd41ac06, "ip6_local_out" },
	{ 0xc665dd55, "dst_cache_set_ip6" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x541fa5f9, "ip6_dst_hoplimit" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5cc29983, "ipv6_dev_get_saddr" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x13b2ca70, "neigh_destroy" },
	{ 0x62d6ac1, "gro_cells_receive" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5f011766, "iptunnel_handle_offloads" },
	{ 0x1035219c, "icmpv6_ndo_send" },
	{ 0x204487e7, "icmp_ndo_send" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdd896e0a, "ns_capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe26c434f, "__xfrm_policy_check" },
	{ 0x98c7d80b, "__iptunnel_pull_header" },
	{ 0x17a2bdf2, "metadata_dst_alloc" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ipv6,tunnel6");


MODULE_INFO(srcversion, "571C2C98E2AAFBBE39E4962");
