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
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x83d5b943, "fasync_helper" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdcb764ad, "memset" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x853d16c8, "__class_create" },
	{ 0x7ffe96ba, "scsi_register_interface" },
	{ 0x3486581a, "class_destroy" },
	{ 0x9cd91791, "register_sysctl" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xd691c6a9, "unregister_sysctl_table" },
	{ 0xbe696b7f, "class_interface_unregister" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x36277c48, "__task_pid_nr_ns" },
	{ 0x92997ed8, "_printk" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0xb4a80a7e, "blk_rq_unmap_user" },
	{ 0x49e41aea, "blk_mq_free_request" },
	{ 0xe2964344, "__wake_up" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x1593e011, "cdev_alloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x954f099c, "idr_preload" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x8277b3bb, "cdev_add" },
	{ 0xa4a9ecb6, "device_create" },
	{ 0xa6cccc4f, "sysfs_create_link" },
	{ 0xe16bc9d3, "sdev_prefix_printk" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x293e8fe4, "cdev_del" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb1f4c904, "scsi_autopm_put_device" },
	{ 0x7e33fbb9, "scsi_device_put" },
	{ 0xcc793c4a, "module_put" },
	{ 0x5570945b, "kill_fasync" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x35c1fb13, "__scsi_print_sense" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x111e0ce2, "sysfs_remove_link" },
	{ 0x3f74d235, "device_destroy" },
	{ 0x1b955d70, "scsi_alloc_request" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4014e5e5, "blk_execute_rq_nowait" },
	{ 0xe3db6083, "blk_rq_map_user_io" },
	{ 0xde77a6be, "nonseekable_open" },
	{ 0x20978fb9, "idr_find" },
	{ 0xfc5977fa, "scsi_device_get" },
	{ 0x6b73070d, "scsi_autopm_get_device" },
	{ 0x1a24f041, "scsi_block_when_processing_errors" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9303f7be, "__module_get" },
	{ 0x1de4ccb2, "get_sg_io_hdr" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc1d5d504, "scsi_cmd_allowed" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x5ec4aee6, "put_sg_io_hdr" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xa15fe11a, "scsi_ioctl_block_when_processing_errors" },
	{ 0x995a7651, "scsi_ioctl" },
	{ 0x4088dfc7, "blk_trace_remove" },
	{ 0x4c2df1d0, "blk_trace_setup" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x4758a27d, "blk_trace_startstop" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xd9f49540, "compat_ptr_ioctl" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5C6CD4146BBD6D22C94F274");
