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
	{ 0x9b4b0398, "generic_listxattr" },
	{ 0x1804edf1, "generic_block_bmap" },
	{ 0x691ec44b, "flush_dcache_page" },
	{ 0x80765dd0, "d_instantiate" },
	{ 0x874f3fd2, "clear_inode" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf1b0a24a, "generic_file_splice_read" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe9668d19, "new_inode" },
	{ 0x49758fc7, "unregister_filesystem" },
	{ 0x5527703b, "mark_buffer_dirty" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcb7a4ebf, "__blockdev_direct_IO" },
	{ 0x84dd752b, "d_make_root" },
	{ 0x2e7398b6, "sb_set_blocksize" },
	{ 0x7b12cb7a, "sync_filesystem" },
	{ 0xf3ae5355, "d_splice_alias" },
	{ 0x2fe677fd, "load_nls_default" },
	{ 0x809a8e2e, "current_time" },
	{ 0x4829a47e, "memcpy" },
	{ 0x39615b6e, "inode_dio_wait" },
	{ 0x37a0cba, "kfree" },
	{ 0x235907b1, "read_cache_page" },
	{ 0x6a7e9793, "cont_write_begin" },
	{ 0x4a4864ce, "iput" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x47962f69, "generic_file_write_iter" },
	{ 0xe2964344, "__wake_up" },
	{ 0xb8413079, "register_filesystem" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3e8758a4, "inode_set_bytes" },
	{ 0xec1f7993, "inode_newsize_ok" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x7c158924, "kill_block_super" },
	{ 0x5e2489d1, "unlock_new_inode" },
	{ 0x92997ed8, "_printk" },
	{ 0x9056e7c4, "block_invalidate_folio" },
	{ 0x1436dbd7, "generic_write_end" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xcc7003da, "load_nls" },
	{ 0x893abd4a, "make_kuid" },
	{ 0x704e1305, "try_to_free_buffers" },
	{ 0xe53353ec, "truncate_inode_pages_final" },
	{ 0x2ca970b5, "sync_blockdev" },
	{ 0x69cceb6b, "block_write_full_page" },
	{ 0x8470a730, "generic_file_mmap" },
	{ 0x95b23208, "inode_init_once" },
	{ 0x63f99f35, "file_write_and_wait_range" },
	{ 0xe003cc13, "mark_page_accessed" },
	{ 0x24729a8, "cdrom_read_tocentry" },
	{ 0x480f65b, "seq_escape_mem" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf60c01cf, "__brelse" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x8fd557d3, "generic_file_read_iter" },
	{ 0x4e3567f7, "match_int" },
	{ 0x6bf68500, "truncate_pagecache" },
	{ 0xa31d807f, "sync_dirty_buffer" },
	{ 0xa5af53e4, "setattr_copy" },
	{ 0x104c66e6, "set_nlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0xab93c2ef, "seq_putc" },
	{ 0x9166fada, "strncpy" },
	{ 0x991ba268, "cdrom_multisession" },
	{ 0xf5973e63, "mpage_writepages" },
	{ 0xf1e046cc, "panic" },
	{ 0x7d2d0dee, "write_inode_now" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9f4a4502, "__bread_gfp" },
	{ 0x6d9a0d5, "block_dirty_folio" },
	{ 0x2909dae5, "inode_add_bytes" },
	{ 0xdcb764ad, "memset" },
	{ 0x602c5ea7, "__insert_inode_hash" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0xc6300f56, "make_kgid" },
	{ 0x9960cce1, "from_kgid_munged" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5b3f61c, "truncate_setsize" },
	{ 0x2401f611, "set_page_dirty" },
	{ 0xfe3eb49e, "block_read_full_folio" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xea039f0b, "unlock_buffer" },
	{ 0xca1d24e2, "igrab" },
	{ 0x81f93b69, "generic_read_dir" },
	{ 0x85df9b6c, "strsep" },
	{ 0xcd6be655, "mount_bdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0x44e9a829, "match_token" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5c658476, "__lock_buffer" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x4afd9810, "from_kuid_munged" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x6b40fdcd, "iget5_locked" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x98cf60b3, "strlen" },
	{ 0x52d61781, "kmem_cache_alloc_lru" },
	{ 0xeaa9de01, "__mark_inode_dirty" },
	{ 0xc2766fdd, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1cdaec77, "make_bad_inode" },
	{ 0xc98e70a4, "unload_nls" },
	{ 0x3757d430, "sb_min_blocksize" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "2F7BFA33FA54B4D0927CF3F");
