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
	{ 0xb968fbe4, "ip_tunnel_header_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0x73820201, "register_pernet_device" },
	{ 0x4bc11ade, "xfrm4_tunnel_register" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0xa0af717e, "xfrm4_tunnel_deregister" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0xb310efd8, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0x4829a47e, "memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8a4156aa, "netdev_state_change" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf61463ea, "ip6_err_gen_icmpv6_unreach" },
	{ 0xedec3bc2, "ipv4_update_pmtu" },
	{ 0xfd5d72ab, "ipv4_redirect" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x98c7d80b, "__iptunnel_pull_header" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xef6e36d7, "ip_tunnel_rcv" },
	{ 0xe26c434f, "__xfrm_policy_check" },
	{ 0xdd896e0a, "ns_capable" },
	{ 0x5f011766, "iptunnel_handle_offloads" },
	{ 0x541f92bb, "ip_tunnel_xmit" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd9ff8e23, "__dev_get_by_index" },
	{ 0x893abd4a, "make_kuid" },
	{ 0x50f1d92d, "ip_route_output_flow" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x459e03b6, "init_net" },
	{ 0x23c32d6f, "alloc_netdev_mqs" },
	{ 0xa28684c3, "register_netdev" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3e903560, "ip_tunnel_netlink_encap_parms" },
	{ 0xdcb764ad, "memset" },
	{ 0x2a2f04fa, "ip_tunnel_netlink_parms" },
	{ 0xda464223, "ip_tunnel_encap_setup" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xcbd076e, "dst_cache_get_ip4" },
	{ 0x260f4559, "skb_realloc_headroom" },
	{ 0x26584b42, "skb_set_owner_w" },
	{ 0x972a3723, "consume_skb" },
	{ 0xf3c64065, "iptun_encaps" },
	{ 0x148cac2e, "iptunnel_xmit" },
	{ 0xbe07eed, "dst_cache_set_ip4" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x13b2ca70, "neigh_destroy" },
	{ 0x1035219c, "icmpv6_ndo_send" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa23d534d, "ipv6_chk_custom_prefix" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc04c722c, "netif_rx" },
	{ 0x7fdb37f4, "ipv6_chk_prefix" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbcabc899, "ip_tunnel_siocdevprivate" },
	{ 0xc6cbbc89, "capable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0x1de1a40d, "ip_tunnel_get_iflink" },
	{ 0x88ad0808, "ip_tunnel_get_link_net" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "tunnel4,ipv6,ip_tunnel");


MODULE_INFO(srcversion, "5D902F7D1BFC248BB0442DF");
