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

SYMBOL_CRC(vb2_find_buffer, 0xedb38d4c, "_gpl");
SYMBOL_CRC(vb2_querybuf, 0x1c6136ce, "");
SYMBOL_CRC(vb2_reqbufs, 0xd5d214b7, "_gpl");
SYMBOL_CRC(vb2_prepare_buf, 0x9f971ea0, "_gpl");
SYMBOL_CRC(vb2_create_bufs, 0xd352d9b5, "_gpl");
SYMBOL_CRC(vb2_qbuf, 0xdc7c8cb3, "_gpl");
SYMBOL_CRC(vb2_dqbuf, 0x1a5c9022, "_gpl");
SYMBOL_CRC(vb2_streamon, 0xa81885a7, "_gpl");
SYMBOL_CRC(vb2_streamoff, 0xd55b3931, "_gpl");
SYMBOL_CRC(vb2_expbuf, 0xf564cc31, "_gpl");
SYMBOL_CRC(vb2_queue_init_name, 0xae747df3, "_gpl");
SYMBOL_CRC(vb2_queue_init, 0x8e8b29e5, "_gpl");
SYMBOL_CRC(vb2_queue_release, 0x7cc57f43, "_gpl");
SYMBOL_CRC(vb2_queue_change_type, 0xbe98573a, "_gpl");
SYMBOL_CRC(vb2_poll, 0xf60b4b75, "_gpl");
SYMBOL_CRC(vb2_ioctl_reqbufs, 0x82c69c34, "_gpl");
SYMBOL_CRC(vb2_ioctl_create_bufs, 0x61cd22a1, "_gpl");
SYMBOL_CRC(vb2_ioctl_prepare_buf, 0x751c5e55, "_gpl");
SYMBOL_CRC(vb2_ioctl_querybuf, 0x811e1fb4, "_gpl");
SYMBOL_CRC(vb2_ioctl_qbuf, 0x8a613a91, "_gpl");
SYMBOL_CRC(vb2_ioctl_dqbuf, 0x1000759e, "_gpl");
SYMBOL_CRC(vb2_ioctl_streamon, 0xecad2015, "_gpl");
SYMBOL_CRC(vb2_ioctl_streamoff, 0x05b5ec25, "_gpl");
SYMBOL_CRC(vb2_ioctl_expbuf, 0x06d96795, "_gpl");
SYMBOL_CRC(vb2_fop_mmap, 0xc6b2e449, "_gpl");
SYMBOL_CRC(_vb2_fop_release, 0xaabfcfb9, "_gpl");
SYMBOL_CRC(vb2_fop_release, 0xbcec384c, "_gpl");
SYMBOL_CRC(vb2_fop_write, 0x4487cc6c, "_gpl");
SYMBOL_CRC(vb2_fop_read, 0x5b3a0411, "_gpl");
SYMBOL_CRC(vb2_fop_poll, 0x6ef94713, "_gpl");
SYMBOL_CRC(vb2_video_unregister_device, 0x75e8e3e4, "_gpl");
SYMBOL_CRC(vb2_ops_wait_prepare, 0xe9ddafd4, "_gpl");
SYMBOL_CRC(vb2_ops_wait_finish, 0x6b838669, "_gpl");
SYMBOL_CRC(vb2_request_validate, 0xa5ae2f67, "_gpl");
SYMBOL_CRC(vb2_request_queue, 0x300664f1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x600e54ef, "vb2_verify_memory_type" },
	{ 0x915ba293, "vb2_core_reqbufs" },
	{ 0xd8294515, "vb2_core_create_bufs" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3aeaecbf, "vb2_core_dqbuf" },
	{ 0x92997ed8, "_printk" },
	{ 0xdc90eae2, "vb2_core_expbuf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x54ead09e, "vb2_core_queue_init" },
	{ 0xade08fe, "vb2_core_queue_release" },
	{ 0x663b757a, "video_devdata" },
	{ 0xbd71d515, "vb2_core_poll" },
	{ 0xd95a2e80, "v4l2_event_pending" },
	{ 0x18da83af, "vb2_mmap" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbc0e3807, "v4l2_fh_release" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x9c37dbad, "vb2_write" },
	{ 0xc160d280, "vb2_read" },
	{ 0xfa5b2749, "vb2_request_buffer_cnt" },
	{ 0x91ed2506, "vb2_core_streamon" },
	{ 0xbeab66f0, "vb2_core_streamoff" },
	{ 0xf7dca34a, "get_device" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x606b7e51, "put_device" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x57952240, "vb2_buffer_in_use" },
	{ 0xdcb764ad, "memset" },
	{ 0x42d4c066, "media_request_get_by_fd" },
	{ 0xb00fd319, "media_request_put" },
	{ 0x6ae2697c, "vb2_core_prepare_buf" },
	{ 0x82036756, "vb2_core_qbuf" },
	{ 0x72d5c91e, "vb2_core_querybuf" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-common,videodev,mc");


MODULE_INFO(srcversion, "586431A6A51886EF20A7583");
