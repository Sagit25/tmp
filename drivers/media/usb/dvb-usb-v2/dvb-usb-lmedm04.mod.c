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
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xa2a5a7dd, "usb_free_urb" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x74a05018, "request_firmware" },
	{ 0x63230d82, "usb_register_driver" },
	{ 0x34813f6d, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd6791a81, "usb_submit_urb" },
	{ 0x17f5f1fc, "dvb_usbv2_disconnect" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xdce846aa, "rc_keydown" },
	{ 0xce76e82, "dvb_usbv2_probe" },
	{ 0x5ef641f8, "usb_set_interface" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0x9f1a4058, "dvb_usbv2_generic_rw_locked" },
	{ 0xce17fc90, "param_ops_short" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x8c2d340, "dvb_frontend_detach" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x41bc3488, "usb_reset_configuration" },
	{ 0x1088ce64, "usb_kill_urb" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dvb_usb_v2,dvb-core");

MODULE_ALIAS("usb:v3344p1122d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3344p1120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3344p22F0d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7AE25EB4DE98B836128247E");
