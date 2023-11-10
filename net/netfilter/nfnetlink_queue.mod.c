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
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x8ae85b79, "nfnetlink_subsys_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xbda4f245, "nfnetlink_subsys_unregister" },
	{ 0x64eb8e17, "nf_register_queue_handler" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf12ed1ee, "nf_ct_hook" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7e68ebe4, "nf_reinject" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xd7ea7094, "nf_unregister_queue_handler" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xdcb764ad, "memset" },
	{ 0xc5b3969b, "proc_create_net_data" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x30a2aae6, "nfnl_ct_hook" },
	{ 0x2b96a991, "skb_ensure_writable" },
	{ 0x4829a47e, "memcpy" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x48471741, "skb_put" },
	{ 0xa91d6818, "skb_copy_expand" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x941d386c, "___pskb_trim" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x1425e33, "try_module_get" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x391df80a, "netstamp_needed_key" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xeb7088f3, "skb_tx_error" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x68c4428a, "__nlmsg_put" },
	{ 0xa0005ee6, "__nla_reserve" },
	{ 0xb310efd8, "nla_put" },
	{ 0xb6b24e93, "skb_zerocopy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf0348ca1, "skb_zerocopy_headlen" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0x4afd9810, "from_kuid_munged" },
	{ 0x9960cce1, "from_kgid_munged" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xd3c6d6dc, "nfnetlink_unicast" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xf834af2, "skb_checksum_help" },
	{ 0xd3414595, "__skb_gso_segment" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xea9b46bc, "nf_queue_entry_get_refs" },
	{ 0xe3e06f8b, "nf_queue_entry_free" },
	{ 0xcc793c4a, "module_put" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "F5230AAB5DEE53ABA33C9DC");
