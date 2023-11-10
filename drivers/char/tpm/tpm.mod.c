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

SYMBOL_CRC(tpm_chip_start, 0x053c2e7f, "_gpl");
SYMBOL_CRC(tpm_chip_stop, 0xa09149a9, "_gpl");
SYMBOL_CRC(tpm_try_get_ops, 0xf9a4b367, "_gpl");
SYMBOL_CRC(tpm_put_ops, 0x6d80bf1e, "_gpl");
SYMBOL_CRC(tpm_default_chip, 0x894eabd3, "_gpl");
SYMBOL_CRC(tpm_chip_alloc, 0x87710a0b, "_gpl");
SYMBOL_CRC(tpmm_chip_alloc, 0x95ab71f7, "_gpl");
SYMBOL_CRC(tpm_chip_bootstrap, 0x2193109b, "_gpl");
SYMBOL_CRC(tpm_chip_register, 0x498325a6, "_gpl");
SYMBOL_CRC(tpm_chip_unregister, 0xea304e7b, "_gpl");
SYMBOL_CRC(tpm_calc_ordinal_duration, 0x1dcdc489, "_gpl");
SYMBOL_CRC(tpm_transmit_cmd, 0xec56070b, "_gpl");
SYMBOL_CRC(tpm_get_timeouts, 0xed8fecd2, "_gpl");
SYMBOL_CRC(tpm_is_tpm2, 0x3b114f6b, "_gpl");
SYMBOL_CRC(tpm_pcr_read, 0x396f7f1c, "_gpl");
SYMBOL_CRC(tpm_pcr_extend, 0x81df4f8b, "_gpl");
SYMBOL_CRC(tpm_send, 0x414c1a4b, "_gpl");
SYMBOL_CRC(tpm_pm_suspend, 0x6600264d, "_gpl");
SYMBOL_CRC(tpm_pm_resume, 0x0c344d6d, "_gpl");
SYMBOL_CRC(tpm_get_random, 0x37a5a699, "_gpl");
SYMBOL_CRC(tpm1_getcap, 0xf6d89f7a, "_gpl");
SYMBOL_CRC(tpm1_do_selftest, 0xe77d4922, "_gpl");
SYMBOL_CRC(tpm2_flush_context, 0x8b3b6016, "_gpl");
SYMBOL_CRC(tpm2_get_tpm_pt, 0x40b5014c, "_gpl");
SYMBOL_CRC(tpm2_probe, 0x0bcd45cc, "_gpl");
SYMBOL_CRC(tpm2_get_cc_attrs_tbl, 0x6cd6e310, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc8dcc62a, "krealloc" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x853d16c8, "__class_create" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xd0fd7085, "hwrng_unregister" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0xb9c50ffb, "seq_release" },
	{ 0xf7208367, "of_property_match_string" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd7c90370, "compat_only_sysfs_link_entry_to_kobj" },
	{ 0x2a6a869d, "cdev_device_del" },
	{ 0x3486581a, "class_destroy" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x9185f3e8, "securityfs_create_dir" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xf7dca34a, "get_device" },
	{ 0x4d924f20, "memremap" },
	{ 0x1dac9fc8, "of_get_property" },
	{ 0xe0c4e14d, "hwrng_register" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x92997ed8, "_printk" },
	{ 0x13575562, "cdev_device_add" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x606b7e51, "put_device" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x1dfaa4dd, "efi" },
	{ 0x57bc19d2, "down_write" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x111e0ce2, "sysfs_remove_link" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0xab93c2ef, "seq_putc" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xcd24e146, "hash_digest_size" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x668b19a1, "down_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x85e0a7aa, "securityfs_remove" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe9e8faeb, "efi_tpm_final_log_size" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5185d51b, "seq_write" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x905bb457, "seq_open" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0x53b954a2, "up_read" },
	{ 0x3b4466fb, "cdev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe8fbcff3, "securityfs_create_file" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FD09EB833A646DCD31D0909");
