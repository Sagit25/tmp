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

SYMBOL_CRC(ipt_alloc_initial_table, 0xc4552d99, "_gpl");
SYMBOL_CRC(ipt_register_table, 0x71e95bd1, "");
SYMBOL_CRC(ipt_unregister_table_pre_exit, 0x9bb907aa, "");
SYMBOL_CRC(ipt_unregister_table_exit, 0xc3ee94a2, "");
SYMBOL_CRC(ipt_do_table, 0x3df1a921, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4838b967, "xt_find_table" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x30ccd6e, "nf_unregister_net_hooks" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0xdd327edc, "xt_register_targets" },
	{ 0x671f94f3, "xt_register_matches" },
	{ 0xfc69a480, "nf_register_sockopt" },
	{ 0xeb7d9700, "xt_unregister_matches" },
	{ 0xf90abf79, "xt_unregister_targets" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0x89c91a93, "xt_compat_match_offset" },
	{ 0xbba2437a, "xt_compat_target_offset" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0x48ccbc13, "xt_proto_fini" },
	{ 0xe865432e, "xt_proto_init" },
	{ 0xfe74e25e, "nf_unregister_sockopt" },
	{ 0x9c995c69, "xt_percpu_counter_alloc" },
	{ 0x59030f59, "xt_request_find_match" },
	{ 0x9136d943, "xt_check_match" },
	{ 0xcc793c4a, "module_put" },
	{ 0xbfacb837, "xt_percpu_counter_free" },
	{ 0x3b120932, "xt_request_find_target" },
	{ 0xb8484da6, "xt_check_target" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9166fada, "strncpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x807d2b2c, "xt_recseq" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xd7f5fcd, "xt_alloc_entry_offsets" },
	{ 0xd87ae60d, "xt_check_entry_offsets" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3bf9d084, "xt_check_table_hooks" },
	{ 0xfef779fa, "xt_find_jump_offset" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0xa25fc115, "xt_compat_check_entry_offsets" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0x977fd4bf, "xt_alloc_table_info" },
	{ 0xf0e66f4f, "xt_compat_match_from_user" },
	{ 0xfcfb69d6, "xt_compat_target_from_user" },
	{ 0xe204e042, "xt_free_table_info" },
	{ 0xe2003115, "xt_unregister_table" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2be7d80d, "xt_register_table" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x70f3cde3, "nf_register_net_hooks" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xcb3e91cc, "xt_counters_alloc" },
	{ 0xfe670ecf, "xt_request_find_table_lock" },
	{ 0xfb0b1300, "xt_table_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xae55a3ff, "xt_replace_table" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x5a6c507, "xt_find_table_lock" },
	{ 0xaa17b9cc, "xt_compat_match_to_user" },
	{ 0x82fca4eb, "xt_compat_target_to_user" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd3fcc511, "xt_tee_enabled" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x2e2c0435, "nf_log_trace" },
	{ 0xdd896e0a, "ns_capable" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x31f71136, "xt_match_to_user" },
	{ 0x2f843737, "xt_target_to_user" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf6abeb06, "xt_copy_counters" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "D19D680E3FD3C6675649349");
