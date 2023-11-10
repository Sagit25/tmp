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
	{ 0xaef5ecff, "unregister_tcf_proto_ops" },
	{ 0xb310efd8, "nla_put" },
	{ 0x6ee36c73, "tcf_exts_dump" },
	{ 0x174a202f, "tcf_exts_dump_stats" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xded32980, "tcf_exts_destroy" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x5285ddb1, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xdcb764ad, "memset" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x9f81658b, "tcf_exts_validate" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xb309b37a, "tcf_block_netif_keep_dst" },
	{ 0x56470118, "__warn_printk" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd1c839fc, "tcf_action_exec" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "709C494669561BE057A127A");
