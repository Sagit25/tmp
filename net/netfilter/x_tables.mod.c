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

SYMBOL_CRC(xt_register_target, 0x35a2d146, "");
SYMBOL_CRC(xt_unregister_target, 0x25b24455, "");
SYMBOL_CRC(xt_register_targets, 0xdd327edc, "");
SYMBOL_CRC(xt_unregister_targets, 0xf90abf79, "");
SYMBOL_CRC(xt_register_match, 0xeebb6a06, "");
SYMBOL_CRC(xt_unregister_match, 0xbb307af7, "");
SYMBOL_CRC(xt_register_matches, 0x671f94f3, "");
SYMBOL_CRC(xt_unregister_matches, 0xeb7d9700, "");
SYMBOL_CRC(xt_find_match, 0xef814cca, "");
SYMBOL_CRC(xt_request_find_match, 0x59030f59, "_gpl");
SYMBOL_CRC(xt_request_find_target, 0x3b120932, "_gpl");
SYMBOL_CRC(xt_data_to_user, 0x7bce4603, "_gpl");
SYMBOL_CRC(xt_match_to_user, 0x31f71136, "_gpl");
SYMBOL_CRC(xt_target_to_user, 0x2f843737, "_gpl");
SYMBOL_CRC(xt_find_revision, 0xddf68fc6, "_gpl");
SYMBOL_CRC(xt_check_proc_name, 0x48012e28, "");
SYMBOL_CRC(xt_check_match, 0x9136d943, "_gpl");
SYMBOL_CRC(xt_check_table_hooks, 0x3bf9d084, "");
SYMBOL_CRC(xt_compat_add_offset, 0x823edea5, "_gpl");
SYMBOL_CRC(xt_compat_flush_offsets, 0x04e27719, "_gpl");
SYMBOL_CRC(xt_compat_calc_jump, 0xc7fae024, "_gpl");
SYMBOL_CRC(xt_compat_init_offsets, 0x50873741, "");
SYMBOL_CRC(xt_compat_match_offset, 0x89c91a93, "_gpl");
SYMBOL_CRC(xt_compat_match_from_user, 0xf0e66f4f, "_gpl");
SYMBOL_CRC(xt_compat_match_to_user, 0xaa17b9cc, "_gpl");
SYMBOL_CRC(xt_compat_check_entry_offsets, 0xa25fc115, "");
SYMBOL_CRC(xt_check_entry_offsets, 0xd87ae60d, "");
SYMBOL_CRC(xt_alloc_entry_offsets, 0x0d7f5fcd, "");
SYMBOL_CRC(xt_find_jump_offset, 0xfef779fa, "");
SYMBOL_CRC(xt_check_target, 0xb8484da6, "_gpl");
SYMBOL_CRC(xt_copy_counters, 0xf6abeb06, "_gpl");
SYMBOL_CRC(xt_compat_target_offset, 0xbba2437a, "_gpl");
SYMBOL_CRC(xt_compat_target_from_user, 0xfcfb69d6, "_gpl");
SYMBOL_CRC(xt_compat_target_to_user, 0x82fca4eb, "_gpl");
SYMBOL_CRC(xt_alloc_table_info, 0x977fd4bf, "");
SYMBOL_CRC(xt_free_table_info, 0xe204e042, "");
SYMBOL_CRC(xt_find_table, 0x4838b967, "");
SYMBOL_CRC(xt_find_table_lock, 0x05a6c507, "_gpl");
SYMBOL_CRC(xt_request_find_table_lock, 0xfe670ecf, "_gpl");
SYMBOL_CRC(xt_table_unlock, 0xfb0b1300, "_gpl");
SYMBOL_CRC(xt_compat_lock, 0xa7c94f1d, "_gpl");
SYMBOL_CRC(xt_compat_unlock, 0xd1e246a2, "_gpl");
SYMBOL_CRC(xt_recseq, 0x807d2b2c, "_gpl");
SYMBOL_CRC(xt_tee_enabled, 0xd3fcc511, "_gpl");
SYMBOL_CRC(xt_counters_alloc, 0xcb3e91cc, "");
SYMBOL_CRC(xt_replace_table, 0xae55a3ff, "_gpl");
SYMBOL_CRC(xt_register_table, 0x2be7d80d, "_gpl");
SYMBOL_CRC(xt_unregister_table, 0xe2003115, "_gpl");
SYMBOL_CRC(xt_hook_ops_alloc, 0x838449d5, "_gpl");
SYMBOL_CRC(xt_register_template, 0x1d0df44e, "_gpl");
SYMBOL_CRC(xt_unregister_template, 0xb2d6fe01, "_gpl");
SYMBOL_CRC(xt_proto_init, 0xe865432e, "_gpl");
SYMBOL_CRC(xt_proto_fini, 0x48ccbc13, "_gpl");
SYMBOL_CRC(xt_percpu_counter_alloc, 0x9c995c69, "_gpl");
SYMBOL_CRC(xt_percpu_counter_free, 0xbfacb837, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x349cba85, "strchr" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x999e8297, "vfree" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xdd64e639, "strscpy" },
	{ 0xcc793c4a, "module_put" },
	{ 0x9166fada, "strncpy" },
	{ 0x4829a47e, "memcpy" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xdcb764ad, "memset" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1425e33, "try_module_get" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x9968aacb, "__audit_log_nfcfg" },
	{ 0x893abd4a, "make_kuid" },
	{ 0xc6300f56, "make_kgid" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xc5b3969b, "proc_create_net_data" },
	{ 0x442817f, "proc_create_seq_private" },
	{ 0x2929e43, "proc_set_user" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x98cf60b3, "strlen" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8C1E903E7AAF558F7B4C469");
