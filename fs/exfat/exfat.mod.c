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
	{ 0xfe1c2d08, "truncate_inode_pages" },
	{ 0x460108d1, "generic_fillattr" },
	{ 0x8eb4a783, "setattr_prepare" },
	{ 0x298319d0, "clear_nlink" },
	{ 0xcb479b5a, "sync_blockdev_range" },
	{ 0x1804edf1, "generic_block_bmap" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x80765dd0, "d_instantiate" },
	{ 0x874f3fd2, "clear_inode" },
	{ 0x9f93ef75, "fs_param_is_string" },
	{ 0xf1b0a24a, "generic_file_splice_read" },
	{ 0xe9668d19, "new_inode" },
	{ 0x49758fc7, "unregister_filesystem" },
	{ 0x5527703b, "mark_buffer_dirty" },
	{ 0xd9c0a921, "__find_get_block" },
	{ 0xd36ea4f5, "filemap_fdatawrite_range" },
	{ 0x3f35a2e6, "inode_needs_sync" },
	{ 0xcb7a4ebf, "__blockdev_direct_IO" },
	{ 0x84dd752b, "d_make_root" },
	{ 0x72d80548, "__bforget" },
	{ 0x2e7398b6, "sb_set_blocksize" },
	{ 0xc7669c1a, "block_truncate_page" },
	{ 0x7142860c, "write_dirty_buffer" },
	{ 0x7b12cb7a, "sync_filesystem" },
	{ 0xf3ae5355, "d_splice_alias" },
	{ 0x809a8e2e, "current_time" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdd751225, "iunique" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a7e9793, "cont_write_begin" },
	{ 0x4a4864ce, "iput" },
	{ 0x97eee579, "fs_param_is_enum" },
	{ 0x9515d042, "fs_param_is_s32" },
	{ 0xbb0324ff, "iter_file_splice_write" },
	{ 0x47962f69, "generic_file_write_iter" },
	{ 0xb8413079, "register_filesystem" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb07e8f9e, "fs_param_is_u32" },
	{ 0xc92ed988, "d_drop" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0x7c158924, "kill_block_super" },
	{ 0x92997ed8, "_printk" },
	{ 0x9056e7c4, "block_invalidate_folio" },
	{ 0x11399ec6, "__breadahead" },
	{ 0x1436dbd7, "generic_write_end" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcc7003da, "load_nls" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xa83ef312, "generic_cont_expand_simple" },
	{ 0x893abd4a, "make_kuid" },
	{ 0x2ca970b5, "sync_blockdev" },
	{ 0x69cceb6b, "block_write_full_page" },
	{ 0x8470a730, "generic_file_mmap" },
	{ 0x60ef6bce, "sync_mapping_buffers" },
	{ 0x477468f0, "kmem_cache_alloc" },
	{ 0x779eb59, "invalidate_inode_buffers" },
	{ 0xc6cbbc89, "capable" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x95b23208, "inode_init_once" },
	{ 0x94bf03ca, "utf8_to_utf32" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xf60c01cf, "__brelse" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x8fd557d3, "generic_file_read_iter" },
	{ 0x59d66f69, "inode_maybe_inc_iversion" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x6bf68500, "truncate_pagecache" },
	{ 0xa31d807f, "sync_dirty_buffer" },
	{ 0xa5af53e4, "setattr_copy" },
	{ 0xc92596dc, "__wait_on_buffer" },
	{ 0x104c66e6, "set_nlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x6b360c87, "d_move" },
	{ 0x4f9d7249, "__sync_dirty_buffer" },
	{ 0xf5973e63, "mpage_writepages" },
	{ 0xf1e046cc, "panic" },
	{ 0x7d2d0dee, "write_inode_now" },
	{ 0xefb091d7, "d_rehash" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9f4a4502, "__bread_gfp" },
	{ 0x6d9a0d5, "block_dirty_folio" },
	{ 0xbadd791e, "mpage_read_folio" },
	{ 0xdcb764ad, "memset" },
	{ 0x602c5ea7, "__insert_inode_hash" },
	{ 0xc6300f56, "make_kgid" },
	{ 0x9960cce1, "from_kgid_munged" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x5b3f61c, "truncate_setsize" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xca1d24e2, "igrab" },
	{ 0xf16b87ec, "__getblk_gfp" },
	{ 0x81f93b69, "generic_read_dir" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb43f8cbf, "mpage_readahead" },
	{ 0x8611785e, "filemap_fdatawait_range" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x3096be16, "names_cachep" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0x6d67672e, "d_find_alias" },
	{ 0xac120953, "inc_nlink" },
	{ 0xa6f7413, "get_tree_bdev" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x7617fdac, "dput" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x3f0f7c6a, "blkdev_issue_flush" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x49a2986d, "__fs_parse" },
	{ 0x4afd9810, "from_kuid_munged" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x9f45d101, "__generic_file_fsync" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x98cf60b3, "strlen" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x52d61781, "kmem_cache_alloc_lru" },
	{ 0xeaa9de01, "__mark_inode_dirty" },
	{ 0xc2766fdd, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc98e70a4, "unload_nls" },
	{ 0x53b954a2, "up_read" },
	{ 0x3757d430, "sb_min_blocksize" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x8fc1340, "drop_nlink" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0x944af6fb, "blkdev_issue_discard" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0D077DCE5FD0008FBE5FE89");
