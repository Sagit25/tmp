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
	{ 0x5ee8544a, "dm_register_target" },
	{ 0x92997ed8, "_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0x98cf60b3, "strlen" },
	{ 0x349cba85, "strchr" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8fd417e6, "crypto_skcipher_setkey" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x96848186, "scnprintf" },
	{ 0xf3998ffb, "bio_endio" },
	{ 0xf080ec99, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf3f67bdf, "blk_start_plug" },
	{ 0xece784c2, "rb_first" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9a163d6a, "dm_submit_bio_remap" },
	{ 0x19ce5529, "blk_finish_plug" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x5da12a18, "percpu_counter_add_batch" },
	{ 0xd64c80c0, "crypto_shash_update" },
	{ 0xfc76ee13, "dm_unregister_target" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x929feb7d, "bio_integrity_alloc" },
	{ 0xc2fc7ab2, "bio_integrity_add_page" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x4355f56e, "crypto_alloc_aead" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf518f638, "crypto_alloc_skcipher" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0xe692e914, "dm_per_bio_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa6f5d0a6, "bio_put" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0xa6257a2f, "complete" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xef516587, "dm_audit_log_bio" },
	{ 0xadd108ae, "bio_alloc_clone" },
	{ 0x71981f9a, "crypto_shash_final" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x8d760147, "crypto_alloc_shash" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2d15ee2a, "bioset_exit" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x7d83fe99, "__percpu_counter_sum" },
	{ 0x7442f0f9, "percpu_counter_destroy" },
	{ 0x10d24857, "dm_put_device" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9ef46699, "dm_audit_log_ti" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x967d2f77, "crypto_req_done" },
	{ 0x626d5117, "crypto_skcipher_encrypt" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x65bea063, "crypto_aead_setkey" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x11089ac7, "_ctype" },
	{ 0x5a921311, "strncmp" },
	{ 0x5917652e, "key_type_user" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x13ba2b19, "request_key_tag" },
	{ 0x668b19a1, "down_read" },
	{ 0x53b954a2, "up_read" },
	{ 0xde31500c, "key_put" },
	{ 0x6427661c, "key_type_logon" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x9f984513, "strrchr" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9166fada, "strncpy" },
	{ 0x245a6d68, "crypto_alloc_ahash" },
	{ 0x72e10963, "dm_table_device_name" },
	{ 0x93d992ee, "__percpu_counter_init" },
	{ 0x39c74235, "dm_read_arg_group" },
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x85df9b6c, "strsep" },
	{ 0x663aacd2, "bioset_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x410b39de, "dm_table_get_mode" },
	{ 0xfec20905, "dm_get_device" },
	{ 0x8b01c983, "dm_table_get_md" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x939a3f13, "crypto_aead_setauthsize" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x9b2d5125, "crypto_aead_decrypt" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0xd57ede5a, "crypto_skcipher_decrypt" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xc7a06f42, "crypto_aead_encrypt" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3ebe7ef1, "bio_alloc_bioset" },
	{ 0xb1eda82f, "bio_add_page" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xf484f39e, "bio_associate_blkg" },
	{ 0xbf2476a3, "dm_accept_partial_bio" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "C8571DF405DC62E0AD34258");
