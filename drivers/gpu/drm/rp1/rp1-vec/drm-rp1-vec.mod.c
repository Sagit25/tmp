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
	{ 0x9f1b1ccb, "drm_open" },
	{ 0x770d1ae6, "drm_poll" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0xa6257a2f, "complete" },
	{ 0x76aa5977, "drm_mode_probed_add" },
	{ 0x3c919a3d, "drm_gem_prime_mmap" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1eec4723, "drm_atomic_helper_shutdown" },
	{ 0x57f5eec1, "drm_connector_unregister" },
	{ 0x605deb95, "drm_gem_prime_handle_to_fd" },
	{ 0xea07978c, "drmm_mode_config_init" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x8d048958, "drm_crtc_vblank_get" },
	{ 0x89c154bb, "drm_crtc_send_vblank_event" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x465a57a0, "drm_atomic_helper_commit" },
	{ 0x6d9bb1c7, "drm_atomic_helper_check" },
	{ 0xfd491fba, "drm_atomic_helper_connector_destroy_state" },
	{ 0xdfbd0314, "drm_gem_mmap" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x6ad1dbf8, "drm_ioctl" },
	{ 0xe4c592bf, "drm_gem_prime_fd_to_handle" },
	{ 0xd1ae25e5, "drm_connector_init" },
	{ 0x2efc6c58, "drm_gem_simple_display_pipe_prepare_fb" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x9843f4f0, "drm_read" },
	{ 0x23912872, "platform_get_resource" },
	{ 0xbbc8e9da, "drm_gem_dma_dumb_create" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x1bf56136, "drm_crtc_vblank_on" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0xe9954ad9, "drm_gem_fb_create" },
	{ 0x8e209ff7, "drm_gem_fb_get_obj" },
	{ 0x575e686e, "drm_mode_create_tv_properties" },
	{ 0xd0b9b98d, "drm_mode_duplicate" },
	{ 0xd85a67a, "drm_object_attach_property" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x36a2d760, "drm_dev_unregister" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x6214ef5e, "drmm_kmalloc" },
	{ 0xa8cf20b8, "drm_dev_put" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0x770a4697, "drm_fbdev_generic_setup" },
	{ 0x85baa052, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x6c73ca1b, "drm_simple_display_pipe_init" },
	{ 0x6626ed76, "drm_connector_cleanup" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0x7d3f5fa7, "drm_vblank_init" },
	{ 0xce23f8ca, "devm_ioremap_resource" },
	{ 0xd316d017, "drm_crtc_vblank_off" },
	{ 0x8740af9, "drm_helper_probe_single_connector_modes" },
	{ 0x2c82aa02, "drm_crtc_handle_vblank" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0x5baf4462, "drm_atomic_helper_connector_reset" },
	{ 0x4ebf3a06, "drm_mode_config_reset" },
	{ 0x2fe6e701, "drm_dev_alloc" },
	{ 0xcf0bf4d5, "drm_crtc_arm_vblank_event" },
	{ 0x815588a6, "clk_enable" },
	{ 0x775ac972, "drm_compat_ioctl" },
	{ 0x926a1184, "drm_dev_register" },
	{ 0x900eb2e2, "drm_release" },
	{ 0xf652c7e4, "drm_gem_dma_prime_import_sg_table" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,drm_dma_helper");

MODULE_ALIAS("of:N*T*Craspberrypi,rp1vec");
MODULE_ALIAS("of:N*T*Craspberrypi,rp1vecC*");

MODULE_INFO(srcversion, "FC0CB6060F20C5D19CDB0DF");
