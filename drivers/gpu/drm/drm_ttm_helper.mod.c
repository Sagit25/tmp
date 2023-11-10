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

SYMBOL_CRC(drm_gem_ttm_print_info, 0x43a4253b, "");
SYMBOL_CRC(drm_gem_ttm_vmap, 0x47098311, "");
SYMBOL_CRC(drm_gem_ttm_vunmap, 0xd8c4fdce, "");
SYMBOL_CRC(drm_gem_ttm_mmap, 0x5d86fdd6, "");
SYMBOL_CRC(drm_gem_ttm_dumb_map_offset, 0xdd17eed5, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf0d2cec0, "ww_mutex_unlock" },
	{ 0x36e7a85a, "drm_gem_object_lookup" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xde827673, "ttm_bo_vunmap" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x32a0cc37, "drm_print_bits" },
	{ 0x851f2e7c, "ww_mutex_lock" },
	{ 0x28779e52, "drm_printf" },
	{ 0xd49d02ac, "ttm_bo_mmap_obj" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x65c322d9, "ttm_bo_vmap" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm,ttm");


MODULE_INFO(srcversion, "83B0302934D5F2FAC346BCF");
