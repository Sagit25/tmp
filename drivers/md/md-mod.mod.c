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

SYMBOL_CRC(md_cluster_ops, 0x13f99a88, "");
SYMBOL_CRC(md_new_event, 0xe6e6b684, "_gpl");
SYMBOL_CRC(md_handle_request, 0x84785312, "");
SYMBOL_CRC(mddev_suspend, 0x8591f9fa, "_gpl");
SYMBOL_CRC(mddev_resume, 0x31be761d, "_gpl");
SYMBOL_CRC(md_flush_request, 0xd1635004, "");
SYMBOL_CRC(mddev_init, 0xf7bdf1f7, "_gpl");
SYMBOL_CRC(mddev_unlock, 0x12e7c5e6, "_gpl");
SYMBOL_CRC(md_find_rdev_nr_rcu, 0xf59c11bf, "_gpl");
SYMBOL_CRC(md_find_rdev_rcu, 0x4834df8c, "_gpl");
SYMBOL_CRC(md_rdev_clear, 0x8d6d024d, "_gpl");
SYMBOL_CRC(sync_page_io, 0x1b9349ff, "_gpl");
SYMBOL_CRC(md_check_no_bitmap, 0xa2beda9d, "");
SYMBOL_CRC(md_integrity_register, 0x91d35430, "");
SYMBOL_CRC(md_integrity_add_rdev, 0x04134657, "");
SYMBOL_CRC(md_kick_rdev_from_array, 0x79704970, "_gpl");
SYMBOL_CRC(md_update_sb, 0x609d7697, "");
SYMBOL_CRC(md_rdev_init, 0x757dcc2a, "_gpl");
SYMBOL_CRC(mddev_init_writes_pending, 0x709503fa, "_gpl");
SYMBOL_CRC(md_run, 0x949d51ba, "_gpl");
SYMBOL_CRC(md_start, 0x3c28b34b, "_gpl");
SYMBOL_CRC(md_stop_writes, 0xb2ac8345, "_gpl");
SYMBOL_CRC(md_stop, 0x711c5d66, "_gpl");
SYMBOL_CRC(md_set_array_sectors, 0x9ea500ed, "");
SYMBOL_CRC(md_wakeup_thread, 0xf1f26292, "");
SYMBOL_CRC(md_register_thread, 0xff1487f2, "");
SYMBOL_CRC(md_unregister_thread, 0xa38172ec, "");
SYMBOL_CRC(md_error, 0x187a45f9, "");
SYMBOL_CRC(register_md_personality, 0x1aea400d, "");
SYMBOL_CRC(unregister_md_personality, 0x3cee14ba, "");
SYMBOL_CRC(register_md_cluster_operations, 0xd28f0018, "");
SYMBOL_CRC(unregister_md_cluster_operations, 0x15bafe29, "");
SYMBOL_CRC(md_done_sync, 0x28e5c67e, "");
SYMBOL_CRC(md_write_start, 0xd298c424, "");
SYMBOL_CRC(md_write_inc, 0x454abfb1, "");
SYMBOL_CRC(md_write_end, 0x90adb1bc, "");
SYMBOL_CRC(md_submit_discard_bio, 0x18f935c4, "_gpl");
SYMBOL_CRC(acct_bioset_init, 0xc51fc2f1, "_gpl");
SYMBOL_CRC(acct_bioset_exit, 0x0517da35, "_gpl");
SYMBOL_CRC(md_account_bio, 0xb0411c9b, "_gpl");
SYMBOL_CRC(md_allow_write, 0xa00333fb, "_gpl");
SYMBOL_CRC(md_do_sync, 0x4436ff15, "_gpl");
SYMBOL_CRC(md_check_recovery, 0x3cd09263, "");
SYMBOL_CRC(md_reap_sync_thread, 0xb58687a9, "");
SYMBOL_CRC(md_wait_for_blocked_rdev, 0x44937011, "");
SYMBOL_CRC(md_finish_reshape, 0xe1f9c22c, "");
SYMBOL_CRC(rdev_set_badblocks, 0x10b80d1b, "_gpl");
SYMBOL_CRC(rdev_clear_badblocks, 0xbb71d9c7, "_gpl");
SYMBOL_CRC(md_reload_sb, 0xa9f654e1, "");
SYMBOL_CRC(md_bitmap_update_sb, 0x7718b145, "");
SYMBOL_CRC(md_bitmap_unplug, 0x338d0f34, "");
SYMBOL_CRC(md_bitmap_startwrite, 0x14254eba, "");
SYMBOL_CRC(md_bitmap_endwrite, 0x3d8bab8f, "");
SYMBOL_CRC(md_bitmap_start_sync, 0x876b83af, "");
SYMBOL_CRC(md_bitmap_end_sync, 0x39ef0fa3, "");
SYMBOL_CRC(md_bitmap_close_sync, 0x16e30a87, "");
SYMBOL_CRC(md_bitmap_cond_end_sync, 0xd0f4bfca, "");
SYMBOL_CRC(md_bitmap_sync_with_cluster, 0x859d34a3, "");
SYMBOL_CRC(md_bitmap_free, 0x689a9306, "");
SYMBOL_CRC(md_bitmap_load, 0x685dd48d, "_gpl");
SYMBOL_CRC(get_bitmap_from_slot, 0x165fdb1b, "");
SYMBOL_CRC(md_bitmap_copy_from_slot, 0x6272ae10, "_gpl");
SYMBOL_CRC(md_bitmap_resize, 0x8121254e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x50a4da2d, "set_capacity_and_notify" },
	{ 0x2a3508c2, "set_disk_ro" },
	{ 0x1cc44abb, "__blk_alloc_disk" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe17d8ee5, "blk_integrity_register" },
	{ 0x1425e33, "try_module_get" },
	{ 0x3ef5f674, "alloc_page_buffers" },
	{ 0xc91fdf58, "percpu_ref_is_zero" },
	{ 0xf3f67bdf, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe1dc7c0f, "proc_create" },
	{ 0xdc8bbc6, "bio_split_to_limits" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xb9c50ffb, "seq_release" },
	{ 0xda9cfa1, "device_add_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x81a7f541, "percpu_ref_init" },
	{ 0x340791b5, "badblocks_set" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3ca255f5, "fget" },
	{ 0xa945b6da, "invalidate_mapping_pages" },
	{ 0x55223acd, "kobject_init" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xa7841f4d, "badblocks_exit" },
	{ 0xb66cae1b, "__traceiter_block_bio_remap" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0x9f0ecc10, "blk_queue_write_cache" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x523c7b3c, "ack_all_badblocks" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1ed4d2eb, "percpu_ref_kill_and_confirm" },
	{ 0xabcfcca0, "kernfs_notify" },
	{ 0xa5a7f684, "submit_bh" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0x87133427, "bio_end_io_acct_remapped" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x3b3fd953, "bio_clone_blkg_association" },
	{ 0x5e005216, "bioset_integrity_create" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1953c958, "mempool_create" },
	{ 0xd5a66293, "put_disk" },
	{ 0x3a24fb2f, "percpu_ref_resurrect" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x5b9eab10, "badblocks_init" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xd691c6a9, "unregister_sysctl_table" },
	{ 0xaa97ae4b, "badblocks_show" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x2ca970b5, "sync_blockdev" },
	{ 0x5f957a32, "free_buffer_head" },
	{ 0x499398d3, "blk_queue_flag_set" },
	{ 0x8de5a164, "blkdev_put" },
	{ 0x19ce5529, "blk_finish_plug" },
	{ 0xc6cbbc89, "capable" },
	{ 0x60ea38ad, "submit_bio" },
	{ 0x8c34cc57, "blk_queue_flag_clear" },
	{ 0xcc793c4a, "module_put" },
	{ 0xdd48630a, "bio_start_io_acct" },
	{ 0xa6cccc4f, "sysfs_create_link" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x2d15ee2a, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x28bccfd7, "flush_signals" },
	{ 0x37bf7be3, "percpu_ref_exit" },
	{ 0xa6f5d0a6, "bio_put" },
	{ 0xf3998ffb, "bio_endio" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2bce892, "fput" },
	{ 0xe134a69a, "kobject_add" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa17aa0c3, "bdev_check_media_change" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x111e0ce2, "sysfs_remove_link" },
	{ 0x45c18671, "blkdev_get_by_dev" },
	{ 0x7283161b, "percpu_ref_switch_to_percpu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc444c98c, "submit_bio_noacct" },
	{ 0xa44ef0d5, "blk_integrity_compare" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc80bd64e, "blk_sync_queue" },
	{ 0x5087e3a5, "seq_file_path" },
	{ 0xff613dcb, "kernfs_find_and_get_ns" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9166fada, "strncpy" },
	{ 0xae8f1cfd, "bio_chain" },
	{ 0x1af267f8, "int_pow" },
	{ 0x15e90f42, "__blk_trace_note_message" },
	{ 0xb1eda82f, "bio_add_page" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x3d004267, "del_gendisk" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9c2ac1a2, "sysfs_create_group" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2a8e551d, "blk_set_stacking_limits" },
	{ 0x11089ac7, "_ctype" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x8ff86a06, "bd_unlink_disk_holder" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x66b26d70, "bio_init" },
	{ 0xdcb764ad, "memset" },
	{ 0xadd108ae, "bio_alloc_clone" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0x161fbd94, "invalidate_bdev" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x614ff0d5, "sysfs_remove_group" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x23df8828, "kobject_del" },
	{ 0x5adffc88, "vfs_fsync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x663aacd2, "bioset_init" },
	{ 0xef6022d0, "file_path" },
	{ 0xf54894d0, "kernfs_put" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0x1a48e00d, "remove_proc_entry" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x52427fe4, "kobject_uevent" },
	{ 0xae64f1dd, "__tracepoint_block_bio_remap" },
	{ 0xb5ffdcf3, "bd_link_disk_holder" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xf782fb07, "percpu_ref_switch_to_atomic_sync" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x905bb457, "seq_open" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xd7e2b54f, "badblocks_clear" },
	{ 0x57d3960b, "bmap" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x6a449c4f, "register_sysctl_table" },
	{ 0xc466781b, "badblocks_store" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3ebe7ef1, "bio_alloc_bioset" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x7410aba2, "strreplace" },
	{ 0x42bc2b65, "submit_bio_wait" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x76bcbba, "kobject_get" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x71356a17, "__blkdev_issue_discard" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd39ca817, "kobject_put" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8EDFBD3FD16DB8D43103860");
