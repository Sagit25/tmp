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
	{ 0xfbe81577, "rtc_update_irq" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0xec1f925, "devm_rtc_allocate_device" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x6dd0c223, "dev_pm_set_wake_irq" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x1338a947, "__devm_rtc_register_device" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x48f139e6, "regmap_bulk_write" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cnxp,pcf8523");
MODULE_ALIAS("of:N*T*Cnxp,pcf8523C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8523");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8523C*");
MODULE_ALIAS("i2c:pcf8523");

MODULE_INFO(srcversion, "F7D0B7633ABB49207A18DCC");
