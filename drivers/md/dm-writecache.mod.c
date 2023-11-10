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
	{ 0x5ee8544a, "dm_register_target" },
	{ 0x92997ed8, "_printk" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8745a12e, "dm_io" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x96848186, "scnprintf" },
	{ 0xca9360b5, "rb_next" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0x2d15ee2a, "bioset_exit" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x10d24857, "dm_put_device" },
	{ 0x999e8297, "vfree" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfc76ee13, "dm_unregister_target" },
	{ 0x98c015cf, "dm_suspended" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xbf9a3de8, "dm_kcopyd_copy" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x392b1fea, "wait_for_completion_io" },
	{ 0xdcb764ad, "memset" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x410b39de, "dm_table_get_mode" },
	{ 0xfec20905, "dm_get_device" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x39c74235, "dm_read_arg_group" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9dd9df13, "dm_kcopyd_client_create" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0xf3998ffb, "bio_endio" },
	{ 0xf484f39e, "bio_associate_blkg" },
	{ 0xc444c98c, "submit_bio_noacct" },
	{ 0x90006be6, "dm_kcopyd_client_flush" },
	{ 0x7807f0f8, "schedule_timeout_idle" },
	{ 0xf3f67bdf, "blk_start_plug" },
	{ 0x19ce5529, "blk_finish_plug" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xbf2476a3, "dm_accept_partial_bio" },
	{ 0xbb3c50f6, "dm_bio_get_target_bio_nr" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "ABA83A05EA15AB44CD3867E");
