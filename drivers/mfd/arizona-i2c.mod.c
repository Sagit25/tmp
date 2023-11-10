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
	{ 0xcab714ab, "arizona_dev_exit" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0x55f1f96c, "wm5102_i2c_regmap" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0xddf78018, "arizona_dev_init" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x83248ce8, "arizona_pm_ops" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "arizona,regmap-i2c");

MODULE_ALIAS("of:N*T*Cwlf,wm5102");
MODULE_ALIAS("of:N*T*Cwlf,wm5102C*");
MODULE_ALIAS("of:N*T*Cwlf,wm5110");
MODULE_ALIAS("of:N*T*Cwlf,wm5110C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8280");
MODULE_ALIAS("of:N*T*Cwlf,wm8280C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8997");
MODULE_ALIAS("of:N*T*Cwlf,wm8997C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8998");
MODULE_ALIAS("of:N*T*Cwlf,wm8998C*");
MODULE_ALIAS("of:N*T*Cwlf,wm1814");
MODULE_ALIAS("of:N*T*Cwlf,wm1814C*");
MODULE_ALIAS("i2c:wm5102");
MODULE_ALIAS("i2c:wm5110");
MODULE_ALIAS("i2c:wm8280");
MODULE_ALIAS("i2c:wm8997");
MODULE_ALIAS("i2c:wm8998");
MODULE_ALIAS("i2c:wm1814");

MODULE_INFO(srcversion, "CF6259A43B4D1C0FA64D24D");
