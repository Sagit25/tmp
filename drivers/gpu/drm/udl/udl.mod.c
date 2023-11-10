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
	{ 0x7e3277f8, "___drm_dbg" },
	{ 0x4119af30, "drm_kms_helper_poll_fini" },
	{ 0x9f1b1ccb, "drm_open" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x770d1ae6, "drm_poll" },
	{ 0xf0548511, "drm_gem_fb_end_cpu_access" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xd5cb06d9, "drm_kms_helper_poll_init" },
	{ 0x40d006f6, "drm_plane_enable_fb_damage_clips" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0x6f0d844e, "drm_gem_shmem_dumb_create" },
	{ 0x3c919a3d, "drm_gem_prime_mmap" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x861bd2f4, "drm_gem_simple_kms_cleanup_shadow_fb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x605deb95, "drm_gem_prime_handle_to_fd" },
	{ 0xea07978c, "drmm_mode_config_init" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x465a57a0, "drm_atomic_helper_commit" },
	{ 0x606b7e51, "put_device" },
	{ 0x6d9bb1c7, "drm_atomic_helper_check" },
	{ 0xfd491fba, "drm_atomic_helper_connector_destroy_state" },
	{ 0xdfbd0314, "drm_gem_mmap" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x6ad1dbf8, "drm_ioctl" },
	{ 0xe4c592bf, "drm_gem_prime_fd_to_handle" },
	{ 0x735e0558, "drm_gem_simple_kms_destroy_shadow_plane_state" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd08fc3b7, "drm_dev_unplug" },
	{ 0xd1ae25e5, "drm_connector_init" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x29df39e1, "usb_free_coherent" },
	{ 0x5758a8ca, "drm_mode_config_helper_suspend" },
	{ 0x3cec5943, "usb_intf_get_dma_device" },
	{ 0xe907aeae, "drm_add_edid_modes" },
	{ 0x715543dc, "drm_atomic_helper_damage_merged" },
	{ 0xc3279255, "drm_gem_simple_kms_prepare_shadow_fb" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x9843f4f0, "drm_read" },
	{ 0xc30cdfd5, "drm_gem_fb_create_with_dirty" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4ac5ff1d, "__devm_drm_dev_alloc" },
	{ 0x33100e51, "drm_gem_shmem_prime_import_sg_table" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xc43d74f5, "drm_connector_update_edid_property" },
	{ 0x770a4697, "drm_fbdev_generic_setup" },
	{ 0xb6f28144, "usb_get_descriptor" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x85baa052, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x6c73ca1b, "drm_simple_display_pipe_init" },
	{ 0x2be0d346, "drm_do_get_edid" },
	{ 0x6626ed76, "drm_connector_cleanup" },
	{ 0x2008f6e0, "drm_gem_simple_kms_duplicate_shadow_plane_state" },
	{ 0xc198562d, "drm_gem_fb_begin_cpu_access" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8740af9, "drm_helper_probe_single_connector_modes" },
	{ 0xbfa950cb, "drm_gem_prime_import_dev" },
	{ 0x552cfdcc, "drm_gem_simple_kms_reset_shadow_plane" },
	{ 0x5baf4462, "drm_atomic_helper_connector_reset" },
	{ 0x4ebf3a06, "drm_mode_config_reset" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd3769df5, "drm_mode_config_helper_resume" },
	{ 0x775ac972, "drm_compat_ioctl" },
	{ 0x926a1184, "drm_dev_register" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x900eb2e2, "drm_release" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,drm_shmem_helper");

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "F96B0F041200B3827F5F9E1");
