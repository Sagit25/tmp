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
	{ 0xdcb764ad, "memset" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7c977c9a, "drm_crtc_helper_mode_valid_fixed" },
	{ 0x31cd939f, "drm_connector_helper_get_modes_fixed" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0x4ac5ff1d, "__devm_drm_dev_alloc" },
	{ 0xea07978c, "drmm_mode_config_init" },
	{ 0x63a87a6a, "devm_gpiod_get" },
	{ 0x93426ecd, "device_property_read_string" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xd1ae25e5, "drm_connector_init" },
	{ 0x6c73ca1b, "drm_simple_display_pipe_init" },
	{ 0x4ebf3a06, "drm_mode_config_reset" },
	{ 0x926a1184, "drm_dev_register" },
	{ 0x7e3277f8, "___drm_dbg" },
	{ 0x770a4697, "drm_fbdev_generic_setup" },
	{ 0x247f9612, "thermal_zone_get_zone_by_name" },
	{ 0x3d14056, "drm_dev_printk" },
	{ 0x185e9f15, "spi_get_device_id" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0x715543dc, "drm_atomic_helper_damage_merged" },
	{ 0x9b93785a, "drm_fb_dma_get_gem_obj" },
	{ 0x615eee35, "drm_dev_enter" },
	{ 0x955cfc69, "thermal_zone_get_temp" },
	{ 0xc198562d, "drm_gem_fb_begin_cpu_access" },
	{ 0x9ac3b8d3, "drm_fb_xrgb8888_to_mono" },
	{ 0xf0548511, "drm_gem_fb_end_cpu_access" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x38baa1bc, "gpiod_get_value_cansleep" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x605deb95, "drm_gem_prime_handle_to_fd" },
	{ 0xe4c592bf, "drm_gem_prime_fd_to_handle" },
	{ 0x5b5cbbcb, "drm_gem_dma_prime_import_sg_table_vmap" },
	{ 0x3c919a3d, "drm_gem_prime_mmap" },
	{ 0xbbc8e9da, "drm_gem_dma_dumb_create" },
	{ 0xc30cdfd5, "drm_gem_fb_create_with_dirty" },
	{ 0x6d9bb1c7, "drm_atomic_helper_check" },
	{ 0x465a57a0, "drm_atomic_helper_commit" },
	{ 0x5baf4462, "drm_atomic_helper_connector_reset" },
	{ 0x8740af9, "drm_helper_probe_single_connector_modes" },
	{ 0x6626ed76, "drm_connector_cleanup" },
	{ 0x85baa052, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xfd491fba, "drm_atomic_helper_connector_destroy_state" },
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

MODULE_INFO(depends, "drm_kms_helper,drm,drm_dma_helper");

MODULE_ALIAS("spi:e1144cs021");
MODULE_ALIAS("spi:e1190cs021");
MODULE_ALIAS("spi:e2200cs021");
MODULE_ALIAS("spi:e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021C*");

MODULE_INFO(srcversion, "D6F98F0B9AB2BD688DABBCF");
