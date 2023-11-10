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
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x1aea400d, "register_md_personality" },
	{ 0x3d8bab8f, "md_bitmap_endwrite" },
	{ 0x90adb1bc, "md_write_end" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe2964344, "__wake_up" },
	{ 0xa6f5d0a6, "bio_put" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xf1f26292, "md_wakeup_thread" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x6f5a1add, "bio_reset" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x3cee14ba, "unregister_md_personality" },
	{ 0x13f99a88, "md_cluster_ops" },
	{ 0x15e90f42, "__blk_trace_note_message" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x2d15ee2a, "bioset_exit" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0x89a3de6c, "bio_uninit" },
	{ 0x91d35430, "md_integrity_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x4134657, "md_integrity_add_rdev" },
	{ 0x3a4b194d, "disk_stack_limits" },
	{ 0xabcfcca0, "kernfs_notify" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x66b26d70, "bio_init" },
	{ 0xfeb8b860, "bio_kmalloc" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf3998ffb, "bio_endio" },
	{ 0x87133427, "bio_end_io_acct_remapped" },
	{ 0xf3f67bdf, "blk_start_plug" },
	{ 0x338d0f34, "md_bitmap_unplug" },
	{ 0xf484f39e, "bio_associate_blkg" },
	{ 0xc444c98c, "submit_bio_noacct" },
	{ 0x19ce5529, "blk_finish_plug" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x663aacd2, "bioset_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xff1487f2, "md_register_thread" },
	{ 0x92997ed8, "_printk" },
	{ 0x983b8829, "badblocks_check" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xadd108ae, "bio_alloc_clone" },
	{ 0xae64f1dd, "__tracepoint_block_bio_remap" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xb66cae1b, "__traceiter_block_bio_remap" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xdd48630a, "bio_start_io_acct" },
	{ 0xf6682de, "bio_split" },
	{ 0xae8f1cfd, "bio_chain" },
	{ 0x28e5c67e, "md_done_sync" },
	{ 0x1b9349ff, "sync_page_io" },
	{ 0x10b80d1b, "rdev_set_badblocks" },
	{ 0x187a45f9, "md_error" },
	{ 0x44937011, "md_wait_for_blocked_rdev" },
	{ 0x709503fa, "mddev_init_writes_pending" },
	{ 0xd50c34d3, "blk_queue_max_write_zeroes_sectors" },
	{ 0x93430f57, "blk_queue_io_min" },
	{ 0x83574cac, "blk_queue_io_opt" },
	{ 0xa38172ec, "md_unregister_thread" },
	{ 0x9ea500ed, "md_set_array_sectors" },
	{ 0x4436ff15, "md_do_sync" },
	{ 0x8121254e, "md_bitmap_resize" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0xd298c424, "md_write_start" },
	{ 0xdcb764ad, "memset" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x14254eba, "md_bitmap_startwrite" },
	{ 0xd1635004, "md_flush_request" },
	{ 0x18f935c4, "md_submit_discard_bio" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe6e6b684, "md_new_event" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa6cccc4f, "sysfs_create_link" },
	{ 0x3cd09263, "md_check_recovery" },
	{ 0xb1eda82f, "bio_add_page" },
	{ 0xb4d435f4, "bio_copy_data" },
	{ 0xbb71d9c7, "rdev_clear_badblocks" },
	{ 0x7ee828db, "bio_trim" },
	{ 0x42bc2b65, "submit_bio_wait" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x39ef0fa3, "md_bitmap_end_sync" },
	{ 0x16e30a87, "md_bitmap_close_sync" },
	{ 0xd0f4bfca, "md_bitmap_cond_end_sync" },
	{ 0x876b83af, "md_bitmap_start_sync" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x3ebe7ef1, "bio_alloc_bioset" },
	{ 0xe1f9c22c, "md_finish_reshape" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "ABA312E3D621AB54D46AF6C");
