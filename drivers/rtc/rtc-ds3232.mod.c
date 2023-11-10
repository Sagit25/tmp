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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xfbe81577, "rtc_update_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x48f139e6, "regmap_bulk_write" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xdcb764ad, "memset" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xad9b0ff1, "devm_hwmon_device_register_with_info" },
	{ 0x43fde327, "devm_rtc_device_register" },
	{ 0xf277cf3, "devm_rtc_nvmem_register" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x7c32e51c, "__devm_regmap_init_spi" },
	{ 0xd0585d22, "spi_setup" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,regmap-spi");

MODULE_ALIAS("of:N*T*Cdallas,ds3234");
MODULE_ALIAS("of:N*T*Cdallas,ds3234C*");
MODULE_ALIAS("of:N*T*Cdallas,ds3232");
MODULE_ALIAS("of:N*T*Cdallas,ds3232C*");
MODULE_ALIAS("i2c:ds3232");

MODULE_INFO(srcversion, "3591B6FC22A8B7559BB0DDF");
