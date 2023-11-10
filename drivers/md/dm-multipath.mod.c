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

SYMBOL_CRC(dm_register_path_selector, 0x920a5a0a, "_gpl");
SYMBOL_CRC(dm_unregister_path_selector, 0x6b9e55ac, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf484f39e, "bio_associate_blkg" },
	{ 0x1425e33, "try_module_get" },
	{ 0xf3f67bdf, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x991da2cb, "param_ops_ulong" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7ee5f0f0, "dm_table_run_md_queue_async" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x42158909, "dm_noflush_suspending" },
	{ 0xe692e914, "dm_per_bio_data" },
	{ 0x10d24857, "dm_put_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x991559fd, "dm_mq_kick_requeue_list" },
	{ 0x49e41aea, "blk_mq_free_request" },
	{ 0x19ce5529, "blk_finish_plug" },
	{ 0xcc793c4a, "module_put" },
	{ 0xf3998ffb, "bio_endio" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x98c015cf, "dm_suspended" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc444c98c, "submit_bio_noacct" },
	{ 0x56bcf7b, "dm_read_arg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x47001fbf, "blk_mq_alloc_request" },
	{ 0xfc76ee13, "dm_unregister_target" },
	{ 0xdfeacae2, "blk_lld_busy" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x55c5df12, "dm_table_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x39c74235, "dm_read_arg_group" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x72e10963, "dm_table_device_name" },
	{ 0x5ee8544a, "dm_register_target" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2874c9a1, "dm_start_time_ns_from_clone" },
	{ 0x410b39de, "dm_table_get_mode" },
	{ 0x8b01c983, "dm_table_get_md" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xfec20905, "dm_get_device" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8074cf84, "dm_table_set_type" },
	{ 0x53b954a2, "up_read" },
	{ 0x669c191b, "dm_consume_args" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "AF4E831A38BD19B7DBADE18");
