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
	{ 0x5bc9df67, "usb_serial_register_drivers" },
	{ 0xc1790d5a, "usb_serial_deregister_drivers" },
	{ 0xa1bfdb49, "tty_insert_flip_string_fixed_flag" },
	{ 0xaeb00205, "tty_flip_buffer_push" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v049FpFFFFd*dc02dsc*dp*icFFisc02ip*in*");
MODULE_ALIAS("usb:v03F0p2101d*dc02dsc*dp*icFFisc02ip*in*");
MODULE_ALIAS("usb:v04DDp8001d*dc02dsc*dp*icFFisc02ip*in*");
MODULE_ALIAS("usb:v04DDp8002d*dc02dsc*dp*icFFisc02ip*in*");
MODULE_ALIAS("usb:v04DDp8003d*dc02dsc*dp*icFFisc02ip*in*");
MODULE_ALIAS("usb:v04DDp8004d*dc02dsc*dp*icFFisc02ip*in*");
MODULE_ALIAS("usb:v05F9pFFFFd*dc02dsc*dp*icFFisc02ip*in*");

MODULE_INFO(srcversion, "E8C6515AD6D298DA7A73B6A");
