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
	{ 0x8eb4a783, "setattr_prepare" },
	{ 0xd46f3750, "iget_locked" },
	{ 0x298319d0, "clear_nlink" },
	{ 0x691ec44b, "flush_dcache_page" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x80765dd0, "d_instantiate" },
	{ 0x874f3fd2, "clear_inode" },
	{ 0xb4b083a8, "mtd_read_oob" },
	{ 0xbcff1231, "grab_cache_page_write_begin" },
	{ 0x4a3c6bc0, "generic_fh_to_dentry" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x676832ff, "folio_unlock" },
	{ 0xf1b0a24a, "generic_file_splice_read" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe9668d19, "new_inode" },
	{ 0xba7d13ad, "mtd_writev" },
	{ 0xa6257a2f, "complete" },
	{ 0x7b0a1f4f, "get_tree_mtd" },
	{ 0x70554125, "init_special_inode" },
	{ 0x1e1418c0, "mtd_kmalloc_up_to" },
	{ 0x49758fc7, "unregister_filesystem" },
	{ 0xca9360b5, "rb_next" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc890c008, "zlib_deflateEnd" },
	{ 0x84dd752b, "d_make_root" },
	{ 0x6a0f82b4, "set_user_nice" },
	{ 0x7b12cb7a, "sync_filesystem" },
	{ 0xf3ae5355, "d_splice_alias" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x809a8e2e, "current_time" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x4829a47e, "memcpy" },
	{ 0xae69e4b2, "ihold" },
	{ 0x37a0cba, "kfree" },
	{ 0x235907b1, "read_cache_page" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x4a4864ce, "iput" },
	{ 0x6008689f, "kthread_complete_and_exit" },
	{ 0x97eee579, "fs_param_is_enum" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x76770386, "mtd_unpoint" },
	{ 0x86ddc459, "generic_file_readonly_mmap" },
	{ 0x1d79c8e1, "logfc" },
	{ 0xbb0324ff, "iter_file_splice_write" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x47962f69, "generic_file_write_iter" },
	{ 0xf2c43f3f, "zlib_deflate" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xb8413079, "register_filesystem" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x53614d8d, "simple_get_link" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xb07e8f9e, "fs_param_is_u32" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x5e2489d1, "unlock_new_inode" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x9ea825c9, "kill_mtd_super" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe9f7149c, "zlib_deflate_workspacesize" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x893abd4a, "make_kuid" },
	{ 0xe53353ec, "truncate_inode_pages_final" },
	{ 0xa916b694, "strnlen" },
	{ 0x5bd70ccc, "ilookup" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0x95b23208, "inode_init_once" },
	{ 0x63f99f35, "file_write_and_wait_range" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xa88abc07, "mtd_block_markbad" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x8fd557d3, "generic_file_read_iter" },
	{ 0x58d074b3, "unlock_page" },
	{ 0x5a0b73d0, "zlib_deflateInit2" },
	{ 0xd67f2eb5, "insert_inode_locked" },
	{ 0x1be2751e, "mtd_write_oob" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x104c66e6, "set_nlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x253d3ad8, "from_kgid" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdc45dc30, "d_obtain_alias" },
	{ 0x1c053052, "mtd_read" },
	{ 0xe364fe4f, "posix_acl_chmod" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xc8c41a62, "freezing_slow_path" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xca85377c, "from_kuid" },
	{ 0xdcb764ad, "memset" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6300f56, "make_kgid" },
	{ 0xece784c2, "rb_first" },
	{ 0x81a95cf6, "mtd_erase" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5b3f61c, "truncate_setsize" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xa82e4a7d, "mtd_write" },
	{ 0x999e8297, "vfree" },
	{ 0x81f93b69, "generic_read_dir" },
	{ 0x400327f2, "d_instantiate_new" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0xac120953, "inc_nlink" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x87834179, "generic_file_open" },
	{ 0x4dc1982a, "is_bad_inode" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xea5a13f9, "generic_fh_to_parent" },
	{ 0xebe193a7, "send_sig" },
	{ 0x49a2986d, "__fs_parse" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x98cf60b3, "strlen" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x52d61781, "kmem_cache_alloc_lru" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6299e2f5, "d_invalidate" },
	{ 0x183a459, "dequeue_signal" },
	{ 0xc2766fdd, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1cdaec77, "make_bad_inode" },
	{ 0x70dee7c0, "mtd_block_isbad" },
	{ 0x53b954a2, "up_read" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x5f437739, "mtd_point" },
	{ 0x8fc1340, "drop_nlink" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xee7d63ba, "iget_failed" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0x6a5fa363, "sigprocmask" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "17BA4F04ADD4B3A88925B04");
