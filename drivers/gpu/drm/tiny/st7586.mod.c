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
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0x1eec4723, "drm_atomic_helper_shutdown" },
	{ 0xd08fc3b7, "drm_dev_unplug" },
	{ 0x7e3277f8, "___drm_dbg" },
	{ 0x3e1896aa, "mipi_dbi_command_stackbuf" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x615eee35, "drm_dev_enter" },
	{ 0x9b93785a, "drm_fb_dma_get_gem_obj" },
	{ 0xc198562d, "drm_gem_fb_begin_cpu_access" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x54a8911, "drm_fb_xrgb8888_to_gray8" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0548511, "drm_gem_fb_end_cpu_access" },
	{ 0x953a58b9, "mipi_dbi_command_buf" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x715543dc, "drm_atomic_helper_damage_merged" },
	{ 0xb80a6d3c, "mipi_dbi_poweron_reset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4ac5ff1d, "__devm_drm_dev_alloc" },
	{ 0x63a87a6a, "devm_gpiod_get" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0xd7cda496, "mipi_dbi_spi_init" },
	{ 0x4b62cb2, "mipi_dbi_dev_init_with_formats" },
	{ 0x4ebf3a06, "drm_mode_config_reset" },
	{ 0x926a1184, "drm_dev_register" },
	{ 0x770a4697, "drm_fbdev_generic_setup" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x175d7fcb, "mipi_dbi_debugfs_init" },
	{ 0x605deb95, "drm_gem_prime_handle_to_fd" },
	{ 0xe4c592bf, "drm_gem_prime_fd_to_handle" },
	{ 0x5b5cbbcb, "drm_gem_dma_prime_import_sg_table_vmap" },
	{ 0x3c919a3d, "drm_gem_prime_mmap" },
	{ 0xbbc8e9da, "drm_gem_dma_dumb_create" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x9843f4f0, "drm_read" },
	{ 0x770d1ae6, "drm_poll" },
	{ 0x6ad1dbf8, "drm_ioctl" },
	{ 0x775ac972, "drm_compat_ioctl" },
	{ 0xdfbd0314, "drm_gem_mmap" },
	{ 0x9f1b1ccb, "drm_open" },
	{ 0x900eb2e2, "drm_release" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm_kms_helper,drm,drm_mipi_dbi,drm_dma_helper");

MODULE_ALIAS("spi:ev3-lcd");
MODULE_ALIAS("of:N*T*Clego,ev3-lcd");
MODULE_ALIAS("of:N*T*Clego,ev3-lcdC*");

MODULE_INFO(srcversion, "20501E8E636CD686AC639FA");
