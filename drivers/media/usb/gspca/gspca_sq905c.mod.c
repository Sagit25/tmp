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
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x2397e063, "gspca_frame_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x92997ed8, "_printk" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x8ec4c104, "gspca_disconnect" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x76d48bab, "gspca_resume" },
	{ 0x63367330, "gspca_dev_probe" },
	{ 0x3e7ebd06, "gspca_suspend" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "gspca_main");

MODULE_ALIAS("usb:v2770p905Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p9050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p9051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p9052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p913Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "00E6B5870A1E79D89E1BF0C");
