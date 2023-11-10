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
	{ 0xdcced5f2, "__class_register" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x5f2ce4c2, "scsi_register_driver" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xa169b1d6, "class_unregister" },
	{ 0x96848186, "scnprintf" },
	{ 0x111e0ce2, "sysfs_remove_link" },
	{ 0x293e8fe4, "cdev_del" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1593e011, "cdev_alloc" },
	{ 0x8277b3bb, "cdev_add" },
	{ 0xa4a9ecb6, "device_create" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xa6257a2f, "complete" },
	{ 0xb4a80a7e, "blk_rq_unmap_user" },
	{ 0x49e41aea, "blk_mq_free_request" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xe16bc9d3, "sdev_prefix_printk" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x35c1fb13, "__scsi_print_sense" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x37a0cba, "kfree" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1b955d70, "scsi_alloc_request" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4014e5e5, "blk_execute_rq_nowait" },
	{ 0xb95defae, "blk_rq_map_user" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x6b73070d, "scsi_autopm_get_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3ec24e77, "blk_queue_rq_timeout" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x954f099c, "idr_preload" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xa6cccc4f, "sysfs_create_link" },
	{ 0xb1f4c904, "scsi_autopm_put_device" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7e33fbb9, "scsi_device_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd6bf7f6, "scsi_set_medium_removal" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0xdcb764ad, "memset" },
	{ 0xcb5d0615, "pin_user_pages_fast" },
	{ 0x691ec44b, "flush_dcache_page" },
	{ 0x578b6b67, "unpin_user_pages" },
	{ 0x1a24f041, "scsi_block_when_processing_errors" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x2c5b8bc3, "unpin_user_pages_dirty_lock" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x20978fb9, "idr_find" },
	{ 0xfc5977fa, "scsi_device_get" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xa15fe11a, "scsi_ioctl_block_when_processing_errors" },
	{ 0x995a7651, "scsi_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "643B128CD7F9B7D06D23CF2");
