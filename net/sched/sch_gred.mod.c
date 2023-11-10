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
	{ 0xdcb764ad, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xae9916f0, "rtnl_kfree_skbs" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd0d086e2, "unregister_qdisc" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x92997ed8, "_printk" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x933dc050, "__nla_validate" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0x41dab3c5, "qdisc_offload_dump_helper" },
	{ 0xb310efd8, "nla_put" },
	{ 0x70f62bcf, "nla_append" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EDD1661A74E3FA76ED7BF6B");
