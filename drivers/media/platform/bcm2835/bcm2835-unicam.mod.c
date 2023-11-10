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
	{ 0xf30730d, "v4l2_subdev_call_wrappers" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0x16b90833, "dma_free_attrs" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x8dea8b5b, "v4l2_async_nf_unregister" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x11474f30, "media_device_unregister" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0x21b68677, "v4l2_event_queue" },
	{ 0xf36917d0, "media_entity_remote_pad_unique" },
	{ 0x663b757a, "video_devdata" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdd64e639, "strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbcbc36ed, "v4l2_s_parm_cap" },
	{ 0xca2d6369, "v4l2_g_parm_cap" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3855cb2a, "v4l2_fh_is_singular" },
	{ 0xaabfcfb9, "_vb2_fop_release" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0xbc0e3807, "v4l2_fh_release" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0xbec9a23c, "v4l2_event_subscribe" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x81cd8c1f, "media_device_cleanup" },
	{ 0x1885c1f6, "__v4l2_subdev_state_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x63713aaf, "devm_platform_ioremap_resource" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x4a3bb5af, "media_device_init" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xc07b2c9d, "__media_device_register" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x3c5dae42, "of_graph_get_next_endpoint" },
	{ 0xa181e5c2, "of_graph_get_remote_port_parent" },
	{ 0x9b9b69f9, "v4l2_fwnode_endpoint_parse" },
	{ 0x45809783, "v4l2_async_nf_init" },
	{ 0x8ea7f437, "fwnode_graph_get_remote_endpoint" },
	{ 0xdc403dd8, "__v4l2_async_nf_add_subdev" },
	{ 0x547b15f9, "v4l2_async_nf_register" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x48d2897b, "media_pipeline_stop" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0x25379e73, "clk_set_min_rate" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x9a6a07f1, "vb2_plane_cookie" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa5e6e449, "vb2_dma_contig_memops" },
	{ 0x8e8b29e5, "vb2_queue_init" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xa94bf655, "media_create_pad_link" },
	{ 0xf30a51a3, "v4l2_ctrl_add_handler" },
	{ 0xc37cf1cc, "__v4l2_subdev_state_alloc" },
	{ 0x4dca6233, "__v4l2_device_register_subdev_nodes" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x58c0838c, "media_pipeline_start" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0x6d96795, "vb2_ioctl_expbuf" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0x61cd22a1, "vb2_ioctl_create_bufs" },
	{ 0x751c5e55, "vb2_ioctl_prepare_buf" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0x5b3a0411, "vb2_fop_read" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,v4l2-async,mc,videobuf2-common,videobuf2-v4l2,v4l2-dv-timings,v4l2-fwnode,videobuf2-dma-contig");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-unicam");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-unicamC*");

MODULE_INFO(srcversion, "D43D16966265B8FF72CDB70");
