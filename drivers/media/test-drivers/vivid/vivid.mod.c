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
	{ 0x8e8b29e5, "vb2_queue_init" },
	{ 0xb0dea802, "unregister_framebuffer" },
	{ 0xbe98573a, "vb2_queue_change_type" },
	{ 0xc4ef58d, "v4l2_ctrl_poll" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0x11474f30, "media_device_unregister" },
	{ 0x7b6ac78f, "v4l2_phys_addr_validate" },
	{ 0x81383137, "v4l2_event_wake_all" },
	{ 0x973151f0, "v4l2_device_put" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x6d96795, "vb2_ioctl_expbuf" },
	{ 0x4a3bb5af, "media_device_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x88afcacd, "cfb_copyarea" },
	{ 0xf30a51a3, "v4l2_ctrl_add_handler" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0x817b7dd7, "v4l2_src_change_event_subscribe" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x7bccd8df, "cec_s_phys_addr" },
	{ 0x40dc7cd, "tpg_aspect_strings" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa5e6e449, "vb2_dma_contig_memops" },
	{ 0xc07b2c9d, "__media_device_register" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x3aa68d7a, "v4l2_find_dv_timings_cap" },
	{ 0x75e8e3e4, "vb2_video_unregister_device" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0xcaede3e2, "tpg_fill_plane_buffer" },
	{ 0x9e1e6959, "v4l2_ctrl_auto_cluster" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x4487cc6c, "vb2_fop_write" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x92997ed8, "_printk" },
	{ 0x2b3bd22e, "v4l2_ctrl_handler_setup" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x20bcae4a, "vb2_queue_error" },
	{ 0x504dc113, "v4l2_ctrl_request_complete" },
	{ 0xbcec384c, "vb2_fop_release" },
	{ 0x2c79d221, "platform_device_register" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x62d2a046, "__v4l2_ctrl_s_ctrl" },
	{ 0x81cd8c1f, "media_device_cleanup" },
	{ 0x958448b, "v4l2_set_edid_phys_addr" },
	{ 0x3d472475, "__v4l2_ctrl_s_ctrl_string" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x67a41807, "__v4l2_ctrl_grab" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0xa8468d6f, "v4l2_ctrl_request_setup" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xce8159bb, "tpg_pattern_strings" },
	{ 0x61cd22a1, "vb2_ioctl_create_bufs" },
	{ 0x5dc59ae6, "v4l2_ctrl_new_custom" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0x751c5e55, "vb2_ioctl_prepare_buf" },
	{ 0x3855cb2a, "v4l2_fh_is_singular" },
	{ 0x370cfe6e, "v4l2_dv_timings_presets" },
	{ 0xbc0e3807, "v4l2_fh_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xaa5503d9, "tpg_set_font" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x3c2f60b0, "register_framebuffer" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x2d4daef5, "find_font" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xd7889a07, "cec_unregister_adapter" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x1612c0b, "v4l2_detect_gtf" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc8c41a62, "freezing_slow_path" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0xe2169014, "tpg_log_status" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe3e29976, "cfb_imageblit" },
	{ 0xbe4de675, "cec_get_edid_phys_addr" },
	{ 0xf8fcc56c, "vb2_vmalloc_memops" },
	{ 0xf4517207, "__v4l2_ctrl_modify_dimensions" },
	{ 0x300664f1, "vb2_request_queue" },
	{ 0xdcb764ad, "memset" },
	{ 0x7e83543f, "tpg_s_crop_compose" },
	{ 0x390eb7ec, "v4l2_ctrl_new_std_menu" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x5b3a0411, "vb2_fop_read" },
	{ 0xae575c8f, "v4l2_phys_addr_for_input" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xe7ee5819, "tpg_s_fourcc" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xbbc315dd, "tpg_update_mv_step" },
	{ 0xf7a5f765, "tpg_calc_text_basep" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0xdd64e639, "strscpy" },
	{ 0x57529704, "v4l2_ctrl_activate" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xa5ae2f67, "vb2_request_validate" },
	{ 0xbbca9f1f, "cfb_fillrect" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xf7ec0949, "tpg_reset_source" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x15c074e1, "v4l2_ctrl_g_ctrl" },
	{ 0x6cfe2b3a, "__v4l2_ctrl_modify_range" },
	{ 0xa97e00eb, "v4l2_detect_cvt" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0xe6f04b89, "tpg_alloc" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0xba5e6261, "v4l2_ctrl_log_status" },
	{ 0x21bfae4e, "tpg_gen_text" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x21b68677, "v4l2_event_queue" },
	{ 0xa8a3f406, "tpg_free" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0x61c51a7b, "v4l2_ctrl_cluster" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xb052969d, "tpg_init" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,v4l2-dv-timings,mc,cec,v4l2-tpg,videobuf2-dma-contig,videobuf2-common,videobuf2-vmalloc");


MODULE_INFO(srcversion, "7EBFE089427F35D671190F1");
