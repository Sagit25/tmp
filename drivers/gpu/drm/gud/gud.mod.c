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
	{ 0x4119af30, "drm_kms_helper_poll_fini" },
	{ 0x9f1b1ccb, "drm_open" },
	{ 0x58e33198, "drm_fb_xrgb8888_to_rgb565" },
	{ 0x770d1ae6, "drm_poll" },
	{ 0xf0548511, "drm_gem_fb_end_cpu_access" },
	{ 0x615eee35, "drm_dev_enter" },
	{ 0x3b72b22a, "drm_atomic_helper_connector_tv_reset" },
	{ 0xa57334bc, "backlight_device_unregister" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xd5cb06d9, "drm_kms_helper_poll_init" },
	{ 0x40d006f6, "drm_plane_enable_fb_damage_clips" },
	{ 0x76f0cd8e, "vmalloc_to_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x76aa5977, "drm_mode_probed_add" },
	{ 0x6f0d844e, "drm_gem_shmem_dumb_create" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x3c919a3d, "drm_gem_prime_mmap" },
	{ 0x1eec4723, "drm_atomic_helper_shutdown" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0xa063ea85, "usb_sg_init" },
	{ 0x801e4086, "drm_mode_object_get" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0xfc3dc05b, "drm_connector_list_iter_begin" },
	{ 0x4f4d78c5, "LZ4_compress_default" },
	{ 0x1d08ea, "drm_modeset_acquire_init" },
	{ 0xbc0d093e, "drm_fb_xrgb8888_to_rgb332" },
	{ 0x605deb95, "drm_gem_prime_handle_to_fd" },
	{ 0xea07978c, "drmm_mode_config_init" },
	{ 0xee2b4800, "drm_mode_object_put" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xd13bcc7f, "drm_connector_attach_encoder" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x3201cc5e, "usb_sg_cancel" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x465a57a0, "drm_atomic_helper_commit" },
	{ 0x606b7e51, "put_device" },
	{ 0x6d9bb1c7, "drm_atomic_helper_check" },
	{ 0xfd491fba, "drm_atomic_helper_connector_destroy_state" },
	{ 0xf2105b38, "drm_connector_list_iter_end" },
	{ 0xdfbd0314, "drm_gem_mmap" },
	{ 0x7866936a, "drm_mode_create" },
	{ 0x6ad1dbf8, "drm_ioctl" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x2187349d, "drm_gem_fb_vmap" },
	{ 0xe4c592bf, "drm_gem_prime_fd_to_handle" },
	{ 0x6910e4cd, "drm_format_info_min_pitch" },
	{ 0xd08fc3b7, "drm_dev_unplug" },
	{ 0xd1ae25e5, "drm_connector_init" },
	{ 0xe8d25f2c, "drm_debugfs_create_files" },
	{ 0x36cac97c, "devm_kfree" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x5758a8ca, "drm_mode_config_helper_suspend" },
	{ 0x48a91171, "string_get_size" },
	{ 0x3cec5943, "usb_intf_get_dma_device" },
	{ 0xe907aeae, "drm_add_edid_modes" },
	{ 0x715543dc, "drm_atomic_helper_damage_merged" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x9843f4f0, "drm_read" },
	{ 0xc30cdfd5, "drm_gem_fb_create_with_dirty" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x74fc6fbd, "drm_format_info_block_width" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xee9a28ed, "drm_gem_fb_vunmap" },
	{ 0x575e686e, "drm_mode_create_tv_properties" },
	{ 0xd85a67a, "drm_object_attach_property" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x9ef7759c, "__drm_dev_dbg" },
	{ 0xeee4a6fa, "drm_atomic_commit" },
	{ 0xd2ba40a8, "sg_alloc_table_from_pages_segment" },
	{ 0x4ac5ff1d, "__devm_drm_dev_alloc" },
	{ 0x1c3c1cd1, "drm_atomic_state_alloc" },
	{ 0x33100e51, "drm_gem_shmem_prime_import_sg_table" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x6214ef5e, "drmm_kmalloc" },
	{ 0x412d9b06, "drm_fb_xrgb8888_to_rgb888" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc43d74f5, "drm_connector_update_edid_property" },
	{ 0x770a4697, "drm_fbdev_generic_setup" },
	{ 0x85baa052, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x6c73ca1b, "drm_simple_display_pipe_init" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x2be0d346, "drm_do_get_edid" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x6626ed76, "drm_connector_cleanup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x36ad7c4d, "drm_fb_memcpy" },
	{ 0xcbaa3e9f, "drm_connector_list_iter_next" },
	{ 0x6c904a77, "drm_modeset_acquire_fini" },
	{ 0x1099ec03, "drm_simple_encoder_init" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc198562d, "drm_gem_fb_begin_cpu_access" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x8740af9, "drm_helper_probe_single_connector_modes" },
	{ 0x6a1df4f7, "drm_plane_create_rotation_property" },
	{ 0xcce1f06e, "drm_modeset_backoff" },
	{ 0xbfa950cb, "drm_gem_prime_import_dev" },
	{ 0x39416365, "backlight_device_register" },
	{ 0x61281c8a, "drm_mode_create_tv_margin_properties" },
	{ 0x54a8911, "drm_fb_xrgb8888_to_gray8" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x929edfa2, "drm_atomic_state_clear" },
	{ 0x5baf4462, "drm_atomic_helper_connector_reset" },
	{ 0x4ebf3a06, "drm_mode_config_reset" },
	{ 0x55eb38da, "drm_format_info" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x5368b8de, "drm_modeset_drop_locks" },
	{ 0x3a0f8693, "usb_sg_wait" },
	{ 0xd3769df5, "drm_mode_config_helper_resume" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x775ac972, "drm_compat_ioctl" },
	{ 0x926a1184, "drm_dev_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x45cbe173, "drm_atomic_get_connector_state" },
	{ 0x900eb2e2, "drm_release" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm_kms_helper,drm,backlight,drm_shmem_helper,lz4_compress");

MODULE_ALIAS("usb:v1D50p614Dd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v16D0p10A9d*dc*dsc*dp*icFFisc*ip*in*");

MODULE_INFO(srcversion, "78331BDD0BEC393354193DC");
