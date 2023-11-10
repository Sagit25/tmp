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

SYMBOL_CRC(drm_gem_shmem_create, 0xcd81d07e, "_gpl");
SYMBOL_CRC(drm_gem_shmem_free, 0xd74de65a, "_gpl");
SYMBOL_CRC(drm_gem_shmem_get_pages, 0xd588c21b, "");
SYMBOL_CRC(drm_gem_shmem_put_pages, 0x4df14e3a, "");
SYMBOL_CRC(drm_gem_shmem_pin, 0x7364857d, "");
SYMBOL_CRC(drm_gem_shmem_unpin, 0x87e643fb, "");
SYMBOL_CRC(drm_gem_shmem_vmap, 0x7840b35c, "");
SYMBOL_CRC(drm_gem_shmem_vunmap, 0x537347b9, "");
SYMBOL_CRC(drm_gem_shmem_madvise, 0x3af7a27c, "");
SYMBOL_CRC(drm_gem_shmem_purge_locked, 0xfde58b8b, "");
SYMBOL_CRC(drm_gem_shmem_purge, 0xf7c134fd, "");
SYMBOL_CRC(drm_gem_shmem_dumb_create, 0x6f0d844e, "_gpl");
SYMBOL_CRC(drm_gem_shmem_vm_ops, 0x02fe8bb9, "_gpl");
SYMBOL_CRC(drm_gem_shmem_mmap, 0x22cb5fd5, "_gpl");
SYMBOL_CRC(drm_gem_shmem_print_info, 0x4f99c64a, "");
SYMBOL_CRC(drm_gem_shmem_get_sg_table, 0x7960e089, "_gpl");
SYMBOL_CRC(drm_gem_shmem_get_pages_sgt, 0x94b31dac, "_gpl");
SYMBOL_CRC(drm_gem_shmem_prime_import_sg_table, 0x33100e51, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7e3277f8, "___drm_dbg" },
	{ 0xbcd32416, "vmf_insert_pfn" },
	{ 0x9190656b, "drm_gem_get_pages" },
	{ 0x12b2d42c, "dma_buf_vmap" },
	{ 0x2c91e17c, "vm_get_page_prot" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xa945b6da, "invalidate_mapping_pages" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x7ea712b8, "unmap_mapping_range" },
	{ 0x94961283, "vunmap" },
	{ 0x93dab256, "dma_buf_mmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xd9e84398, "drm_gem_create_mmap_offset" },
	{ 0x103ee323, "drm_gem_object_init" },
	{ 0x80e6bac, "drm_gem_private_object_init" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x4fe840d6, "drm_gem_vm_close" },
	{ 0x4872931c, "drm_gem_vm_open" },
	{ 0x4d92fe55, "drm_gem_object_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x6083462c, "vmap" },
	{ 0x250f80ed, "drm_gem_handle_create" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xefb7df84, "drm_prime_pages_to_sg" },
	{ 0x341de767, "dma_buf_vunmap" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x7f8a5174, "shmem_truncate_range" },
	{ 0x28779e52, "drm_printf" },
	{ 0x94dd8b22, "dma_map_sgtable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x78edb01b, "drm_gem_free_mmap_offset" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xa71a044a, "dma_unmap_sg_attrs" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8f748652, "drm_gem_put_pages" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe38d5d5d, "drm_prime_gem_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "0D8661F611937E965CEBC27");
