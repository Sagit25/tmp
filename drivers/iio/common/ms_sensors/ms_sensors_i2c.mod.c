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

SYMBOL_CRC(ms_sensors_reset, 0x2d2f5cd5, "");
SYMBOL_CRC(ms_sensors_read_prom_word, 0x045688dd, "");
SYMBOL_CRC(ms_sensors_convert_and_read, 0x42b6a050, "");
SYMBOL_CRC(ms_sensors_read_serial, 0x8f0461fc, "");
SYMBOL_CRC(ms_sensors_write_resolution, 0x17e02772, "");
SYMBOL_CRC(ms_sensors_show_battery_low, 0x6a807ec9, "");
SYMBOL_CRC(ms_sensors_show_heater, 0x45031e28, "");
SYMBOL_CRC(ms_sensors_write_heater, 0x8c313ff8, "");
SYMBOL_CRC(ms_sensors_ht_read_temperature, 0x69a36cae, "");
SYMBOL_CRC(ms_sensors_ht_read_humidity, 0xd13ce113, "");
SYMBOL_CRC(ms_sensors_tp_read_prom, 0xda7bc664, "");
SYMBOL_CRC(ms_sensors_read_temp_and_pressure, 0xf5d5464c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc768ff0f, "i2c_smbus_write_byte" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x50d3769f, "i2c_smbus_read_word_data" },
	{ 0xd486412c, "i2c_smbus_read_i2c_block_data" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4a13b6b6, "i2c_smbus_write_byte_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C2F56A03575DA6B582C4FF3");
