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
	{ 0x4a6c4548, "qdisc_put" },
	{ 0x4feaa230, "tcf_block_put" },
	{ 0xe2bce892, "fput" },
	{ 0x37a0cba, "kfree" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x92997ed8, "_printk" },
	{ 0x2a57b2cc, "qdisc_reset" },
	{ 0xde7f3e4b, "noop_qdisc" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0x207ee486, "pfifo_qdisc_ops" },
	{ 0xb2fc453e, "qdisc_create_dflt" },
	{ 0x43813f5a, "tcf_block_get" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xf6485a5d, "tcf_classify" },
	{ 0xc35eecce, "__qdisc_calculate_pkt_len" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa47923f9, "gnet_stats_copy_basic" },
	{ 0x720c9cc6, "gnet_stats_copy_queue" },
	{ 0xd0d086e2, "unregister_qdisc" },
	{ 0xb310efd8, "nla_put" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xc74ae316, "sockfd_lookup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x121445a5, "skb_pull" },
	{ 0x260f4559, "skb_realloc_headroom" },
	{ 0x972a3723, "consume_skb" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6AC47ABD210D06C06462235");
