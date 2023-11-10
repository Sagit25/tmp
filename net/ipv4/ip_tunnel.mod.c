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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(ip_tunnel_lookup, 0x7271bb91, "_gpl");
SYMBOL_CRC(ip_tunnel_rcv, 0xef6e36d7, "_gpl");
SYMBOL_CRC(ip_tunnel_encap_add_ops, 0xed4e561f, "");
SYMBOL_CRC(ip_tunnel_encap_del_ops, 0x54bb3a39, "");
SYMBOL_CRC(ip_tunnel_encap_setup, 0xda464223, "_gpl");
SYMBOL_CRC(ip_md_tunnel_xmit, 0xd40cf2c1, "_gpl");
SYMBOL_CRC(ip_tunnel_xmit, 0x541f92bb, "_gpl");
SYMBOL_CRC(ip_tunnel_ctl, 0x7fb951c6, "_gpl");
SYMBOL_CRC(ip_tunnel_siocdevprivate, 0xbcabc899, "_gpl");
SYMBOL_CRC(__ip_tunnel_change_mtu, 0x4e264c03, "_gpl");
SYMBOL_CRC(ip_tunnel_change_mtu, 0xe9cbbc47, "_gpl");
SYMBOL_CRC(ip_tunnel_dellink, 0x486b090e, "_gpl");
SYMBOL_CRC(ip_tunnel_get_link_net, 0x88ad0808, "");
SYMBOL_CRC(ip_tunnel_get_iflink, 0x1de1a40d, "");
SYMBOL_CRC(ip_tunnel_init_net, 0x9363d17c, "_gpl");
SYMBOL_CRC(ip_tunnel_delete_nets, 0x25c9e7f7, "_gpl");
SYMBOL_CRC(ip_tunnel_newlink, 0xfd7aae1b, "_gpl");
SYMBOL_CRC(ip_tunnel_changelink, 0xb9b6b5ad, "_gpl");
SYMBOL_CRC(ip_tunnel_init, 0x9fbbac7c, "_gpl");
SYMBOL_CRC(ip_tunnel_uninit, 0x02b90dec, "_gpl");
SYMBOL_CRC(ip_tunnel_setup, 0x3793d119, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf3c64065, "iptun_encaps" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x1035219c, "icmpv6_ndo_send" },
	{ 0x204487e7, "icmp_ndo_send" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4829a47e, "memcpy" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xdd64e639, "strscpy" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x9018d7f4, "gro_cells_init" },
	{ 0xe914e41e, "strcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x50f1d92d, "ip_route_output_flow" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9ff8e23, "__dev_get_by_index" },
	{ 0x3182fe18, "l3mdev_master_upper_ifindex_by_index_rcu" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x8a4156aa, "netdev_state_change" },
	{ 0xdd896e0a, "ns_capable" },
	{ 0xe98913cb, "dev_set_mtu" },
	{ 0x459e03b6, "init_net" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x25c7d07c, "skb_scrub_packet" },
	{ 0x62d6ac1, "gro_cells_receive" },
	{ 0x355bf77a, "eth_type_trans" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x92997ed8, "_printk" },
	{ 0xcbd076e, "dst_cache_get_ip4" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0xdaab728f, "__skb_get_hash" },
	{ 0xbe07eed, "dst_cache_set_ip4" },
	{ 0x148cac2e, "iptunnel_xmit" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x13b2ca70, "neigh_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AB7B922933CF49A1EFA9686");
