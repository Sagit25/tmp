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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(ttm_tt_init, 0xfc90ab8c, "");
SYMBOL_CRC(ttm_tt_fini, 0xd60d7887, "");
SYMBOL_CRC(ttm_sg_tt_init, 0xb920d853, "");
SYMBOL_CRC(ttm_tt_populate, 0x4982af85, "");
SYMBOL_CRC(ttm_kmap_iter_tt_init, 0xffac633e, "");
SYMBOL_CRC(ttm_bo_move_to_lru_tail, 0x5079b080, "");
SYMBOL_CRC(ttm_bo_set_bulk_move, 0x34a59af8, "");
SYMBOL_CRC(ttm_bo_put, 0xd87a62ce, "");
SYMBOL_CRC(ttm_bo_lock_delayed_workqueue, 0x7a9105e5, "");
SYMBOL_CRC(ttm_bo_unlock_delayed_workqueue, 0x13cbf6b9, "");
SYMBOL_CRC(ttm_bo_eviction_valuable, 0x8f53b2ee, "");
SYMBOL_CRC(ttm_bo_pin, 0x604a7cac, "");
SYMBOL_CRC(ttm_bo_unpin, 0x4e37276e, "");
SYMBOL_CRC(ttm_bo_mem_space, 0xb5cd3f72, "");
SYMBOL_CRC(ttm_bo_validate, 0xb797b3b5, "");
SYMBOL_CRC(ttm_bo_init_reserved, 0x3a42cccd, "");
SYMBOL_CRC(ttm_bo_init_validate, 0x466a8913, "");
SYMBOL_CRC(ttm_bo_unmap_virtual, 0x5fdcb150, "");
SYMBOL_CRC(ttm_bo_wait, 0x263e950b, "");
SYMBOL_CRC(ttm_move_memcpy, 0x1a71d30c, "");
SYMBOL_CRC(ttm_bo_move_memcpy, 0xd2161c2b, "");
SYMBOL_CRC(ttm_io_prot, 0x2ad40b92, "");
SYMBOL_CRC(ttm_bo_kmap, 0xc513b0b5, "");
SYMBOL_CRC(ttm_bo_kunmap, 0xb352e353, "");
SYMBOL_CRC(ttm_bo_vmap, 0x65c322d9, "");
SYMBOL_CRC(ttm_bo_vunmap, 0xde827673, "");
SYMBOL_CRC(ttm_bo_move_accel_cleanup, 0x7c10ac12, "");
SYMBOL_CRC(ttm_bo_move_sync_cleanup, 0x621c335c, "");
SYMBOL_CRC(ttm_bo_vm_reserve, 0x630e6347, "");
SYMBOL_CRC(ttm_bo_vm_fault_reserved, 0x7c949049, "");
SYMBOL_CRC(ttm_bo_vm_dummy_page, 0x129f5038, "");
SYMBOL_CRC(ttm_bo_vm_fault, 0xe368a004, "");
SYMBOL_CRC(ttm_bo_vm_open, 0x366da9b3, "");
SYMBOL_CRC(ttm_bo_vm_close, 0xc65919a5, "");
SYMBOL_CRC(ttm_bo_vm_access, 0x3aa8ef87, "");
SYMBOL_CRC(ttm_bo_mmap_obj, 0xd49d02ac, "");
SYMBOL_CRC(ttm_eu_backoff_reservation, 0x35737f54, "");
SYMBOL_CRC(ttm_eu_reserve_buffers, 0xa37e1dbf, "");
SYMBOL_CRC(ttm_eu_fence_buffer_objects, 0x9dc53ccc, "");
SYMBOL_CRC(ttm_range_man_init_nocheck, 0xbbdd1261, "");
SYMBOL_CRC(ttm_range_man_fini_nocheck, 0xd88ed478, "");
SYMBOL_CRC(ttm_lru_bulk_move_init, 0x70e5d873, "");
SYMBOL_CRC(ttm_lru_bulk_move_tail, 0x367b1374, "");
SYMBOL_CRC(ttm_resource_init, 0xd6283d9f, "");
SYMBOL_CRC(ttm_resource_fini, 0x0381d4e7, "");
SYMBOL_CRC(ttm_resource_free, 0x336053b9, "");
SYMBOL_CRC(ttm_resource_compat, 0xc6258b7b, "");
SYMBOL_CRC(ttm_resource_manager_init, 0x724b9b7d, "");
SYMBOL_CRC(ttm_resource_manager_evict_all, 0xa2fb50c6, "");
SYMBOL_CRC(ttm_resource_manager_usage, 0x92ec9b28, "");
SYMBOL_CRC(ttm_resource_manager_debug, 0x3bb6bb9b, "");
SYMBOL_CRC(ttm_kmap_iter_iomap_init, 0x62ec60eb, "");
SYMBOL_CRC(ttm_resource_manager_create_debugfs, 0x31f17b1d, "");
SYMBOL_CRC(ttm_pool_alloc, 0x5276c70f, "");
SYMBOL_CRC(ttm_pool_free, 0x85f6b247, "");
SYMBOL_CRC(ttm_pool_debugfs, 0xf662e3cf, "");
SYMBOL_CRC(ttm_glob, 0xfd9344c7, "");
SYMBOL_CRC(ttm_global_swapout, 0x4dda931f, "");
SYMBOL_CRC(ttm_device_swapout, 0x544148b2, "");
SYMBOL_CRC(ttm_device_init, 0x0f234f15, "");
SYMBOL_CRC(ttm_device_fini, 0x50964dd3, "");
SYMBOL_CRC(ttm_device_clear_dma_mappings, 0x23588e2c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x12b5728e, "ww_mutex_lock_interruptible" },
	{ 0x615eee35, "drm_dev_enter" },
	{ 0x991da2cb, "param_ops_ulong" },
	{ 0x1190bf7a, "dma_resv_reserve_fences" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0xf824c7db, "__drm_printfn_debug" },
	{ 0x76f0cd8e, "vmalloc_to_page" },
	{ 0xe1d46b94, "dma_resv_init" },
	{ 0xd1517ee5, "dma_resv_wait_timeout" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0xa951a544, "dma_unmap_page_attrs" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0xf0d2cec0, "ww_mutex_unlock" },
	{ 0xedc03953, "iounmap" },
	{ 0x659c15d1, "debugfs_create_atomic_t" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x3d0381cc, "register_shrinker" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7ea712b8, "unmap_mapping_range" },
	{ 0x53481983, "dma_resv_add_fence" },
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xe8a0e334, "drm_vma_offset_add" },
	{ 0xfeb953b1, "__drm_printfn_seq_file" },
	{ 0x4d924f20, "memremap" },
	{ 0x5efdd68b, "__tracepoint_mmap_lock_released" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0xf7acb66, "drm_mm_print" },
	{ 0x13753f07, "dma_map_page_attrs" },
	{ 0x92997ed8, "_printk" },
	{ 0x3d9ee9f0, "clear_page" },
	{ 0xc5e3d1e9, "ww_mutex_trylock" },
	{ 0xb1b87f8b, "__drmm_add_action_or_reset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3d05112c, "unregister_shrinker" },
	{ 0x87c0ed5f, "__free_pages" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xe003cc13, "mark_page_accessed" },
	{ 0x5a88482, "shmem_file_setup" },
	{ 0xd73c8c2b, "synchronize_shrinkers" },
	{ 0x9cfeaa27, "copy_highpage" },
	{ 0xe2bce892, "fput" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0xca84062e, "dma_resv_fini" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x851f2e7c, "ww_mutex_lock" },
	{ 0x930dc0fe, "shmem_read_mapping_page_gfp" },
	{ 0x6083462c, "vmap" },
	{ 0x18b48e28, "__memset_io" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x1a3a02fc, "vmf_insert_pfn_prot" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0x79eb35c, "__alloc_pages" },
	{ 0x513072fe, "__drm_puts_seq_file" },
	{ 0x77636e1f, "dma_resv_copy_fences" },
	{ 0x2401f611, "set_page_dirty" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xa38c4c94, "drm_memcpy_from_wc" },
	{ 0x8d9ca0e6, "dma_fence_enable_sw_signaling" },
	{ 0x16b90833, "dma_free_attrs" },
	{ 0x28779e52, "drm_printf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd2dfe5d3, "dma_resv_iter_next_unlocked" },
	{ 0x87b8798d, "sg_next" },
	{ 0xaa3ef17c, "__folio_put" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xd7fa57f6, "__mmap_lock_do_trace_released" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc9e76de5, "dma_resv_iter_first_unlocked" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8b06040b, "dma_resv_test_signaled" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xcc328a5c, "reservation_ww_class" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb3c6f341, "single_open" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0x4831da6e, "drm_vma_offset_remove" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "93570B1C184B71E5F90ED8D");
