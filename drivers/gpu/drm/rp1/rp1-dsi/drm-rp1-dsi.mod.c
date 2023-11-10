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
	{ 0x741ad7ae, "mipi_dsi_host_register" },
	{ 0x78f1ef1a, "drm_bridge_add" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0x5a5d8e51, "drm_simple_display_pipe_attach_bridge" },
	{ 0xa6257a2f, "complete" },
	{ 0x3c919a3d, "drm_gem_prime_mmap" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1eec4723, "drm_atomic_helper_shutdown" },
	{ 0x23daa989, "mipi_dsi_create_packet" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x605deb95, "drm_gem_prime_handle_to_fd" },
	{ 0xea07978c, "drmm_mode_config_init" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0xe56600f7, "drm_atomic_helper_bridge_reset" },
	{ 0x8d048958, "drm_crtc_vblank_get" },
	{ 0x89c154bb, "drm_crtc_send_vblank_event" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x465a57a0, "drm_atomic_helper_commit" },
	{ 0x6d9bb1c7, "drm_atomic_helper_check" },
	{ 0xdfbd0314, "drm_gem_mmap" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x6ad1dbf8, "drm_ioctl" },
	{ 0xe4c592bf, "drm_gem_prime_fd_to_handle" },
	{ 0x2efc6c58, "drm_gem_simple_display_pipe_prepare_fb" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x9843f4f0, "drm_read" },
	{ 0x23912872, "platform_get_resource" },
	{ 0xbbc8e9da, "drm_gem_dma_dumb_create" },
	{ 0x1bf56136, "drm_crtc_vblank_on" },
	{ 0xe9954ad9, "drm_gem_fb_create" },
	{ 0x8e209ff7, "drm_gem_fb_get_obj" },
	{ 0x9ef7759c, "__drm_dev_dbg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x36a2d760, "drm_dev_unregister" },
	{ 0x6214ef5e, "drmm_kmalloc" },
	{ 0xa8cf20b8, "drm_dev_put" },
	{ 0x770a4697, "drm_fbdev_generic_setup" },
	{ 0x6c73ca1b, "drm_simple_display_pipe_init" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7d3f5fa7, "drm_vblank_init" },
	{ 0x5b612b07, "drm_atomic_helper_bridge_destroy_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xce23f8ca, "devm_ioremap_resource" },
	{ 0xd316d017, "drm_crtc_vblank_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2fbd2d2f, "mipi_dsi_host_unregister" },
	{ 0x2c82aa02, "drm_crtc_handle_vblank" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc5c926dd, "drm_bridge_attach" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0x4ebf3a06, "drm_mode_config_reset" },
	{ 0x68092d33, "drmm_of_get_bridge" },
	{ 0xc667e36e, "drm_atomic_helper_bridge_duplicate_state" },
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

MODULE_ALIAS("of:N*T*Craspberrypi,rp1dsi");
MODULE_ALIAS("of:N*T*Craspberrypi,rp1dsiC*");

MODULE_INFO(srcversion, "E1997F546E8B236498091AA");
