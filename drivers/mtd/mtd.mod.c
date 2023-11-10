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

SYMBOL_CRC(mtd_table_mutex, 0x50dabc2f, "_gpl");
SYMBOL_CRC(__mtd_next_device, 0x44e701db, "_gpl");
SYMBOL_CRC(mtd_check_expert_analysis_mode, 0xb7075882, "_gpl");
SYMBOL_CRC(mtd_wunit_to_pairing_info, 0x721fb406, "_gpl");
SYMBOL_CRC(mtd_pairing_info_to_wunit, 0x62ecf533, "_gpl");
SYMBOL_CRC(mtd_pairing_groups, 0xa8eba4cb, "_gpl");
SYMBOL_CRC(mtd_device_parse_register, 0xd0f4e574, "_gpl");
SYMBOL_CRC(mtd_device_unregister, 0x5e7ee187, "_gpl");
SYMBOL_CRC(register_mtd_user, 0x5befb28e, "_gpl");
SYMBOL_CRC(unregister_mtd_user, 0xb9f2b3bb, "_gpl");
SYMBOL_CRC(get_mtd_device, 0x2adfc84c, "_gpl");
SYMBOL_CRC(__get_mtd_device, 0x7fbc5ae7, "_gpl");
SYMBOL_CRC(of_get_mtd_device_by_node, 0xd6aac23b, "_gpl");
SYMBOL_CRC(get_mtd_device_nm, 0x83279567, "_gpl");
SYMBOL_CRC(put_mtd_device, 0x8356a4eb, "_gpl");
SYMBOL_CRC(__put_mtd_device, 0x58ea50a4, "_gpl");
SYMBOL_CRC(mtd_erase, 0x81a95cf6, "_gpl");
SYMBOL_CRC(mtd_point, 0x5f437739, "_gpl");
SYMBOL_CRC(mtd_unpoint, 0x76770386, "_gpl");
SYMBOL_CRC(mtd_get_unmapped_area, 0x1633863a, "_gpl");
SYMBOL_CRC(mtd_read, 0x1c053052, "_gpl");
SYMBOL_CRC(mtd_write, 0xa82e4a7d, "_gpl");
SYMBOL_CRC(mtd_panic_write, 0xbb109d41, "_gpl");
SYMBOL_CRC(mtd_read_oob, 0xb4b083a8, "_gpl");
SYMBOL_CRC(mtd_write_oob, 0x1be2751e, "_gpl");
SYMBOL_CRC(mtd_ooblayout_ecc, 0x71d38c15, "_gpl");
SYMBOL_CRC(mtd_ooblayout_free, 0xeb778b28, "_gpl");
SYMBOL_CRC(mtd_ooblayout_find_eccregion, 0x1f42f4ab, "_gpl");
SYMBOL_CRC(mtd_ooblayout_get_eccbytes, 0xbb93847e, "_gpl");
SYMBOL_CRC(mtd_ooblayout_set_eccbytes, 0xc1bc2208, "_gpl");
SYMBOL_CRC(mtd_ooblayout_get_databytes, 0xb658c81f, "_gpl");
SYMBOL_CRC(mtd_ooblayout_set_databytes, 0x29dd5c36, "_gpl");
SYMBOL_CRC(mtd_ooblayout_count_freebytes, 0x8f0d620e, "_gpl");
SYMBOL_CRC(mtd_ooblayout_count_eccbytes, 0x6a2c7c9c, "_gpl");
SYMBOL_CRC(mtd_get_fact_prot_info, 0x7ffb4db9, "_gpl");
SYMBOL_CRC(mtd_read_fact_prot_reg, 0xcdea97f4, "_gpl");
SYMBOL_CRC(mtd_get_user_prot_info, 0x12985769, "_gpl");
SYMBOL_CRC(mtd_read_user_prot_reg, 0x7314ace1, "_gpl");
SYMBOL_CRC(mtd_write_user_prot_reg, 0x73f129d2, "_gpl");
SYMBOL_CRC(mtd_lock_user_prot_reg, 0x5419c607, "_gpl");
SYMBOL_CRC(mtd_erase_user_prot_reg, 0x7660e0b5, "_gpl");
SYMBOL_CRC(mtd_lock, 0x94eb374f, "_gpl");
SYMBOL_CRC(mtd_unlock, 0x6954360f, "_gpl");
SYMBOL_CRC(mtd_is_locked, 0x58f3633f, "_gpl");
SYMBOL_CRC(mtd_block_isreserved, 0x0cb5c3da, "_gpl");
SYMBOL_CRC(mtd_block_isbad, 0x70dee7c0, "_gpl");
SYMBOL_CRC(mtd_block_markbad, 0xa88abc07, "_gpl");
SYMBOL_CRC(mtd_writev, 0xba7d13ad, "_gpl");
SYMBOL_CRC(mtd_kmalloc_up_to, 0x1e1418c0, "_gpl");
SYMBOL_CRC(get_tree_mtd, 0x7b0a1f4f, "_gpl");
SYMBOL_CRC(kill_mtd_super, 0x9ea825c9, "_gpl");
SYMBOL_CRC(mtd_concat_create, 0x07267826, "");
SYMBOL_CRC(mtd_concat_destroy, 0x16f3c576, "");
SYMBOL_CRC(mtd_add_partition, 0x85643c61, "_gpl");
SYMBOL_CRC(mtd_del_partition, 0xf92d9587, "_gpl");
SYMBOL_CRC(__register_mtd_parser, 0x411c6d3d, "_gpl");
SYMBOL_CRC(deregister_mtd_parser, 0x8112a3d4, "_gpl");
SYMBOL_CRC(mtd_get_device_size, 0x6577c5ee, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x79778aac, "generic_shutdown_super" },
	{ 0x1425e33, "try_module_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x714c29f8, "bdi_unregister" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x5875eca5, "of_get_compatible_child" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xbd230d97, "bdi_register" },
	{ 0xd7931c, "of_node_name_prefix" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0xcc39c03e, "nvmem_unregister" },
	{ 0x948206ad, "sget_fc" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xf53a8fc6, "of_node_get" },
	{ 0x1d79c8e1, "logfc" },
	{ 0x1088bc13, "sysfs_remove_files" },
	{ 0x9303f7be, "__module_get" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x92997ed8, "_printk" },
	{ 0xfefa907a, "bdi_put" },
	{ 0xbeedee72, "of_get_next_child" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcc793c4a, "module_put" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x6035d020, "of_get_child_by_name" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xdcced5f2, "__class_register" },
	{ 0x49e3a4b, "debugfs_create_bool" },
	{ 0xc824dc99, "of_prop_next_string" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xa4a9ecb6, "device_create" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x8b3724cd, "fixed_size_llseek" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xa169b1d6, "class_unregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc423ec40, "bdi_alloc" },
	{ 0x4c74bd14, "device_register" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xdcb764ad, "memset" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x34c7cdbc, "lookup_bdev" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x7a6ffa02, "of_device_is_compatible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x41fabaf5, "__register_chrdev" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3f74d235, "device_destroy" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0xc82b609, "sysfs_create_files" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x48e538ab, "deactivate_locked_super" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x98ce1f5a, "of_alias_get_id" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xb7f8c5fb, "proc_create_single_data" },
	{ 0x99d6b1d8, "nvmem_register" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8a9599a6, "of_platform_populate" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8A414A2973DA6A0D2B124E6");
