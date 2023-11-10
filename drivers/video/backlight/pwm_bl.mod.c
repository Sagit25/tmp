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
	{ 0xc4ffa827, "pwm_apply_state" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa57334bc, "backlight_device_unregister" },
	{ 0xe5768aef, "pwm_free" },
	{ 0xe52de225, "regulator_enable" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0xa1a99e5e, "devm_pwm_get" },
	{ 0x39416365, "backlight_device_register" },
	{ 0x38baa1bc, "gpiod_get_value_cansleep" },
	{ 0x8fe1f1d3, "regulator_is_enabled" },
	{ 0x796376c1, "gpiod_direction_output" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdcb764ad, "memset" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x36cac97c, "devm_kfree" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xc69d6854, "pwm_request" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "backlight");

MODULE_ALIAS("of:N*T*Cpwm-backlight");
MODULE_ALIAS("of:N*T*Cpwm-backlightC*");

MODULE_INFO(srcversion, "0CFBEBC4D40EA45B70A8A88");
