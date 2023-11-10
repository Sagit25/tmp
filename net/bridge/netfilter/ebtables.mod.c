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

SYMBOL_CRC(ebt_register_template, 0x11f43b59, "");
SYMBOL_CRC(ebt_unregister_template, 0xa8738fb7, "");
SYMBOL_CRC(ebt_unregister_table_pre_exit, 0x635d314d, "");
SYMBOL_CRC(ebt_register_table, 0xe5a7f1b5, "");
SYMBOL_CRC(ebt_unregister_table, 0x62d07734, "");
SYMBOL_CRC(ebt_do_table, 0x993c5a99, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4829a47e, "memcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0xcc793c4a, "module_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xef814cca, "xt_find_match" },
	{ 0x9136d943, "xt_check_match" },
	{ 0x3b120932, "xt_request_find_target" },
	{ 0xb8484da6, "xt_check_target" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x30ccd6e, "nf_unregister_net_hooks" },
	{ 0x35a2d146, "xt_register_target" },
	{ 0xfc69a480, "nf_register_sockopt" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0xfe74e25e, "nf_unregister_sockopt" },
	{ 0x25b24455, "xt_unregister_target" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xdd64e639, "strscpy" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0xbba2437a, "xt_compat_target_offset" },
	{ 0xdcb764ad, "memset" },
	{ 0x59030f59, "xt_request_find_match" },
	{ 0x89c91a93, "xt_compat_match_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x23fd3028, "vmalloc_node" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x999e8297, "vfree" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x9968aacb, "__audit_log_nfcfg" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x70f3cde3, "nf_register_net_hooks" },
	{ 0x1425e33, "try_module_get" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x7bce4603, "xt_data_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x98cf60b3, "strlen" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xae04012c, "__vmalloc" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0xdd896e0a, "ns_capable" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "3A6219F507F81C8672CFF7C");
