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

SYMBOL_CRC(drm_gem_dma_create, 0x3e052081, "_gpl");
SYMBOL_CRC(drm_gem_dma_free, 0xaadcfaac, "_gpl");
SYMBOL_CRC(drm_gem_dma_dumb_create_internal, 0xe08138c3, "_gpl");
SYMBOL_CRC(drm_gem_dma_dumb_create, 0xbbc8e9da, "_gpl");
SYMBOL_CRC(drm_gem_dma_vm_ops, 0x20adbfaa, "_gpl");
SYMBOL_CRC(drm_gem_dma_print_info, 0x9966ed8b, "");
SYMBOL_CRC(drm_gem_dma_get_sg_table, 0xdedfc583, "_gpl");
SYMBOL_CRC(drm_gem_dma_prime_import_sg_table, 0xf652c7e4, "_gpl");
SYMBOL_CRC(drm_gem_dma_vmap, 0x58c16896, "_gpl");
SYMBOL_CRC(drm_gem_dma_mmap, 0xe0c3a5e7, "_gpl");
SYMBOL_CRC(drm_gem_dma_prime_import_sg_table_vmap, 0x5b5cbbcb, "");
SYMBOL_CRC(drm_fb_dma_get_gem_obj, 0x9b93785a, "_gpl");
SYMBOL_CRC(drm_fb_dma_get_gem_addr, 0x133f3893, "_gpl");
SYMBOL_CRC(drm_fb_dma_sync_non_coherent, 0xcdd84c46, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7e3277f8, "___drm_dbg" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x12b2d42c, "dma_buf_vmap" },
	{ 0x2c91e17c, "vm_get_page_prot" },
	{ 0x6b5c2b06, "drm_atomic_helper_damage_iter_next" },
	{ 0x9657046b, "dma_mmap_pages" },
	{ 0xf5aa4962, "dma_free_pages" },
	{ 0x631baa5b, "dma_sync_single_for_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xd9e84398, "drm_gem_create_mmap_offset" },
	{ 0x103ee323, "drm_gem_object_init" },
	{ 0xde3f93b6, "drm_atomic_helper_damage_iter_init" },
	{ 0xf30d2e44, "dma_alloc_pages" },
	{ 0x80e6bac, "drm_gem_private_object_init" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x4fe840d6, "drm_gem_vm_close" },
	{ 0x4872931c, "drm_gem_vm_open" },
	{ 0x4d92fe55, "drm_gem_object_release" },
	{ 0x74fc6fbd, "drm_format_info_block_width" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0xd05fda43, "drm_prime_get_contiguous_size" },
	{ 0x250f80ed, "drm_gem_handle_create" },
	{ 0x8e209ff7, "drm_gem_fb_get_obj" },
	{ 0x9ef7759c, "__drm_dev_dbg" },
	{ 0x341de767, "dma_buf_vunmap" },
	{ 0x16b90833, "dma_free_attrs" },
	{ 0x28779e52, "drm_printf" },
	{ 0x9fc8ccf4, "dma_mmap_attrs" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x1a5557cc, "dma_get_sgtable_attrs" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x982d09b3, "drm_format_info_block_height" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe38d5d5d, "drm_prime_gem_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");


MODULE_INFO(srcversion, "C848D741362FE5B8A5E6E64");
