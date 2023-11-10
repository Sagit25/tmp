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
	{ 0x33dd79ab, "m88ds3103_get_agc_pwm" },
	{ 0xe81c4af4, "dvb_usbv2_reset_resume" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x60463437, "dvb_usbv2_suspend" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc062f0a9, "dvb_module_release" },
	{ 0x17f5f1fc, "dvb_usbv2_disconnect" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdce846aa, "rc_keydown" },
	{ 0xce76e82, "dvb_usbv2_probe" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x392f162c, "dvb_usbv2_generic_write_locked" },
	{ 0x9f1a4058, "dvb_usbv2_generic_rw_locked" },
	{ 0xce17fc90, "param_ops_short" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe23376b3, "dvb_usbv2_resume" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x65176a62, "dvb_module_probe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "m88ds3103,dvb_usb_v2,dvb-core");

MODULE_ALIAS("usb:v0572p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p960Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p680Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC689d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC699d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC68Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC69Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p689Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D832727BD2AAE61AF12873F");
