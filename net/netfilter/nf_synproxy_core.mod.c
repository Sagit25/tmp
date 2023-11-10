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

SYMBOL_CRC(synproxy_net_id, 0xca9fc082, "_gpl");
SYMBOL_CRC(synproxy_parse_options, 0xcfb2a50d, "_gpl");
SYMBOL_CRC(synproxy_init_timestamp_cookie, 0x1f099794, "_gpl");
SYMBOL_CRC(synproxy_send_client_synack, 0x91c326df, "_gpl");
SYMBOL_CRC(synproxy_recv_client_ack, 0x2a9cfa5e, "_gpl");
SYMBOL_CRC(ipv4_synproxy_hook, 0xdf3241c5, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv4_init, 0xa9f37fcf, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv4_fini, 0x152b2e11, "_gpl");
SYMBOL_CRC(synproxy_send_client_synack_ipv6, 0xc195d77e, "_gpl");
SYMBOL_CRC(synproxy_recv_client_ack_ipv6, 0x7ab884a4, "_gpl");
SYMBOL_CRC(ipv6_synproxy_hook, 0x85f6f086, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv6_init, 0x9722a817, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv6_fini, 0x2bfaf9c9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb43f9365, "ktime_get" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x70f3cde3, "nf_register_net_hooks" },
	{ 0x30ccd6e, "nf_unregister_net_hooks" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0xdcb764ad, "memset" },
	{ 0x2d8a8447, "nf_ipv6_ops" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xa8b72897, "xfrm_lookup" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xbd41ac06, "ip6_local_out" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2b96a991, "skb_ensure_writable" },
	{ 0xa0def3fd, "inet_proto_csum_replace4" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0xbead4410, "ip_route_me_harder" },
	{ 0x818a0f2d, "ip_local_out" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xf824b36d, "nf_ct_tmpl_alloc" },
	{ 0xbc4507e2, "nf_ct_ext_add" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc5b3969b, "proc_create_net_data" },
	{ 0x88395a41, "nf_ct_tmpl_free" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x48471741, "skb_put" },
	{ 0x7ca64a0b, "__cookie_v4_init_sequence" },
	{ 0x9843f501, "__cookie_v4_check" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8d4220e0, "ipv6_skip_exthdr" },
	{ 0xee0419fc, "nf_ct_seqadj_init" },
	{ 0x972a3723, "consume_skb" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "246D577FD42568BDE6679A3");
