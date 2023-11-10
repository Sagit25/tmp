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

SYMBOL_CRC(v4l2_m2m_get_vq, 0x24d4c915, "");
SYMBOL_CRC(v4l2_m2m_next_buf, 0x9256ba08, "_gpl");
SYMBOL_CRC(v4l2_m2m_last_buf, 0x3e61f34b, "_gpl");
SYMBOL_CRC(v4l2_m2m_buf_remove, 0xad8d202a, "_gpl");
SYMBOL_CRC(v4l2_m2m_buf_remove_by_buf, 0x838f378d, "_gpl");
SYMBOL_CRC(v4l2_m2m_buf_remove_by_idx, 0xc6e3defd, "_gpl");
SYMBOL_CRC(v4l2_m2m_get_curr_priv, 0x459e133f, "");
SYMBOL_CRC(v4l2_m2m_try_schedule, 0xc5b01505, "_gpl");
SYMBOL_CRC(v4l2_m2m_job_finish, 0xd48ed33d, "");
SYMBOL_CRC(v4l2_m2m_buf_done_and_job_finish, 0xfaffece6, "");
SYMBOL_CRC(v4l2_m2m_suspend, 0xf626dd03, "");
SYMBOL_CRC(v4l2_m2m_resume, 0x5352d022, "");
SYMBOL_CRC(v4l2_m2m_reqbufs, 0x3be7d278, "_gpl");
SYMBOL_CRC(v4l2_m2m_querybuf, 0x22d5b1cd, "_gpl");
SYMBOL_CRC(v4l2_m2m_last_buffer_done, 0xdf08058e, "_gpl");
SYMBOL_CRC(v4l2_m2m_update_start_streaming_state, 0x9c6b530c, "_gpl");
SYMBOL_CRC(v4l2_m2m_update_stop_streaming_state, 0xdb80199f, "_gpl");
SYMBOL_CRC(v4l2_m2m_qbuf, 0x19416e69, "_gpl");
SYMBOL_CRC(v4l2_m2m_dqbuf, 0x4f096791, "_gpl");
SYMBOL_CRC(v4l2_m2m_prepare_buf, 0x57731885, "_gpl");
SYMBOL_CRC(v4l2_m2m_create_bufs, 0x803047a1, "_gpl");
SYMBOL_CRC(v4l2_m2m_expbuf, 0x55f7c940, "_gpl");
SYMBOL_CRC(v4l2_m2m_streamon, 0xdccdfca2, "_gpl");
SYMBOL_CRC(v4l2_m2m_streamoff, 0x5e52228f, "_gpl");
SYMBOL_CRC(v4l2_m2m_poll, 0x7f425957, "_gpl");
SYMBOL_CRC(v4l2_m2m_mmap, 0x001dc4db, "");
SYMBOL_CRC(v4l2_m2m_unregister_media_controller, 0xf13ff84d, "_gpl");
SYMBOL_CRC(v4l2_m2m_register_media_controller, 0x1f3d1d27, "_gpl");
SYMBOL_CRC(v4l2_m2m_init, 0x730f2eae, "_gpl");
SYMBOL_CRC(v4l2_m2m_release, 0xc6fca5ad, "_gpl");
SYMBOL_CRC(v4l2_m2m_ctx_init, 0xa5e38034, "_gpl");
SYMBOL_CRC(v4l2_m2m_ctx_release, 0x38430a57, "_gpl");
SYMBOL_CRC(v4l2_m2m_buf_queue, 0xbfde9d14, "_gpl");
SYMBOL_CRC(v4l2_m2m_buf_copy_metadata, 0x35c455d8, "_gpl");
SYMBOL_CRC(v4l2_m2m_request_queue, 0xeab8361e, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_reqbufs, 0x3b15541f, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_create_bufs, 0xda9569e7, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_querybuf, 0xfb811dfe, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_qbuf, 0xe7901a73, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_dqbuf, 0x5e6907ea, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_prepare_buf, 0x5a97ba6e, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_expbuf, 0x3b2e54d5, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_streamon, 0xff6f58cd, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_streamoff, 0x8dae74bb, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_try_encoder_cmd, 0xf7256d47, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_try_decoder_cmd, 0x32db6f8e, "_gpl");
SYMBOL_CRC(v4l2_m2m_encoder_cmd, 0x50b84461, "_gpl");
SYMBOL_CRC(v4l2_m2m_decoder_cmd, 0xf6cb6ba4, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_encoder_cmd, 0x8fbe61d3, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_decoder_cmd, 0x9ed698ac, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_stateless_try_decoder_cmd, 0xeb5fffca, "_gpl");
SYMBOL_CRC(v4l2_m2m_ioctl_stateless_decoder_cmd, 0x8707dfbc, "_gpl");
SYMBOL_CRC(v4l2_m2m_fop_mmap, 0x28653cd9, "_gpl");
SYMBOL_CRC(v4l2_m2m_fop_poll, 0x5c0a8b5f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x92997ed8, "_printk" },
	{ 0x2b222be1, "vb2_buffer_done" },
	{ 0xe2964344, "__wake_up" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x18da83af, "vb2_mmap" },
	{ 0x9ead0f7a, "media_remove_intf_links" },
	{ 0xfe0e58c4, "media_devnode_remove" },
	{ 0xb5696901, "media_entity_remove_links" },
	{ 0x69b7d204, "media_device_unregister_entity" },
	{ 0x37a0cba, "kfree" },
	{ 0x98cf60b3, "strlen" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x89f73718, "media_device_register_entity" },
	{ 0xa94bf655, "media_create_pad_link" },
	{ 0x2905ad4, "media_devnode_create" },
	{ 0xf1f43905, "media_create_intf_link" },
	{ 0x7cc57f43, "vb2_queue_release" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x663b757a, "video_devdata" },
	{ 0xd95a2e80, "v4l2_event_pending" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf564cc31, "vb2_expbuf" },
	{ 0xd352d9b5, "vb2_create_bufs" },
	{ 0xd5d214b7, "vb2_reqbufs" },
	{ 0x1c6136ce, "vb2_querybuf" },
	{ 0x1a5c9022, "vb2_dqbuf" },
	{ 0x9f971ea0, "vb2_prepare_buf" },
	{ 0xd55b3931, "vb2_streamoff" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa81885a7, "vb2_streamon" },
	{ 0x1ab87598, "vb2_request_object_is_buffer" },
	{ 0xdc7c8cb3, "vb2_qbuf" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-common,mc,videobuf2-v4l2,videodev");


MODULE_INFO(srcversion, "8284D82953A3189059B09DB");
