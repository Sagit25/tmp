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
	{ 0xdcb2663e, "usb_serial_generic_close" },
	{ 0x3e794098, "usb_serial_generic_open" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xc1790d5a, "usb_serial_deregister_drivers" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1D50p6062d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "10CC4DD4EB901941E5CA187");
