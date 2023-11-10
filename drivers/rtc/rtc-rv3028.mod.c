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
	{ 0xc75df6b5, "regmap_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x48f139e6, "regmap_bulk_write" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfbe81577, "rtc_update_irq" },
	{ 0xf5b71c4b, "sysfs_notify" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0xec1f925, "devm_rtc_allocate_device" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x33b0a281, "rtc_add_group" },
	{ 0x1338a947, "__devm_rtc_register_device" },
	{ 0xf277cf3, "devm_rtc_nvmem_register" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0xa92a150c, "devm_clk_register" },
	{ 0x228fdf1a, "of_clk_src_simple_get" },
	{ 0x2b2ee70c, "of_clk_add_provider" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3028");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3028C*");

MODULE_INFO(srcversion, "330347572045C42DEF18659");
