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
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5bc9df67, "usb_serial_register_drivers" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xffad1d54, "usb_anchor_urb" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x3c683526, "usb_unanchor_urb" },
	{ 0x48cd798f, "usb_serial_port_softint" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xdcb2663e, "usb_serial_generic_close" },
	{ 0xc1790d5a, "usb_serial_deregister_drivers" },
	{ 0xa1bfdb49, "tty_insert_flip_string_fixed_flag" },
	{ 0xaeb00205, "tty_flip_buffer_push" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xdc6e08d5, "usb_clear_halt" },
	{ 0x3e794098, "usb_serial_generic_open" },
	{ 0x11546321, "usb_serial_generic_throttle" },
	{ 0xd8079a6c, "usb_serial_generic_unthrottle" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v065Ap0009d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "23EBCE0B4084EB96D80CC12");
