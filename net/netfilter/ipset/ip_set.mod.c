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

SYMBOL_CRC(ip_set_type_register, 0x4f728697, "_gpl");
SYMBOL_CRC(ip_set_type_unregister, 0xe4966611, "_gpl");
SYMBOL_CRC(ip_set_alloc, 0xf3b4d4ae, "_gpl");
SYMBOL_CRC(ip_set_free, 0x397f6231, "_gpl");
SYMBOL_CRC(ip_set_get_ipaddr4, 0xa293f8a6, "_gpl");
SYMBOL_CRC(ip_set_get_ipaddr6, 0x9e98722b, "_gpl");
SYMBOL_CRC(ip_set_init_comment, 0xae3e1af1, "_gpl");
SYMBOL_CRC(ip_set_extensions, 0x489e72b9, "_gpl");
SYMBOL_CRC(ip_set_elem_len, 0x65eef819, "_gpl");
SYMBOL_CRC(ip_set_get_extensions, 0x9238b674, "_gpl");
SYMBOL_CRC(ip_set_put_extensions, 0xdc8cb352, "_gpl");
SYMBOL_CRC(ip_set_match_extensions, 0x15148ab1, "_gpl");
SYMBOL_CRC(ip_set_test, 0x9a2a1d0b, "_gpl");
SYMBOL_CRC(ip_set_add, 0xaed3709f, "_gpl");
SYMBOL_CRC(ip_set_del, 0xa01f373c, "_gpl");
SYMBOL_CRC(ip_set_get_byname, 0xbb804f45, "_gpl");
SYMBOL_CRC(ip_set_put_byindex, 0x1f6acbcc, "_gpl");
SYMBOL_CRC(ip_set_name_byindex, 0x8a6ad251, "_gpl");
SYMBOL_CRC(ip_set_nfnl_get_byindex, 0xa0a7c649, "_gpl");
SYMBOL_CRC(ip_set_nfnl_put, 0xc8aad5d0, "_gpl");
SYMBOL_CRC(ip_set_put_flags, 0xe4f90a4f, "_gpl");
SYMBOL_CRC(ip_set_get_ip4_port, 0x1f844245, "_gpl");
SYMBOL_CRC(ip_set_get_ip6_port, 0xf51251af, "_gpl");
SYMBOL_CRC(ip_set_netmask_map, 0x81fff2d1, "_gpl");
SYMBOL_CRC(ip_set_hostmask_map, 0x7924b6de, "_gpl");
SYMBOL_CRC(ip_set_range_to_cidr, 0x22d966c6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x584ea4e, "__netlink_dump_start" },
	{ 0x1425e33, "try_module_get" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x68c4428a, "__nlmsg_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xfc69a480, "nf_register_sockopt" },
	{ 0xf2507273, "nla_put_64bit" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8ae85b79, "nfnetlink_subsys_register" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x72bff0c9, "netlink_ack" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xfe74e25e, "nf_unregister_sockopt" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8d4220e0, "ipv6_skip_exthdr" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xcc793c4a, "module_put" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd3c6d6dc, "nfnetlink_unicast" },
	{ 0x5a921311, "strncmp" },
	{ 0xb310efd8, "nla_put" },
	{ 0x9166fada, "strncpy" },
	{ 0xdd896e0a, "ns_capable" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0xdcb764ad, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xbda4f245, "nfnetlink_subsys_unregister" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x999e8297, "vfree" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x98cf60b3, "strlen" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "F3A58AEA0F7DCBC39E3B017");
