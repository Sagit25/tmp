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
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x2397e063, "gspca_frame_add" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x92997ed8, "_printk" },
	{ 0xdc6e08d5, "usb_clear_halt" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x8ec4c104, "gspca_disconnect" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x76d48bab, "gspca_resume" },
	{ 0x63367330, "gspca_dev_probe" },
	{ 0x3e7ebd06, "gspca_suspend" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "gspca_main");

MODULE_ALIAS("usb:v04CBp0104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp010Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp010Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0115d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0117d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0119d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp011Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp011Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0125d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0127d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0129d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp012Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp012Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp012Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp013Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp013Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp013Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DB1B7319817BE76364B49D4");
