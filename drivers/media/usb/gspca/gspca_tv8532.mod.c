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
	{ 0x63230d82, "usb_register_driver" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x2397e063, "gspca_frame_add" },
	{ 0x92997ed8, "_printk" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x8ec4c104, "gspca_disconnect" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x76d48bab, "gspca_resume" },
	{ 0x63367330, "gspca_dev_probe" },
	{ 0x3e7ebd06, "gspca_suspend" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v046Dp0920d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0921d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p808Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8333d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0923p010Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5BBD546606C2427063C755D");