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
	{ 0x92997ed8, "_printk" },
	{ 0x3f4db9e3, "register_qdisc" },
	{ 0x73e827e4, "qdisc_watchdog_cancel" },
	{ 0x4a6c4548, "qdisc_put" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xae9916f0, "rtnl_kfree_skbs" },
	{ 0x2a57b2cc, "qdisc_reset" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd0d086e2, "unregister_qdisc" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x89599a, "qdisc_tree_reduce_backlog" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc35eecce, "__qdisc_calculate_pkt_len" },
	{ 0x46b9c876, "kfree_skb_list_reason" },
	{ 0xee262701, "qdisc_watchdog_schedule_range_ns" },
	{ 0xdcb764ad, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x974fca60, "qdisc_watchdog_init" },
	{ 0xb310efd8, "nla_put" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0x83567e50, "skb_orphan_partial" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x2ca6692d, "netif_skb_features" },
	{ 0xd3414595, "__skb_gso_segment" },
	{ 0x972a3723, "consume_skb" },
	{ 0x1f1bbd31, "skb_copy" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0xf834af2, "skb_checksum_help" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0B7ECD87E413B18929D855A");
