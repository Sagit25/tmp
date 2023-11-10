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

SYMBOL_CRC(drm_gem_vram_create, 0x79da7c6b, "");
SYMBOL_CRC(drm_gem_vram_put, 0x9cb1cc26, "");
SYMBOL_CRC(drm_gem_vram_offset, 0xe88ca47d, "");
SYMBOL_CRC(drm_gem_vram_pin, 0xbd31e553, "");
SYMBOL_CRC(drm_gem_vram_unpin, 0x07737944, "");
SYMBOL_CRC(drm_gem_vram_vmap, 0x82f848b2, "");
SYMBOL_CRC(drm_gem_vram_vunmap, 0xeb8051fe, "");
SYMBOL_CRC(drm_gem_vram_fill_create_dumb, 0x5188274f, "");
SYMBOL_CRC(drm_gem_vram_driver_dumb_create, 0x7e3d3790, "");
SYMBOL_CRC(drm_gem_vram_plane_helper_prepare_fb, 0x4e2aa748, "");
SYMBOL_CRC(drm_gem_vram_plane_helper_cleanup_fb, 0x3b17c28f, "");
SYMBOL_CRC(drm_gem_vram_simple_display_pipe_prepare_fb, 0x5014ee21, "");
SYMBOL_CRC(drm_gem_vram_simple_display_pipe_cleanup_fb, 0x2b6fb438, "");
SYMBOL_CRC(drm_vram_mm_debugfs_init, 0x67ff932a, "");
SYMBOL_CRC(drmm_vram_helper_init, 0xb9ea68c7, "");
SYMBOL_CRC(drm_vram_helper_mode_valid, 0x8a4caa8e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbbdd1261, "ttm_range_man_init_nocheck" },
	{ 0x12b5728e, "ww_mutex_lock_interruptible" },
	{ 0x3bb6bb9b, "ttm_resource_manager_debug" },
	{ 0xf0d2cec0, "ww_mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xd88ed478, "ttm_range_man_fini_nocheck" },
	{ 0x103ee323, "drm_gem_object_init" },
	{ 0xfeb953b1, "__drm_printfn_seq_file" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x604a7cac, "ttm_bo_pin" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x5d86fdd6, "drm_gem_ttm_mmap" },
	{ 0xb1b87f8b, "__drmm_add_action_or_reset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xde827673, "ttm_bo_vunmap" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xe8d25f2c, "drm_debugfs_create_files" },
	{ 0x4d92fe55, "drm_gem_object_release" },
	{ 0x851f2e7c, "ww_mutex_lock" },
	{ 0xfc90ab8c, "ttm_tt_init" },
	{ 0x250f80ed, "drm_gem_handle_create" },
	{ 0x8e209ff7, "drm_gem_fb_get_obj" },
	{ 0x4e37276e, "ttm_bo_unpin" },
	{ 0x513072fe, "__drm_puts_seq_file" },
	{ 0x466a8913, "ttm_bo_init_validate" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf234f15, "ttm_device_init" },
	{ 0xb797b3b5, "ttm_bo_validate" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x5079b080, "ttm_bo_move_to_lru_tail" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x65c322d9, "ttm_bo_vmap" },
	{ 0xd87a62ce, "ttm_bo_put" },
	{ 0xd2161c2b, "ttm_bo_move_memcpy" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd60d7887, "ttm_tt_fini" },
	{ 0x50964dd3, "ttm_device_fini" },
	{ 0x554e3a87, "drm_gem_plane_helper_prepare_fb" },
	{ 0x8f53b2ee, "ttm_bo_eviction_valuable" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x43a4253b, "drm_gem_ttm_print_info" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "ttm,drm,drm_ttm_helper,drm_kms_helper");


MODULE_INFO(srcversion, "97F1B2AF62744546D7744EB");
