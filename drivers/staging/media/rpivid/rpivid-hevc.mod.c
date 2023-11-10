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
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xd48ed33d, "v4l2_m2m_job_finish" },
	{ 0xa0c4cf2b, "rpi_firmware_clk_get_max_rate" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0x11474f30, "media_device_unregister" },
	{ 0x9256ba08, "v4l2_m2m_next_buf" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0x4a3bb5af, "media_device_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb260b3a7, "v4l2_fh_del" },
	{ 0x38430a57, "v4l2_m2m_ctx_release" },
	{ 0x4a39b3dd, "v4l2_fh_add" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa951a544, "dma_unmap_page_attrs" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0xeb5fffca, "v4l2_m2m_ioctl_stateless_try_decoder_cmd" },
	{ 0xad8d202a, "v4l2_m2m_buf_remove" },
	{ 0xfaffece6, "v4l2_m2m_buf_done_and_job_finish" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x21e6b37b, "devm_ioremap" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa5e6e449, "vb2_dma_contig_memops" },
	{ 0xc07b2c9d, "__media_device_register" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1b528530, "v4l2_ctrl_request_hdl_ctrl_find" },
	{ 0xe2964344, "__wake_up" },
	{ 0xf973d666, "platform_get_resource_byname" },
	{ 0xadda69dd, "rpi_firmware_get" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x3b2e54d5, "v4l2_m2m_ioctl_expbuf" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0xfb811dfe, "v4l2_m2m_ioctl_querybuf" },
	{ 0x8707dfbc, "v4l2_m2m_ioctl_stateless_decoder_cmd" },
	{ 0x13753f07, "dma_map_page_attrs" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x92997ed8, "_printk" },
	{ 0xeab8361e, "v4l2_m2m_request_queue" },
	{ 0x2b3bd22e, "v4l2_ctrl_handler_setup" },
	{ 0x1000e51, "schedule" },
	{ 0xbfde9d14, "v4l2_m2m_buf_queue" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0xdd09586e, "media_request_pin" },
	{ 0x504dc113, "v4l2_ctrl_request_complete" },
	{ 0x5c0a8b5f, "v4l2_m2m_fop_poll" },
	{ 0xe7901a73, "v4l2_m2m_ioctl_qbuf" },
	{ 0x779068b, "media_request_object_put" },
	{ 0x24d4c915, "v4l2_m2m_get_vq" },
	{ 0x9a6a07f1, "vb2_plane_cookie" },
	{ 0x81cd8c1f, "media_device_cleanup" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa8468d6f, "v4l2_ctrl_request_setup" },
	{ 0xfa5b2749, "vb2_request_buffer_cnt" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x5dc59ae6, "v4l2_ctrl_new_custom" },
	{ 0x63e9296, "rpi_firmware_put" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0x315d66f, "v4l2_ctrl_request_hdl_find" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0xd3379b7a, "rpi_firmware_find_node" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x1978b9b2, "v4l2_fh_init" },
	{ 0x3b15541f, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8dae74bb, "v4l2_m2m_ioctl_streamoff" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xda9569e7, "v4l2_m2m_ioctl_create_bufs" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xff6f58cd, "v4l2_m2m_ioctl_streamon" },
	{ 0x1ab87598, "vb2_request_object_is_buffer" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0xdd64e639, "strscpy" },
	{ 0xedb38d4c, "vb2_find_buffer" },
	{ 0x16b90833, "dma_free_attrs" },
	{ 0x28653cd9, "v4l2_m2m_fop_mmap" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa5ae2f67, "vb2_request_validate" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x25379e73, "clk_set_min_rate" },
	{ 0xd78d1133, "vb2_wait_for_all_buffers" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0xa5e38034, "v4l2_m2m_ctx_init" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x4643a686, "media_request_unpin" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0x815588a6, "clk_enable" },
	{ 0x1f3d1d27, "v4l2_m2m_register_media_controller" },
	{ 0x35c455d8, "v4l2_m2m_buf_copy_metadata" },
	{ 0x5e6907ea, "v4l2_m2m_ioctl_dqbuf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x5a97ba6e, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,mc,videobuf2-dma-contig,videobuf2-common");

MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-vid-decoder");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-vid-decoderC*");

MODULE_INFO(srcversion, "AE9EC7610F81B6961F3701E");
