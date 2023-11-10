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
	{ 0xbe6bb272, "usb_alloc_urb" },
	{ 0xad048f4, "usb_alloc_coherent" },
	{ 0xcb319d8, "usb_ifnum_to_if" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x2397e063, "gspca_frame_add" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x92997ed8, "_printk" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x8ec4c104, "gspca_disconnect" },
	{ 0x76d48bab, "gspca_resume" },
	{ 0x63367330, "gspca_dev_probe" },
	{ 0x3e7ebd06, "gspca_suspend" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "gspca_main");

MODULE_ALIAS("usb:v04A5p3035d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0E25E53D56BF645B2FC4F57");
