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
	{ 0x73820201, "register_pernet_device" },
	{ 0x409ae794, "xfrm6_protocol_register" },
	{ 0xa9788733, "xfrm6_tunnel_register" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0x40416c0d, "xfrm6_tunnel_deregister" },
	{ 0x3f2e5b6, "xfrm6_protocol_deregister" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xb310efd8, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0xdcb764ad, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0xac5a5d8, "ip6_tnl_get_cap" },
	{ 0xd9ff8e23, "__dev_get_by_index" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xc162295e, "rt6_lookup" },
	{ 0x6a29aec0, "dst_release" },
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
	{ 0x7717fe14, "register_netdevice" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8a4156aa, "netdev_state_change" },
	{ 0xee4a72bb, "xfrm_state_lookup" },
	{ 0x893abd4a, "make_kuid" },
	{ 0xde3be455, "ip6_update_pmtu" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x2069083c, "ip6_redirect" },
	{ 0x10a44557, "__xfrm_state_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe26c434f, "__xfrm_policy_check" },
	{ 0xcfaf28d1, "ip6_tnl_rcv_ctl" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x34b60b79, "xfrm_input" },
	{ 0x8384fc95, "xfrm6_tunnel_spi_lookup" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x25c7d07c, "skb_scrub_packet" },
	{ 0x1f187b4a, "__xfrm_decode_session" },
	{ 0x731f82f6, "ip_route_output_key_hash" },
	{ 0x5376f959, "xfrm_lookup_route" },
	{ 0x46360432, "ip6_tnl_xmit_ctl" },
	{ 0x204487e7, "icmp_ndo_send" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x406c341, "ip6_route_output_flags" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1035219c, "icmpv6_ndo_send" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdd896e0a, "ns_capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0x78125a, "ip6_tnl_get_iflink" },
	{ 0xbb1ed8, "ip6_tnl_get_link_net" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ipv6,tunnel6,ip6_tunnel,xfrm6_tunnel");


MODULE_INFO(srcversion, "616D2E794A060B5AFF63F7D");
