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

SYMBOL_CRC(xfrm_msg_min, 0x4a0c7516, "_gpl");
SYMBOL_CRC(xfrma_policy, 0xa57433de, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x1cbc3a1a, "xfrm_register_km" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xaed08c5d, "netlink_has_listeners" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xb310efd8, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xec6d9454, "nla_reserve" },
	{ 0xe4ee67bf, "netlink_kernel_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa0b08ae9, "netlink_rcv_skb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x10db847d, "xfrm_policy_hash_rebuild" },
	{ 0xbfae7e2b, "xfrm_state_flush" },
	{ 0x21c44b51, "km_state_notify" },
	{ 0xcf5f8ce9, "xfrm_policy_walk_done" },
	{ 0xb6dc8f51, "xfrm_policy_walk" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0x12706343, "xfrm_state_walk_done" },
	{ 0xb5624d5c, "__netlink_kernel_create" },
	{ 0xfae9d304, "xfrm_unregister_km" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x127d83ea, "security_locked_down" },
	{ 0xfbb8a761, "strscpy_pad" },
	{ 0x9166fada, "strncpy" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xee4a72bb, "xfrm_state_lookup" },
	{ 0x6af98b4a, "xfrm_state_lookup_byaddr" },
	{ 0x729ae44d, "netlink_net_capable" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x584ea4e, "__netlink_dump_start" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0x9989c160, "xfrm_state_walk" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9100e43, "xfrm_policy_alloc" },
	{ 0xae03ecbb, "xfrm_policy_flush" },
	{ 0x72b7832f, "km_policy_notify" },
	{ 0xf5b7d8d1, "xfrm_policy_destroy" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x68c4428a, "__nlmsg_put" },
	{ 0x8cc61846, "netlink_unicast" },
	{ 0xcc550d66, "xfrm_policy_insert" },
	{ 0xae81e8f5, "xfrm_audit_policy_add" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe739bb49, "netlink_broadcast" },
	{ 0x67a1ae24, "xfrm_state_alloc" },
	{ 0xd7ec0a41, "xfrm_state_free" },
	{ 0xafaeacac, "km_query" },
	{ 0xb43b995f, "__fib6_flush_trees" },
	{ 0xb01bebf9, "xfrm_get_acqseq" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x10fbaebe, "xfrm_policy_byid" },
	{ 0x5ceca4f0, "km_policy_expired" },
	{ 0x3683de87, "xfrm_policy_bysel_ctx" },
	{ 0x90ec56e8, "xfrm_policy_delete" },
	{ 0x1ba72574, "xfrm_audit_policy_delete" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x10a44557, "__xfrm_state_destroy" },
	{ 0x65508dba, "km_state_expired" },
	{ 0xfe48a5a, "__xfrm_state_delete" },
	{ 0x362511fc, "xfrm_audit_state_delete" },
	{ 0x4e90da4a, "xfrm_state_delete" },
	{ 0x49ca83, "xfrm_aead_get_byname" },
	{ 0xe914e41e, "strcpy" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x348caed9, "__xfrm_init_state" },
	{ 0xf5f16908, "xfrm_init_replay" },
	{ 0x5de61190, "xfrm_dev_state_add" },
	{ 0xc87c3604, "xfrm_state_update" },
	{ 0x49f74789, "xfrm_audit_state_add" },
	{ 0x996c228b, "xfrm_state_add" },
	{ 0x92510a45, "xfrm_sad_getinfo" },
	{ 0xf5c74c98, "xfrm_spd_getinfo" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0xd84c12d2, "xfrm_find_acq_byseq" },
	{ 0xcd6f7397, "xfrm_find_acq" },
	{ 0xc517aca0, "xfrm_alloc_spi" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "2616C04E7F75F7EF58F8D72");
