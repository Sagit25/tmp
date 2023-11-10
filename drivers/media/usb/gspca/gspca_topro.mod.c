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
	{ 0x4829a47e, "memcpy" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x9e1e6959, "v4l2_ctrl_auto_cluster" },
	{ 0x92997ed8, "_printk" },
	{ 0x5df2f13b, "usb_bulk_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x62d2a046, "__v4l2_ctrl_s_ctrl" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x8ec4c104, "gspca_disconnect" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x15c074e1, "v4l2_ctrl_g_ctrl" },
	{ 0x76d48bab, "gspca_resume" },
	{ 0x9a4f7d62, "gspca_expo_autogain" },
	{ 0x63367330, "gspca_dev_probe" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x3e7ebd06, "gspca_suspend" },
	{ 0x61c51a7b, "v4l2_ctrl_cluster" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v06A2p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06A2p6810d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D4605CCB9F7DC9B264A547E");
