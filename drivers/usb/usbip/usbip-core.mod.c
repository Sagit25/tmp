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

SYMBOL_CRC(usbip_debug_flag, 0x78b72f44, "_gpl");
SYMBOL_CRC(dev_attr_usbip_debug, 0x71ba49e7, "_gpl");
SYMBOL_CRC(usbip_dump_urb, 0x3718b89a, "_gpl");
SYMBOL_CRC(usbip_dump_header, 0xe1ea0586, "_gpl");
SYMBOL_CRC(usbip_recv, 0xc0a07fe8, "_gpl");
SYMBOL_CRC(usbip_pack_pdu, 0x77232d69, "_gpl");
SYMBOL_CRC(usbip_header_correct_endian, 0xd02753dc, "_gpl");
SYMBOL_CRC(usbip_alloc_iso_desc_pdu, 0x2a0eb5ac, "_gpl");
SYMBOL_CRC(usbip_recv_iso, 0x84821a26, "_gpl");
SYMBOL_CRC(usbip_pad_iso, 0xf6677724, "_gpl");
SYMBOL_CRC(usbip_recv_xbuff, 0x3c1bf21a, "_gpl");
SYMBOL_CRC(usbip_start_eh, 0x5903cc1a, "_gpl");
SYMBOL_CRC(usbip_stop_eh, 0x1dd70ce4, "_gpl");
SYMBOL_CRC(usbip_event_add, 0x15aabbb1, "_gpl");
SYMBOL_CRC(usbip_event_happened, 0x6e81ad2b, "_gpl");
SYMBOL_CRC(usbip_in_eh, 0x2866dbd5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x991da2cb, "param_ops_ulong" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9055cb3a, "iov_iter_kvec" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x87b8798d, "sg_next" },
	{ 0x281fa3b3, "sock_recvmsg" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5D27CB9ECDDCB9E75DDD7F1");
