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
	{ 0x80aaf962, "tpg_g_color_order" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0x11474f30, "media_device_unregister" },
	{ 0x973151f0, "v4l2_device_put" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0x6612f35f, "video_device_pipeline_stop" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x6d96795, "vb2_ioctl_expbuf" },
	{ 0x4a3bb5af, "media_device_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa5e6e449, "vb2_dma_contig_memops" },
	{ 0xc07b2c9d, "__media_device_register" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0x6f6a0a31, "v4l2_subdev_init" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0x2c766c04, "v4l2_event_subdev_unsubscribe" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x75e8e3e4, "vb2_video_unregister_device" },
	{ 0xb5696901, "media_entity_remove_links" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0xa94bf655, "media_create_pad_link" },
	{ 0xcaaa3030, "v4l2_device_register_subdev" },
	{ 0xcaede3e2, "tpg_fill_plane_buffer" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x92997ed8, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0xbcec384c, "vb2_fop_release" },
	{ 0x2c79d221, "platform_device_register" },
	{ 0x81cd8c1f, "media_device_cleanup" },
	{ 0xe2f3ba0a, "v4l2_subdev_link_validate" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xce8159bb, "tpg_pattern_strings" },
	{ 0x61cd22a1, "vb2_ioctl_create_bufs" },
	{ 0x5dc59ae6, "v4l2_ctrl_new_custom" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0x751c5e55, "vb2_ioctl_prepare_buf" },
	{ 0xaa5503d9, "tpg_set_font" },
	{ 0x1f015c96, "media_pad_remote_pad_first" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x2d4daef5, "find_font" },
	{ 0x2eb22d11, "media_create_ancillary_link" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89a1e456, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0xc8c41a62, "freezing_slow_path" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0xf8fcc56c, "vb2_vmalloc_memops" },
	{ 0x5b3a0411, "vb2_fop_read" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xab85b3b2, "video_device_pipeline_start" },
	{ 0xe7ee5819, "tpg_s_fourcc" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0xbbc315dd, "tpg_update_mv_step" },
	{ 0xa5118dfb, "v4l2_ctrl_subdev_log_status" },
	{ 0xf7a5f765, "tpg_calc_text_basep" },
	{ 0xdd64e639, "strscpy" },
	{ 0x999e8297, "vfree" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0x4dca6233, "__v4l2_device_register_subdev_nodes" },
	{ 0xf7ec0949, "tpg_reset_source" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0xe6f04b89, "tpg_alloc" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0xf30730d, "v4l2_subdev_call_wrappers" },
	{ 0x21bfae4e, "tpg_gen_text" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xa8a3f406, "tpg_free" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xb052969d, "tpg_init" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,v4l2-tpg,videodev,mc,videobuf2-dma-contig,videobuf2-common,videobuf2-vmalloc");


MODULE_INFO(srcversion, "CB6FABD9646FA9224ABF95A");
