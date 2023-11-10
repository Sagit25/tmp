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
	{ 0x730f2eae, "v4l2_m2m_init" },
	{ 0x8e8b29e5, "vb2_queue_init" },
	{ 0x4bca5638, "v4l2_fh_exit" },
	{ 0x3d3d47cd, "vchiq_mmal_port_parameter_get" },
	{ 0xd48ed33d, "v4l2_m2m_job_finish" },
	{ 0xd550a0ee, "vb2_core_expbuf_dmabuf" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0x11474f30, "media_device_unregister" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xf8d98820, "mmal_vchi_buffer_cleanup" },
	{ 0x4a3bb5af, "media_device_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xb260b3a7, "v4l2_fh_del" },
	{ 0x38430a57, "v4l2_m2m_ctx_release" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4a39b3dd, "v4l2_fh_add" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0xad8d202a, "v4l2_m2m_buf_remove" },
	{ 0x817b7dd7, "v4l2_src_change_event_subscribe" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x5db1779b, "vchiq_mmal_submit_buffer" },
	{ 0x37a0cba, "kfree" },
	{ 0xa5e6e449, "vb2_dma_contig_memops" },
	{ 0xc07b2c9d, "__media_device_register" },
	{ 0x794e03f5, "vchiq_mmal_port_enable" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3b2e54d5, "v4l2_m2m_ioctl_expbuf" },
	{ 0xc75f1f25, "mmal_vchi_buffer_init" },
	{ 0xfb811dfe, "v4l2_m2m_ioctl_querybuf" },
	{ 0x92997ed8, "_printk" },
	{ 0x921d9361, "vchiq_mmal_component_disable" },
	{ 0x2b3bd22e, "v4l2_ctrl_handler_setup" },
	{ 0xbfde9d14, "v4l2_m2m_buf_queue" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0x5c0a8b5f, "v4l2_m2m_fop_poll" },
	{ 0xe7901a73, "v4l2_m2m_ioctl_qbuf" },
	{ 0x670537b2, "vchiq_mmal_component_init" },
	{ 0x24d4c915, "v4l2_m2m_get_vq" },
	{ 0x62d2a046, "__v4l2_ctrl_s_ctrl" },
	{ 0x81cd8c1f, "media_device_cleanup" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0xc0108315, "vchiq_mmal_component_enable" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdf48bbcd, "dma_buf_get" },
	{ 0x9166fada, "strncpy" },
	{ 0x6b4d7fc, "dma_buf_put" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x1978b9b2, "v4l2_fh_init" },
	{ 0x3b15541f, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8dae74bb, "v4l2_m2m_ioctl_streamoff" },
	{ 0xbec9a23c, "v4l2_event_subscribe" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x7940f78, "vchiq_mmal_component_finalise" },
	{ 0xda9569e7, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x390eb7ec, "v4l2_ctrl_new_std_menu" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xff6f58cd, "v4l2_m2m_ioctl_streamon" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xdd64e639, "strscpy" },
	{ 0x28653cd9, "v4l2_m2m_fop_mmap" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x4eac0520, "vchiq_mmal_port_parameter_set" },
	{ 0xa5e38034, "v4l2_m2m_ctx_init" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xb0524d5e, "v4l2_event_queue_fh" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0x1f3d1d27, "v4l2_m2m_register_media_controller" },
	{ 0x5e6907ea, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x6ec30bf9, "vchiq_mmal_port_disable" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa49e0cf9, "vchiq_mmal_port_set_format" },
	{ 0x5a97ba6e, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,bcm2835-mmal-vchiq,videobuf2-common,mc,videobuf2-dma-contig");


MODULE_INFO(srcversion, "0326AA3A0DAC8FAAE71BE49");
