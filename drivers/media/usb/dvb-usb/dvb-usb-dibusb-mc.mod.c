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
	{ 0x805b9bd4, "dibusb_pid_filter_ctrl" },
	{ 0x1e9d6ccc, "dibusb_i2c_algo" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x4a2f5d5f, "dibusb2_0_streaming_ctrl" },
	{ 0x3a947ae9, "dibusb_dib3000mc_tuner_attach" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x15eb687e, "dibusb_dib3000mc_frontend_attach" },
	{ 0xe852bdb, "dibusb2_0_power_ctrl" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xce17fc90, "param_ops_short" },
	{ 0xf024beab, "dibusb_pid_filter" },
	{ 0xd872e52f, "dibusb_rc_query" },
	{ 0x5b3a473f, "dvb_usb_device_init" },
	{ 0x78056a3, "dvb_usb_device_exit" },
	{ 0x93822ecb, "rc_map_dibusb_table" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dvb-usb-dibusb-common,dvb-usb-dibusb-mc-common,dvb-usb");

MODULE_ALIAS("usb:v10B8p0BC6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p0BC7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CApF000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CApF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE360d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE361d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BC6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BC7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B9p5000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B9p5001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D2277209520FF2750657654");
