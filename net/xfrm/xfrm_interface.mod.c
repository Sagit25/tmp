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
	{ 0x3f2e5b6, "xfrm6_protocol_deregister" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x23f5c779, "xfrm6_rcv" },
	{ 0xa9788733, "xfrm6_tunnel_register" },
	{ 0xbea24851, "skb_gso_validate_network_len" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x4bc11ade, "xfrm4_tunnel_register" },
	{ 0x1f187b4a, "__xfrm_decode_session" },
	{ 0x1e8235eb, "__skb_ext_del" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0xb968fbe4, "ip_tunnel_header_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0xee4a72bb, "xfrm_state_lookup" },
	{ 0xe26c434f, "__xfrm_policy_check" },
	{ 0x9018d7f4, "gro_cells_init" },
	{ 0x8c5649fc, "xfrm4_protocol_register" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd918e15a, "xfrm6_rcv_spi" },
	{ 0xc751952b, "unregister_netdevice_queue" },
	{ 0x509006fd, "xfrm4_rcv" },
	{ 0x10a44557, "__xfrm_state_destroy" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x8a4156aa, "netdev_state_change" },
	{ 0xde3be455, "ip6_update_pmtu" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x4e9b7311, "xfrm_lookup_with_ifid" },
	{ 0xfd5d72ab, "ipv4_redirect" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x893abd4a, "make_kuid" },
	{ 0x406c341, "ip6_route_output_flags" },
	{ 0x731f82f6, "ip_route_output_key_hash" },
	{ 0x1035219c, "icmpv6_ndo_send" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x582b6275, "xfrm_if_unregister_cb" },
	{ 0xd9ff8e23, "__dev_get_by_index" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8384fc95, "xfrm6_tunnel_spi_lookup" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xb25dc613, "dev_get_by_index_rcu" },
	{ 0x204487e7, "icmp_ndo_send" },
	{ 0x34b60b79, "xfrm_input" },
	{ 0xb310efd8, "nla_put" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xdcb764ad, "memset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0x2069083c, "ip6_redirect" },
	{ 0x34bdcbc0, "lwtunnel_state_alloc" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe4653f47, "xfrm_if_register_cb" },
	{ 0x901d64f, "xfrm4_protocol_deregister" },
	{ 0xedec3bc2, "ipv4_update_pmtu" },
	{ 0x17a2bdf2, "metadata_dst_alloc" },
	{ 0x6a29aec0, "dst_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xd63afe2c, "lwtunnel_encap_add_ops" },
	{ 0x73820201, "register_pernet_device" },
	{ 0xfcb4f53d, "lwtunnel_encap_del_ops" },
	{ 0x40416c0d, "xfrm6_tunnel_deregister" },
	{ 0xa0af717e, "xfrm4_tunnel_deregister" },
	{ 0x409ae794, "xfrm6_protocol_register" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x7717fe14, "register_netdevice" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ipv6,tunnel6,tunnel4,xfrm6_tunnel");


MODULE_INFO(srcversion, "4549DE161EAB55D0DDA5232");
