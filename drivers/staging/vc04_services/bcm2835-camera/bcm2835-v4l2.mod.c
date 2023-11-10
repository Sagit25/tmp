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
	{ 0x607e5eef, "video_ioctl2" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xf8d98820, "mmal_vchi_buffer_cleanup" },
	{ 0x6d96795, "vb2_ioctl_expbuf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x5db1779b, "vchiq_mmal_submit_buffer" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6192e1a2, "vchiq_mmal_version" },
	{ 0x37a0cba, "kfree" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0x794e03f5, "vchiq_mmal_port_enable" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0xc75f1f25, "mmal_vchi_buffer_init" },
	{ 0x9e1e6959, "v4l2_ctrl_auto_cluster" },
	{ 0x92997ed8, "_printk" },
	{ 0x921d9361, "vchiq_mmal_component_disable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0xbcec384c, "vb2_fop_release" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x670537b2, "vchiq_mmal_component_init" },
	{ 0xd669c332, "v4l2_ctrl_new_int_menu" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x61cd22a1, "vb2_ioctl_create_bufs" },
	{ 0x87a83807, "v4l2_device_set_name" },
	{ 0x751c5e55, "vb2_ioctl_prepare_buf" },
	{ 0xc0108315, "vchiq_mmal_component_enable" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0xf512a9e2, "vchiq_mmal_port_connect_tunnel" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0xf8fcc56c, "vb2_vmalloc_memops" },
	{ 0xdcb764ad, "memset" },
	{ 0x7940f78, "vchiq_mmal_component_finalise" },
	{ 0x390eb7ec, "v4l2_ctrl_new_std_menu" },
	{ 0x5b3a0411, "vb2_fop_read" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x4eac0520, "vchiq_mmal_port_parameter_set" },
	{ 0xba5e6261, "v4l2_ctrl_log_status" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6ec30bf9, "vchiq_mmal_port_disable" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa49e0cf9, "vchiq_mmal_port_set_format" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,bcm2835-mmal-vchiq,videodev,videobuf2-common,videobuf2-vmalloc");


MODULE_INFO(srcversion, "DC576C48641315D2BB73667");
