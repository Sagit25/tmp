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

SYMBOL_CRC(gs_alloc_req, 0x4a3df9d0, "_gpl");
SYMBOL_CRC(gs_free_req, 0x60ea48a0, "_gpl");
SYMBOL_CRC(gserial_free_line, 0xb6652875, "_gpl");
SYMBOL_CRC(gserial_alloc_line_no_console, 0xe89dc424, "_gpl");
SYMBOL_CRC(gserial_alloc_line, 0x33bfdca2, "_gpl");
SYMBOL_CRC(gserial_connect, 0x482da47c, "_gpl");
SYMBOL_CRC(gserial_disconnect, 0xe0483bc5, "_gpl");
SYMBOL_CRC(gserial_suspend, 0xbc8b3a90, "_gpl");
SYMBOL_CRC(gserial_resume, 0xb55278ab, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0xa9e510c2, "__tty_alloc_driver" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3f0fbe64, "tty_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0xb25cdb31, "tty_driver_kref_put" },
	{ 0x404cbbc5, "tty_unregister_driver" },
	{ 0xe2964344, "__wake_up" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xc51a4dbd, "tty_wakeup" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xa1bfdb49, "tty_insert_flip_string_fixed_flag" },
	{ 0xaeb00205, "tty_flip_buffer_push" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x9d2fae71, "tty_port_destroy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe222a926, "tty_unregister_device" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xf4451124, "tty_port_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdb5543b0, "tty_port_register_device" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd0b3a353, "tty_hangup" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "98F6CA79C77D4F411075E17");
