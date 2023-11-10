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
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x50d3769f, "i2c_smbus_read_word_data" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xc768ff0f, "i2c_smbus_write_byte" },
	{ 0xf9a482f9, "msleep" },
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0xb43d639b, "__devm_iio_device_register" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Csilabs,si7020");
MODULE_ALIAS("of:N*T*Csilabs,si7020C*");
MODULE_ALIAS("i2c:si7020");
MODULE_ALIAS("i2c:th06");

MODULE_INFO(srcversion, "03A63F0C25180DB9C4A4A7F");