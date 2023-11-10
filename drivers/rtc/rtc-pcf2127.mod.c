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
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x48f139e6, "regmap_bulk_write" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xec1f925, "devm_rtc_allocate_device" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xb13a59e0, "device_property_present" },
	{ 0x2205647c, "devm_watchdog_register_device" },
	{ 0x33b0a281, "rtc_add_group" },
	{ 0x1338a947, "__devm_rtc_register_device" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xdcb764ad, "memset" },
	{ 0xf277cf3, "devm_rtc_nvmem_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7c32e51c, "__devm_regmap_init_spi" },
	{ 0x185e9f15, "spi_get_device_id" },
	{ 0xbc15ad04, "i2c_match_id" },
	{ 0x45e6bd64, "__devm_regmap_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfbe81577, "rtc_update_irq" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-spi");

MODULE_ALIAS("spi:pcf2127");
MODULE_ALIAS("spi:pcf2129");
MODULE_ALIAS("spi:pca2129");
MODULE_ALIAS("i2c:pcf2127");
MODULE_ALIAS("i2c:pcf2129");
MODULE_ALIAS("i2c:pca2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129C*");
MODULE_ALIAS("of:N*T*Cnxp,pca2129");
MODULE_ALIAS("of:N*T*Cnxp,pca2129C*");

MODULE_INFO(srcversion, "5489B884476273AF56A5921");
