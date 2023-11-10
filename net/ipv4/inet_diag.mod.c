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

SYMBOL_CRC(inet_diag_msg_common_fill, 0xb246dadf, "_gpl");
SYMBOL_CRC(inet_diag_msg_attrs_fill, 0xe6983713, "_gpl");
SYMBOL_CRC(inet_sk_diag_fill, 0xe8f223dd, "_gpl");
SYMBOL_CRC(inet_diag_find_one_icsk, 0xc25e2055, "_gpl");
SYMBOL_CRC(inet_diag_dump_one_icsk, 0x2b9cefad, "_gpl");
SYMBOL_CRC(inet_diag_bc_sk, 0xfe13492a, "_gpl");
SYMBOL_CRC(inet_diag_dump_icsk, 0x2e252ef8, "_gpl");
SYMBOL_CRC(inet_diag_register, 0x70de4cfa, "_gpl");
SYMBOL_CRC(inet_diag_unregister, 0x8f6b63c3, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x18e83dcc, "sock_diag_save_cookie" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8e4eb451, "bpf_sk_storage_diag_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xf665f74f, "sock_load_diag_module" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x584ea4e, "__netlink_dump_start" },
	{ 0x120547ad, "sock_diag_unregister" },
	{ 0x3ed89727, "sock_diag_unregister_inet_compat" },
	{ 0xb310efd8, "nla_put" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0x2a0b9e30, "sock_i_uid" },
	{ 0x4afd9810, "from_kuid_munged" },
	{ 0xe8437c97, "sock_i_ino" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x729ae44d, "netlink_net_capable" },
	{ 0x5d8476d3, "bpf_sk_storage_diag_alloc" },
	{ 0xfb85d949, "sock_diag_register" },
	{ 0x809082eb, "sock_diag_register_inet_compat" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd2f59ee7, "inet6_lookup" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe1364171, "sock_diag_check_cookie" },
	{ 0x33beb696, "__inet_lookup_established" },
	{ 0x840a5ab1, "sock_gen_put" },
	{ 0xaf1e3327, "__inet_lookup_listener" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x68c4428a, "__nlmsg_put" },
	{ 0x6d8dd703, "nla_reserve_64bit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x66ee9ef3, "bpf_sk_storage_diag_put" },
	{ 0x7a35d6b3, "sock_diag_put_meminfo" },
	{ 0x98cf60b3, "strlen" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x8cc61846, "netlink_unicast" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0066CD6DC5C6BA8DDAF413D");
