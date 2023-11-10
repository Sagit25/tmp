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

SYMBOL_CRC(usb_wwan_dtr_rts, 0x5bb2a979, "");
SYMBOL_CRC(usb_wwan_tiocmget, 0x995c7ded, "");
SYMBOL_CRC(usb_wwan_tiocmset, 0xf450cc4e, "");
SYMBOL_CRC(usb_wwan_write, 0xf3b9d977, "");
SYMBOL_CRC(usb_wwan_write_room, 0xb334fa00, "");
SYMBOL_CRC(usb_wwan_chars_in_buffer, 0x06f970af, "");
SYMBOL_CRC(usb_wwan_open, 0x574f119c, "");
SYMBOL_CRC(usb_wwan_close, 0x82145107, "");
SYMBOL_CRC(usb_wwan_port_probe, 0x0ebf98dd, "_gpl");
SYMBOL_CRC(usb_wwan_port_remove, 0x9b69bb45, "");
SYMBOL_CRC(usb_wwan_suspend, 0xb0e5d194, "");
SYMBOL_CRC(usb_wwan_resume, 0xda9bb6b3, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd68e2560, "usb_autopm_get_interface" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x141b8c4e, "usb_autopm_put_interface" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34ba1279, "usb_unlink_urb" },
	{ 0x8ede5291, "usb_autopm_get_interface_async" },
	{ 0x4829a47e, "memcpy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xffad1d54, "usb_anchor_urb" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd6fa9888, "usb_autopm_put_interface_async" },
	{ 0x6973d8b2, "usb_get_from_anchor" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0xf7c91fce, "usb_autopm_get_interface_no_resume" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x48cd798f, "usb_serial_port_softint" },
	{ 0xa1bfdb49, "tty_insert_flip_string_fixed_flag" },
	{ 0xaeb00205, "tty_flip_buffer_push" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "usbserial");


MODULE_INFO(srcversion, "25FA6CD4D0727870D30ACE7");
