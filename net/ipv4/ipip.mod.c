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
	{ 0x92997ed8, "_printk" },
	{ 0x73820201, "register_pernet_device" },
	{ 0x4bc11ade, "xfrm4_tunnel_register" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0xa0af717e, "xfrm4_tunnel_deregister" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0xb310efd8, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb968fbe4, "ip_tunnel_header_ops" },
	{ 0x3793d119, "ip_tunnel_setup" },
	{ 0x7fb951c6, "ip_tunnel_ctl" },
	{ 0x5f011766, "iptunnel_handle_offloads" },
	{ 0xd40cf2c1, "ip_md_tunnel_xmit" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x541f92bb, "ip_tunnel_xmit" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x9fbbac7c, "ip_tunnel_init" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7271bb91, "ip_tunnel_lookup" },
	{ 0xedec3bc2, "ipv4_update_pmtu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfd5d72ab, "ipv4_redirect" },
	{ 0x25c9e7f7, "ip_tunnel_delete_nets" },
	{ 0x9363d17c, "ip_tunnel_init_net" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0x3e903560, "ip_tunnel_netlink_encap_parms" },
	{ 0xda464223, "ip_tunnel_encap_setup" },
	{ 0xdcb764ad, "memset" },
	{ 0x2a2f04fa, "ip_tunnel_netlink_parms" },
	{ 0xb9b6b5ad, "ip_tunnel_changelink" },
	{ 0x98c7d80b, "__iptunnel_pull_header" },
	{ 0x17a2bdf2, "metadata_dst_alloc" },
	{ 0xef6e36d7, "ip_tunnel_rcv" },
	{ 0xe26c434f, "__xfrm_policy_check" },
	{ 0xfd7aae1b, "ip_tunnel_newlink" },
	{ 0x2b90dec, "ip_tunnel_uninit" },
	{ 0xbcabc899, "ip_tunnel_siocdevprivate" },
	{ 0xe9cbbc47, "ip_tunnel_change_mtu" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0x1de1a40d, "ip_tunnel_get_iflink" },
	{ 0x486b090e, "ip_tunnel_dellink" },
	{ 0x88ad0808, "ip_tunnel_get_link_net" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "tunnel4,ip_tunnel");


MODULE_INFO(srcversion, "B07576C5E7227541D8F5ED4");
