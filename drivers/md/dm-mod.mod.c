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

SYMBOL_CRC(dm_audit_log_ti, 0x9ef46699, "_gpl");
SYMBOL_CRC(dm_audit_log_bio, 0xef516587, "_gpl");
SYMBOL_CRC(dm_per_bio_data, 0xe692e914, "_gpl");
SYMBOL_CRC(dm_bio_from_per_bio_data, 0x54907a0e, "_gpl");
SYMBOL_CRC(dm_bio_get_target_bio_nr, 0xbb3c50f6, "_gpl");
SYMBOL_CRC(dm_get_reserved_bio_based_ios, 0x38f704de, "_gpl");
SYMBOL_CRC(dm_start_time_ns_from_clone, 0x2874c9a1, "_gpl");
SYMBOL_CRC(dm_set_target_max_io_len, 0xa745159a, "_gpl");
SYMBOL_CRC(dm_accept_partial_bio, 0xbf2476a3, "_gpl");
SYMBOL_CRC(dm_submit_bio_remap, 0x9a163d6a, "_gpl");
SYMBOL_CRC(dm_get_queue_limits, 0x3efd99bd, "_gpl");
SYMBOL_CRC(dm_get_md, 0x8380dccf, "_gpl");
SYMBOL_CRC(dm_hold, 0xc745e938, "_gpl");
SYMBOL_CRC(dm_device_name, 0x7fe6c51a, "_gpl");
SYMBOL_CRC(dm_put, 0x6ca97e87, "_gpl");
SYMBOL_CRC(dm_internal_suspend_noflush, 0x8d26e444, "_gpl");
SYMBOL_CRC(dm_internal_resume, 0x3eb22a75, "_gpl");
SYMBOL_CRC(dm_internal_suspend_fast, 0xa1ebf69f, "_gpl");
SYMBOL_CRC(dm_internal_resume_fast, 0x516c21c3, "_gpl");
SYMBOL_CRC(dm_disk, 0xbecb0ea3, "_gpl");
SYMBOL_CRC(dm_suspended, 0x98c015cf, "_gpl");
SYMBOL_CRC(dm_post_suspending, 0xc52c3f7c, "_gpl");
SYMBOL_CRC(dm_noflush_suspending, 0x42158909, "_gpl");
SYMBOL_CRC(dm_get_dev_t, 0xfc14bb2e, "_gpl");
SYMBOL_CRC(dm_get_device, 0xfec20905, "");
SYMBOL_CRC(dm_put_device, 0x10d24857, "");
SYMBOL_CRC(dm_read_arg, 0x056bcf7b, "");
SYMBOL_CRC(dm_read_arg_group, 0x39c74235, "");
SYMBOL_CRC(dm_shift_arg, 0x7d27e504, "");
SYMBOL_CRC(dm_consume_args, 0x669c191b, "");
SYMBOL_CRC(dm_table_set_type, 0x8074cf84, "_gpl");
SYMBOL_CRC(dm_table_event, 0x55c5df12, "");
SYMBOL_CRC(dm_table_get_size, 0x73965ee3, "");
SYMBOL_CRC(dm_table_get_mode, 0x410b39de, "");
SYMBOL_CRC(dm_table_get_md, 0x8b01c983, "");
SYMBOL_CRC(dm_table_device_name, 0x72e10963, "_gpl");
SYMBOL_CRC(dm_table_run_md_queue_async, 0x7ee5f0f0, "");
SYMBOL_CRC(dm_register_target, 0x5ee8544a, "");
SYMBOL_CRC(dm_unregister_target, 0xfc76ee13, "");
SYMBOL_CRC(dm_copy_name_and_uuid, 0x1c3249ce, "_gpl");
SYMBOL_CRC(dm_io_client_create, 0x601f665f, "");
SYMBOL_CRC(dm_io_client_destroy, 0x9e4faeef, "");
SYMBOL_CRC(dm_io, 0x8745a12e, "");
SYMBOL_CRC(dm_kcopyd_copy, 0xbf9a3de8, "");
SYMBOL_CRC(dm_kcopyd_zero, 0x1da69e63, "");
SYMBOL_CRC(dm_kcopyd_prepare_callback, 0xf1f88a0e, "");
SYMBOL_CRC(dm_kcopyd_do_callback, 0xf2a8efae, "");
SYMBOL_CRC(dm_kcopyd_client_create, 0x9dd9df13, "");
SYMBOL_CRC(dm_kcopyd_client_destroy, 0x154c6338, "");
SYMBOL_CRC(dm_kcopyd_client_flush, 0x90006be6, "");
SYMBOL_CRC(dm_mq_kick_requeue_list, 0x991559fd, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf484f39e, "bio_associate_blkg" },
	{ 0xe1dcf64a, "audit_log_format" },
	{ 0x2a3508c2, "set_disk_ro" },
	{ 0x1cc44abb, "__blk_alloc_disk" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe17d8ee5, "blk_integrity_register" },
	{ 0x1425e33, "try_module_get" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x329d1b4, "misc_deregister" },
	{ 0xf3f67bdf, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x20978fb9, "idr_find" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x991da2cb, "param_ops_ulong" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x5a77af7e, "zero_fill_bio" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xdc8bbc6, "bio_split_to_limits" },
	{ 0x76f0cd8e, "vmalloc_to_page" },
	{ 0x51ea7c3d, "disk_update_readahead" },
	{ 0xda9cfa1, "device_add_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcb19df25, "bio_poll" },
	{ 0xca9360b5, "rb_next" },
	{ 0xbeb500bc, "blk_mq_queue_inflight" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xeb37101c, "audit_log_end" },
	{ 0x96848186, "scnprintf" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0xadd01533, "dm_kobject_release" },
	{ 0xcf2a6966, "up" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x3928f172, "blk_rq_prep_clone" },
	{ 0xb921cb09, "blk_mq_unquiesce_queue" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xe30905c4, "blk_mq_quiesce_queue" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xb66cae1b, "__traceiter_block_bio_remap" },
	{ 0x24932b7e, "freeze_bdev" },
	{ 0x9f0ecc10, "blk_queue_write_cache" },
	{ 0x386019f3, "blk_mq_kick_requeue_list" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8d139b09, "blk_rq_unprep_clone" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xe2964344, "__wake_up" },
	{ 0x919a6abb, "synchronize_srcu" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0xa59c0974, "blk_mq_end_request" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x86afc3a7, "blk_integrity_unregister" },
	{ 0xb5a6a8b6, "blk_mq_delay_kick_requeue_list" },
	{ 0x389b64a2, "static_key_count" },
	{ 0x81c3f1e2, "blk_mq_alloc_tag_set" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xacf649bf, "audit_log_task_info" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0xe6956443, "__traceiter_block_split" },
	{ 0x5e005216, "bioset_integrity_create" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xd5a66293, "put_disk" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xc1138a94, "bio_integrity_trim" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x34fc4ad3, "__tracepoint_block_split" },
	{ 0xa916b694, "strnlen" },
	{ 0x499398d3, "blk_queue_flag_set" },
	{ 0xdc29a525, "kmalloc_node_trace" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x8de5a164, "blkdev_put" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x19ce5529, "blk_finish_plug" },
	{ 0xc6cbbc89, "capable" },
	{ 0x60ea38ad, "submit_bio" },
	{ 0x8c34cc57, "blk_queue_flag_clear" },
	{ 0xcc793c4a, "module_put" },
	{ 0xed92ec78, "blk_mq_init_allocated_queue" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x2d15ee2a, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xec7546ac, "kobject_uevent_env" },
	{ 0xa6f5d0a6, "bio_put" },
	{ 0xf3998ffb, "bio_endio" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1fcd7e9f, "init_srcu_struct" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6e1d3566, "blk_update_request" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x45c18671, "blkdev_get_by_dev" },
	{ 0xc9377098, "__srcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe1120b09, "thaw_bdev" },
	{ 0xd1319552, "set_capacity" },
	{ 0xc444c98c, "submit_bio_noacct" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0xa44ef0d5, "blk_integrity_compare" },
	{ 0x6626afca, "down" },
	{ 0x954f099c, "idr_preload" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x259351b0, "bdev_start_io_acct" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0xc10fddb8, "name_to_dev_t" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x9166fada, "strncpy" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xae8f1cfd, "bio_chain" },
	{ 0x392b1fea, "wait_for_completion_io" },
	{ 0x58de1b34, "blk_stack_limits" },
	{ 0xe4aac435, "kobject_init_and_add" },
	{ 0xb1eda82f, "bio_add_page" },
	{ 0x7da8b907, "blk_mq_free_tag_set" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x3d004267, "del_gendisk" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x91fd9c4d, "cleanup_srcu_struct" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2a8e551d, "blk_set_stacking_limits" },
	{ 0x11089ac7, "_ctype" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x8ff86a06, "bd_unlink_disk_holder" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x66b26d70, "bio_init" },
	{ 0xdcb764ad, "memset" },
	{ 0xadd108ae, "bio_alloc_clone" },
	{ 0x96601bbe, "misc_register" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x597807f4, "blk_insert_cloned_request" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xece784c2, "rb_first" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x34c7cdbc, "lookup_bdev" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa8287790, "audit_log_start" },
	{ 0xde77a6be, "nonseekable_open" },
	{ 0xf327ece0, "blk_limits_io_min" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x64420506, "blk_mq_complete_request" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x89a3de6c, "bio_uninit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x663aacd2, "bioset_init" },
	{ 0x7ee828db, "bio_trim" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd17e5804, "__traceiter_block_rq_remap" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x58315632, "__srcu_read_unlock" },
	{ 0xae64f1dd, "__tracepoint_block_bio_remap" },
	{ 0x8ce2d446, "__tracepoint_block_rq_remap" },
	{ 0xb5ffdcf3, "bd_link_disk_holder" },
	{ 0xf4560a81, "blk_mq_start_request" },
	{ 0xb4a79898, "blk_limits_io_opt" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xbc50456c, "blk_mark_disk_dead" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x2222fe82, "blk_mq_run_hw_queues" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x349cba85, "strchr" },
	{ 0x86f6b99d, "synchronize_rcu_expedited" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3ebe7ef1, "bio_alloc_bioset" },
	{ 0x53b954a2, "up_read" },
	{ 0x702d8ebe, "blk_mq_requeue_request" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5496f841, "bdev_end_io_acct" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x38e46431, "mempool_exit" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xd39ca817, "kobject_put" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F9E50E0AC24647FDCD0924E");
