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

SYMBOL_CRC(devm_aperture_acquire_from_firmware, 0x705fa600, "");
SYMBOL_CRC(drm_aperture_remove_conflicting_framebuffers, 0xe80481de, "");
SYMBOL_CRC(drm_aperture_remove_conflicting_pci_framebuffers, 0x86a4200b, "");
SYMBOL_CRC(drm_is_current_master, 0xb07988c8, "");
SYMBOL_CRC(drm_master_get, 0x201c8e33, "");
SYMBOL_CRC(drm_file_get_master, 0xc5c2c640, "");
SYMBOL_CRC(drm_master_put, 0x9fe5b11f, "");
SYMBOL_CRC(drm_master_internal_acquire, 0xd952f7d0, "");
SYMBOL_CRC(drm_master_internal_release, 0xccbc061e, "");
SYMBOL_CRC(drm_clflush_pages, 0xf44a4f0b, "");
SYMBOL_CRC(drm_clflush_sg, 0xb0b05ff5, "");
SYMBOL_CRC(drm_clflush_virt_range, 0x0a72f765, "");
SYMBOL_CRC(drm_need_swiotlb, 0xb6127243, "");
SYMBOL_CRC(drm_memcpy_from_wc, 0xa38c4c94, "");
SYMBOL_CRC(drm_open, 0x9f1b1ccb, "");
SYMBOL_CRC(drm_release, 0x900eb2e2, "");
SYMBOL_CRC(drm_release_noglobal, 0xba251b54, "");
SYMBOL_CRC(drm_read, 0x9843f4f0, "");
SYMBOL_CRC(drm_poll, 0x770d1ae6, "");
SYMBOL_CRC(drm_event_reserve_init_locked, 0x27b23e09, "");
SYMBOL_CRC(drm_event_reserve_init, 0xe2471c04, "");
SYMBOL_CRC(drm_event_cancel_free, 0x591b90c7, "");
SYMBOL_CRC(drm_send_event_timestamp_locked, 0xa1af9a6b, "");
SYMBOL_CRC(drm_send_event_locked, 0xaa537767, "");
SYMBOL_CRC(drm_send_event, 0xe2be127e, "");
SYMBOL_CRC(drm_gem_object_init, 0x103ee323, "");
SYMBOL_CRC(drm_gem_private_object_init, 0x080e6bac, "");
SYMBOL_CRC(drm_gem_handle_delete, 0x58750407, "");
SYMBOL_CRC(drm_gem_dumb_map_offset, 0x3e600d34, "_gpl");
SYMBOL_CRC(drm_gem_handle_create, 0x250f80ed, "");
SYMBOL_CRC(drm_gem_free_mmap_offset, 0x78edb01b, "");
SYMBOL_CRC(drm_gem_create_mmap_offset_size, 0x82b24e49, "");
SYMBOL_CRC(drm_gem_create_mmap_offset, 0xd9e84398, "");
SYMBOL_CRC(drm_gem_get_pages, 0x9190656b, "");
SYMBOL_CRC(drm_gem_put_pages, 0x8f748652, "");
SYMBOL_CRC(drm_gem_objects_lookup, 0x3f52bb2b, "");
SYMBOL_CRC(drm_gem_object_lookup, 0x36e7a85a, "");
SYMBOL_CRC(drm_gem_dma_resv_wait, 0xfd899ad9, "");
SYMBOL_CRC(drm_gem_object_release, 0x4d92fe55, "");
SYMBOL_CRC(drm_gem_object_free, 0xd680a377, "");
SYMBOL_CRC(drm_gem_vm_open, 0x4872931c, "");
SYMBOL_CRC(drm_gem_vm_close, 0x4fe840d6, "");
SYMBOL_CRC(drm_gem_mmap_obj, 0x0a8ac615, "");
SYMBOL_CRC(drm_gem_mmap, 0xdfbd0314, "");
SYMBOL_CRC(drm_gem_vmap, 0x5c6856f0, "");
SYMBOL_CRC(drm_gem_vunmap, 0xf7671801, "");
SYMBOL_CRC(drm_gem_lock_reservations, 0x55007ad8, "");
SYMBOL_CRC(drm_gem_unlock_reservations, 0xe8f7a07c, "");
SYMBOL_CRC(drm_gem_lru_init, 0xa956955b, "");
SYMBOL_CRC(drm_gem_lru_remove, 0x6da95bdf, "");
SYMBOL_CRC(drm_gem_lru_move_tail, 0x73efb38a, "");
SYMBOL_CRC(drm_gem_lru_scan, 0x89723b00, "");
SYMBOL_CRC(drm_noop, 0xca8404dd, "");
SYMBOL_CRC(drm_invalid_op, 0x87fe2751, "");
SYMBOL_CRC(drm_ioctl_kernel, 0xda180fa3, "");
SYMBOL_CRC(drm_ioctl, 0x6ad1dbf8, "");
SYMBOL_CRC(drm_ioctl_flags, 0x57b6efe3, "");
SYMBOL_CRC(drm_put_dev, 0x1b279605, "");
SYMBOL_CRC(drm_dev_enter, 0x615eee35, "");
SYMBOL_CRC(drm_dev_exit, 0xe8a034df, "");
SYMBOL_CRC(drm_dev_unplug, 0xd08fc3b7, "");
SYMBOL_CRC(__devm_drm_dev_alloc, 0x4ac5ff1d, "");
SYMBOL_CRC(drm_dev_alloc, 0x2fe6e701, "");
SYMBOL_CRC(drm_dev_get, 0x263ff7cf, "");
SYMBOL_CRC(drm_dev_put, 0xa8cf20b8, "");
SYMBOL_CRC(drm_dev_register, 0x926a1184, "");
SYMBOL_CRC(drm_dev_unregister, 0x36a2d760, "");
SYMBOL_CRC(drm_dev_set_unique, 0x3fa69564, "");
SYMBOL_CRC(drm_sysfs_hotplug_event, 0xbf1b6221, "");
SYMBOL_CRC(drm_sysfs_connector_hotplug_event, 0xac2d04c1, "");
SYMBOL_CRC(drm_sysfs_connector_status_event, 0x15eec5e1, "");
SYMBOL_CRC(drm_class_device_register, 0xffaa97ef, "_gpl");
SYMBOL_CRC(drm_class_device_unregister, 0x8b8c3b02, "_gpl");
SYMBOL_CRC(__drm_mm_interval_first, 0x25daad93, "");
SYMBOL_CRC(drm_mm_reserve_node, 0x2754dad8, "");
SYMBOL_CRC(drm_mm_insert_node_in_range, 0xb4032484, "");
SYMBOL_CRC(drm_mm_remove_node, 0x4b7ebf95, "");
SYMBOL_CRC(drm_mm_replace_node, 0x59056243, "");
SYMBOL_CRC(drm_mm_scan_init_with_range, 0x2a962499, "");
SYMBOL_CRC(drm_mm_scan_add_block, 0x2183c08c, "");
SYMBOL_CRC(drm_mm_scan_remove_block, 0x5f7985a5, "");
SYMBOL_CRC(drm_mm_scan_color_evict, 0xdf3f760d, "");
SYMBOL_CRC(drm_mm_init, 0xf0517d7a, "");
SYMBOL_CRC(drm_mm_takedown, 0x57698a50, "");
SYMBOL_CRC(drm_mm_print, 0x0f7acb66, "");
SYMBOL_CRC(drm_crtc_from_index, 0x0ee3d527, "");
SYMBOL_CRC(drm_crtc_init_with_planes, 0xf4bb29e6, "");
SYMBOL_CRC(drmm_crtc_init_with_planes, 0xe4628fcc, "");
SYMBOL_CRC(__drmm_crtc_alloc_with_planes, 0x75c49726, "");
SYMBOL_CRC(drm_crtc_cleanup, 0xc4ea9fd7, "");
SYMBOL_CRC(drm_mode_set_config_internal, 0xc8296a54, "");
SYMBOL_CRC(drm_crtc_check_viewport, 0x3325a4e0, "");
SYMBOL_CRC(drm_crtc_create_scaling_filter_property, 0x03c26b89, "");
SYMBOL_CRC(drm_mode_legacy_fb_format, 0x29f078d1, "");
SYMBOL_CRC(drm_driver_legacy_fb_format, 0x2611fa3f, "");
SYMBOL_CRC(drm_format_info, 0x55eb38da, "");
SYMBOL_CRC(drm_get_format_info, 0x3acf6219, "");
SYMBOL_CRC(drm_format_info_block_width, 0x74fc6fbd, "");
SYMBOL_CRC(drm_format_info_block_height, 0x982d09b3, "");
SYMBOL_CRC(drm_format_info_bpp, 0xe633a4cd, "");
SYMBOL_CRC(drm_format_info_min_pitch, 0x6910e4cd, "");
SYMBOL_CRC(drm_mode_debug_printmodeline, 0x2ed3c600, "");
SYMBOL_CRC(drm_mode_create, 0x7866936a, "");
SYMBOL_CRC(drm_mode_destroy, 0xfc50145d, "");
SYMBOL_CRC(drm_mode_probed_add, 0x76aa5977, "");
SYMBOL_CRC(drm_cvt_mode, 0xbdfe0af7, "");
SYMBOL_CRC(drm_gtf_mode_complex, 0x1fd5f448, "");
SYMBOL_CRC(drm_gtf_mode, 0x0261be04, "");
SYMBOL_CRC(drm_display_mode_from_videomode, 0x66cf2f64, "_gpl");
SYMBOL_CRC(drm_display_mode_to_videomode, 0xfe9f72f3, "_gpl");
SYMBOL_CRC(drm_bus_flags_from_videomode, 0xad885165, "_gpl");
SYMBOL_CRC(of_get_drm_display_mode, 0xd68dc257, "_gpl");
SYMBOL_CRC(of_get_drm_panel_display_mode, 0xe32e67bc, "_gpl");
SYMBOL_CRC(drm_mode_set_name, 0x4a35d30d, "");
SYMBOL_CRC(drm_mode_vrefresh, 0xf1b5340a, "");
SYMBOL_CRC(drm_mode_get_hv_timing, 0x4403a9c3, "");
SYMBOL_CRC(drm_mode_set_crtcinfo, 0x4575a0ca, "");
SYMBOL_CRC(drm_mode_copy, 0x9ce050be, "");
SYMBOL_CRC(drm_mode_init, 0xcdb99cc9, "");
SYMBOL_CRC(drm_mode_duplicate, 0xd0b9b98d, "");
SYMBOL_CRC(drm_mode_match, 0x9b95c885, "");
SYMBOL_CRC(drm_mode_equal, 0x0d9b4753, "");
SYMBOL_CRC(drm_mode_equal_no_clocks, 0x3ab87110, "");
SYMBOL_CRC(drm_mode_equal_no_clocks_no_stereo, 0x24d124ac, "");
SYMBOL_CRC(drm_mode_validate_driver, 0x94283778, "");
SYMBOL_CRC(drm_mode_validate_size, 0xd7a9cf42, "");
SYMBOL_CRC(drm_mode_validate_ycbcr420, 0x271132e2, "");
SYMBOL_CRC(drm_mode_prune_invalid, 0x507695c6, "");
SYMBOL_CRC(drm_mode_sort, 0xf1421d13, "");
SYMBOL_CRC(drm_connector_list_update, 0x6b0e45a8, "");
SYMBOL_CRC(drm_mode_parse_command_line_for_connector, 0xc2ebd56d, "");
SYMBOL_CRC(drm_mode_create_from_cmdline_mode, 0x3ba4f1ed, "");
SYMBOL_CRC(drm_mode_is_420_only, 0x0d7e35e2, "");
SYMBOL_CRC(drm_mode_is_420_also, 0x9f7fbed2, "");
SYMBOL_CRC(drm_mode_is_420, 0x8c35d2cf, "");
SYMBOL_CRC(drm_edid_header_is_valid, 0x9b9de1c1, "");
SYMBOL_CRC(drm_edid_are_equal, 0x24993e50, "");
SYMBOL_CRC(drm_edid_block_valid, 0xd13f9985, "");
SYMBOL_CRC(drm_edid_is_valid, 0x8d72789e, "");
SYMBOL_CRC(drm_add_override_edid_modes, 0x6ea1df26, "");
SYMBOL_CRC(drm_do_get_edid, 0x2be0d346, "_gpl");
SYMBOL_CRC(drm_edid_raw, 0x4489a5e9, "");
SYMBOL_CRC(drm_edid_alloc, 0x79c00fa2, "");
SYMBOL_CRC(drm_edid_dup, 0xb212dc3e, "");
SYMBOL_CRC(drm_edid_free, 0x397c3d27, "");
SYMBOL_CRC(drm_probe_ddc, 0xe679107b, "");
SYMBOL_CRC(drm_get_edid, 0x24f62e8f, "");
SYMBOL_CRC(drm_edid_read_custom, 0xd5d39850, "");
SYMBOL_CRC(drm_edid_read_ddc, 0xf23ca84f, "");
SYMBOL_CRC(drm_edid_read, 0x5594b19c, "");
SYMBOL_CRC(drm_edid_get_panel_id, 0xa256fb95, "");
SYMBOL_CRC(drm_get_edid_switcheroo, 0x61fed227, "");
SYMBOL_CRC(drm_edid_duplicate, 0x7edf470b, "");
SYMBOL_CRC(drm_mode_find_dmt, 0xdcf6f226, "");
SYMBOL_CRC(drm_match_cea_mode, 0x9b285573, "");
SYMBOL_CRC(drm_display_mode_from_cea_vic, 0x0d3dc39b, "");
SYMBOL_CRC(drm_edid_get_monitor_name, 0x7c545285, "");
SYMBOL_CRC(drm_edid_to_sad, 0x6ac01ea8, "");
SYMBOL_CRC(drm_edid_to_speaker_allocation, 0x3cdc37e9, "");
SYMBOL_CRC(drm_av_sync_delay, 0xc59bbfcb, "");
SYMBOL_CRC(drm_detect_hdmi_monitor, 0x38690d99, "");
SYMBOL_CRC(drm_detect_monitor_audio, 0xa248afde, "");
SYMBOL_CRC(drm_default_rgb_quant_range, 0x65702bd6, "");
SYMBOL_CRC(drm_edid_connector_update, 0xc3b748d7, "");
SYMBOL_CRC(drm_connector_update_edid_property, 0xc43d74f5, "");
SYMBOL_CRC(drm_add_edid_modes, 0xe907aeae, "");
SYMBOL_CRC(drm_add_modes_noedid, 0xe885391e, "");
SYMBOL_CRC(drm_set_preferred_mode, 0x06de615a, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_from_display_mode, 0x91a71650, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_quant_range, 0x3dab0487, "");
SYMBOL_CRC(drm_hdmi_vendor_infoframe_from_display_mode, 0x115e531f, "");
SYMBOL_CRC(drm_gem_dmabuf_export, 0xe1a983d6, "");
SYMBOL_CRC(drm_gem_dmabuf_release, 0x1579002a, "");
SYMBOL_CRC(drm_gem_prime_fd_to_handle, 0xe4c592bf, "");
SYMBOL_CRC(drm_gem_prime_handle_to_fd, 0x605deb95, "");
SYMBOL_CRC(drm_gem_map_attach, 0xc330731e, "");
SYMBOL_CRC(drm_gem_map_detach, 0x97c5570b, "");
SYMBOL_CRC(drm_gem_map_dma_buf, 0x87905531, "");
SYMBOL_CRC(drm_gem_unmap_dma_buf, 0xbb93e3c9, "");
SYMBOL_CRC(drm_gem_dmabuf_vmap, 0x2bed7aba, "");
SYMBOL_CRC(drm_gem_dmabuf_vunmap, 0xed5c0057, "");
SYMBOL_CRC(drm_gem_prime_mmap, 0x3c919a3d, "");
SYMBOL_CRC(drm_gem_dmabuf_mmap, 0x39354092, "");
SYMBOL_CRC(drm_prime_pages_to_sg, 0xefb7df84, "");
SYMBOL_CRC(drm_prime_get_contiguous_size, 0xd05fda43, "");
SYMBOL_CRC(drm_gem_prime_export, 0x3156b338, "");
SYMBOL_CRC(drm_gem_prime_import_dev, 0xbfa950cb, "");
SYMBOL_CRC(drm_gem_prime_import, 0x5bb89206, "");
SYMBOL_CRC(drm_prime_sg_to_page_array, 0x59706d1a, "");
SYMBOL_CRC(drm_prime_sg_to_dma_addr_array, 0x44a2cadb, "");
SYMBOL_CRC(drm_prime_gem_destroy, 0xe38d5d5d, "");
SYMBOL_CRC(drm_vma_offset_manager_init, 0x3c22a4d8, "");
SYMBOL_CRC(drm_vma_offset_manager_destroy, 0x07fb449a, "");
SYMBOL_CRC(drm_vma_offset_lookup_locked, 0xc7910e38, "");
SYMBOL_CRC(drm_vma_offset_add, 0xe8a0e334, "");
SYMBOL_CRC(drm_vma_offset_remove, 0x4831da6e, "");
SYMBOL_CRC(drm_vma_node_allow, 0xc7d04fc5, "");
SYMBOL_CRC(drm_vma_node_allow_once, 0x820ac5c0, "");
SYMBOL_CRC(drm_vma_node_revoke, 0x7b2e2166, "");
SYMBOL_CRC(drm_vma_node_is_allowed, 0x24cf437a, "");
SYMBOL_CRC(drm_modeset_lock_all, 0x5fa039db, "");
SYMBOL_CRC(drm_modeset_unlock_all, 0x7aca98bc, "");
SYMBOL_CRC(drm_warn_on_modeset_not_all_locked, 0xd10002b6, "");
SYMBOL_CRC(drm_modeset_acquire_init, 0x001d08ea, "");
SYMBOL_CRC(drm_modeset_acquire_fini, 0x6c904a77, "");
SYMBOL_CRC(drm_modeset_drop_locks, 0x5368b8de, "");
SYMBOL_CRC(drm_modeset_backoff, 0xcce1f06e, "");
SYMBOL_CRC(drm_modeset_lock_init, 0x1baab09a, "");
SYMBOL_CRC(drm_modeset_lock, 0xd35eac5f, "");
SYMBOL_CRC(drm_modeset_lock_single_interruptible, 0xb931c977, "");
SYMBOL_CRC(drm_modeset_unlock, 0x64c04783, "");
SYMBOL_CRC(drm_modeset_lock_all_ctx, 0x6955e641, "");
SYMBOL_CRC(__drm_crtc_commit_free, 0xae277372, "");
SYMBOL_CRC(drm_crtc_commit_wait, 0x2818ba27, "");
SYMBOL_CRC(drm_atomic_state_default_release, 0xdd01029a, "");
SYMBOL_CRC(drm_atomic_state_init, 0xb236267f, "");
SYMBOL_CRC(drm_atomic_state_alloc, 0x1c3c1cd1, "");
SYMBOL_CRC(drm_atomic_state_default_clear, 0x0bb14c59, "");
SYMBOL_CRC(drm_atomic_state_clear, 0x929edfa2, "");
SYMBOL_CRC(__drm_atomic_state_free, 0xb9cad492, "");
SYMBOL_CRC(drm_atomic_get_crtc_state, 0x8713ed03, "");
SYMBOL_CRC(drm_atomic_get_plane_state, 0xf7c1abb5, "");
SYMBOL_CRC(drm_atomic_private_obj_init, 0x40064408, "");
SYMBOL_CRC(drm_atomic_private_obj_fini, 0x4d327b16, "");
SYMBOL_CRC(drm_atomic_get_private_obj_state, 0x0ce588db, "");
SYMBOL_CRC(drm_atomic_get_old_private_obj_state, 0x45567923, "");
SYMBOL_CRC(drm_atomic_get_new_private_obj_state, 0xc4273b34, "");
SYMBOL_CRC(drm_atomic_get_old_connector_for_encoder, 0x048c0e33, "");
SYMBOL_CRC(drm_atomic_get_new_connector_for_encoder, 0x85fd4c24, "");
SYMBOL_CRC(drm_atomic_get_connector_state, 0x45cbe173, "");
SYMBOL_CRC(drm_atomic_get_bridge_state, 0x7c826ecf, "");
SYMBOL_CRC(drm_atomic_get_old_bridge_state, 0xbaaf0733, "");
SYMBOL_CRC(drm_atomic_get_new_bridge_state, 0x491c24d3, "");
SYMBOL_CRC(drm_atomic_add_encoder_bridges, 0x85d7d836, "");
SYMBOL_CRC(drm_atomic_add_affected_connectors, 0xa1147cc0, "");
SYMBOL_CRC(drm_atomic_add_affected_planes, 0x0b5dc866, "");
SYMBOL_CRC(drm_atomic_check_only, 0x0767421e, "");
SYMBOL_CRC(drm_atomic_commit, 0xeee4a6fa, "");
SYMBOL_CRC(drm_atomic_nonblocking_commit, 0x0bd077ad, "");
SYMBOL_CRC(__drm_atomic_helper_disable_plane, 0x30fae541, "");
SYMBOL_CRC(__drm_atomic_helper_set_config, 0x2ece5d8a, "");
SYMBOL_CRC(drm_atomic_print_new_state, 0xa6219343, "");
SYMBOL_CRC(drm_state_dump, 0x69e537e6, "");
SYMBOL_CRC(drm_bridge_add, 0x78f1ef1a, "");
SYMBOL_CRC(devm_drm_bridge_add, 0x17d524a5, "");
SYMBOL_CRC(drm_bridge_remove, 0xfd96c75e, "");
SYMBOL_CRC(drm_bridge_attach, 0xc5c926dd, "");
SYMBOL_CRC(drm_bridge_chain_mode_fixup, 0x3a8cc3fb, "");
SYMBOL_CRC(drm_bridge_chain_mode_valid, 0xf8972c44, "");
SYMBOL_CRC(drm_bridge_chain_disable, 0x2c40f06a, "");
SYMBOL_CRC(drm_bridge_chain_post_disable, 0xdc35ed20, "");
SYMBOL_CRC(drm_bridge_chain_mode_set, 0x004589ab, "");
SYMBOL_CRC(drm_bridge_chain_pre_enable, 0x2905818e, "");
SYMBOL_CRC(drm_bridge_chain_enable, 0x0851eee4, "");
SYMBOL_CRC(drm_atomic_bridge_chain_disable, 0x548a0d72, "");
SYMBOL_CRC(drm_atomic_bridge_chain_post_disable, 0xf2b1debd, "");
SYMBOL_CRC(drm_atomic_bridge_chain_pre_enable, 0x23aa0474, "");
SYMBOL_CRC(drm_atomic_bridge_chain_enable, 0xdfe840ad, "");
SYMBOL_CRC(drm_atomic_bridge_chain_check, 0x00a2376b, "");
SYMBOL_CRC(drm_bridge_detect, 0x49e14dc2, "_gpl");
SYMBOL_CRC(drm_bridge_get_modes, 0x35cb3f75, "_gpl");
SYMBOL_CRC(drm_bridge_get_edid, 0x44f7488e, "_gpl");
SYMBOL_CRC(drm_bridge_hpd_enable, 0x80276b12, "_gpl");
SYMBOL_CRC(drm_bridge_hpd_disable, 0x1d7e356f, "_gpl");
SYMBOL_CRC(drm_bridge_hpd_notify, 0xf3fb621b, "_gpl");
SYMBOL_CRC(of_drm_find_bridge, 0x0188def5, "");
SYMBOL_CRC(drm_framebuffer_init, 0xae71e8bb, "");
SYMBOL_CRC(drm_framebuffer_lookup, 0xc206229f, "");
SYMBOL_CRC(drm_framebuffer_unregister_private, 0x2e1a1dc2, "");
SYMBOL_CRC(drm_framebuffer_cleanup, 0x02096e63, "");
SYMBOL_CRC(drm_framebuffer_remove, 0x993cdf8c, "");
SYMBOL_CRC(drm_framebuffer_plane_width, 0xcebb27f4, "");
SYMBOL_CRC(drm_framebuffer_plane_height, 0xd6e741ea, "");
SYMBOL_CRC(drm_get_connector_type_name, 0xf406e46a, "");
SYMBOL_CRC(drm_connector_init, 0xd1ae25e5, "");
SYMBOL_CRC(drm_connector_init_with_ddc, 0xd977825a, "");
SYMBOL_CRC(drmm_connector_init, 0xdc45c9fc, "");
SYMBOL_CRC(drm_connector_attach_edid_property, 0x331b42a2, "");
SYMBOL_CRC(drm_connector_attach_encoder, 0xd13bcc7f, "");
SYMBOL_CRC(drm_connector_has_possible_encoder, 0x96e34496, "");
SYMBOL_CRC(drm_connector_cleanup, 0x6626ed76, "");
SYMBOL_CRC(drm_connector_register, 0x1f9d9ebb, "");
SYMBOL_CRC(drm_connector_unregister, 0x57f5eec1, "");
SYMBOL_CRC(drm_get_connector_status_name, 0x0fd60df2, "");
SYMBOL_CRC(drm_connector_list_iter_begin, 0xfc3dc05b, "");
SYMBOL_CRC(drm_connector_list_iter_next, 0xcbaa3e9f, "");
SYMBOL_CRC(drm_connector_list_iter_end, 0xf2105b38, "");
SYMBOL_CRC(drm_get_subpixel_order_name, 0x107742a9, "");
SYMBOL_CRC(drm_display_info_set_bus_formats, 0xbdac567a, "");
SYMBOL_CRC(drm_mode_create_dvi_i_properties, 0x05da8ccb, "");
SYMBOL_CRC(drm_connector_attach_dp_subconnector_property, 0x034b831c, "");
SYMBOL_CRC(drm_connector_attach_content_type_property, 0xf6babc2c, "");
SYMBOL_CRC(drm_connector_attach_tv_margin_properties, 0x343a7354, "");
SYMBOL_CRC(drm_mode_create_tv_margin_properties, 0x61281c8a, "");
SYMBOL_CRC(drm_mode_create_tv_properties, 0x575e686e, "");
SYMBOL_CRC(drm_mode_create_scaling_mode_property, 0x1e15f3ed, "");
SYMBOL_CRC(drm_connector_attach_vrr_capable_property, 0x0d35acfd, "");
SYMBOL_CRC(drm_connector_attach_scaling_mode_property, 0xbf8b943f, "");
SYMBOL_CRC(drm_mode_create_aspect_ratio_property, 0xa59dd17d, "");
SYMBOL_CRC(drm_mode_create_hdmi_colorspace_property, 0x0775ca19, "");
SYMBOL_CRC(drm_mode_create_dp_colorspace_property, 0xa68109c3, "");
SYMBOL_CRC(drm_mode_create_content_type_property, 0xbd05cf14, "");
SYMBOL_CRC(drm_mode_create_suggested_offset_properties, 0xd1a06121, "");
SYMBOL_CRC(drm_connector_set_path_property, 0xabaa8020, "");
SYMBOL_CRC(drm_connector_set_tile_property, 0xd47cd666, "");
SYMBOL_CRC(drm_connector_set_link_status_property, 0x4fc56214, "");
SYMBOL_CRC(drm_connector_attach_max_bpc_property, 0x512100a3, "");
SYMBOL_CRC(drm_connector_attach_hdr_output_metadata_property, 0xe2e1378e, "");
SYMBOL_CRC(drm_connector_attach_colorspace_property, 0x77117430, "");
SYMBOL_CRC(drm_connector_atomic_hdr_metadata_equal, 0x5025cef4, "");
SYMBOL_CRC(drm_connector_set_vrr_capable_property, 0xa941dd1c, "");
SYMBOL_CRC(drm_connector_set_panel_orientation, 0x8045c8cb, "");
SYMBOL_CRC(drm_connector_set_panel_orientation_with_quirk, 0x5430367d, "");
SYMBOL_CRC(drm_connector_set_orientation_from_panel, 0xbea1d9ef, "");
SYMBOL_CRC(drm_connector_create_privacy_screen_properties, 0x33ba4ef2, "");
SYMBOL_CRC(drm_connector_attach_privacy_screen_properties, 0x1ed5ce5d, "");
SYMBOL_CRC(drm_connector_attach_privacy_screen_provider, 0x8dcf01db, "");
SYMBOL_CRC(drm_connector_update_privacy_screen, 0x7b6ba27b, "");
SYMBOL_CRC(drm_connector_oob_hotplug_event, 0xc731bea6, "");
SYMBOL_CRC(drm_mode_put_tile_group, 0x32d9413e, "");
SYMBOL_CRC(drm_mode_get_tile_group, 0x75e752f2, "");
SYMBOL_CRC(drm_mode_create_tile_group, 0x697d8249, "");
SYMBOL_CRC(drm_plane_create_alpha_property, 0x5fcdcc5e, "");
SYMBOL_CRC(drm_plane_create_rotation_property, 0x6a1df4f7, "");
SYMBOL_CRC(drm_rotation_simplify, 0xdf666902, "");
SYMBOL_CRC(drm_plane_create_zpos_property, 0x8cf4d943, "");
SYMBOL_CRC(drm_plane_create_zpos_immutable_property, 0xacffcd3d, "");
SYMBOL_CRC(drm_atomic_normalize_zpos, 0x3ae4cc3b, "");
SYMBOL_CRC(drm_plane_create_blend_mode_property, 0x516e54fc, "");
SYMBOL_CRC(drm_encoder_init, 0xab7f6000, "");
SYMBOL_CRC(drm_encoder_cleanup, 0xede242fc, "");
SYMBOL_CRC(__drmm_encoder_alloc, 0x8d13a209, "");
SYMBOL_CRC(drmm_encoder_init, 0x912f220f, "");
SYMBOL_CRC(drm_mode_object_find, 0x90136fd4, "");
SYMBOL_CRC(drm_mode_object_put, 0xee2b4800, "");
SYMBOL_CRC(drm_mode_object_get, 0x801e4086, "");
SYMBOL_CRC(drm_object_attach_property, 0x0d85a67a, "");
SYMBOL_CRC(drm_object_property_set_value, 0x2c9aacaf, "");
SYMBOL_CRC(drm_object_property_get_value, 0x70b976ae, "");
SYMBOL_CRC(drm_object_property_get_default_value, 0xaf9e5322, "");
SYMBOL_CRC(drm_property_create, 0x67ffc24e, "");
SYMBOL_CRC(drm_property_create_enum, 0x0098a8d3, "");
SYMBOL_CRC(drm_property_create_bitmask, 0xf6f7b85e, "");
SYMBOL_CRC(drm_property_create_range, 0xa32a5d26, "");
SYMBOL_CRC(drm_property_create_signed_range, 0xfbc40a98, "");
SYMBOL_CRC(drm_property_create_object, 0x1dccc421, "");
SYMBOL_CRC(drm_property_create_bool, 0xe1ee7065, "");
SYMBOL_CRC(drm_property_add_enum, 0xb80fe902, "");
SYMBOL_CRC(drm_property_destroy, 0x6b486e9f, "");
SYMBOL_CRC(drm_property_create_blob, 0xceb9b5db, "");
SYMBOL_CRC(drm_property_blob_put, 0xa6e3d846, "");
SYMBOL_CRC(drm_property_blob_get, 0xac5f6e23, "");
SYMBOL_CRC(drm_property_lookup_blob, 0xc3e325bf, "");
SYMBOL_CRC(drm_property_replace_global_blob, 0xe4e3179c, "");
SYMBOL_CRC(drm_property_replace_blob, 0x49516e5a, "");
SYMBOL_CRC(drm_universal_plane_init, 0x23f09b8c, "");
SYMBOL_CRC(__drmm_universal_plane_alloc, 0x8940d1b7, "");
SYMBOL_CRC(__drm_universal_plane_alloc, 0x73d8511b, "");
SYMBOL_CRC(drm_plane_cleanup, 0xf68b7619, "");
SYMBOL_CRC(drm_plane_from_index, 0xf106a62d, "");
SYMBOL_CRC(drm_plane_force_disable, 0xd9d8d5ea, "");
SYMBOL_CRC(drm_mode_plane_set_obj_prop, 0x01347360, "");
SYMBOL_CRC(drm_any_plane_has_format, 0xd6f7d3ce, "");
SYMBOL_CRC(drm_plane_enable_fb_damage_clips, 0x40d006f6, "");
SYMBOL_CRC(drm_plane_get_damage_clips_count, 0x030cf559, "");
SYMBOL_CRC(drm_plane_get_damage_clips, 0xffdfb124, "");
SYMBOL_CRC(drm_plane_create_scaling_filter_property, 0x7aa923c9, "");
SYMBOL_CRC(drm_color_ctm_s31_32_to_qm_n, 0xad4e902b, "");
SYMBOL_CRC(drm_crtc_enable_color_mgmt, 0x3bb325a7, "");
SYMBOL_CRC(drm_mode_crtc_set_gamma_size, 0xd2581d9a, "");
SYMBOL_CRC(drm_plane_create_color_properties, 0x9eac123a, "");
SYMBOL_CRC(drm_plane_create_chroma_siting_properties, 0xa83564c7, "");
SYMBOL_CRC(drm_color_lut_check, 0x7099ac7f, "");
SYMBOL_CRC(__drm_debug, 0x69353664, "");
SYMBOL_CRC(__drm_puts_coredump, 0x3b0e5e9c, "");
SYMBOL_CRC(__drm_printfn_coredump, 0xea00fe81, "");
SYMBOL_CRC(__drm_puts_seq_file, 0x513072fe, "");
SYMBOL_CRC(__drm_printfn_seq_file, 0xfeb953b1, "");
SYMBOL_CRC(__drm_printfn_info, 0xe317082a, "");
SYMBOL_CRC(__drm_printfn_debug, 0xf824c7db, "");
SYMBOL_CRC(__drm_printfn_err, 0x3f405489, "");
SYMBOL_CRC(drm_puts, 0x521ad6d0, "");
SYMBOL_CRC(drm_printf, 0x28779e52, "");
SYMBOL_CRC(drm_print_bits, 0x32a0cc37, "");
SYMBOL_CRC(drm_dev_printk, 0x03d14056, "");
SYMBOL_CRC(__drm_dev_dbg, 0x9ef7759c, "");
SYMBOL_CRC(___drm_dbg, 0x7e3277f8, "");
SYMBOL_CRC(__drm_err, 0xb11ac7a7, "");
SYMBOL_CRC(drm_print_regset32, 0x5a08fb41, "");
SYMBOL_CRC(drm_mode_config_reset, 0x4ebf3a06, "");
SYMBOL_CRC(drmm_mode_config_init, 0xea07978c, "");
SYMBOL_CRC(drm_mode_config_cleanup, 0x927531ae, "");
SYMBOL_CRC(drm_crtc_accurate_vblank_count, 0xeeb36c2b, "");
SYMBOL_CRC(drm_vblank_init, 0x7d3f5fa7, "");
SYMBOL_CRC(drm_dev_has_vblank, 0xb596ea87, "");
SYMBOL_CRC(drm_crtc_vblank_waitqueue, 0x6d787a1d, "");
SYMBOL_CRC(drm_calc_timestamping_constants, 0xf34ae7d5, "");
SYMBOL_CRC(drm_crtc_vblank_helper_get_vblank_timestamp_internal, 0x2ed1fe7d, "");
SYMBOL_CRC(drm_crtc_vblank_helper_get_vblank_timestamp, 0xdc66340f, "");
SYMBOL_CRC(drm_crtc_vblank_count, 0x9977a883, "");
SYMBOL_CRC(drm_crtc_vblank_count_and_time, 0x74cb06f1, "");
SYMBOL_CRC(drm_crtc_arm_vblank_event, 0xcf0bf4d5, "");
SYMBOL_CRC(drm_crtc_send_vblank_event, 0x89c154bb, "");
SYMBOL_CRC(drm_crtc_vblank_get, 0x8d048958, "");
SYMBOL_CRC(drm_crtc_vblank_put, 0x799d9d85, "");
SYMBOL_CRC(drm_wait_one_vblank, 0xa63a5071, "");
SYMBOL_CRC(drm_crtc_wait_one_vblank, 0x5d8a3fcd, "");
SYMBOL_CRC(drm_crtc_vblank_off, 0xd316d017, "");
SYMBOL_CRC(drm_crtc_vblank_reset, 0xec5457c9, "");
SYMBOL_CRC(drm_crtc_set_max_vblank_count, 0x3f2cbd26, "");
SYMBOL_CRC(drm_crtc_vblank_on, 0x1bf56136, "");
SYMBOL_CRC(drm_crtc_vblank_restore, 0xc9ec6a64, "");
SYMBOL_CRC(drm_handle_vblank, 0x2fe375df, "");
SYMBOL_CRC(drm_crtc_handle_vblank, 0x2c82aa02, "");
SYMBOL_CRC(drm_syncobj_find, 0x6b3e7cdd, "");
SYMBOL_CRC(drm_syncobj_add_point, 0x6b855283, "");
SYMBOL_CRC(drm_syncobj_replace_fence, 0x45cb22c6, "");
SYMBOL_CRC(drm_syncobj_find_fence, 0xba852468, "");
SYMBOL_CRC(drm_syncobj_free, 0x1a411479, "");
SYMBOL_CRC(drm_syncobj_create, 0x9fc944ab, "");
SYMBOL_CRC(drm_syncobj_get_handle, 0x8b694151, "");
SYMBOL_CRC(drm_syncobj_get_fd, 0x95a7acc6, "");
SYMBOL_CRC(drm_timeout_abs_to_jiffies, 0x50674de7, "");
SYMBOL_CRC(drm_writeback_connector_init, 0xf19f22af, "");
SYMBOL_CRC(drm_writeback_connector_init_with_encoder, 0x553a9d2c, "");
SYMBOL_CRC(drm_writeback_prepare_job, 0xc03044de, "");
SYMBOL_CRC(drm_writeback_queue_job, 0x394327c1, "");
SYMBOL_CRC(drm_writeback_cleanup_job, 0xe7d43f21, "");
SYMBOL_CRC(drm_writeback_signal_completion, 0x25d5a8a1, "");
SYMBOL_CRC(drm_writeback_get_out_fence, 0x3627eb54, "");
SYMBOL_CRC(drm_client_init, 0x11a9e9b0, "");
SYMBOL_CRC(drm_client_register, 0xe8523dc6, "");
SYMBOL_CRC(drm_client_release, 0x4672d742, "");
SYMBOL_CRC(drm_client_dev_hotplug, 0x589fa5e4, "");
SYMBOL_CRC(drm_client_buffer_vmap, 0x30164b21, "");
SYMBOL_CRC(drm_client_buffer_vunmap, 0x4a279750, "");
SYMBOL_CRC(drm_client_framebuffer_create, 0xc20b45b5, "");
SYMBOL_CRC(drm_client_framebuffer_delete, 0x5fbee263, "");
SYMBOL_CRC(drm_client_framebuffer_flush, 0xa7d00505, "");
SYMBOL_CRC(drm_client_modeset_probe, 0x5f678dd2, "");
SYMBOL_CRC(drm_client_rotation, 0x73a81429, "");
SYMBOL_CRC(drm_client_modeset_check, 0x6ab94eca, "");
SYMBOL_CRC(drm_client_modeset_commit_locked, 0xb7ba3155, "");
SYMBOL_CRC(drm_client_modeset_commit, 0xd45267de, "");
SYMBOL_CRC(drm_client_modeset_dpms, 0xb2e88ac0, "");
SYMBOL_CRC(drm_atomic_set_mode_for_crtc, 0xf8edfa8a, "");
SYMBOL_CRC(drm_atomic_set_mode_prop_for_crtc, 0xd1879a27, "");
SYMBOL_CRC(drm_atomic_set_crtc_for_plane, 0xc6ade851, "");
SYMBOL_CRC(drm_atomic_set_fb_for_plane, 0xf5e4a624, "");
SYMBOL_CRC(drm_atomic_set_crtc_for_connector, 0x08b93509, "");
SYMBOL_CRC(__drmm_add_action, 0xbb63650c, "");
SYMBOL_CRC(__drmm_add_action_or_reset, 0xb1b87f8b, "");
SYMBOL_CRC(drmm_kmalloc, 0x6214ef5e, "");
SYMBOL_CRC(drmm_kstrdup, 0x7a74d0b6, "_gpl");
SYMBOL_CRC(drmm_kfree, 0x23587e3e, "");
SYMBOL_CRC(__drmm_mutex_release, 0xa67a79b8, "");
SYMBOL_CRC(drm_vblank_work_schedule, 0xa8022dc0, "");
SYMBOL_CRC(drm_vblank_work_cancel_sync, 0x7d8bca55, "");
SYMBOL_CRC(drm_vblank_work_flush, 0xbb93ee6c, "");
SYMBOL_CRC(drm_vblank_work_init, 0xf594f9dd, "");
SYMBOL_CRC(drm_compat_ioctl, 0x775ac972, "");
SYMBOL_CRC(drm_panel_init, 0x1cc54447, "");
SYMBOL_CRC(drm_panel_add, 0x7234209d, "");
SYMBOL_CRC(drm_panel_remove, 0x858e48ec, "");
SYMBOL_CRC(drm_panel_prepare, 0x69dc7eb9, "");
SYMBOL_CRC(drm_panel_unprepare, 0xeee850af, "");
SYMBOL_CRC(drm_panel_enable, 0x231d2a9c, "");
SYMBOL_CRC(drm_panel_disable, 0x495c6f7c, "");
SYMBOL_CRC(drm_panel_get_modes, 0x1ac08f91, "");
SYMBOL_CRC(of_drm_find_panel, 0x24a4d757, "");
SYMBOL_CRC(of_drm_get_panel_orientation, 0xc6ba5f54, "");
SYMBOL_CRC(drm_panel_of_backlight, 0xe9e7c6aa, "");
SYMBOL_CRC(drm_of_crtc_port_mask, 0x13479c66, "");
SYMBOL_CRC(drm_of_find_possible_crtcs, 0xe61322ca, "");
SYMBOL_CRC(drm_of_component_match_add, 0xae4c1d14, "_gpl");
SYMBOL_CRC(drm_of_component_probe, 0x3b470023, "");
SYMBOL_CRC(drm_of_encoder_active_endpoint, 0x3312e12d, "_gpl");
SYMBOL_CRC(drm_of_find_panel_or_bridge, 0x566d173a, "_gpl");
SYMBOL_CRC(drm_of_lvds_get_dual_link_pixel_order, 0x1a826ebb, "_gpl");
SYMBOL_CRC(drm_of_lvds_get_data_mapping, 0xf996de7d, "_gpl");
SYMBOL_CRC(drm_of_get_data_lanes_count, 0x40b4c470, "_gpl");
SYMBOL_CRC(drm_of_get_data_lanes_count_ep, 0x2c5cb276, "_gpl");
SYMBOL_CRC(drm_debugfs_create_files, 0xe8d25f2c, "");
SYMBOL_CRC(drm_debugfs_remove_files, 0x3b283191, "");
SYMBOL_CRC(drm_crtc_add_crc_entry, 0x154eb438, "_gpl");
SYMBOL_CRC(__drm_set_edid_firmware_path, 0x31b8a5e3, "");
SYMBOL_CRC(__drm_get_edid_firmware_path, 0x03c63897, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x1425e33, "try_module_get" },
	{ 0x21fbe96a, "anon_inode_getfile" },
	{ 0x12b5728e, "ww_mutex_lock_interruptible" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6fff66d1, "alloc_anon_inode" },
	{ 0x8ac2b823, "show_class_attr_string" },
	{ 0xb514fdb4, "kthread_cancel_work_sync" },
	{ 0xd8f35008, "kthread_create_worker" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0xea8bd014, "kthread_flush_work" },
	{ 0x3f26f22e, "bpf_trace_run4" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x853d16c8, "__class_create" },
	{ 0x20978fb9, "idr_find" },
	{ 0x991da2cb, "param_ops_ulong" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xebc58dfd, "component_master_add_with_match" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0xe1d46b94, "dma_resv_init" },
	{ 0x2c91e17c, "vm_get_page_prot" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xd1517ee5, "dma_resv_wait_timeout" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8b618d08, "overflowuid" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0xe84dd25b, "kthread_flush_worker" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6749d53f, "hdmi_vendor_infoframe_init" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x74a05018, "request_firmware" },
	{ 0x3486581a, "class_destroy" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x4b47c09f, "of_graph_is_present" },
	{ 0x96848186, "scnprintf" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0xf0d2cec0, "ww_mutex_unlock" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0x9a02d912, "fd_install" },
	{ 0x2293ac3, "dma_fence_chain_ops" },
	{ 0x7d0cdd04, "of_graph_parse_endpoint" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7ea712b8, "unmap_mapping_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a4864ce, "iput" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xf53a8fc6, "of_node_get" },
	{ 0xa181e5c2, "of_graph_get_remote_port_parent" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x562c64ed, "of_graph_get_remote_port" },
	{ 0x92034402, "__pagevec_release" },
	{ 0xe2964344, "__wake_up" },
	{ 0x8e21c9a1, "dma_fence_add_callback" },
	{ 0x919a6abb, "synchronize_srcu" },
	{ 0xf7dca34a, "get_device" },
	{ 0x68b26e2c, "dma_buf_attach" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x69599b03, "class_create_file_ns" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x60b985d3, "of_graph_get_endpoint_by_regs" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xc5e3d1e9, "ww_mutex_trylock" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x6562c4f7, "devm_of_find_backlight" },
	{ 0xbeedee72, "of_get_next_child" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x4b41d70a, "dma_max_mapping_size" },
	{ 0x606b7e51, "put_device" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x59e37a62, "dma_buf_export" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x6295fde1, "dma_buf_map_attachment" },
	{ 0xfc691f80, "aperture_remove_conflicting_devices" },
	{ 0x3cc58914, "kthread_queue_work" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x3b20fb95, "dma_fence_remove_callback" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcc793c4a, "module_put" },
	{ 0xcfc9deaf, "atomic_dec_and_mutex_lock" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd903f981, "devm_add_action" },
	{ 0xa6cccc4f, "sysfs_create_link" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb290ada, "dma_fence_chain_walk" },
	{ 0xe003cc13, "mark_page_accessed" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x36277c48, "__task_pid_nr_ns" },
	{ 0xec7546ac, "kobject_uevent_env" },
	{ 0x4ea5d10, "ksize" },
	{ 0x4e547048, "__kmalloc_node_track_caller" },
	{ 0x5a88482, "shmem_file_setup" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x13f26ae, "dma_fence_get_stub" },
	{ 0x2e439142, "drm_get_panel_orientation_quirk" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0xe2bce892, "fput" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb7c0f443, "sort" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x334ea568, "dma_buf_unmap_attachment" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x7bbe500c, "device_add" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0x111e0ce2, "sysfs_remove_link" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xaf6a9c59, "pid_task" },
	{ 0xc9377098, "__srcu_read_lock" },
	{ 0x587b0954, "kvasprintf" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0xa1d8004a, "videomode_from_timing" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xed53c4ec, "noop_llseek" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0xca84062e, "dma_resv_fini" },
	{ 0x954f099c, "idr_preload" },
	{ 0x7c9ca58f, "__sg_page_iter_next" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0xfbb8a761, "strscpy_pad" },
	{ 0xdf48bbcd, "dma_buf_get" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x286db752, "aperture_remove_conflicting_pci_devices" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x851f2e7c, "ww_mutex_lock" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0x9166fada, "strncpy" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x930dc0fe, "shmem_read_mapping_page_gfp" },
	{ 0xecf7a0d8, "of_property_count_elems_of_size" },
	{ 0x6b4d7fc, "dma_buf_put" },
	{ 0xffb7c514, "ida_free" },
	{ 0xad10f944, "dma_buf_fd" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x3c5dae42, "of_graph_get_next_endpoint" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3d0fa060, "of_device_is_available" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xb9d6f93d, "of_graph_get_remote_node" },
	{ 0xab781570, "fb_get_options" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x321cdbf, "of_alias_get_highest_id" },
	{ 0x11089ac7, "_ctype" },
	{ 0x4c74bd14, "device_register" },
	{ 0x402beac3, "device_del" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xd2ba40a8, "sg_alloc_table_from_pages_segment" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xdc58f5d4, "param_ops_string" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4cff533c, "component_release_of" },
	{ 0x95ebebb1, "devm_aperture_acquire_for_platform_device" },
	{ 0x2401f611, "set_page_dirty" },
	{ 0x2d27845e, "init_pseudo" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x7de4bde7, "bpf_trace_run3" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x25e58a09, "hdmi_avi_infoframe_init" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0x5561da8a, "platform_device_register_full" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0x94dd8b22, "dma_map_sgtable" },
	{ 0xde5d6a8f, "kthread_destroy_worker" },
	{ 0xa06ddfa6, "component_match_add_release" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd88defca, "__dma_fence_unwrap_merge" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x23b7cdca, "dentry_open" },
	{ 0xe091c977, "list_sort" },
	{ 0x87b8798d, "sg_next" },
	{ 0xcc167ba2, "of_get_videomode" },
	{ 0x41fabaf5, "__register_chrdev" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5185d51b, "seq_write" },
	{ 0x74ba4e3d, "platform_bus_type" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x58315632, "__srcu_read_unlock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x98ce1f5a, "of_alias_get_id" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x297c8a7d, "dma_fence_allocate_private_stub" },
	{ 0x4eff4af, "dma_buf_detach" },
	{ 0x629079b3, "dma_fence_signal_timestamp" },
	{ 0x3397f3ab, "dma_fence_chain_init" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x9d3b72b5, "check_move_unevictable_pages" },
	{ 0xf5f0f3fa, "pid_vnr" },
	{ 0xaf9d2913, "sched_set_fifo" },
	{ 0xab5ee2f3, "of_node_name_eq" },
	{ 0xef10062a, "simple_release_fs" },
	{ 0xa71a044a, "dma_unmap_sg_attrs" },
	{ 0x84883f1, "kill_anon_super" },
	{ 0x4afd9810, "from_kuid_munged" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x81188c30, "match_string" },
	{ 0x1d877bf, "fwnode_handle_put" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xcc328a5c, "reservation_ww_class" },
	{ 0x98cf60b3, "strlen" },
	{ 0x77358855, "iomem_resource" },
	{ 0x4e4f0f16, "dma_fence_chain_find_seqno" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x97f91466, "_dev_printk" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb3c6f341, "single_open" },
	{ 0x349cba85, "strchr" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x4dca08ee, "sync_file_get_fence" },
	{ 0xf32f0db2, "put_pid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6cba88c1, "pci_bus_type" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xfa299555, "of_get_display_timing" },
	{ 0xb6bf8684, "class_remove_file_ns" },
	{ 0xf9a7d75d, "simple_pin_fs" },
	{ 0x58f06b14, "sync_file_create" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "backlight,drm_panel_orientation_quirks");


MODULE_INFO(srcversion, "A3773479DE49375F38ED091");
