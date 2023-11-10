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
	{ 0x92997ed8, "_printk" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0xd1d673c8, "usbatm_usb_probe" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5de2d534, "usb_driver_release_interface" },
	{ 0xb0f671c4, "usb_altnum_to_altsetting" },
	{ 0x81fbeed7, "usb_driver_claim_interface" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xb5a1ac53, "param_ops_byte" },
	{ 0xd9653b2f, "param_ops_ushort" },
	{ 0x82740225, "usbatm_usb_disconnect" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "usbatm");


MODULE_INFO(srcversion, "68F6109825DE6FE81708C65");
