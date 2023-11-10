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
	{ 0x50a4da2d, "set_capacity_and_notify" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x61b8d21b, "skb_copy_bits" },
	{ 0x853d16c8, "__class_create" },
	{ 0x48471741, "skb_put" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x972a3723, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xc0bec8ef, "dev_add_pack" },
	{ 0xda9cfa1, "device_add_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xca68f000, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x3486581a, "class_destroy" },
	{ 0x96848186, "scnprintf" },
	{ 0x6a0f82b4, "set_user_nice" },
	{ 0xb921cb09, "blk_mq_unquiesce_queue" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xe30905c4, "blk_mq_quiesce_queue" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x655cade0, "seq_lseek" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5c4363d9, "__blk_mq_alloc_disk" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x81c3f1e2, "blk_mq_alloc_tag_set" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1953c958, "mempool_create" },
	{ 0xd5a66293, "put_disk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x22af2c3c, "__alloc_skb" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x9f984513, "strrchr" },
	{ 0x9586e019, "skb_queue_tail" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x459e03b6, "init_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6e1d3566, "blk_update_request" },
	{ 0x121445a5, "skb_pull" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd1319552, "set_capacity" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa4a9ecb6, "device_create" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0xa07afb40, "dev_remove_pack" },
	{ 0xc9d4c42, "kfree_skb_reason" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f059ff8, "skb_push" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x7da8b907, "blk_mq_free_tag_set" },
	{ 0x3d004267, "del_gendisk" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x220f3f34, "skb_queue_purge" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc395bc26, "__pskb_pull_tail" },
	{ 0xdc58f5d4, "param_ops_string" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x1b0efe7f, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x6da467cb, "pfn_is_map_memory" },
	{ 0xd2e1e604, "__dev_queue_xmit" },
	{ 0xbaf7cb04, "blk_mq_freeze_queue" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x41fabaf5, "__register_chrdev" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x3f74d235, "device_destroy" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x461c9d06, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x97e61dfa, "blk_mq_unfreeze_queue" },
	{ 0xf4560a81, "blk_mq_start_request" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x546e72bb, "blkdev_compat_ptr_ioctl" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x97ddd9b3, "blk_queue_max_hw_sectors" },
	{ 0xc29bf967, "strspn" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x2222fe82, "blk_mq_run_hw_queues" },
	{ 0xb3c6f341, "single_open" },
	{ 0x349cba85, "strchr" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x83574cac, "blk_queue_io_opt" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0x5151150d, "__blk_mq_end_request" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AC01ECDC59E925CA1D24FFA");
