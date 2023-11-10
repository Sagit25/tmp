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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb11a7eac, "rdev_get_drvdata" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0xd08ce1d5, "devm_regulator_register" },
	{ 0xd7b797db, "devm_backlight_device_register" },
	{ 0x20e9f9cf, "devm_gpiochip_add_data_with_key" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7aeed1fd, "gpiochip_get_data" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c,backlight");

MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panel-regulator");
MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panel-regulatorC*");

MODULE_INFO(srcversion, "CF7660C41EBA1AE438ABCB5");
