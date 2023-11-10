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
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd486412c, "i2c_smbus_read_i2c_block_data" },
	{ 0xb29f2933, "iio_push_to_buffers" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc22fcea6, "devm_iio_kfifo_buffer_setup_ext" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x695daad2, "__iio_device_register" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xa207ec7d, "iio_device_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1c3c257c, "iio_buffer_enabled" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf,regmap-i2c");

MODULE_ALIAS("of:N*T*Cmaxim,max30102");
MODULE_ALIAS("of:N*T*Cmaxim,max30102C*");
MODULE_ALIAS("of:N*T*Cmaxim,max30105");
MODULE_ALIAS("of:N*T*Cmaxim,max30105C*");
MODULE_ALIAS("i2c:max30102");
MODULE_ALIAS("i2c:max30105");

MODULE_INFO(srcversion, "F38D56192C309604158BC79");
