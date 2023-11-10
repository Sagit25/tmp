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
	{ 0x4a13b6b6, "i2c_smbus_write_byte_data" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xfd892dc3, "devm_thermal_of_cooling_device_register" },
	{ 0xafc9f6c3, "thermal_cooling_device_register" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8af8defc, "i2c_smbus_read_byte_data" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xad9b0ff1, "devm_hwmon_device_register_with_info" },
	{ 0x1196dca3, "of_property_read_variable_u8_array" },
	{ 0xdcb764ad, "memset" },
	{ 0x8cc40538, "thermal_cooling_device_unregister" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x50d3769f, "i2c_smbus_read_word_data" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,emc2305");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2305C*");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2303");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2303C*");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2302");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2302C*");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2301");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2301C*");
MODULE_ALIAS("i2c:emc2305");
MODULE_ALIAS("i2c:emc2303");
MODULE_ALIAS("i2c:emc2302");
MODULE_ALIAS("i2c:emc2301");

MODULE_INFO(srcversion, "D5A37F241539B3A50D4CE8A");
