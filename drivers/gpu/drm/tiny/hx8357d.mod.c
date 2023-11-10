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
	{ 0x615eee35, "drm_dev_enter" },
	{ 0x7e3277f8, "___drm_dbg" },
	{ 0x26e5bd2d, "mipi_dbi_poweron_conditional_reset" },
	{ 0x3e1896aa, "mipi_dbi_command_stackbuf" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x94fc11d9, "mipi_dbi_enable_flush" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4ac5ff1d, "__devm_drm_dev_alloc" },
	{ 0x63a87a6a, "devm_gpiod_get" },
	{ 0x6562c4f7, "devm_of_find_backlight" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0xd7cda496, "mipi_dbi_spi_init" },
	{ 0x8ed22cd, "mipi_dbi_dev_init" },
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
	{ 0x8b991398, "mipi_dbi_pipe_mode_valid" },
	{ 0xb810f5a7, "mipi_dbi_pipe_disable" },
	{ 0x9e2d7092, "mipi_dbi_pipe_update" },
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

MODULE_INFO(depends, "drm_kms_helper,drm,drm_mipi_dbi,backlight,drm_dma_helper");

MODULE_ALIAS("spi:yx350hv15");
MODULE_ALIAS("of:N*T*Cadafruit,yx350hv15");
MODULE_ALIAS("of:N*T*Cadafruit,yx350hv15C*");

MODULE_INFO(srcversion, "995A95952E70B13D2062C7B");
