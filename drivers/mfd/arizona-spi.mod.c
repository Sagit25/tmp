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
	{ 0xdb7c90e0, "__spi_register_driver" },
	{ 0xcab714ab, "arizona_dev_exit" },
	{ 0x185e9f15, "spi_get_device_id" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0x16c93820, "wm5102_spi_regmap" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x7c32e51c, "__devm_regmap_init_spi" },
	{ 0xddf78018, "arizona_dev_init" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0x83248ce8, "arizona_pm_ops" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "arizona,regmap-spi");

MODULE_ALIAS("of:N*T*Cwlf,wm5102");
MODULE_ALIAS("of:N*T*Cwlf,wm5102C*");
MODULE_ALIAS("of:N*T*Cwlf,wm5110");
MODULE_ALIAS("of:N*T*Cwlf,wm5110C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8280");
MODULE_ALIAS("of:N*T*Cwlf,wm8280C*");
MODULE_ALIAS("of:N*T*Cwlf,wm1831");
MODULE_ALIAS("of:N*T*Cwlf,wm1831C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l24");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l24C*");
MODULE_ALIAS("spi:wm5102");
MODULE_ALIAS("spi:wm5110");
MODULE_ALIAS("spi:wm8280");
MODULE_ALIAS("spi:wm1831");
MODULE_ALIAS("spi:cs47l24");

MODULE_INFO(srcversion, "C7601A7B3722FE2D9EF3EE4");
