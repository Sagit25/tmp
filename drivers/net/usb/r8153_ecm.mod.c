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
	{ 0xe2e3c32a, "usbnet_cdc_bind" },
	{ 0xf53ff0a4, "usbnet_read_cmd" },
	{ 0x4cab5036, "usbnet_write_cmd" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x5313f8bc, "rtl8152_get_version" },
	{ 0xfca66e8f, "usbnet_probe" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x8b4f0025, "usbnet_cdc_unbind" },
	{ 0xb66e4d18, "usbnet_manage_power" },
	{ 0xa5f5b503, "usbnet_cdc_status" },
	{ 0xa7571c90, "usbnet_disconnect" },
	{ 0xdca6a77f, "usbnet_suspend" },
	{ 0x6cb0863b, "usbnet_resume" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "0536198173B079922A4080B");
