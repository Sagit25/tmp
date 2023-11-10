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
	{ 0xe81c4af4, "dvb_usbv2_reset_resume" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x60463437, "dvb_usbv2_suspend" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc062f0a9, "dvb_module_release" },
	{ 0x17f5f1fc, "dvb_usbv2_disconnect" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xce76e82, "dvb_usbv2_probe" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xce17fc90, "param_ops_short" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe23376b3, "dvb_usbv2_resume" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x65176a62, "dvb_module_probe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dvb_usb_v2,dvb-core");

MODULE_ALIAS("usb:v0DB0p5581d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3pF170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7A69p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8A36512398CC23D77F7608E");
