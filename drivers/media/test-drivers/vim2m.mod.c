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
	{ 0x2c79d221, "platform_device_register" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x11474f30, "media_device_unregister" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x504dc113, "v4l2_ctrl_request_complete" },
	{ 0x24d4c915, "v4l2_m2m_get_vq" },
	{ 0xdd64e639, "strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0x81cd8c1f, "media_device_cleanup" },
	{ 0x37a0cba, "kfree" },
	{ 0x663b757a, "video_devdata" },
	{ 0xb260b3a7, "v4l2_fh_del" },
	{ 0x4bca5638, "v4l2_fh_exit" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x38430a57, "v4l2_m2m_ctx_release" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf8fcc56c, "vb2_vmalloc_memops" },
	{ 0x8e8b29e5, "vb2_queue_init" },
	{ 0xbfde9d14, "v4l2_m2m_buf_queue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xad8d202a, "v4l2_m2m_buf_remove" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9256ba08, "v4l2_m2m_next_buf" },
	{ 0xa8468d6f, "v4l2_ctrl_request_setup" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x35c455d8, "v4l2_m2m_buf_copy_metadata" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd48ed33d, "v4l2_m2m_job_finish" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x730f2eae, "v4l2_m2m_init" },
	{ 0x4a3bb5af, "media_device_init" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0x1f3d1d27, "v4l2_m2m_register_media_controller" },
	{ 0xc07b2c9d, "__media_device_register" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x1978b9b2, "v4l2_fh_init" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x5dc59ae6, "v4l2_ctrl_new_custom" },
	{ 0x2b3bd22e, "v4l2_ctrl_handler_setup" },
	{ 0xa5e38034, "v4l2_m2m_ctx_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4a39b3dd, "v4l2_fh_add" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0x5c0a8b5f, "v4l2_m2m_fop_poll" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0x28653cd9, "v4l2_m2m_fop_mmap" },
	{ 0x3b15541f, "v4l2_m2m_ioctl_reqbufs" },
	{ 0xfb811dfe, "v4l2_m2m_ioctl_querybuf" },
	{ 0xe7901a73, "v4l2_m2m_ioctl_qbuf" },
	{ 0x3b2e54d5, "v4l2_m2m_ioctl_expbuf" },
	{ 0x5e6907ea, "v4l2_m2m_ioctl_dqbuf" },
	{ 0xda9569e7, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x5a97ba6e, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0xff6f58cd, "v4l2_m2m_ioctl_streamon" },
	{ 0x8dae74bb, "v4l2_m2m_ioctl_streamoff" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xa5ae2f67, "vb2_request_validate" },
	{ 0xeab8361e, "v4l2_m2m_request_queue" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "mc,v4l2-mem2mem,videodev,videobuf2-vmalloc,videobuf2-v4l2,videobuf2-common");


MODULE_INFO(srcversion, "A426A524ACD65FCFE981C07");
