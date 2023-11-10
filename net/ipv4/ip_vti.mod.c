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
	{ 0x8c5649fc, "xfrm4_protocol_register" },
	{ 0x4bc11ade, "xfrm4_tunnel_register" },
	{ 0x97ed49d6, "rtnl_link_register" },
	{ 0xa0af717e, "xfrm4_tunnel_deregister" },
	{ 0x901d64f, "xfrm4_protocol_deregister" },
	{ 0x723fefc5, "unregister_pernet_device" },
	{ 0xb310efd8, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xb9b6b5ad, "ip_tunnel_changelink" },
	{ 0xfd7aae1b, "ip_tunnel_newlink" },
	{ 0xb968fbe4, "ip_tunnel_header_ops" },
	{ 0x3793d119, "ip_tunnel_setup" },
	{ 0x7fb951c6, "ip_tunnel_ctl" },
	{ 0x43e6b431, "dev_addr_mod" },
	{ 0x9fbbac7c, "ip_tunnel_init" },
	{ 0x25c9e7f7, "ip_tunnel_delete_nets" },
	{ 0x9dca0260, "rtnl_link_unregister" },
	{ 0x9363d17c, "ip_tunnel_init_net" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7271bb91, "ip_tunnel_lookup" },
	{ 0xee4a72bb, "xfrm_state_lookup" },
	{ 0xfd5d72ab, "ipv4_redirect" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xedec3bc2, "ipv4_update_pmtu" },
	{ 0x10a44557, "__xfrm_state_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x34b60b79, "xfrm_input" },
	{ 0xe26c434f, "__xfrm_policy_check" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x25c7d07c, "skb_scrub_packet" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x1f187b4a, "__xfrm_decode_session" },
	{ 0x406c341, "ip6_route_output_flags" },
	{ 0x5376f959, "xfrm_lookup_route" },
	{ 0x6a29aec0, "dst_release" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x731f82f6, "ip_route_output_key_hash" },
	{ 0x204487e7, "icmp_ndo_send" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x1035219c, "icmpv6_ndo_send" },
	{ 0x2b90dec, "ip_tunnel_uninit" },
	{ 0xbcabc899, "ip_tunnel_siocdevprivate" },
	{ 0xe9cbbc47, "ip_tunnel_change_mtu" },
	{ 0x4d10919b, "dev_get_tstats64" },
	{ 0x1de1a40d, "ip_tunnel_get_iflink" },
	{ 0x486b090e, "ip_tunnel_dellink" },
	{ 0x88ad0808, "ip_tunnel_get_link_net" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "tunnel4,ip_tunnel,ipv6");


MODULE_INFO(srcversion, "BFB8EE252F412BD50EB9558");
