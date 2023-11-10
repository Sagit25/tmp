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

SYMBOL_CRC(dm_snap_origin, 0xbb88d129, "");
SYMBOL_CRC(dm_snap_cow, 0x7b76df07, "");
SYMBOL_CRC(dm_exception_store_type_register, 0x69df34c3, "");
SYMBOL_CRC(dm_exception_store_type_unregister, 0x9836e5d2, "");
SYMBOL_CRC(dm_exception_store_create, 0xf5863eee, "");
SYMBOL_CRC(dm_exception_store_destroy, 0x38435da0, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf484f39e, "bio_associate_blkg" },
	{ 0x516c21c3, "dm_internal_resume_fast" },
	{ 0x1425e33, "try_module_get" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xf2a8efae, "dm_kcopyd_do_callback" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe692e914, "dm_per_bio_data" },
	{ 0x10d24857, "dm_put_device" },
	{ 0xca9360b5, "rb_next" },
	{ 0x73965ee3, "dm_table_get_size" },
	{ 0x6cdb2d56, "dm_bufio_prefetch" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xc745e938, "dm_hold" },
	{ 0x37a0cba, "kfree" },
	{ 0xf1f88a0e, "dm_kcopyd_prepare_callback" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xe2964344, "__wake_up" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9dd9df13, "dm_kcopyd_client_create" },
	{ 0x1000e51, "schedule" },
	{ 0xbf2476a3, "dm_accept_partial_bio" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x9f984513, "strrchr" },
	{ 0x16e297c3, "bit_wait" },
	{ 0xcc793c4a, "module_put" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xf3998ffb, "bio_endio" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x98c015cf, "dm_suspended" },
	{ 0xc444c98c, "submit_bio_noacct" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0xf083bfba, "dm_bufio_client_create" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xfc76ee13, "dm_unregister_target" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0xa745159a, "dm_set_target_max_io_len" },
	{ 0x1da69e63, "dm_kcopyd_zero" },
	{ 0xdcb764ad, "memset" },
	{ 0x55c5df12, "dm_table_event" },
	{ 0xa1ebf69f, "dm_internal_suspend_fast" },
	{ 0x39c74235, "dm_read_arg_group" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xece784c2, "rb_first" },
	{ 0x6ca97e87, "dm_put" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xbf9a3de8, "dm_kcopyd_copy" },
	{ 0x5ee8544a, "dm_register_target" },
	{ 0x999e8297, "vfree" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x410b39de, "dm_table_get_mode" },
	{ 0x91f00abc, "dm_bufio_set_minimum_buffers" },
	{ 0x3f0f7c6a, "blkdev_issue_flush" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8b01c983, "dm_table_get_md" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xfc14bb2e, "dm_get_dev_t" },
	{ 0x8745a12e, "dm_io" },
	{ 0xfec20905, "dm_get_device" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0xcd2ba798, "dm_bufio_forget" },
	{ 0xbb3c50f6, "dm_bio_get_target_bio_nr" },
	{ 0x669c191b, "dm_consume_args" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x38e46431, "mempool_exit" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dm-mod,dm-bufio");


MODULE_INFO(srcversion, "4BFC3D8B0066D6CBE6969D5");
