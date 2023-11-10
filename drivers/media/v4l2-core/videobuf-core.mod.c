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

SYMBOL_CRC(videobuf_alloc_vb, 0x2ce0c75a, "_gpl");
SYMBOL_CRC(videobuf_waiton, 0x2976763e, "_gpl");
SYMBOL_CRC(videobuf_iolock, 0x9a200be6, "_gpl");
SYMBOL_CRC(videobuf_queue_to_vaddr, 0xfacfd94f, "_gpl");
SYMBOL_CRC(videobuf_queue_core_init, 0xefde85cc, "_gpl");
SYMBOL_CRC(videobuf_queue_is_busy, 0x4a11aa8b, "_gpl");
SYMBOL_CRC(videobuf_queue_cancel, 0xedc32c42, "_gpl");
SYMBOL_CRC(videobuf_next_field, 0xc233a8bc, "_gpl");
SYMBOL_CRC(videobuf_mmap_free, 0x6175abac, "_gpl");
SYMBOL_CRC(__videobuf_mmap_setup, 0x4b5cb850, "_gpl");
SYMBOL_CRC(videobuf_mmap_setup, 0x092861c8, "_gpl");
SYMBOL_CRC(videobuf_reqbufs, 0x6e7170af, "_gpl");
SYMBOL_CRC(videobuf_querybuf, 0x0c53ab7e, "_gpl");
SYMBOL_CRC(videobuf_qbuf, 0x5b3f48d7, "_gpl");
SYMBOL_CRC(videobuf_dqbuf, 0xd81d5a0d, "_gpl");
SYMBOL_CRC(videobuf_streamon, 0xe7274494, "_gpl");
SYMBOL_CRC(videobuf_streamoff, 0xdb809a13, "_gpl");
SYMBOL_CRC(videobuf_read_one, 0x9e794242, "_gpl");
SYMBOL_CRC(videobuf_read_start, 0xf65e71a0, "_gpl");
SYMBOL_CRC(videobuf_read_stop, 0xacea2f70, "_gpl");
SYMBOL_CRC(videobuf_stop, 0x4c873371, "_gpl");
SYMBOL_CRC(videobuf_read_stream, 0x1e61bbe3, "_gpl");
SYMBOL_CRC(videobuf_poll_stream, 0x5ecf7424, "_gpl");
SYMBOL_CRC(videobuf_mmap_mapper, 0x41364638, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdcb764ad, "memset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb8273d0b, "__wake_up_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x5efdd68b, "__tracepoint_mmap_lock_released" },
	{ 0x53b954a2, "up_read" },
	{ 0xbd628752, "__tracepoint_mmap_lock_start_locking" },
	{ 0x668b19a1, "down_read" },
	{ 0xbe118c52, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0xd7fa57f6, "__mmap_lock_do_trace_released" },
	{ 0xb8988a17, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x53a52a62, "__mmap_lock_do_trace_start_locking" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B8E123CF7AE26AC142860FD");
