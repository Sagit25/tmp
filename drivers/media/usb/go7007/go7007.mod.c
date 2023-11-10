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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(go7007_read_interrupt, 0x6aa39f89, "");
SYMBOL_CRC(go7007_read_addr, 0x78ea87b7, "");
SYMBOL_CRC(go7007_boot_encoder, 0x8acf1ea7, "");
SYMBOL_CRC(go7007_register_encoder, 0x0439b8ac, "");
SYMBOL_CRC(go7007_parse_video_stream, 0x49d1a7d4, "");
SYMBOL_CRC(go7007_alloc, 0xb1418086, "");
SYMBOL_CRC(go7007_update_board, 0x51a7c771, "");
SYMBOL_CRC(go7007_snd_init, 0xa1e1b6c6, "");
SYMBOL_CRC(go7007_snd_remove, 0x16ec4060, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8e8b29e5, "vb2_queue_init" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x973151f0, "v4l2_device_put" },
	{ 0x5b5ec25, "vb2_ioctl_streamoff" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xf25f39f5, "snd_pcm_new" },
	{ 0x3db5e5b3, "snd_card_register" },
	{ 0x1a5507dc, "v4l2_i2c_new_subdev_board" },
	{ 0x510abc69, "snd_card_free" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x74a05018, "request_firmware" },
	{ 0x6b838669, "vb2_ops_wait_finish" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x811e1fb4, "vb2_ioctl_querybuf" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x663b757a, "video_devdata" },
	{ 0xbcec384c, "vb2_fop_release" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0xcf12e895, "snd_card_new" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x67a41807, "__v4l2_ctrl_grab" },
	{ 0x1000759e, "vb2_ioctl_dqbuf" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x5dc59ae6, "v4l2_ctrl_new_custom" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe5cfa168, "snd_card_free_when_closed" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xffada62d, "vb2_plane_vaddr" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x10c6cb91, "snd_pcm_set_ops" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbec9a23c, "v4l2_event_subscribe" },
	{ 0x8a613a91, "vb2_ioctl_qbuf" },
	{ 0xc6b2e449, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x21f8804, "snd_device_new" },
	{ 0xf8fcc56c, "vb2_vmalloc_memops" },
	{ 0x143d675d, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0x49724c3c, "param_ops_charp" },
	{ 0x390eb7ec, "v4l2_ctrl_new_std_menu" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5b3a0411, "vb2_fop_read" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0xf45fb4de, "snd_card_disconnect" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xe9ddafd4, "vb2_ops_wait_prepare" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xecad2015, "vb2_ioctl_streamon" },
	{ 0x6ef94713, "vb2_fop_poll" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x15c074e1, "v4l2_ctrl_g_ctrl" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf30730d, "v4l2_subdev_call_wrappers" },
	{ 0xb1b572d5, "snd_pcm_period_elapsed" },
	{ 0xba5e6261, "v4l2_ctrl_log_status" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x21b68677, "v4l2_event_queue" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x82c69c34, "vb2_ioctl_reqbufs" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,snd-pcm,snd,videobuf2-common,videobuf2-vmalloc");


MODULE_INFO(srcversion, "F0DC826F5914DC8D91D4AFC");
