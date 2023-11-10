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
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0x39011c74, "usb_put_dev" },
	{ 0x64d8de28, "usb_deregister" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x63c48805, "usb_get_dev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd993d32c, "usb_control_msg" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1964p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A40AFCBD9274E5BFE61B4D6");
