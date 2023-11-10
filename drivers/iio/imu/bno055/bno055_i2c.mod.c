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
	{ 0x5bc94927, "bno055_regmap_config" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x6c2a281, "bno055_probe" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "bno055,regmap-i2c");

MODULE_ALIAS("of:N*T*Cbosch,bno055");
MODULE_ALIAS("of:N*T*Cbosch,bno055C*");
MODULE_ALIAS("i2c:bno055");

MODULE_INFO(srcversion, "61C47EC301FF0AC58C30733");
