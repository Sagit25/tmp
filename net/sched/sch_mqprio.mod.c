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
	{ 0x326b6cb2, "dev_graft_qdisc" },
	{ 0x4a6c4548, "qdisc_put" },
	{ 0x5f6c4c60, "qdisc_hash_add" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcb764ad, "memset" },
	{ 0xdf48e26b, "netdev_set_num_tc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe854e6c8, "netdev_txq_to_tc" },
	{ 0x35f44a1a, "dev_deactivate" },
	{ 0x25aa8745, "dev_activate" },
	{ 0xd0d086e2, "unregister_qdisc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe47525a8, "pfifo_fast_ops" },
	{ 0x4dae8f86, "default_qdisc_ops" },
	{ 0xb2fc453e, "qdisc_create_dflt" },
	{ 0x4829a47e, "memcpy" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x799aa588, "netdev_set_tc_queue" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xa47923f9, "gnet_stats_copy_basic" },
	{ 0x720c9cc6, "gnet_stats_copy_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfa042227, "gnet_stats_add_basic" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0xb310efd8, "nla_put" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x45294acc, "mq_change_real_num_tx" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AB749824E27B19B1E1129EF");
