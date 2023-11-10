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
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x742ca250, "i2c_unregister_device" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x8733236, "intlog10" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x897dc934, "of_device_get_match_data" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0xcc943aad, "i2c_new_dummy_device" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "dvb-core,regmap-i2c");

MODULE_ALIAS("i2c:mn884433");
MODULE_ALIAS("i2c:mn884434-0");
MODULE_ALIAS("i2c:mn884434-1");
MODULE_ALIAS("of:N*T*Csocionext,mn884433");
MODULE_ALIAS("of:N*T*Csocionext,mn884433C*");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-0");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-0C*");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-1");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-1C*");

MODULE_INFO(srcversion, "ED7E56C6BAA51A5E9FD89B9");
