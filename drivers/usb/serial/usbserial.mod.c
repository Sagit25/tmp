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

SYMBOL_CRC(usb_serial_claim_interface, 0xb9aa6198, "_gpl");
SYMBOL_CRC(usb_serial_port_softint, 0x48cd798f, "_gpl");
SYMBOL_CRC(usb_serial_suspend, 0xd0b83bcf, "");
SYMBOL_CRC(usb_serial_resume, 0x814d6cee, "");
SYMBOL_CRC(usb_serial_register_drivers, 0x5bc9df67, "_gpl");
SYMBOL_CRC(usb_serial_deregister_drivers, 0xc1790d5a, "_gpl");
SYMBOL_CRC(usb_serial_generic_open, 0x3e794098, "_gpl");
SYMBOL_CRC(usb_serial_generic_close, 0xdcb2663e, "_gpl");
SYMBOL_CRC(usb_serial_generic_write_start, 0x3e15807c, "_gpl");
SYMBOL_CRC(usb_serial_generic_write, 0x0af8e3b2, "_gpl");
SYMBOL_CRC(usb_serial_generic_chars_in_buffer, 0xb342fe5c, "_gpl");
SYMBOL_CRC(usb_serial_generic_wait_until_sent, 0x0c397da6, "_gpl");
SYMBOL_CRC(usb_serial_generic_submit_read_urbs, 0xcb223588, "_gpl");
SYMBOL_CRC(usb_serial_generic_process_read_urb, 0x449fa931, "_gpl");
SYMBOL_CRC(usb_serial_generic_read_bulk_callback, 0xea60e0b6, "_gpl");
SYMBOL_CRC(usb_serial_generic_write_bulk_callback, 0x101bbe53, "_gpl");
SYMBOL_CRC(usb_serial_generic_throttle, 0x11546321, "_gpl");
SYMBOL_CRC(usb_serial_generic_unthrottle, 0xd8079a6c, "_gpl");
SYMBOL_CRC(usb_serial_generic_tiocmiwait, 0x3eb193c6, "_gpl");
SYMBOL_CRC(usb_serial_generic_get_icount, 0xb5295afa, "_gpl");
SYMBOL_CRC(usb_serial_handle_dcd_change, 0xcbcc835f, "_gpl");
SYMBOL_CRC(usb_serial_generic_resume, 0xf488cd00, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x219ec1bf, "usb_put_intf" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0x141b8c4e, "usb_autopm_put_interface" },
	{ 0x1425e33, "try_module_get" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x20978fb9, "idr_find" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x97fb13f9, "dev_set_name" },
	{ 0xd9653b2f, "param_ops_ushort" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xaeb00205, "tty_flip_buffer_push" },
	{ 0x8eccc06a, "driver_attach" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5b1c34e9, "tty_kref_put" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x30d3cec7, "usb_match_one_id" },
	{ 0x6eb983df, "device_initialize" },
	{ 0x37a0cba, "kfree" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0xa9e510c2, "__tty_alloc_driver" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x28c7a611, "tty_standard_install" },
	{ 0xe2964344, "__wake_up" },
	{ 0xc17e9946, "usb_show_dynids" },
	{ 0xd0b3a353, "tty_hangup" },
	{ 0x404cbbc5, "tty_unregister_driver" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xe816048f, "tty_termios_copy_hw" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x878e81de, "usb_get_intf" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x5de2d534, "usb_driver_release_interface" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x606b7e51, "put_device" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xe222a926, "tty_unregister_device" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcc793c4a, "module_put" },
	{ 0x778bda51, "tty_port_tty_wakeup" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xa33102b7, "usb_match_id" },
	{ 0xa196a6ae, "usb_store_new_id" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x314dd00c, "bus_unregister" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x7bbe500c, "device_add" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xa2e04832, "tty_ldisc_ref" },
	{ 0x588cbb19, "tty_vhangup" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9d2fae71, "tty_port_destroy" },
	{ 0xa1bfdb49, "tty_insert_flip_string_fixed_flag" },
	{ 0xf4451124, "tty_port_init" },
	{ 0x81fbeed7, "usb_driver_claim_interface" },
	{ 0xab93c2ef, "seq_putc" },
	{ 0xfd48fb29, "usb_poison_urb" },
	{ 0x2b7ae74c, "usb_unpoison_urb" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xdb5543b0, "tty_port_register_device" },
	{ 0xb0742218, "tty_ldisc_deref" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x402beac3, "device_del" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xd89a809, "tty_port_close" },
	{ 0x9192c808, "__tty_insert_flip_char" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd68e2560, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3f0fbe64, "tty_register_driver" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x1f3f794f, "tty_port_hangup" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x361e082b, "tty_port_open" },
	{ 0xdcebe45, "seq_puts" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x24a061ef, "driver_register" },
	{ 0xb25cdb31, "tty_driver_kref_put" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xeb280106, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5e7a361, "tty_port_tty_get" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A5F704D34C00F5D532E0C16");
