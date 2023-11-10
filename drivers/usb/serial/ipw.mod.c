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
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x82145107, "usb_wwan_close" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xdc6e08d5, "usb_clear_halt" },
	{ 0x574f119c, "usb_wwan_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc1790d5a, "usb_serial_deregister_drivers" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xebf98dd, "usb_wwan_port_probe" },
	{ 0x9b69bb45, "usb_wwan_port_remove" },
	{ 0xf3b9d977, "usb_wwan_write" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "usbserial,usb_wwan");

MODULE_ALIAS("usb:v0BC3p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "073F14A87FCD0A3F94EF4C3");
