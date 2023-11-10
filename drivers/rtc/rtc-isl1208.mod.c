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
	{ 0x8af8defc, "i2c_smbus_read_byte_data" },
	{ 0x4a13b6b6, "i2c_smbus_write_byte_data" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xfa74e0b7, "i2c_smbus_write_i2c_block_data" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd486412c, "i2c_smbus_read_i2c_block_data" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xf5b71c4b, "sysfs_notify" },
	{ 0xfbe81577, "rtc_update_irq" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x897dc934, "of_device_get_match_data" },
	{ 0xec1f925, "devm_rtc_allocate_device" },
	{ 0xdcb764ad, "memset" },
	{ 0x33b0a281, "rtc_add_group" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x2f041d07, "of_irq_get_byname" },
	{ 0xf277cf3, "devm_rtc_nvmem_register" },
	{ 0x1338a947, "__devm_rtc_register_device" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cisil,isl1208");
MODULE_ALIAS("of:N*T*Cisil,isl1208C*");
MODULE_ALIAS("of:N*T*Cisil,isl1209");
MODULE_ALIAS("of:N*T*Cisil,isl1209C*");
MODULE_ALIAS("of:N*T*Cisil,isl1218");
MODULE_ALIAS("of:N*T*Cisil,isl1218C*");
MODULE_ALIAS("of:N*T*Cisil,isl1219");
MODULE_ALIAS("of:N*T*Cisil,isl1219C*");
MODULE_ALIAS("i2c:isl1208");
MODULE_ALIAS("i2c:isl1209");
MODULE_ALIAS("i2c:isl1218");
MODULE_ALIAS("i2c:isl1219");

MODULE_INFO(srcversion, "DCD339720AF6146EFA6EFB9");
