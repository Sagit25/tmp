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
	{ 0xf6faf288, "bmp380_regmap_config" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0xba77f815, "bmp280_common_probe" },
	{ 0x19a84469, "bmp280_regmap_config" },
	{ 0xf32e990b, "bmp180_regmap_config" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xfc4325f5, "bmp280_dev_pm_ops" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bmp280,regmap-i2c");

MODULE_ALIAS("i2c:bmp085");
MODULE_ALIAS("i2c:bmp180");
MODULE_ALIAS("i2c:bmp280");
MODULE_ALIAS("i2c:bme280");
MODULE_ALIAS("i2c:bmp380");
MODULE_ALIAS("of:N*T*Cbosch,bmp085");
MODULE_ALIAS("of:N*T*Cbosch,bmp085C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp180");
MODULE_ALIAS("of:N*T*Cbosch,bmp180C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp280");
MODULE_ALIAS("of:N*T*Cbosch,bmp280C*");
MODULE_ALIAS("of:N*T*Cbosch,bme280");
MODULE_ALIAS("of:N*T*Cbosch,bme280C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp380");
MODULE_ALIAS("of:N*T*Cbosch,bmp380C*");

MODULE_INFO(srcversion, "20353FD4C6C5B60FC7C3B8A");
