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

SYMBOL_CRC(mipi_dbi_command_read, 0x775b73fa, "");
SYMBOL_CRC(mipi_dbi_command_buf, 0x953a58b9, "");
SYMBOL_CRC(mipi_dbi_command_stackbuf, 0x3e1896aa, "");
SYMBOL_CRC(mipi_dbi_buf_copy, 0x9e7125ae, "");
SYMBOL_CRC(mipi_dbi_pipe_mode_valid, 0x8b991398, "");
SYMBOL_CRC(mipi_dbi_pipe_update, 0x9e2d7092, "");
SYMBOL_CRC(mipi_dbi_enable_flush, 0x94fc11d9, "");
SYMBOL_CRC(mipi_dbi_pipe_disable, 0xb810f5a7, "");
SYMBOL_CRC(mipi_dbi_dev_init_with_formats, 0x04b62cb2, "");
SYMBOL_CRC(mipi_dbi_dev_init, 0x08ed22cd, "");
SYMBOL_CRC(mipi_dbi_hw_reset, 0x279d1098, "");
SYMBOL_CRC(mipi_dbi_display_is_on, 0xe8ca6beb, "");
SYMBOL_CRC(mipi_dbi_poweron_reset, 0xb80a6d3c, "");
SYMBOL_CRC(mipi_dbi_poweron_conditional_reset, 0x26e5bd2d, "");
SYMBOL_CRC(mipi_dbi_spi_cmd_max_speed, 0xfc2e2381, "");
SYMBOL_CRC(mipi_dbi_spi_init, 0xd7cda496, "");
SYMBOL_CRC(mipi_dbi_spi_transfer, 0x6f8c7972, "");
SYMBOL_CRC(mipi_dbi_debugfs_init, 0x175d7fcb, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e209ff7, "drm_gem_fb_get_obj" },
	{ 0xc198562d, "drm_gem_fb_begin_cpu_access" },
	{ 0x2187349d, "drm_gem_fb_vmap" },
	{ 0x42de9bc3, "drm_fb_swab" },
	{ 0xee9a28ed, "drm_gem_fb_vunmap" },
	{ 0xf0548511, "drm_gem_fb_end_cpu_access" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x58e33198, "drm_fb_xrgb8888_to_rgb565" },
	{ 0x36ad7c4d, "drm_fb_memcpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7c977c9a, "drm_crtc_helper_mode_valid_fixed" },
	{ 0xea07978c, "drmm_mode_config_init" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x9ce050be, "drm_mode_copy" },
	{ 0xd1ae25e5, "drm_connector_init" },
	{ 0x6c73ca1b, "drm_simple_display_pipe_init" },
	{ 0x40d006f6, "drm_plane_enable_fb_damage_clips" },
	{ 0x7e3277f8, "___drm_dbg" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x31cd939f, "drm_connector_helper_get_modes_fixed" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xb3c6f341, "single_open" },
	{ 0x615eee35, "drm_dev_enter" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x11089ac7, "_ctype" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xdcebe45, "seq_puts" },
	{ 0xdcb764ad, "memset" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x715543dc, "drm_atomic_helper_damage_merged" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0xe52de225, "regulator_enable" },
	{ 0x3d14056, "drm_dev_printk" },
	{ 0x5baf4462, "drm_atomic_helper_connector_reset" },
	{ 0x8740af9, "drm_helper_probe_single_connector_modes" },
	{ 0x6626ed76, "drm_connector_cleanup" },
	{ 0x85baa052, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xfd491fba, "drm_atomic_helper_connector_destroy_state" },
	{ 0xc30cdfd5, "drm_gem_fb_create_with_dirty" },
	{ 0x6d9bb1c7, "drm_atomic_helper_check" },
	{ 0x465a57a0, "drm_atomic_helper_commit" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x613beb6, "single_release" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");


MODULE_INFO(srcversion, "833DAB3B8B35086AFB00968");
