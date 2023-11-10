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
	{ 0x63713aaf, "devm_platform_ioremap_resource" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0x11474f30, "media_device_unregister" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xb882b19b, "of_node_put" },
	{ 0xc289750f, "v4l2_subdev_cleanup" },
	{ 0xfe44fb6d, "v4l2_get_link_freq" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0x6d96795, "vb2_ioctl_expbuf" },
	{ 0x4a3bb5af, "media_device_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x547b15f9, "v4l2_async_nf_register" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa5e6e449, "vb2_dma_contig_memops" },
	{ 0xc07b2c9d, "__media_device_register" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xa181e5c2, "of_graph_get_remote_port_parent" },
	{ 0x6f6a0a31, "v4l2_subdev_init" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0xf36917d0, "media_entity_remote_pad_unique" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0xa94bf655, "media_create_pad_link" },
	{ 0xcaaa3030, "v4l2_device_register_subdev" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x663b757a, "video_devdata" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0xbcec384c, "vb2_fop_release" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xa99b173d, "v4l2_ctrl_find" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x45809783, "v4l2_async_nf_init" },
	{ 0x9a6a07f1, "vb2_plane_cookie" },
	{ 0x81cd8c1f, "media_device_cleanup" },
	{ 0xe32420d8, "v4l2_device_unregister_subdev" },
	{ 0xe2f3ba0a, "v4l2_subdev_link_validate" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x61cd22a1, "vb2_ioctl_create_bufs" },
	{ 0x751c5e55, "vb2_ioctl_prepare_buf" },
	{ 0x98702fb2, "__v4l2_subdev_init_finalize" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0x1f015c96, "media_pad_remote_pad_first" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x3c5dae42, "of_graph_get_next_endpoint" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbec9a23c, "v4l2_event_subscribe" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x58c0838c, "media_pipeline_start" },
	{ 0xaf3579f2, "v4l2_subdev_get_fmt" },
	{ 0x48d2897b, "media_pipeline_stop" },
	{ 0xdcb764ad, "memset" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0xae7a9a01, "seq_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0x135ff00b, "fwnode_property_present" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xdc403dd8, "__v4l2_async_nf_add_subdev" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0x8dea8b5b, "v4l2_async_nf_unregister" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0x4dca6233, "__v4l2_device_register_subdev_nodes" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x613beb6, "single_release" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xf30730d, "v4l2_subdev_call_wrappers" },
	{ 0x21b68677, "v4l2_event_queue" },
	{ 0x9b9b69f9, "v4l2_fwnode_endpoint_parse" },
	{ 0xb3c6f341, "single_open" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x815588a6, "clk_enable" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,v4l2-async,videobuf2-dma-contig,videobuf2-common,v4l2-fwnode");

MODULE_ALIAS("of:N*T*Craspberrypi,rp1-cfe");
MODULE_ALIAS("of:N*T*Craspberrypi,rp1-cfeC*");

MODULE_INFO(srcversion, "450301916F51F1FB54C4EBC");
