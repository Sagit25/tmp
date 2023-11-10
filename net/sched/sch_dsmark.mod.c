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
	{ 0x3f4db9e3, "register_qdisc" },
	{ 0x4feaa230, "tcf_block_put" },
	{ 0x4a6c4548, "qdisc_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a57b2cc, "qdisc_reset" },
	{ 0xd0d086e2, "unregister_qdisc" },
	{ 0xb310efd8, "nla_put" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x43813f5a, "tcf_block_get" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x207ee486, "pfifo_qdisc_ops" },
	{ 0xb2fc453e, "qdisc_create_dflt" },
	{ 0x5f6c4c60, "qdisc_hash_add" },
	{ 0xde7f3e4b, "noop_qdisc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc35eecce, "__qdisc_calculate_pkt_len" },
	{ 0xf6485a5d, "tcf_classify" },
	{ 0xc21a12c4, "pskb_expand_head" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x89599a, "qdisc_tree_reduce_backlog" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x92997ed8, "_printk" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9EE13D34E7743EA2F7BBD9E");
