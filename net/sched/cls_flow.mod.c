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
	{ 0x360a925e, "register_tcf_proto_ops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6514c1e6, "flow_get_u32_src" },
	{ 0xaef5ecff, "unregister_tcf_proto_ops" },
	{ 0xb310efd8, "nla_put" },
	{ 0x6ee36c73, "tcf_exts_dump" },
	{ 0x988a88b2, "tcf_em_tree_dump" },
	{ 0x174a202f, "tcf_exts_dump_stats" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xded32980, "tcf_exts_destroy" },
	{ 0xe126a3a7, "tcf_em_tree_destroy" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x37a0cba, "kfree" },
	{ 0x5285ddb1, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x946e17fc, "tcf_em_tree_validate" },
	{ 0x9f81658b, "tcf_exts_validate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb309b37a, "tcf_block_netif_keep_dst" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x5a99a0d7, "flow_get_u32_dst" },
	{ 0xd1c839fc, "tcf_action_exec" },
	{ 0x253d3ad8, "from_kgid" },
	{ 0xca85377c, "from_kuid" },
	{ 0x9796ea2, "__tcf_em_tree_match" },
	{ 0xdcb764ad, "memset" },
	{ 0xa69ed606, "flow_keys_dissector" },
	{ 0xad60552e, "__skb_flow_dissect" },
	{ 0xdaab728f, "__skb_get_hash" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "14981AB767785AA335274B3");
