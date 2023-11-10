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
	{ 0x1804edf1, "generic_block_bmap" },
	{ 0x691ec44b, "flush_dcache_page" },
	{ 0xeb9eef52, "match_uint" },
	{ 0x70554125, "init_special_inode" },
	{ 0x49758fc7, "unregister_filesystem" },
	{ 0x84dd752b, "d_make_root" },
	{ 0x2e7398b6, "sb_set_blocksize" },
	{ 0x7b12cb7a, "sync_filesystem" },
	{ 0xf3ae5355, "d_splice_alias" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a4864ce, "iput" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xb8413079, "register_filesystem" },
	{ 0xad19a2c4, "kmem_cache_create" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x7c158924, "kill_block_super" },
	{ 0x5e2489d1, "unlock_new_inode" },
	{ 0x92997ed8, "_printk" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcc7003da, "load_nls" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x893abd4a, "make_kuid" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x95b23208, "inode_init_once" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x24729a8, "cdrom_read_tocentry" },
	{ 0xf60c01cf, "__brelse" },
	{ 0xd210c9ee, "inode_nohighmem" },
	{ 0x58d074b3, "unlock_page" },
	{ 0x4e3567f7, "match_int" },
	{ 0x56e0eaac, "generic_ro_fops" },
	{ 0xa07a37f0, "memchr" },
	{ 0x2a6c5bdb, "__bh_read_batch" },
	{ 0xc92596dc, "__wait_on_buffer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x104c66e6, "set_nlink" },
	{ 0x295304c8, "kmem_cache_free" },
	{ 0x5a921311, "strncmp" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x991ba268, "cdrom_multisession" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdc45dc30, "d_obtain_alias" },
	{ 0x9f4a4502, "__bread_gfp" },
	{ 0x11089ac7, "_ctype" },
	{ 0xbadd791e, "mpage_read_folio" },
	{ 0xdcb764ad, "memset" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0xc6300f56, "make_kgid" },
	{ 0x9960cce1, "from_kgid_munged" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf16b87ec, "__getblk_gfp" },
	{ 0x999e8297, "vfree" },
	{ 0x81f93b69, "generic_read_dir" },
	{ 0xde33e7dc, "page_symlink_inode_operations" },
	{ 0x85df9b6c, "strsep" },
	{ 0xcd6be655, "mount_bdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb43f8cbf, "mpage_readahead" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x21aff9c9, "init_user_ns" },
	{ 0x44e9a829, "match_token" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xdc4b4ecb, "pagecache_get_page" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x4afd9810, "from_kuid_munged" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x6b40fdcd, "iget5_locked" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x52d61781, "kmem_cache_alloc_lru" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xc2766fdd, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc98e70a4, "unload_nls" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x3757d430, "sb_min_blocksize" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xee7d63ba, "iget_failed" },
	{ 0x357963bc, "kmem_cache_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "B5ADD281B6EF07E4F0687B1");
