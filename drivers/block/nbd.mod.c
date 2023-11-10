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
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0x7de4bde7, "bpf_trace_run3" },
	{ 0x992e3483, "blk_queue_logical_block_size" },
	{ 0xbae3666d, "blk_queue_physical_block_size" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x50a4da2d, "set_capacity_and_notify" },
	{ 0x39f3f1e4, "blk_queue_max_discard_sectors" },
	{ 0x52427fe4, "kobject_uevent" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb133358e, "sock_sendmsg" },
	{ 0x281fa3b3, "sock_recvmsg" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x9055cb3a, "iov_iter_kvec" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc5a81d59, "kernel_sock_shutdown" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x3d004267, "del_gendisk" },
	{ 0xd5a66293, "put_disk" },
	{ 0x7da8b907, "blk_mq_free_tag_set" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x37a0cba, "kfree" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb3c6f341, "single_open" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xdcebe45, "seq_puts" },
	{ 0xa59c0974, "blk_mq_end_request" },
	{ 0x702d8ebe, "blk_mq_requeue_request" },
	{ 0x64420506, "blk_mq_complete_request" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfc2bbbe6, "genl_unregister_family" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x92997ed8, "_printk" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x1425e33, "try_module_get" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcc793c4a, "module_put" },
	{ 0x81c3f1e2, "blk_mq_alloc_tag_set" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x5c4363d9, "__blk_mq_alloc_disk" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x499398d3, "blk_queue_flag_set" },
	{ 0x8c34cc57, "blk_queue_flag_clear" },
	{ 0xed48492d, "blk_queue_max_segment_size" },
	{ 0x4d7e8052, "blk_queue_max_segments" },
	{ 0x97ddd9b3, "blk_queue_max_hw_sectors" },
	{ 0xda9cfa1, "device_add_disk" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xa67cd91b, "genl_register_family" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0x942352e7, "genlmsg_put" },
	{ 0xb310efd8, "nla_put" },
	{ 0x459e03b6, "init_net" },
	{ 0xe739bb49, "netlink_broadcast" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x20978fb9, "idr_find" },
	{ 0x8cc61846, "netlink_unicast" },
	{ 0xc74ae316, "sockfd_lookup" },
	{ 0x81cf96c, "sock_no_shutdown" },
	{ 0xbaf7cb04, "blk_mq_freeze_queue" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x97e61dfa, "blk_mq_unfreeze_queue" },
	{ 0xe2bce892, "fput" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0xe40d22ef, "invalidate_disk" },
	{ 0xe30905c4, "blk_mq_quiesce_queue" },
	{ 0x3396982b, "blk_mq_tagset_busy_iter" },
	{ 0xb921cb09, "blk_mq_unquiesce_queue" },
	{ 0xd0638a3f, "device_remove_file" },
	{ 0xe2964344, "__wake_up" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x2b1674a, "blk_mq_update_nr_hw_queues" },
	{ 0x2a3508c2, "set_disk_ro" },
	{ 0x9f0ecc10, "blk_queue_write_cache" },
	{ 0x621ce2c3, "device_create_file" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xddb15890, "debugfs_create_u64" },
	{ 0x1fa115ba, "debugfs_create_u32" },
	{ 0x18ed74b4, "sk_set_memalloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0x626393a4, "__invalidate_device" },
	{ 0xd1319552, "set_capacity" },
	{ 0x3ec24e77, "blk_queue_rq_timeout" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9716a32f, "netlink_capable" },
	{ 0x14748c79, "iov_iter_bvec" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x1ca380be, "iov_iter_advance" },
	{ 0xf50de441, "blk_mq_unique_tag" },
	{ 0xf4560a81, "blk_mq_start_request" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xc0ff12fb, "nla_strdup" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x613beb6, "single_release" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "217DEC7616E7936B79712C7");
