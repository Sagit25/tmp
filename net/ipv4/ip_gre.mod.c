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

SYMBOL_CRC(gretap_fb_dev_create, 0xd518cbc7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xda464223, "ip_tunnel_encap_setup" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x56962cfc, "ether_setup" },
	{ 0x3793d119, "ip_tunnel_setup" },
	{ 0x9fbbac7c, "ip_tunnel_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x73820201, "register_pernet_device" },
	{ 0xc98d595a, "gre_add_protocol" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0xf346c18c, "gre_del_protocol" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0x25c9e7f7, "ip_tunnel_delete_nets" },
	{ 0x9363d17c, "ip_tunnel_init_net" },
	{ 0x3f059ff8, "skb_push" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x1546e2dd, "gre_parse_header" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7271bb91, "ip_tunnel_lookup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfd5d72ab, "ipv4_redirect" },
	{ 0xedec3bc2, "ipv4_update_pmtu" },
	{ 0xf61463ea, "ip6_err_gen_icmpv6_unreach" },
	{ 0x98c7d80b, "__iptunnel_pull_header" },
	{ 0x17a2bdf2, "metadata_dst_alloc" },
	{ 0xef6e36d7, "ip_tunnel_rcv" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x439170c5, "__icmp_send" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0xdcb764ad, "memset" },
	{ 0x50f1d92d, "ip_route_output_flow" },
	{ 0x6a29aec0, "dst_release" },
	{ 0xdaab728f, "__skb_get_hash" },
	{ 0xb9b6b5ad, "ip_tunnel_changelink" },
	{ 0xfd7aae1b, "ip_tunnel_newlink" },
	{ 0xbba10e97, "rtnl_create_link" },
	{ 0x4e264c03, "__ip_tunnel_change_mtu" },
	{ 0x486b090e, "ip_tunnel_dellink" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x50219f3b, "rtnl_configure_link" },
	{ 0x4fffca41, "free_netdev" },
	{ 0x5f011766, "iptunnel_handle_offloads" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd40cf2c1, "ip_md_tunnel_xmit" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x541f92bb, "ip_tunnel_xmit" },
	{ 0x941d386c, "___pskb_trim" },
	{ 0x121445a5, "skb_pull" },
	{ 0x7fb951c6, "ip_tunnel_ctl" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb310efd8, "nla_put" },
	{ 0x2b90dec, "ip_tunnel_uninit" },
	{ 0x2fe67f89, "eth_mac_addr" },
	{ 0xe2a4edbe, "eth_validate_addr" },
	{ 0xe9cbbc47, "ip_tunnel_change_mtu" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0x1de1a40d, "ip_tunnel_get_iflink" },
	{ 0xbcabc899, "ip_tunnel_siocdevprivate" },
	{ 0x88ad0808, "ip_tunnel_get_link_net" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ip_tunnel,gre,ipv6");


MODULE_INFO(srcversion, "D8BC53CE6AE1839D052EB2F");
