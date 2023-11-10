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
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6777c6ec, "tcf_exts_validate_ex" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xa262bd0c, "__dev_get_by_name" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xdcb764ad, "memset" },
	{ 0x360a925e, "register_tcf_proto_ops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xaef5ecff, "unregister_tcf_proto_ops" },
	{ 0xb310efd8, "nla_put" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x6ee36c73, "tcf_exts_dump" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x174a202f, "tcf_exts_dump_stats" },
	{ 0xd9ff8e23, "__dev_get_by_index" },
	{ 0x98cf60b3, "strlen" },
	{ 0xd1c839fc, "tcf_action_exec" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xbaf63a62, "tc_setup_cb_destroy" },
	{ 0x4a928ef4, "tc_setup_cb_add" },
	{ 0x2ce9e5be, "tc_setup_cb_call" },
	{ 0xa22483bf, "tc_setup_cb_reoffload" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xded32980, "tcf_exts_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0x5285ddb1, "__put_net" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "18E4C3D23EA3EE0753CAACA");
