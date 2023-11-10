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
	{ 0xa207ec7d, "iio_device_unregister" },
	{ 0x4a13b6b6, "i2c_smbus_write_byte_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x50d3769f, "i2c_smbus_read_word_data" },
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8af8defc, "i2c_smbus_read_byte_data" },
	{ 0x695daad2, "__iio_device_register" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x7246f0f1, "iio_read_const_attr" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Camstaos,tsl4531");
MODULE_ALIAS("of:N*T*Camstaos,tsl4531C*");
MODULE_ALIAS("i2c:tsl4531");

MODULE_INFO(srcversion, "72A93F4E4FBD7FD2C1856B9");
