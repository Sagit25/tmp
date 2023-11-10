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

SYMBOL_CRC(nf_defrag_ipv6_enable, 0xbed22f19, "_gpl");
SYMBOL_CRC(nf_defrag_ipv6_disable, 0x6e8be4eb, "_gpl");
SYMBOL_CRC(nf_ct_frag6_gather, 0x3fb2758c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x7c85e954, "register_net_sysctl" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x474db33c, "inet_frag_queue_insert" },
	{ 0xb2b44323, "inet_frags_init" },
	{ 0x572b8aa, "inet_frag_pull_head" },
	{ 0x37a0cba, "kfree" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0x81c464f7, "inet_frag_destroy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8d4220e0, "ipv6_skip_exthdr" },
	{ 0x66a49ce0, "inet_frag_reasm_finish" },
	{ 0x70f3cde3, "nf_register_net_hooks" },
	{ 0xb98aabd5, "fqdir_init" },
	{ 0x459e03b6, "init_net" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb25dc613, "dev_get_by_index_rcu" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xff33606d, "inet_frags_fini" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x30ccd6e, "nf_unregister_net_hooks" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0xe705c3fa, "__icmpv6_send" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x140038db, "inet_frag_reasm_prepare" },
	{ 0x4adc73f9, "inet_frag_find" },
	{ 0xe979df65, "fqdir_exit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6a29aec0, "dst_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x38947782, "pskb_trim_rcsum_slow" },
	{ 0x4cc2d65a, "inet_frag_kill" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2789A9089E5AA9488398EA4");
