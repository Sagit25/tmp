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
	{ 0x1dc09e9b, "usb_control_msg_send" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x141b8c4e, "usb_autopm_put_interface" },
	{ 0xd68e2560, "usb_autopm_get_interface" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0FC5p1227d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7BA0C93A81A7D41B78B9BE0");
