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
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0xe52de225, "regulator_enable" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x52792940, "__of_parse_phandle_with_args" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc4ffa827, "pwm_apply_state" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xedc03953, "iounmap" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa1a99e5e, "devm_pwm_get" },
	{ 0x63a66ce1, "devm_regulator_get_optional" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd903f981, "devm_add_action" },
	{ 0x179f181a, "platform_irq_count" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x783ba324, "of_property_read_u32_index" },
	{ 0x83bfae6e, "platform_get_irq" },
	{ 0xaf7d2c43, "of_iomap" },
	{ 0xad9b0ff1, "devm_hwmon_device_register_with_info" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xecf7a0d8, "of_property_count_elems_of_size" },
	{ 0xfd892dc3, "devm_thermal_of_cooling_device_register" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpwm-fan");
MODULE_ALIAS("of:N*T*Cpwm-fanC*");

MODULE_INFO(srcversion, "E0A0691D051D7F7A7BB5A17");
