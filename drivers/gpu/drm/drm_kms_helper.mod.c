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

SYMBOL_CRC(drm_bridge_connector_enable_hpd, 0xded3f2b9, "_gpl");
SYMBOL_CRC(drm_bridge_connector_disable_hpd, 0x8843deee, "_gpl");
SYMBOL_CRC(drm_bridge_connector_init, 0x52995158, "_gpl");
SYMBOL_CRC(drm_helper_encoder_in_use, 0x99b725f4, "");
SYMBOL_CRC(drm_helper_crtc_in_use, 0x05cdd942, "");
SYMBOL_CRC(drm_helper_disable_unused_functions, 0x44e27ef5, "");
SYMBOL_CRC(drm_crtc_helper_set_mode, 0x4a6c443f, "");
SYMBOL_CRC(drm_crtc_helper_set_config, 0xb3d797ad, "");
SYMBOL_CRC(drm_helper_connector_dpms, 0xef287fd7, "");
SYMBOL_CRC(drm_helper_resume_force_mode, 0xdc1c19dc, "");
SYMBOL_CRC(drm_helper_force_disable_all, 0xbe42cbc0, "");
SYMBOL_CRC(drm_i2c_encoder_init, 0xae1c266c, "");
SYMBOL_CRC(drm_i2c_encoder_destroy, 0xcfecefe9, "");
SYMBOL_CRC(drm_i2c_encoder_dpms, 0xe462e3e7, "");
SYMBOL_CRC(drm_i2c_encoder_mode_fixup, 0x003d1585, "");
SYMBOL_CRC(drm_i2c_encoder_prepare, 0xd90d1d7e, "");
SYMBOL_CRC(drm_i2c_encoder_commit, 0xd7344950, "");
SYMBOL_CRC(drm_i2c_encoder_mode_set, 0xebfb0da3, "");
SYMBOL_CRC(drm_i2c_encoder_detect, 0xd163341a, "");
SYMBOL_CRC(drm_i2c_encoder_save, 0xabf88adb, "");
SYMBOL_CRC(drm_i2c_encoder_restore, 0x4767aa39, "");
SYMBOL_CRC(drm_flip_work_allocate_task, 0xcf11a549, "");
SYMBOL_CRC(drm_flip_work_queue_task, 0x21d541eb, "");
SYMBOL_CRC(drm_flip_work_queue, 0x127a8c6b, "");
SYMBOL_CRC(drm_flip_work_commit, 0x842dd90c, "");
SYMBOL_CRC(drm_flip_work_init, 0x5542443b, "");
SYMBOL_CRC(drm_flip_work_cleanup, 0xc6323239, "");
SYMBOL_CRC(drm_kms_helper_poll_enable, 0x133acfef, "");
SYMBOL_CRC(drm_helper_probe_detect, 0xb3492df1, "");
SYMBOL_CRC(drm_helper_probe_single_connector_modes, 0x08740af9, "");
SYMBOL_CRC(drm_kms_helper_hotplug_event, 0xded7169f, "");
SYMBOL_CRC(drm_kms_helper_connector_hotplug_event, 0x8e791dec, "");
SYMBOL_CRC(drm_kms_helper_is_poll_worker, 0x5a4734d1, "");
SYMBOL_CRC(drm_kms_helper_poll_disable, 0xf0846592, "");
SYMBOL_CRC(drm_kms_helper_poll_init, 0xd5cb06d9, "");
SYMBOL_CRC(drm_kms_helper_poll_fini, 0x4119af30, "");
SYMBOL_CRC(drm_connector_helper_hpd_irq_event, 0x444b0dd8, "");
SYMBOL_CRC(drm_helper_hpd_irq_event, 0x3c7088b7, "");
SYMBOL_CRC(drm_crtc_helper_mode_valid_fixed, 0x7c977c9a, "");
SYMBOL_CRC(drm_connector_helper_get_modes_from_ddc, 0x07e18463, "");
SYMBOL_CRC(drm_connector_helper_get_modes_fixed, 0x31cd939f, "");
SYMBOL_CRC(drm_connector_helper_get_modes, 0x355c971d, "");
SYMBOL_CRC(drm_plane_helper_update_primary, 0x6d02ec43, "");
SYMBOL_CRC(drm_plane_helper_disable_primary, 0xd2fd32cf, "");
SYMBOL_CRC(drm_plane_helper_destroy, 0x33db61c1, "");
SYMBOL_CRC(drm_plane_helper_atomic_check, 0xf16b4cba, "");
SYMBOL_CRC(drm_atomic_helper_check_modeset, 0x79a22f23, "");
SYMBOL_CRC(drm_atomic_helper_check_wb_encoder_state, 0xd122dccf, "");
SYMBOL_CRC(drm_atomic_helper_check_plane_state, 0x73306bfb, "");
SYMBOL_CRC(drm_atomic_helper_check_crtc_state, 0xaeec715a, "");
SYMBOL_CRC(drm_atomic_helper_check_planes, 0xe7a192d7, "");
SYMBOL_CRC(drm_atomic_helper_check, 0x6d9bb1c7, "");
SYMBOL_CRC(drm_atomic_helper_update_legacy_modeset_state, 0x7acdb0c7, "");
SYMBOL_CRC(drm_atomic_helper_calc_timestamping_constants, 0x797889eb, "");
SYMBOL_CRC(drm_atomic_helper_commit_modeset_disables, 0xb13bde1d, "");
SYMBOL_CRC(drm_atomic_helper_commit_modeset_enables, 0x7d2a40e8, "");
SYMBOL_CRC(drm_atomic_helper_wait_for_fences, 0xf12b7d16, "");
SYMBOL_CRC(drm_atomic_helper_wait_for_vblanks, 0x0d7cd6a7, "");
SYMBOL_CRC(drm_atomic_helper_wait_for_flip_done, 0xe8d99ef9, "");
SYMBOL_CRC(drm_atomic_helper_commit_tail, 0xcd2a150b, "");
SYMBOL_CRC(drm_atomic_helper_commit_tail_rpm, 0x4a013711, "");
SYMBOL_CRC(drm_atomic_helper_async_check, 0xbd2ec305, "");
SYMBOL_CRC(drm_atomic_helper_async_commit, 0xc6f82e13, "");
SYMBOL_CRC(drm_atomic_helper_commit, 0x465a57a0, "");
SYMBOL_CRC(drm_atomic_helper_setup_commit, 0xc3a00053, "");
SYMBOL_CRC(drm_atomic_helper_wait_for_dependencies, 0xed5d5e53, "");
SYMBOL_CRC(drm_atomic_helper_fake_vblank, 0x0b0c523a, "");
SYMBOL_CRC(drm_atomic_helper_commit_hw_done, 0x5ba54de7, "");
SYMBOL_CRC(drm_atomic_helper_commit_cleanup_done, 0x6dec5b6c, "");
SYMBOL_CRC(drm_atomic_helper_prepare_planes, 0x1e9cae13, "");
SYMBOL_CRC(drm_atomic_helper_commit_planes, 0x5601a8a9, "");
SYMBOL_CRC(drm_atomic_helper_commit_planes_on_crtc, 0x8f7bf2ed, "");
SYMBOL_CRC(drm_atomic_helper_disable_planes_on_crtc, 0xd12e1c71, "");
SYMBOL_CRC(drm_atomic_helper_cleanup_planes, 0x676180f9, "");
SYMBOL_CRC(drm_atomic_helper_swap_state, 0x901a8462, "");
SYMBOL_CRC(drm_atomic_helper_update_plane, 0xfcfd5eb4, "");
SYMBOL_CRC(drm_atomic_helper_disable_plane, 0x51a895b5, "");
SYMBOL_CRC(drm_atomic_helper_set_config, 0xcb3a4216, "");
SYMBOL_CRC(drm_atomic_helper_disable_all, 0xcdfa3d98, "");
SYMBOL_CRC(drm_atomic_helper_shutdown, 0x1eec4723, "");
SYMBOL_CRC(drm_atomic_helper_duplicate_state, 0xa6a9a437, "");
SYMBOL_CRC(drm_atomic_helper_suspend, 0x3f18be2e, "");
SYMBOL_CRC(drm_atomic_helper_commit_duplicated_state, 0x6a965260, "");
SYMBOL_CRC(drm_atomic_helper_resume, 0x89e140e8, "");
SYMBOL_CRC(drm_atomic_helper_page_flip, 0xc3e1ba16, "");
SYMBOL_CRC(drm_atomic_helper_page_flip_target, 0x2ee1ed9c, "");
SYMBOL_CRC(drm_atomic_helper_bridge_propagate_bus_fmt, 0xe504126b, "");
SYMBOL_CRC(drm_simple_encoder_init, 0x1099ec03, "");
SYMBOL_CRC(__drmm_simple_encoder_alloc, 0x449b1bed, "");
SYMBOL_CRC(drm_simple_display_pipe_attach_bridge, 0x5a5d8e51, "");
SYMBOL_CRC(drm_simple_display_pipe_init, 0x6c73ca1b, "");
SYMBOL_CRC(drm_helper_move_panel_connectors_to_head, 0xd60ce986, "");
SYMBOL_CRC(drm_helper_mode_fill_fb_struct, 0x76d01911, "");
SYMBOL_CRC(drm_crtc_init, 0x4e9d39b5, "");
SYMBOL_CRC(drm_mode_config_helper_suspend, 0x5758a8ca, "");
SYMBOL_CRC(drm_mode_config_helper_resume, 0xd3769df5, "");
SYMBOL_CRC(drm_gem_plane_helper_prepare_fb, 0x554e3a87, "_gpl");
SYMBOL_CRC(drm_gem_simple_display_pipe_prepare_fb, 0x2efc6c58, "");
SYMBOL_CRC(__drm_gem_duplicate_shadow_plane_state, 0xbc559a4a, "");
SYMBOL_CRC(drm_gem_duplicate_shadow_plane_state, 0xd7f3ccd3, "");
SYMBOL_CRC(__drm_gem_destroy_shadow_plane_state, 0x4ea1c709, "");
SYMBOL_CRC(drm_gem_destroy_shadow_plane_state, 0x09ba2504, "");
SYMBOL_CRC(__drm_gem_reset_shadow_plane, 0x804cc706, "");
SYMBOL_CRC(drm_gem_reset_shadow_plane, 0x24928248, "");
SYMBOL_CRC(drm_gem_prepare_shadow_fb, 0x78bf8aca, "");
SYMBOL_CRC(drm_gem_cleanup_shadow_fb, 0xb909cf0f, "");
SYMBOL_CRC(drm_gem_simple_kms_prepare_shadow_fb, 0xc3279255, "");
SYMBOL_CRC(drm_gem_simple_kms_cleanup_shadow_fb, 0x861bd2f4, "");
SYMBOL_CRC(drm_gem_simple_kms_reset_shadow_plane, 0x552cfdcc, "");
SYMBOL_CRC(drm_gem_simple_kms_duplicate_shadow_plane_state, 0x2008f6e0, "");
SYMBOL_CRC(drm_gem_simple_kms_destroy_shadow_plane_state, 0x735e0558, "");
SYMBOL_CRC(drm_gem_fb_get_obj, 0x8e209ff7, "_gpl");
SYMBOL_CRC(drm_gem_fb_destroy, 0x226a587e, "");
SYMBOL_CRC(drm_gem_fb_create_handle, 0xfbde0b11, "");
SYMBOL_CRC(drm_gem_fb_init_with_funcs, 0x1cb749ad, "_gpl");
SYMBOL_CRC(drm_gem_fb_create_with_funcs, 0x3148b27b, "_gpl");
SYMBOL_CRC(drm_gem_fb_create, 0xe9954ad9, "_gpl");
SYMBOL_CRC(drm_gem_fb_create_with_dirty, 0xc30cdfd5, "_gpl");
SYMBOL_CRC(drm_gem_fb_vmap, 0x2187349d, "");
SYMBOL_CRC(drm_gem_fb_vunmap, 0xee9a28ed, "");
SYMBOL_CRC(drm_gem_fb_begin_cpu_access, 0xc198562d, "");
SYMBOL_CRC(drm_gem_fb_end_cpu_access, 0xf0548511, "");
SYMBOL_CRC(drm_gem_fb_afbc_init, 0xce84433c, "_gpl");
SYMBOL_CRC(__drm_atomic_helper_crtc_state_reset, 0x5d7567aa, "");
SYMBOL_CRC(__drm_atomic_helper_crtc_reset, 0x0b2a7e94, "");
SYMBOL_CRC(drm_atomic_helper_crtc_reset, 0x3628d751, "");
SYMBOL_CRC(__drm_atomic_helper_crtc_duplicate_state, 0xb0a07d96, "");
SYMBOL_CRC(drm_atomic_helper_crtc_duplicate_state, 0x01af8af5, "");
SYMBOL_CRC(__drm_atomic_helper_crtc_destroy_state, 0xde7d5e35, "");
SYMBOL_CRC(drm_atomic_helper_crtc_destroy_state, 0xfcfa56d5, "");
SYMBOL_CRC(__drm_atomic_helper_plane_state_reset, 0x0de41bfb, "");
SYMBOL_CRC(__drm_atomic_helper_plane_reset, 0x83a81aa8, "");
SYMBOL_CRC(drm_atomic_helper_plane_reset, 0x06549bf6, "");
SYMBOL_CRC(__drm_atomic_helper_plane_duplicate_state, 0x2efaceff, "");
SYMBOL_CRC(drm_atomic_helper_plane_duplicate_state, 0x938f3f53, "");
SYMBOL_CRC(__drm_atomic_helper_plane_destroy_state, 0x4e9be7db, "");
SYMBOL_CRC(drm_atomic_helper_plane_destroy_state, 0x1234fc25, "");
SYMBOL_CRC(__drm_atomic_helper_connector_state_reset, 0xdb8a7513, "");
SYMBOL_CRC(__drm_atomic_helper_connector_reset, 0x255bf261, "");
SYMBOL_CRC(drm_atomic_helper_connector_reset, 0x5baf4462, "");
SYMBOL_CRC(drm_atomic_helper_connector_tv_reset, 0x3b72b22a, "");
SYMBOL_CRC(__drm_atomic_helper_connector_duplicate_state, 0xd01368ba, "");
SYMBOL_CRC(drm_atomic_helper_connector_duplicate_state, 0x85baa052, "");
SYMBOL_CRC(__drm_atomic_helper_connector_destroy_state, 0xbc45c15c, "");
SYMBOL_CRC(drm_atomic_helper_connector_destroy_state, 0xfd491fba, "");
SYMBOL_CRC(__drm_atomic_helper_private_obj_duplicate_state, 0x7f79f04d, "");
SYMBOL_CRC(__drm_atomic_helper_bridge_duplicate_state, 0xeb3faee1, "");
SYMBOL_CRC(drm_atomic_helper_bridge_duplicate_state, 0xc667e36e, "");
SYMBOL_CRC(drm_atomic_helper_bridge_destroy_state, 0x5b612b07, "");
SYMBOL_CRC(__drm_atomic_helper_bridge_reset, 0xd4975345, "");
SYMBOL_CRC(drm_atomic_helper_bridge_reset, 0xe56600f7, "");
SYMBOL_CRC(drm_atomic_helper_check_plane_damage, 0xb6b99e5f, "");
SYMBOL_CRC(drm_atomic_helper_dirtyfb, 0xb344afd7, "");
SYMBOL_CRC(drm_atomic_helper_damage_iter_init, 0xde3f93b6, "");
SYMBOL_CRC(drm_atomic_helper_damage_iter_next, 0x6b5c2b06, "");
SYMBOL_CRC(drm_atomic_helper_damage_merged, 0x715543dc, "");
SYMBOL_CRC(drm_fb_clip_offset, 0xb6a6b711, "");
SYMBOL_CRC(drm_fb_memcpy, 0x36ad7c4d, "");
SYMBOL_CRC(drm_fb_swab, 0x42de9bc3, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_rgb332, 0xbc0d093e, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_rgb565, 0x58e33198, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_rgb888, 0x412d9b06, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_xrgb2101010, 0x2a562b97, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_gray8, 0x054a8911, "");
SYMBOL_CRC(drm_fb_blit, 0xf8d00c17, "");
SYMBOL_CRC(drm_fb_xrgb8888_to_mono, 0x9ac3b8d3, "");
SYMBOL_CRC(drm_fb_build_fourcc_list, 0x5fb29f79, "");
SYMBOL_CRC(drm_self_refresh_helper_update_avg_times, 0xc7e749d4, "");
SYMBOL_CRC(drm_self_refresh_helper_alter_state, 0xddae1424, "");
SYMBOL_CRC(drm_self_refresh_helper_init, 0xc8553055, "");
SYMBOL_CRC(drm_self_refresh_helper_cleanup, 0xc2488d8f, "");
SYMBOL_CRC(drm_rect_intersect, 0x871ab41a, "");
SYMBOL_CRC(drm_rect_clip_scaled, 0x99fd20aa, "");
SYMBOL_CRC(drm_rect_calc_hscale, 0x2d50570f, "");
SYMBOL_CRC(drm_rect_calc_vscale, 0x91fec1cc, "");
SYMBOL_CRC(drm_rect_debug_print, 0xcb2340b8, "");
SYMBOL_CRC(drm_rect_rotate, 0xb053adda, "");
SYMBOL_CRC(drm_rect_rotate_inv, 0x6e30ba8e, "");
SYMBOL_CRC(drm_bridge_is_panel, 0x3fdc1b56, "");
SYMBOL_CRC(drm_panel_bridge_add, 0xec8139d4, "");
SYMBOL_CRC(drm_panel_bridge_add_typed, 0x14053006, "");
SYMBOL_CRC(drm_panel_bridge_remove, 0x00c66306, "");
SYMBOL_CRC(drm_panel_bridge_set_orientation, 0x15a84a1c, "");
SYMBOL_CRC(devm_drm_panel_bridge_add, 0xed69b9a4, "");
SYMBOL_CRC(devm_drm_panel_bridge_add_typed, 0x11b11554, "");
SYMBOL_CRC(drmm_panel_bridge_add, 0x10f23371, "");
SYMBOL_CRC(drm_panel_bridge_connector, 0x7d45300d, "");
SYMBOL_CRC(devm_drm_of_get_bridge, 0x10c8df63, "");
SYMBOL_CRC(drmm_of_get_bridge, 0x68092d33, "");
SYMBOL_CRC(drm_fb_helper_debug_enter, 0xd5da735c, "");
SYMBOL_CRC(drm_fb_helper_debug_leave, 0xbd5f145c, "");
SYMBOL_CRC(drm_fb_helper_restore_fbdev_mode_unlocked, 0xb7edeb05, "");
SYMBOL_CRC(drm_fb_helper_blank, 0x6a2a259a, "");
SYMBOL_CRC(drm_fb_helper_prepare, 0x4f971d7e, "");
SYMBOL_CRC(drm_fb_helper_init, 0xd9686724, "");
SYMBOL_CRC(drm_fb_helper_alloc_fbi, 0x3f32952c, "");
SYMBOL_CRC(drm_fb_helper_unregister_fbi, 0xa12b5650, "");
SYMBOL_CRC(drm_fb_helper_fini, 0x70bf4fb0, "");
SYMBOL_CRC(drm_fb_helper_deferred_io, 0x7a31fc6c, "");
SYMBOL_CRC(drm_fb_helper_sys_read, 0x7e9a2fd7, "");
SYMBOL_CRC(drm_fb_helper_sys_write, 0x6fa21647, "");
SYMBOL_CRC(drm_fb_helper_sys_fillrect, 0x868685b8, "");
SYMBOL_CRC(drm_fb_helper_sys_copyarea, 0xcd728f56, "");
SYMBOL_CRC(drm_fb_helper_sys_imageblit, 0x4246e7a0, "");
SYMBOL_CRC(drm_fb_helper_cfb_fillrect, 0x3850af90, "");
SYMBOL_CRC(drm_fb_helper_cfb_copyarea, 0x73a4a57e, "");
SYMBOL_CRC(drm_fb_helper_cfb_imageblit, 0x75025ccf, "");
SYMBOL_CRC(drm_fb_helper_set_suspend, 0xc3e38769, "");
SYMBOL_CRC(drm_fb_helper_set_suspend_unlocked, 0xe540249b, "");
SYMBOL_CRC(drm_fb_helper_setcmap, 0x5306b32e, "");
SYMBOL_CRC(drm_fb_helper_ioctl, 0xf4b49856, "");
SYMBOL_CRC(drm_fb_helper_check_var, 0x9804262b, "");
SYMBOL_CRC(drm_fb_helper_set_par, 0x2a774332, "");
SYMBOL_CRC(drm_fb_helper_pan_display, 0x93fff853, "");
SYMBOL_CRC(drm_fb_helper_fill_info, 0xb1d905a1, "");
SYMBOL_CRC(drm_fb_helper_initial_config, 0x8f3b899e, "");
SYMBOL_CRC(drm_fb_helper_hotplug_event, 0x674c6ab7, "");
SYMBOL_CRC(drm_fb_helper_lastclose, 0x4add5eeb, "");
SYMBOL_CRC(drm_fb_helper_output_poll_changed, 0x1f4e7e98, "");
SYMBOL_CRC(drm_fbdev_generic_setup, 0x770a4697, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb0dea802, "unregister_framebuffer" },
	{ 0x8045c8cb, "drm_connector_set_panel_orientation" },
	{ 0x2096e63, "drm_framebuffer_cleanup" },
	{ 0x7e3277f8, "___drm_dbg" },
	{ 0xe8523dc6, "drm_client_register" },
	{ 0xc03044de, "drm_writeback_prepare_job" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x1ac08f91, "drm_panel_get_modes" },
	{ 0x1425e33, "try_module_get" },
	{ 0x6b0e45a8, "drm_connector_list_update" },
	{ 0x78f1ef1a, "drm_bridge_add" },
	{ 0xf8972c44, "drm_bridge_chain_mode_valid" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0x9d2e7707, "unregister_sysrq_key" },
	{ 0x1f9d9ebb, "drm_connector_register" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x6ea1df26, "drm_add_override_edid_modes" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x30164b21, "drm_client_buffer_vmap" },
	{ 0x73a81429, "drm_client_rotation" },
	{ 0x231d2a9c, "drm_panel_enable" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xae71e8bb, "drm_framebuffer_init" },
	{ 0x94283778, "drm_mode_validate_driver" },
	{ 0xb5dc866, "drm_atomic_add_affected_planes" },
	{ 0xe7fcc261, "dma_buf_end_cpu_access" },
	{ 0x7aca98bc, "drm_modeset_unlock_all" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x76aa5977, "drm_mode_probed_add" },
	{ 0xa1147cc0, "drm_atomic_add_affected_connectors" },
	{ 0x88afcacd, "cfb_copyarea" },
	{ 0x80276b12, "drm_bridge_hpd_enable" },
	{ 0x9977a883, "drm_crtc_vblank_count" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5fa039db, "drm_modeset_lock_all" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x5fbee263, "drm_client_framebuffer_delete" },
	{ 0xd9b4753, "drm_mode_equal" },
	{ 0xc184bf4b, "fb_set_lowest_dynamic_fb" },
	{ 0xc20b45b5, "drm_client_framebuffer_create" },
	{ 0xdfe840ad, "drm_atomic_bridge_chain_enable" },
	{ 0x397c3d27, "drm_edid_free" },
	{ 0x801e4086, "drm_mode_object_get" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5c6856f0, "drm_gem_vmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0xc4ea9fd7, "drm_crtc_cleanup" },
	{ 0xf7671801, "drm_gem_vunmap" },
	{ 0xfc3dc05b, "drm_connector_list_iter_begin" },
	{ 0x8f3f63bf, "fb_deferred_io_init" },
	{ 0xc8296a54, "drm_mode_set_config_internal" },
	{ 0x745bd700, "fb_deferred_io_cleanup" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6752d2b8, "framebuffer_alloc" },
	{ 0xede242fc, "drm_encoder_cleanup" },
	{ 0x57f5eec1, "drm_connector_unregister" },
	{ 0x1d08ea, "drm_modeset_acquire_init" },
	{ 0x5f678dd2, "drm_client_modeset_probe" },
	{ 0xd10002b6, "drm_warn_on_modeset_not_all_locked" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xffdfb124, "drm_plane_get_damage_clips" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x28eced4f, "devres_add" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0xe885391e, "drm_add_modes_noedid" },
	{ 0xfd96c75e, "drm_bridge_remove" },
	{ 0xee2b4800, "drm_mode_object_put" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x8d048958, "drm_crtc_vblank_get" },
	{ 0x36e7a85a, "drm_gem_object_lookup" },
	{ 0x89c154bb, "drm_crtc_send_vblank_event" },
	{ 0xd13bcc7f, "drm_connector_attach_encoder" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x2ed3c600, "drm_mode_debug_printmodeline" },
	{ 0x71338e32, "fb_sys_write" },
	{ 0x3ae4cc3b, "drm_atomic_normalize_zpos" },
	{ 0xc3b748d7, "drm_edid_connector_update" },
	{ 0xbf1b6221, "drm_sysfs_hotplug_event" },
	{ 0x1d7e356f, "drm_bridge_hpd_disable" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x102231c1, "sys_imageblit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb1b87f8b, "__drmm_add_action_or_reset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xec5457c9, "drm_crtc_vblank_reset" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x40d04664, "console_trylock" },
	{ 0xc8437f7a, "sys_fillrect" },
	{ 0xf2105b38, "drm_connector_list_iter_end" },
	{ 0xc6ade851, "drm_atomic_set_crtc_for_plane" },
	{ 0xb2e88ac0, "drm_client_modeset_dpms" },
	{ 0x507695c6, "drm_mode_prune_invalid" },
	{ 0x589fa5e4, "drm_client_dev_hotplug" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xb030487b, "dma_resv_get_singleton" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xf68b7619, "drm_plane_cleanup" },
	{ 0x4575a0ca, "drm_mode_set_crtcinfo" },
	{ 0xcc793c4a, "module_put" },
	{ 0x768eba33, "dma_buf_begin_cpu_access" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x8713ed03, "drm_atomic_get_crtc_state" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x11a9e9b0, "drm_client_init" },
	{ 0x5d8a3fcd, "drm_crtc_wait_one_vblank" },
	{ 0x8d13a209, "__drmm_encoder_alloc" },
	{ 0xd7a9cf42, "drm_mode_validate_size" },
	{ 0xd35eac5f, "drm_modeset_lock" },
	{ 0xb7ba3155, "drm_client_modeset_commit_locked" },
	{ 0x64c04783, "drm_modeset_unlock" },
	{ 0x495c6f7c, "drm_panel_disable" },
	{ 0x49516e5a, "drm_property_replace_blob" },
	{ 0x6910e4cd, "drm_format_info_min_pitch" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd1ae25e5, "drm_connector_init" },
	{ 0x36cac97c, "devm_kfree" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xe7d43f21, "drm_writeback_cleanup_job" },
	{ 0x6955e641, "drm_modeset_lock_all_ctx" },
	{ 0x742ca250, "i2c_unregister_device" },
	{ 0xf5e4a624, "drm_atomic_set_fb_for_plane" },
	{ 0x73d8511b, "__drm_universal_plane_alloc" },
	{ 0xd977825a, "drm_connector_init_with_ddc" },
	{ 0xe907aeae, "drm_add_edid_modes" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x74fc6fbd, "drm_format_info_block_width" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xdc510a8f, "__devres_alloc_node" },
	{ 0x5594b19c, "drm_edid_read" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x2818ba27, "drm_crtc_commit_wait" },
	{ 0xb596ea87, "drm_dev_has_vblank" },
	{ 0x3c2f60b0, "register_framebuffer" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x30fae541, "__drm_atomic_helper_disable_plane" },
	{ 0xbea1d9ef, "drm_connector_set_orientation_from_panel" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x250f80ed, "drm_gem_handle_create" },
	{ 0x8b93509, "drm_atomic_set_crtc_for_connector" },
	{ 0xf4bb29e6, "drm_crtc_init_with_planes" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xd0b9b98d, "drm_mode_duplicate" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x799d9d85, "drm_crtc_vblank_put" },
	{ 0xab2cc6c2, "i2c_new_client_device" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x9ef7759c, "__drm_dev_dbg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x321cdbf, "of_alias_get_highest_id" },
	{ 0xe3e29976, "cfb_imageblit" },
	{ 0x30cf559, "drm_plane_get_damage_clips_count" },
	{ 0xeee4a6fa, "drm_atomic_commit" },
	{ 0x9ce050be, "drm_mode_copy" },
	{ 0x215869ab, "fb_deferred_io_mmap" },
	{ 0x1c3c1cd1, "drm_atomic_state_alloc" },
	{ 0xd45267de, "drm_client_modeset_commit" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xf2b1debd, "drm_atomic_bridge_chain_post_disable" },
	{ 0xc43d74f5, "drm_connector_update_edid_property" },
	{ 0x88ab6fe3, "kgdb_active" },
	{ 0x31b8a5e3, "__drm_set_edid_firmware_path" },
	{ 0xe633a4cd, "drm_format_info_bpp" },
	{ 0xc631580a, "console_unlock" },
	{ 0x21c20d6d, "fb_set_suspend" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x4672d742, "drm_client_release" },
	{ 0xae277372, "__drm_crtc_commit_free" },
	{ 0x8d72789e, "drm_edid_is_valid" },
	{ 0x2ece5d8a, "__drm_atomic_helper_set_config" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xd1879a27, "drm_atomic_set_mode_prop_for_crtc" },
	{ 0x3acf6219, "drm_get_format_info" },
	{ 0x6626ed76, "drm_connector_cleanup" },
	{ 0x23f09b8c, "drm_universal_plane_init" },
	{ 0xfb262aa8, "sys_copyarea" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xcbaa3e9f, "drm_connector_list_iter_next" },
	{ 0x6c904a77, "drm_modeset_acquire_fini" },
	{ 0xab7f6000, "drm_encoder_init" },
	{ 0x999e8297, "vfree" },
	{ 0xaf9e5322, "drm_object_property_get_default_value" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xdfcc992c, "current_work" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xbbca9f1f, "cfb_fillrect" },
	{ 0x566d173a, "drm_of_find_panel_or_bridge" },
	{ 0xd952f7d0, "drm_master_internal_acquire" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcce1f06e, "drm_modeset_backoff" },
	{ 0x69dc7eb9, "drm_panel_prepare" },
	{ 0x4589ab, "drm_bridge_chain_mode_set" },
	{ 0x4a279750, "drm_client_buffer_vunmap" },
	{ 0xf1421d13, "drm_mode_sort" },
	{ 0xb1c29ef, "fb_sys_read" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x98ce1f5a, "of_alias_get_id" },
	{ 0x3c63897, "__drm_get_edid_firmware_path" },
	{ 0xf7c1abb5, "drm_atomic_get_plane_state" },
	{ 0xa2376b, "drm_atomic_bridge_chain_check" },
	{ 0x3397f3ab, "dma_fence_chain_init" },
	{ 0xb868ac5c, "register_sysrq_key" },
	{ 0xac5f6e23, "drm_property_blob_get" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xa6e3d846, "drm_property_blob_put" },
	{ 0xfc50145d, "drm_mode_destroy" },
	{ 0xc5c926dd, "drm_bridge_attach" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x6de615a, "drm_set_preferred_mode" },
	{ 0x23aa0474, "drm_atomic_bridge_chain_pre_enable" },
	{ 0x929edfa2, "drm_atomic_state_clear" },
	{ 0x4ebf3a06, "drm_mode_config_reset" },
	{ 0xceb9b5db, "drm_property_create_blob" },
	{ 0x55eb38da, "drm_format_info" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x5368b8de, "drm_modeset_drop_locks" },
	{ 0x5c861d8c, "framebuffer_release" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x548a0d72, "drm_atomic_bridge_chain_disable" },
	{ 0x3ba4f1ed, "drm_mode_create_from_cmdline_mode" },
	{ 0x271132e2, "drm_mode_validate_ycbcr420" },
	{ 0x982d09b3, "drm_format_info_block_height" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xbd077ad, "drm_atomic_nonblocking_commit" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0xccbc061e, "drm_master_internal_release" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x24f62e8f, "drm_get_edid" },
	{ 0xf34ae7d5, "drm_calc_timestamping_constants" },
	{ 0xcdb99cc9, "drm_mode_init" },
	{ 0xfd60df2, "drm_get_connector_status_name" },
	{ 0xeee850af, "drm_panel_unprepare" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x85d7d836, "drm_atomic_add_encoder_bridges" },
	{ 0x45cbe173, "drm_atomic_get_connector_state" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xac2d04c1, "drm_sysfs_connector_hotplug_event" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x4403a9c3, "drm_mode_get_hv_timing" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "drm,fb_sys_fops,sysimgblt,sysfillrect,syscopyarea");


MODULE_INFO(srcversion, "2C62F836DD56EFA868C6F6C");
