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
	{ 0xd46f3750, "iget_locked" },
	{ 0x691ec44b, "flush_dcache_page" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe9668d19, "new_inode" },
	{ 0x70554125, "init_special_inode" },
	{ 0x49758fc7, "unregister_filesystem" },
	{ 0x81db6ebb, "xz_dec_reset" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4df8fbc, "lzo1x_decompress_safe" },
	{ 0x84dd752b, "d_make_root" },
	{ 0x39c9d88c, "xas_find" },
	{ 0x7b12cb7a, "sync_filesystem" },
	{ 0xf3ae5355, "d_splice_alias" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd7402c3c, "page_get_link" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a4864ce, "iput" },
	{ 0x97eee579, "fs_param_is_enum" },
	{ 0x1d79c8e1, "logfc" },
	{ 0x52d717da, "xz_dec_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xb8413079, "register_filesystem" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7c158924, "kill_block_super" },
	{ 0x5e2489d1, "unlock_new_inode" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x893abd4a, "make_kuid" },
	{ 0x6e5b8651, "xz_dec_run" },
	{ 0xc6cbbc89, "capable" },
	{ 0x95b23208, "inode_init_once" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xcffe131f, "readahead_expand" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd210c9ee, "inode_nohighmem" },
	{ 0x58d074b3, "unlock_page" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x56e0eaac, "generic_ro_fops" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x65dccf13, "xz_dec_end" },
	{ 0x104c66e6, "set_nlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x5a921311, "strncmp" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0xfeb8b860, "bio_kmalloc" },
	{ 0x9166fada, "strncpy" },
	{ 0xf1e046cc, "panic" },
	{ 0xb1eda82f, "bio_add_page" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xdc45dc30, "d_obtain_alias" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x66b26d70, "bio_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x602c5ea7, "__insert_inode_hash" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6300f56, "make_kgid" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1387b93a, "bio_free_pages" },
	{ 0x999e8297, "vfree" },
	{ 0x81f93b69, "generic_read_dir" },
	{ 0x89a3de6c, "bio_uninit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0xa6f7413, "get_tree_bdev" },
	{ 0xdc4b4ecb, "pagecache_get_page" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x49a2986d, "__fs_parse" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x98cf60b3, "strlen" },
	{ 0x52d61781, "kmem_cache_alloc_lru" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xc2766fdd, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1cdaec77, "make_bad_inode" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x42bc2b65, "submit_bio_wait" },
	{ 0x3757d430, "sb_min_blocksize" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xee7d63ba, "iget_failed" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "21318CFAA9890D47ABF06D1");
