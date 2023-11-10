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
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x92997ed8, "_printk" },
	{ 0x5ee8544a, "dm_register_target" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xf327ece0, "blk_limits_io_min" },
	{ 0x96848186, "scnprintf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xa6257a2f, "complete" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6a2f40e1, "dm_bufio_mark_partial_buffer_dirty" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3d9ee9f0, "clear_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x54907a0e, "dm_bio_from_per_bio_data" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf3998ffb, "bio_endio" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x8d760147, "crypto_alloc_shash" },
	{ 0xba35e0b9, "crypto_shash_setkey" },
	{ 0xfc76ee13, "dm_unregister_target" },
	{ 0x626d5117, "crypto_skcipher_encrypt" },
	{ 0xd57ede5a, "crypto_skcipher_decrypt" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa82b2066, "dm_bufio_write_dirty_buffers" },
	{ 0x867e87eb, "dm_bufio_get_dm_io_client" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8745a12e, "dm_io" },
	{ 0x4d0d163d, "copy_page" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xd64c80c0, "crypto_shash_update" },
	{ 0x71981f9a, "crypto_shash_final" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xdcb764ad, "memset" },
	{ 0x9ef46699, "dm_audit_log_ti" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x349cba85, "strchr" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x98cf60b3, "strlen" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x691ec44b, "flush_dcache_page" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe2964344, "__wake_up" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe692e914, "dm_per_bio_data" },
	{ 0x8b03b2c5, "__bio_advance" },
	{ 0x37a0cba, "kfree" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xef516587, "dm_audit_log_bio" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x241ea53b, "async_xor" },
	{ 0xacf7679, "dma_issue_pending_all" },
	{ 0xf3f67bdf, "blk_start_plug" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xc9a3422d, "dm_bufio_write_dirty_buffers_async" },
	{ 0x19ce5529, "blk_finish_plug" },
	{ 0x392b1fea, "wait_for_completion_io" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xf484f39e, "bio_associate_blkg" },
	{ 0xc444c98c, "submit_bio_noacct" },
	{ 0xbf2476a3, "dm_accept_partial_bio" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x999e8297, "vfree" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x10d24857, "dm_put_device" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xf518f638, "crypto_alloc_skcipher" },
	{ 0x8fd417e6, "crypto_skcipher_setkey" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x410b39de, "dm_table_get_mode" },
	{ 0xfec20905, "dm_get_device" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x39c74235, "dm_read_arg_group" },
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0x5a921311, "strncmp" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xf083bfba, "dm_bufio_client_create" },
	{ 0xed3283a4, "dm_bufio_set_sector_offset" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8b01c983, "dm_table_get_md" },
	{ 0xbecb0ea3, "dm_disk" },
	{ 0xe17d8ee5, "blk_integrity_register" },
	{ 0xa745159a, "dm_set_target_max_io_len" },
	{ 0xc52c3f7c, "dm_post_suspending" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dm-mod,dm-bufio,async_xor");


MODULE_INFO(srcversion, "C8EC438B4D22477BFB7D65C");
