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

MODULE_INFO(staging, "Y");


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8e8b29e5, "vb2_queue_init" },
	{ 0x3d3d47cd, "vchiq_mmal_port_parameter_get" },
	{ 0xfe0e58c4, "media_devnode_remove" },
	{ 0xd550a0ee, "vb2_core_expbuf_dmabuf" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0x11474f30, "media_device_unregister" },
	{ 0x6fa2a386, "vc_sm_cma_int_handle" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x7cc57f43, "vb2_queue_release" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xf8d98820, "mmal_vchi_buffer_cleanup" },
	{ 0x6d96795, "vb2_ioctl_expbuf" },
	{ 0x4a3bb5af, "media_device_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x5db1779b, "vchiq_mmal_submit_buffer" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0xa5e6e449, "vb2_dma_contig_memops" },
	{ 0x53b52981, "vc_sm_cma_free" },
	{ 0xc07b2c9d, "__media_device_register" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0x794e03f5, "vchiq_mmal_port_enable" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0xf1f43905, "media_create_intf_link" },
	{ 0xb5696901, "media_entity_remove_links" },
	{ 0xa94bf655, "media_create_pad_link" },
	{ 0xc75f1f25, "mmal_vchi_buffer_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x921d9361, "vchiq_mmal_component_disable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0xbcec384c, "vb2_fop_release" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x670537b2, "vchiq_mmal_component_init" },
	{ 0x89f73718, "media_device_register_entity" },
	{ 0x81cd8c1f, "media_device_cleanup" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0x61cd22a1, "vb2_ioctl_create_bufs" },
	{ 0x5dc59ae6, "v4l2_ctrl_new_custom" },
	{ 0x751c5e55, "vb2_ioctl_prepare_buf" },
	{ 0xc0108315, "vchiq_mmal_component_enable" },
	{ 0xdf48bbcd, "dma_buf_get" },
	{ 0x6b4d7fc, "dma_buf_put" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x110b9a8e, "vc_sm_cma_import_dmabuf" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbec9a23c, "v4l2_event_subscribe" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0xdcb764ad, "memset" },
	{ 0x7940f78, "vchiq_mmal_component_finalise" },
	{ 0x9ead0f7a, "media_remove_intf_links" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xdd64e639, "strscpy" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0xd78d1133, "vb2_wait_for_all_buffers" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x4eac0520, "vchiq_mmal_port_parameter_set" },
	{ 0x2905ad4, "media_devnode_create" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x69b7d204, "media_device_unregister_entity" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0x6ec30bf9, "vchiq_mmal_port_disable" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa49e0cf9, "vchiq_mmal_port_set_format" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,bcm2835-mmal-vchiq,mc,videobuf2-common,videodev,vc-sm-cma,videobuf2-dma-contig");


MODULE_INFO(srcversion, "B40E4C971135F9FEA33CF38");
