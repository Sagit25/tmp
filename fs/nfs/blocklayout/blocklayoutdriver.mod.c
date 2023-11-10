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
	{ 0xb4a7b69d, "pnfs_register_layoutdriver" },
	{ 0x1425e33, "try_module_get" },
	{ 0x9c9d82f, "pnfs_ld_read_done" },
	{ 0x691ec44b, "flush_dcache_page" },
	{ 0xf3f67bdf, "blk_start_plug" },
	{ 0xd844751b, "pnfs_set_lo_fail" },
	{ 0x5f9172b4, "nfs4_init_deviceid_node" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x88916699, "nfs_pageio_reset_read_mds" },
	{ 0x76f0cd8e, "vmalloc_to_page" },
	{ 0x9da5e684, "xdr_inline_decode" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0xca9360b5, "rb_next" },
	{ 0xf9df1844, "pnfs_generic_pg_init_read" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xae04012c, "__vmalloc" },
	{ 0xd9fa8631, "pnfs_generic_pg_writepages" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xd0d0c958, "page_cache_next_miss" },
	{ 0xe2964344, "__wake_up" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xdd3a21bc, "pnfs_generic_pg_readpages" },
	{ 0xf109b3b6, "rpc_put_sb_net" },
	{ 0x7f150916, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x8de5a164, "blkdev_put" },
	{ 0x16904390, "rpc_destroy_pipe_data" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0x19ce5529, "blk_finish_plug" },
	{ 0x60ea38ad, "submit_bio" },
	{ 0x883c94dd, "rpc_pipe_generic_upcall" },
	{ 0xcc793c4a, "module_put" },
	{ 0xa6f5d0a6, "bio_put" },
	{ 0x5331d448, "nfs4_put_deviceid_node" },
	{ 0x45c18671, "blkdev_get_by_dev" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf83a16fc, "rpc_d_lookup_sb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8d6064ff, "nfs_pageio_reset_write_mds" },
	{ 0x97530b50, "blkdev_get_by_path" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd312a933, "nfs4_find_get_deviceid" },
	{ 0xb1eda82f, "bio_add_page" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7ea8e4d2, "unregister_pernet_subsys" },
	{ 0x5692e155, "rpc_queue_upcall" },
	{ 0x51dba7f3, "xdr_init_decode_pages" },
	{ 0xdcb764ad, "memset" },
	{ 0xee38605c, "pnfs_generic_sync" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0xdacce1e7, "pnfs_generic_pg_cleanup" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2f53b345, "rpc_get_sb_net" },
	{ 0xece784c2, "rb_first" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x2752cc4, "pnfs_generic_pg_test" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x77607587, "rpc_mkpipe_dentry" },
	{ 0x951df332, "rpc_mkpipe_data" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x40b4933e, "nfs4_mark_deviceid_unavailable" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0x2d983101, "nfs4_delete_deviceid" },
	{ 0x7617fdac, "dput" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8aa6240e, "pnfs_error_mark_layout_for_return" },
	{ 0x8e618539, "pnfs_ld_write_done" },
	{ 0xacb767d6, "rpc_unlink" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x7be277d2, "nfs_dreq_bytes_left" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3ebe7ef1, "bio_alloc_bioset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x75f5da71, "fs_bio_set" },
	{ 0x6c272441, "pnfs_generic_pg_init_write" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x16626117, "pnfs_unregister_layoutdriver" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0DC87A95CD7196CC8EDBEB3");
