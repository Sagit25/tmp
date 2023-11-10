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
	{ 0xb4e5a212, "posix_test_lock" },
	{ 0x803ddbb6, "__posix_acl_create" },
	{ 0x5e64c29b, "inode_init_owner" },
	{ 0x8a21d131, "filemap_fdatawrite" },
	{ 0x460108d1, "generic_fillattr" },
	{ 0xcc2f01b3, "p9_client_getattr_dotl" },
	{ 0xe6b1623b, "p9_client_wstat" },
	{ 0x8eb4a783, "setattr_prepare" },
	{ 0x68f4a0de, "p9_client_open" },
	{ 0x298319d0, "clear_nlink" },
	{ 0x928834bb, "p9_client_rename" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x80765dd0, "d_instantiate" },
	{ 0x874f3fd2, "clear_inode" },
	{ 0x676832ff, "folio_unlock" },
	{ 0xf1b0a24a, "generic_file_splice_read" },
	{ 0xe9668d19, "new_inode" },
	{ 0x496a518a, "filemap_map_pages" },
	{ 0x70554125, "init_special_inode" },
	{ 0x49758fc7, "unregister_filesystem" },
	{ 0x12ec485a, "simple_statfs" },
	{ 0x84dd752b, "d_make_root" },
	{ 0xeafc141f, "__posix_acl_chmod" },
	{ 0xa945b6da, "invalidate_mapping_pages" },
	{ 0x1a70e5dc, "always_delete_dentry" },
	{ 0x59fa5b99, "p9_client_remove" },
	{ 0x392189ce, "folio_redirty_for_writepage" },
	{ 0xf3ae5355, "d_splice_alias" },
	{ 0x809a8e2e, "current_time" },
	{ 0xae69e4b2, "ihold" },
	{ 0x298c6abc, "p9_client_renameat" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc400576, "invalidate_inode_pages2_range" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x3215cfc7, "finish_open" },
	{ 0x4a4864ce, "iput" },
	{ 0x86ddc459, "generic_file_readonly_mmap" },
	{ 0xbb0324ff, "iter_file_splice_write" },
	{ 0x1b9812bc, "p9_client_fcreate" },
	{ 0x47962f69, "generic_file_write_iter" },
	{ 0x63dceee3, "p9_is_proto_dotu" },
	{ 0xb8413079, "register_filesystem" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0xa9d22552, "folio_clear_dirty_for_io" },
	{ 0xff4596d0, "p9_client_disconnect" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x508437fa, "netfs_readahead" },
	{ 0x20ba90d6, "p9_client_attach" },
	{ 0xe4939f87, "locks_lock_inode_wait" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0xd384c683, "p9stat_free" },
	{ 0x5e2489d1, "unlock_new_inode" },
	{ 0x92997ed8, "_printk" },
	{ 0x32e798e1, "posix_acl_from_xattr" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa479d3f7, "p9_client_create" },
	{ 0x8cd4aea, "posix_acl_valid" },
	{ 0x893abd4a, "make_kuid" },
	{ 0xe53353ec, "truncate_inode_pages_final" },
	{ 0x67a4e98b, "fs_kobj" },
	{ 0xb853a29b, "__filemap_set_wb_err" },
	{ 0x8470a730, "generic_file_mmap" },
	{ 0xf4e1484b, "xattr_full_name" },
	{ 0xc5d413da, "folio_mark_dirty" },
	{ 0x95b23208, "inode_init_once" },
	{ 0xb0e3dd54, "folio_wait_private_2" },
	{ 0xb56842d3, "p9_client_read_once" },
	{ 0x63f99f35, "file_write_and_wait_range" },
	{ 0xa4a2bc0, "p9_client_setattr" },
	{ 0xbf94a5ca, "p9_client_xattrwalk" },
	{ 0x8c52f95a, "__folio_lock_killable" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x8fd557d3, "generic_file_read_iter" },
	{ 0x46553915, "filemap_fdatawrite_wbc" },
	{ 0x4e3567f7, "match_int" },
	{ 0x1ebdbc10, "set_cached_acl" },
	{ 0x8cc484e8, "p9_client_destroy" },
	{ 0x8d0861a, "netfs_write_begin" },
	{ 0xab0e4bbe, "p9_client_unlinkat" },
	{ 0xa5af53e4, "setattr_copy" },
	{ 0x74e98551, "get_cached_acl" },
	{ 0x98683395, "file_update_time" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x104c66e6, "set_nlink" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x4d443fbf, "p9_client_mkdir_dotl" },
	{ 0x6b360c87, "d_move" },
	{ 0x42c4795, "p9_client_xattrcreate" },
	{ 0x9055cb3a, "iov_iter_kvec" },
	{ 0xb5640f0b, "sget" },
	{ 0x49517255, "p9_client_create_dotl" },
	{ 0x7e5d4eba, "folio_wait_stable" },
	{ 0xb588040d, "p9_client_lock_dotl" },
	{ 0x9c2ac1a2, "sysfs_create_group" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6e11e3e, "finish_no_open" },
	{ 0x9e371900, "p9_client_write" },
	{ 0x2909dae5, "inode_add_bytes" },
	{ 0xb26a2d85, "p9_client_walk" },
	{ 0x17d493c6, "__folio_start_writeback" },
	{ 0xbaadc44f, "do_trace_9p_fid_put" },
	{ 0x4d03b926, "folio_end_writeback" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e45131d, "p9_show_client_options" },
	{ 0x145da905, "p9_client_read" },
	{ 0x98b15dc8, "inode_owner_or_capable" },
	{ 0x846d754, "p9_client_fsync" },
	{ 0x95bd8f96, "p9dirent_read" },
	{ 0x52d2f9f7, "p9_client_symlink" },
	{ 0xc6300f56, "make_kgid" },
	{ 0x9960cce1, "from_kgid_munged" },
	{ 0x99009758, "kobject_create_and_add" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5b3f61c, "truncate_setsize" },
	{ 0xdd04bff4, "p9_client_readlink" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x8e153691, "p9_is_proto_dotl" },
	{ 0x614ff0d5, "sysfs_remove_group" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x92fbf6a1, "p9_client_clunk" },
	{ 0x1eba0ef2, "super_setup_bdi" },
	{ 0x41ce9823, "p9stat_read" },
	{ 0x516cce48, "netfs_read_folio" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x81f93b69, "generic_read_dir" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3b7ec773, "p9_client_statfs" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0xa1f557e1, "p9_client_link" },
	{ 0xac120953, "inc_nlink" },
	{ 0x44e9a829, "match_token" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0xae7ef98f, "p9_client_stat" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x7617fdac, "dput" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x48e538ab, "deactivate_locked_super" },
	{ 0x2e70f4bb, "__tracepoint_9p_fid_ref" },
	{ 0x968d35c9, "folio_mapping" },
	{ 0x620a7645, "posix_acl_update_mode" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x87834179, "generic_file_open" },
	{ 0xa377a9b3, "filemap_dirty_folio" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x11c8f40b, "p9_client_begin_disconnect" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x2ec6bba0, "errseq_set" },
	{ 0x22971572, "p9_client_getlock_dotl" },
	{ 0x13a4c76, "iov_iter_xarray" },
	{ 0xfec8c1ef, "posix_acl_to_xattr" },
	{ 0xb8b043f2, "kfree_link" },
	{ 0x84883f1, "kill_anon_super" },
	{ 0x4afd9810, "from_kuid_munged" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x6b40fdcd, "iget5_locked" },
	{ 0x715bb92d, "filemap_write_and_wait_range" },
	{ 0x15df3dab, "do_trace_9p_fid_get" },
	{ 0x909640d2, "p9_client_readdir" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe1507c71, "netfs_subreq_terminated" },
	{ 0xb9733938, "generic_write_checks" },
	{ 0x52d61781, "kmem_cache_alloc_lru" },
	{ 0x3e7bb4e, "filemap_fault" },
	{ 0xeaa9de01, "__mark_inode_dirty" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc2766fdd, "generic_file_llseek" },
	{ 0x53b954a2, "up_read" },
	{ 0x5fd6dfb, "p9_client_mknod_dotl" },
	{ 0xf2a2541b, "set_anon_super" },
	{ 0x8fc1340, "drop_nlink" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xee7d63ba, "iget_failed" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xd39ca817, "kobject_put" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "9pnet");


MODULE_INFO(srcversion, "AE7F1890E68DC507661E34D");