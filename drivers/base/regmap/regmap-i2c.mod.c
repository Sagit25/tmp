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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(__regmap_init_i2c, 0xba894707, "_gpl");
SYMBOL_CRC(__devm_regmap_init_i2c, 0xadf4cb34, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8d80590, "regmap_get_val_endian" },
	{ 0x8af8defc, "i2c_smbus_read_byte_data" },
	{ 0x4a13b6b6, "i2c_smbus_write_byte_data" },
	{ 0x50d3769f, "i2c_smbus_read_word_data" },
	{ 0x544f11c4, "i2c_smbus_write_word_data" },
	{ 0xbc28ce7f, "i2c_smbus_read_byte" },
	{ 0xfa74e0b7, "i2c_smbus_write_i2c_block_data" },
	{ 0xd486412c, "i2c_smbus_read_i2c_block_data" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0xf2ba3154, "__regmap_init" },
	{ 0x45e6bd64, "__devm_regmap_init" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8D38F3AB4216DA66021D940");
