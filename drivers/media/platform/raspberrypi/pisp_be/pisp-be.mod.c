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
	{ 0xd55b3931, "vb2_streamoff" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x7cc57f43, "vb2_queue_release" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0x6d96795, "vb2_ioctl_expbuf" },
	{ 0x4a3bb5af, "media_device_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd47ccf38, "pm_runtime_set_autosuspend_delay" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa5e6e449, "vb2_dma_contig_memops" },
	{ 0xc07b2c9d, "__media_device_register" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0x6f6a0a31, "v4l2_subdev_init" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0xa94bf655, "media_create_pad_link" },
	{ 0xcaaa3030, "v4l2_device_register_subdev" },
	{ 0xa33f69f9, "v4l2_subdev_link_validate_default" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0xbcec384c, "vb2_fop_release" },
	{ 0xa81885a7, "vb2_streamon" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x9a6a07f1, "vb2_plane_cookie" },
	{ 0x81cd8c1f, "media_device_cleanup" },
	{ 0xe32420d8, "v4l2_device_unregister_subdev" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x61cd22a1, "vb2_ioctl_create_bufs" },
	{ 0x751c5e55, "vb2_ioctl_prepare_buf" },
	{ 0x45576dc0, "dma_alloc_attrs" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xa4b043a9, "dma_set_coherent_mask" },
	{ 0xdd64e639, "strscpy" },
	{ 0x16b90833, "dma_free_attrs" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0xd78d1133, "vb2_wait_for_all_buffers" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xb51214e, "dma_set_mask" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xa3615400, "__pm_runtime_suspend" },
	{ 0xe44c1728, "__pm_runtime_use_autosuspend" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0x815588a6, "clk_enable" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,videobuf2-dma-contig,videobuf2-common");

MODULE_ALIAS("of:N*T*Craspberrypi,pispbe");
MODULE_ALIAS("of:N*T*Craspberrypi,pispbeC*");

MODULE_INFO(srcversion, "B8FF89C3798EF8A5A3BBF1E");
