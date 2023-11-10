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

SYMBOL_CRC(video_device_alloc, 0x744cbed2, "");
SYMBOL_CRC(video_device_release, 0x7c9a31a1, "");
SYMBOL_CRC(video_device_release_empty, 0x8a07bc13, "");
SYMBOL_CRC(video_devdata, 0x663b757a, "");
SYMBOL_CRC(v4l2_prio_init, 0xb77b0159, "");
SYMBOL_CRC(v4l2_prio_change, 0x3bdd0f94, "");
SYMBOL_CRC(v4l2_prio_open, 0x2342f1ae, "");
SYMBOL_CRC(v4l2_prio_close, 0xcda04a5b, "");
SYMBOL_CRC(v4l2_prio_max, 0x8106095a, "");
SYMBOL_CRC(v4l2_prio_check, 0x16244fe5, "");
SYMBOL_CRC(__video_register_device, 0x73ef0476, "");
SYMBOL_CRC(video_unregister_device, 0x4f85f5c6, "");
SYMBOL_CRC(video_device_pipeline_start, 0xab85b3b2, "_gpl");
SYMBOL_CRC(__video_device_pipeline_start, 0x09451147, "_gpl");
SYMBOL_CRC(video_device_pipeline_stop, 0x6612f35f, "_gpl");
SYMBOL_CRC(__video_device_pipeline_stop, 0x295dfb05, "_gpl");
SYMBOL_CRC(video_device_pipeline_alloc_start, 0x07f75ee1, "_gpl");
SYMBOL_CRC(video_device_pipeline, 0xb70e9bcb, "_gpl");
SYMBOL_CRC(v4l2_norm_to_name, 0xf3251e7b, "");
SYMBOL_CRC(v4l2_video_std_frame_period, 0x0614dd5a, "");
SYMBOL_CRC(v4l2_video_std_construct, 0xe2b92059, "");
SYMBOL_CRC(v4l2_field_names, 0x3adbd595, "");
SYMBOL_CRC(v4l2_type_names, 0x123959a1, "");
SYMBOL_CRC(v4l_printk_ioctl, 0xbc5671dc, "");
SYMBOL_CRC(video_ioctl2, 0x607e5eef, "");
SYMBOL_CRC(v4l2_device_register, 0x8fd5944f, "_gpl");
SYMBOL_CRC(v4l2_device_put, 0x973151f0, "_gpl");
SYMBOL_CRC(v4l2_device_set_name, 0x87a83807, "_gpl");
SYMBOL_CRC(v4l2_device_disconnect, 0x5ec2c5ad, "_gpl");
SYMBOL_CRC(v4l2_device_unregister, 0x2bd361f5, "_gpl");
SYMBOL_CRC(v4l2_device_register_subdev, 0xcaaa3030, "_gpl");
SYMBOL_CRC(__v4l2_device_register_subdev_nodes, 0x4dca6233, "_gpl");
SYMBOL_CRC(v4l2_device_unregister_subdev, 0xe32420d8, "_gpl");
SYMBOL_CRC(v4l2_fh_init, 0x1978b9b2, "_gpl");
SYMBOL_CRC(v4l2_fh_add, 0x4a39b3dd, "_gpl");
SYMBOL_CRC(v4l2_fh_open, 0x66521121, "_gpl");
SYMBOL_CRC(v4l2_fh_del, 0xb260b3a7, "_gpl");
SYMBOL_CRC(v4l2_fh_exit, 0x4bca5638, "_gpl");
SYMBOL_CRC(v4l2_fh_release, 0xbc0e3807, "_gpl");
SYMBOL_CRC(v4l2_fh_is_singular, 0x3855cb2a, "_gpl");
SYMBOL_CRC(v4l2_event_dequeue, 0xcbea7e92, "_gpl");
SYMBOL_CRC(v4l2_event_queue, 0x21b68677, "_gpl");
SYMBOL_CRC(v4l2_event_queue_fh, 0xb0524d5e, "_gpl");
SYMBOL_CRC(v4l2_event_pending, 0xd95a2e80, "_gpl");
SYMBOL_CRC(v4l2_event_wake_all, 0x81383137, "_gpl");
SYMBOL_CRC(v4l2_event_subscribe, 0xbec9a23c, "_gpl");
SYMBOL_CRC(v4l2_event_unsubscribe_all, 0xf3dbf16c, "_gpl");
SYMBOL_CRC(v4l2_event_unsubscribe, 0x2488ec38, "_gpl");
SYMBOL_CRC(v4l2_event_subdev_unsubscribe, 0x2c766c04, "_gpl");
SYMBOL_CRC(v4l2_src_change_event_subscribe, 0x817b7dd7, "_gpl");
SYMBOL_CRC(v4l2_src_change_event_subdev_subscribe, 0x56a767f6, "_gpl");
SYMBOL_CRC(v4l2_subdev_call_wrappers, 0x0f30730d, "");
SYMBOL_CRC(v4l2_subdev_get_fwnode_pad_1_to_1, 0x45edbbb6, "_gpl");
SYMBOL_CRC(v4l2_subdev_link_validate_default, 0xa33f69f9, "_gpl");
SYMBOL_CRC(v4l2_subdev_link_validate, 0xe2f3ba0a, "_gpl");
SYMBOL_CRC(__v4l2_subdev_state_alloc, 0xc37cf1cc, "_gpl");
SYMBOL_CRC(__v4l2_subdev_state_free, 0x1885c1f6, "_gpl");
SYMBOL_CRC(__v4l2_subdev_init_finalize, 0x98702fb2, "_gpl");
SYMBOL_CRC(v4l2_subdev_cleanup, 0xc289750f, "_gpl");
SYMBOL_CRC(v4l2_subdev_get_fmt, 0xaf3579f2, "_gpl");
SYMBOL_CRC(v4l2_subdev_init, 0x6f6a0a31, "");
SYMBOL_CRC(v4l2_subdev_notify_event, 0xf385464b, "_gpl");
SYMBOL_CRC(v4l2_ctrl_query_fill, 0x89e3897d, "");
SYMBOL_CRC(v4l_bound_align_image, 0xf5ef842e, "_gpl");
SYMBOL_CRC(__v4l2_find_nearest_size, 0xe2822320, "_gpl");
SYMBOL_CRC(v4l2_g_parm_cap, 0xca2d6369, "_gpl");
SYMBOL_CRC(v4l2_s_parm_cap, 0xbcbc36ed, "_gpl");
SYMBOL_CRC(v4l2_format_info, 0x28b12cc9, "");
SYMBOL_CRC(v4l2_apply_frmsize_constraints, 0x9fef35ac, "_gpl");
SYMBOL_CRC(v4l2_fill_pixfmt_mp, 0x6e9acc41, "_gpl");
SYMBOL_CRC(v4l2_fill_pixfmt, 0xcc501597, "_gpl");
SYMBOL_CRC(v4l2_get_link_freq, 0xfe44fb6d, "_gpl");
SYMBOL_CRC(v4l2_simplify_fraction, 0xad5c3c93, "_gpl");
SYMBOL_CRC(v4l2_fraction_to_interval, 0x5074e573, "_gpl");
SYMBOL_CRC(v4l2_ctrl_type_op_equal, 0x98eee364, "");
SYMBOL_CRC(v4l2_ctrl_type_op_init, 0xe6ae5ff4, "");
SYMBOL_CRC(v4l2_ctrl_type_op_log, 0xe5112ba6, "");
SYMBOL_CRC(v4l2_ctrl_type_op_validate, 0x71cb4c86, "");
SYMBOL_CRC(v4l2_ctrl_notify, 0xbe91dd65, "");
SYMBOL_CRC(v4l2_ctrl_handler_init_class, 0xe8cbcdc8, "");
SYMBOL_CRC(v4l2_ctrl_handler_free, 0x3b3d5da2, "");
SYMBOL_CRC(v4l2_ctrl_find, 0xa99b173d, "");
SYMBOL_CRC(v4l2_ctrl_new_custom, 0x5dc59ae6, "");
SYMBOL_CRC(v4l2_ctrl_new_std, 0x7b65904f, "");
SYMBOL_CRC(v4l2_ctrl_new_std_menu, 0x390eb7ec, "");
SYMBOL_CRC(v4l2_ctrl_new_std_menu_items, 0xd847f4f4, "");
SYMBOL_CRC(v4l2_ctrl_new_std_compound, 0x13328b08, "");
SYMBOL_CRC(v4l2_ctrl_new_int_menu, 0xd669c332, "");
SYMBOL_CRC(v4l2_ctrl_add_handler, 0xf30a51a3, "");
SYMBOL_CRC(v4l2_ctrl_radio_filter, 0xe796784e, "");
SYMBOL_CRC(v4l2_ctrl_cluster, 0x61c51a7b, "");
SYMBOL_CRC(v4l2_ctrl_auto_cluster, 0x9e1e6959, "");
SYMBOL_CRC(v4l2_ctrl_activate, 0x57529704, "");
SYMBOL_CRC(__v4l2_ctrl_grab, 0x67a41807, "");
SYMBOL_CRC(__v4l2_ctrl_handler_setup, 0x17bcae08, "_gpl");
SYMBOL_CRC(v4l2_ctrl_handler_setup, 0x2b3bd22e, "");
SYMBOL_CRC(v4l2_ctrl_handler_log_status, 0x17bd6bed, "");
SYMBOL_CRC(v4l2_ctrl_new_fwnode_properties, 0x2c4c746b, "");
SYMBOL_CRC(v4l2_g_ext_ctrls, 0xf49df850, "");
SYMBOL_CRC(v4l2_try_ext_ctrls, 0x295559dd, "");
SYMBOL_CRC(v4l2_s_ext_ctrls, 0x5c9c0596, "");
SYMBOL_CRC(v4l2_g_ctrl, 0xb0b2efb7, "");
SYMBOL_CRC(v4l2_s_ctrl, 0x53d9ece6, "");
SYMBOL_CRC(v4l2_ctrl_g_ctrl, 0x15c074e1, "");
SYMBOL_CRC(v4l2_ctrl_g_ctrl_int64, 0x626a519d, "");
SYMBOL_CRC(__v4l2_ctrl_s_ctrl, 0x62d2a046, "");
SYMBOL_CRC(__v4l2_ctrl_s_ctrl_int64, 0x99ed8a19, "");
SYMBOL_CRC(__v4l2_ctrl_s_ctrl_string, 0x3d472475, "");
SYMBOL_CRC(__v4l2_ctrl_s_ctrl_compound, 0x5899f607, "");
SYMBOL_CRC(__v4l2_ctrl_modify_range, 0x6cfe2b3a, "");
SYMBOL_CRC(__v4l2_ctrl_modify_dimensions, 0xf4517207, "");
SYMBOL_CRC(v4l2_query_ext_ctrl, 0x005e35be, "");
SYMBOL_CRC(v4l2_queryctrl, 0x076449c8, "");
SYMBOL_CRC(v4l2_querymenu, 0xb6444e95, "");
SYMBOL_CRC(v4l2_ctrl_log_status, 0xba5e6261, "");
SYMBOL_CRC(v4l2_ctrl_subdev_log_status, 0xa5118dfb, "");
SYMBOL_CRC(v4l2_ctrl_replace, 0xf50fecbc, "");
SYMBOL_CRC(v4l2_ctrl_merge, 0x082737e8, "");
SYMBOL_CRC(v4l2_ctrl_sub_ev_ops, 0x8b5d0309, "");
SYMBOL_CRC(v4l2_ctrl_subscribe_event, 0x679fc93f, "");
SYMBOL_CRC(v4l2_ctrl_subdev_subscribe_event, 0x89a1e456, "");
SYMBOL_CRC(v4l2_ctrl_poll, 0x0c4ef58d, "");
SYMBOL_CRC(v4l2_ctrl_request_hdl_find, 0x0315d66f, "_gpl");
SYMBOL_CRC(v4l2_ctrl_request_hdl_ctrl_find, 0x1b528530, "_gpl");
SYMBOL_CRC(v4l2_ctrl_request_complete, 0x504dc113, "");
SYMBOL_CRC(v4l2_ctrl_request_setup, 0xa8468d6f, "");
SYMBOL_CRC(v4l2_ctrl_get_menu, 0x315de2cf, "");
SYMBOL_CRC(v4l2_ctrl_get_int_menu, 0xd16d9c01, "");
SYMBOL_CRC(v4l2_ctrl_get_name, 0x32d43420, "");
SYMBOL_CRC(v4l2_ctrl_fill, 0xaedb4ae0, "");
SYMBOL_CRC(v4l2_compat_ioctl32, 0xc2433919, "_gpl");
SYMBOL_CRC(v4l2_mc_create_media_graph, 0xdaedd8b6, "_gpl");
SYMBOL_CRC(v4l_enable_media_source, 0x8cf03005, "_gpl");
SYMBOL_CRC(v4l_disable_media_source, 0x0508d1b8, "_gpl");
SYMBOL_CRC(v4l_vb2q_enable_media_source, 0x991c554c, "_gpl");
SYMBOL_CRC(v4l2_create_fwnode_links_to_pad, 0x65e212e7, "_gpl");
SYMBOL_CRC(v4l2_create_fwnode_links, 0xaed04a7f, "_gpl");
SYMBOL_CRC(v4l2_pipeline_pm_get, 0xc8a5cd07, "_gpl");
SYMBOL_CRC(v4l2_pipeline_pm_put, 0x0d4ca8ab, "_gpl");
SYMBOL_CRC(v4l2_pipeline_link_notify, 0x2ce82c45, "_gpl");
SYMBOL_CRC(v4l2_spi_subdev_init, 0xbef54f0f, "_gpl");
SYMBOL_CRC(v4l2_spi_new_subdev, 0x69d68398, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_v4l2_buf_done, 0x452f53b1, "_gpl");
SYMBOL_CRC(__traceiter_vb2_v4l2_buf_done, 0xf62f4592, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_v4l2_buf_done, 0x2ae0877b, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_v4l2_buf_queue, 0x6a2de036, "_gpl");
SYMBOL_CRC(__traceiter_vb2_v4l2_buf_queue, 0x30231f86, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_v4l2_buf_queue, 0x11f3044c, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_v4l2_dqbuf, 0x46ac032f, "_gpl");
SYMBOL_CRC(__traceiter_vb2_v4l2_dqbuf, 0x73207365, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_v4l2_dqbuf, 0x6ce1c95c, "_gpl");
SYMBOL_CRC(__tracepoint_vb2_v4l2_qbuf, 0xc742d6e8, "_gpl");
SYMBOL_CRC(__traceiter_vb2_v4l2_qbuf, 0x879ba1f2, "_gpl");
SYMBOL_CRC(__SCK__tp_func_vb2_v4l2_qbuf, 0xe5a33113, "_gpl");
SYMBOL_CRC(v4l2_i2c_subdev_set_name, 0x04fc002c, "_gpl");
SYMBOL_CRC(v4l2_i2c_subdev_init, 0x21680411, "_gpl");
SYMBOL_CRC(v4l2_i2c_new_subdev_board, 0x1a5507dc, "_gpl");
SYMBOL_CRC(v4l2_i2c_new_subdev, 0x8b863527, "_gpl");
SYMBOL_CRC(v4l2_i2c_subdev_addr, 0x03353a74, "_gpl");
SYMBOL_CRC(v4l2_i2c_tuner_addrs, 0xf2a353ac, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfe0e58c4, "media_devnode_remove" },
	{ 0x1425e33, "try_module_get" },
	{ 0x3508dfcb, "media_request_object_find" },
	{ 0x52b42b77, "media_request_object_init" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8ea7f437, "fwnode_graph_get_remote_endpoint" },
	{ 0xb436ee4e, "trace_raw_output_prep" },
	{ 0xc201f470, "spi_unregister_device" },
	{ 0xa3ea251f, "device_unregister" },
	{ 0xd90fccd6, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x210a58ce, "trace_event_printf" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0xce496eec, "media_request_object_unbind" },
	{ 0x632f2d27, "fwnode_graph_get_next_endpoint" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x5da54741, "trace_event_raw_init" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x6bf19ffa, "media_request_object_complete" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x23400324, "fwnode_graph_get_port_parent" },
	{ 0x2ce64ed8, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xf7dca34a, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf1f43905, "media_create_intf_link" },
	{ 0xa94bf655, "media_create_pad_link" },
	{ 0xc261fa8f, "trace_event_buffer_commit" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x9bff4604, "__media_pipeline_stop" },
	{ 0xf390f6f1, "__bitmap_andnot" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x606b7e51, "put_device" },
	{ 0x3c0fbc62, "i2c_new_scanned_device" },
	{ 0xa3a7de42, "media_pad_pipeline" },
	{ 0x779068b, "media_request_object_put" },
	{ 0xcc793c4a, "module_put" },
	{ 0xcc517751, "media_pipeline_alloc_start" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x89f73718, "media_device_register_entity" },
	{ 0x42d4c066, "media_request_get_by_fd" },
	{ 0x8277b3bb, "cdev_add" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xab3b83c0, "perf_trace_run_bpf_submit" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xdcced5f2, "__class_register" },
	{ 0x742ca250, "i2c_unregister_device" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xb00fd319, "media_request_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf393e493, "spi_new_device" },
	{ 0x1c0c9b6b, "trace_event_reg" },
	{ 0x3940bfd8, "media_request_object_bind" },
	{ 0xa169b1d6, "class_unregister" },
	{ 0xc49ebaa5, "media_graph_walk_next" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xab2cc6c2, "i2c_new_client_device" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4c74bd14, "device_register" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x58c0838c, "media_pipeline_start" },
	{ 0x48d2897b, "media_pipeline_stop" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x99078b39, "trace_print_flags_seq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfe74f7f4, "media_get_pad_index" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xf81e3246, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x74ba4e3d, "platform_bus_type" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x9835b4a7, "media_graph_walk_start" },
	{ 0x2905ad4, "media_devnode_create" },
	{ 0xcc00077, "media_entity_get_fwnode_pad" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x1d877bf, "fwnode_handle_put" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x69b7d204, "media_device_unregister_entity" },
	{ 0x98cf60b3, "strlen" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x8216525f, "__media_pipeline_start" },
	{ 0x73e48c4c, "media_entity_find_link" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6cba88c1, "pci_bus_type" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x293e8fe4, "cdev_del" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x1593e011, "cdev_alloc" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mc");


MODULE_INFO(srcversion, "C923EFEAAC2D5F61727437E");
