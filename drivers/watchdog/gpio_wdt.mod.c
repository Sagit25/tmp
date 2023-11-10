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
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x796376c1, "gpiod_direction_output" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x63a87a6a, "devm_gpiod_get" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x300ade63, "watchdog_init_timeout" },
	{ 0x2205647c, "devm_watchdog_register_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x604f36d6, "gpiod_direction_input" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Clinux,wdt-gpio");
MODULE_ALIAS("of:N*T*Clinux,wdt-gpioC*");

MODULE_INFO(srcversion, "01163A0D9430CA4A42546FF");
