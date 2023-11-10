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

SYMBOL_CRC(nf_ct_nat_ext_add, 0xa421ce24, "_gpl");
SYMBOL_CRC(nf_nat_setup_info, 0xa31db8ea, "");
SYMBOL_CRC(nf_nat_alloc_null_binding, 0xd815dce9, "_gpl");
SYMBOL_CRC(nf_nat_packet, 0xecd2bf84, "_gpl");
SYMBOL_CRC(nf_nat_inet_fn, 0x55b5d3a1, "_gpl");
SYMBOL_CRC(nf_nat_icmp_reply_translation, 0xaba57375, "_gpl");
SYMBOL_CRC(nf_nat_ipv4_register_fn, 0x5f75be70, "_gpl");
SYMBOL_CRC(nf_nat_ipv4_unregister_fn, 0x8c7dad6b, "_gpl");
SYMBOL_CRC(nf_nat_icmpv6_reply_translation, 0xceee9dba, "_gpl");
SYMBOL_CRC(nf_nat_ipv6_register_fn, 0x70606275, "_gpl");
SYMBOL_CRC(nf_nat_ipv6_unregister_fn, 0x7e6fe8c4, "_gpl");
SYMBOL_CRC(nf_nat_inet_register_fn, 0x62315f25, "_gpl");
SYMBOL_CRC(nf_nat_inet_unregister_fn, 0x9cbcebd0, "_gpl");
SYMBOL_CRC(__nf_nat_mangle_tcp_packet, 0x3cb385fd, "");
SYMBOL_CRC(nf_nat_mangle_udp_packet, 0x394a5d27, "");
SYMBOL_CRC(nf_nat_follow_master, 0x5c00915d, "");
SYMBOL_CRC(nf_nat_exp_find_port, 0x295a7f18, "_gpl");
SYMBOL_CRC(nf_nat_redirect_ipv4, 0x1040beb1, "_gpl");
SYMBOL_CRC(nf_nat_redirect_ipv6, 0x3450956d, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_ipv4, 0xd674c5e4, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_ipv6, 0xb899991b, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_inet_register_notifiers, 0x3bc17c49, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_inet_unregister_notifiers, 0xd9c25654, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbc4507e2, "nf_ct_ext_add" },
	{ 0xcc8d633b, "__do_once_done" },
	{ 0x1425e33, "try_module_get" },
	{ 0x7229a82b, "nf_ip6_checksum" },
	{ 0xbf2a6250, "nf_hook_entries_insert_raw" },
	{ 0xa8b72897, "xfrm_lookup" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0xa5cbdc94, "nf_ct_seqadj_set" },
	{ 0x48471741, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3faa0205, "nf_ct_helper_expectfn_unregister" },
	{ 0x1f187b4a, "__xfrm_decode_session" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x24412923, "nf_ct_helper_expectfn_register" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0xd449ddc, "nf_conntrack_tuple_taken" },
	{ 0x92997ed8, "_printk" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0xb4f1f6f6, "nf_ct_iterate_cleanup_net" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8d4220e0, "ipv6_skip_exthdr" },
	{ 0x70f3cde3, "nf_register_net_hooks" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x2d8a8447, "nf_ipv6_ops" },
	{ 0xcc793c4a, "module_put" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x9375b582, "nf_ct_expect_related_report" },
	{ 0xa625d304, "nf_conntrack_alter_reply" },
	{ 0xbead4410, "ip_route_me_harder" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf4325816, "nf_hook_entries_delete_raw" },
	{ 0x2b96a991, "skb_ensure_writable" },
	{ 0x30ccd6e, "nf_unregister_net_hooks" },
	{ 0x7736f34b, "inet_select_addr" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x7f2d3a3b, "skb_checksum" },
	{ 0xdcb764ad, "memset" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x7749fa1e, "nf_ip_checksum" },
	{ 0x391d6397, "nf_ct_iterate_destroy" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0x47f60cfa, "inet_proto_csum_replace16" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5285ddb1, "__put_net" },
	{ 0xb15b4109, "crc32c" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x6a07faff, "__skb_checksum" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa0def3fd, "inet_proto_csum_replace4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x272ac6d3, "nf_ct_kill_acct" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x9e7ada45, "nf_nat_hook" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "65316081B51EF2B948F701F");
