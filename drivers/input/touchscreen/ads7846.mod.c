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
	{ 0xab8b892e, "regulator_disable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4b1562c0, "driver_unregister" },
	{ 0xe2964344, "__wake_up" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe307b4ed, "gpio_to_desc" },
	{ 0x7abd989d, "gpiod_get_raw_value" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc55c1d66, "spi_sync" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf0f52d0a, "touchscreen_report_pos" },
	{ 0x441916ec, "input_event" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0xdcb764ad, "memset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xe52de225, "regulator_enable" },
	{ 0xd0585d22, "spi_setup" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0x31065e62, "touchscreen_parse_properties" },
	{ 0xac095dce, "devm_gpio_request_one" },
	{ 0x653bf8e5, "gpiod_set_debounce" },
	{ 0x1ca42f82, "devm_regulator_get" },
	{ 0xd903f981, "devm_add_action" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xf523bfa6, "devm_hwmon_device_register_with_groups" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x3f0fe375, "devm_device_add_group" },
	{ 0xf1564295, "input_register_device" },
	{ 0x36cac97c, "devm_kfree" },
	{ 0x209009ac, "of_match_device" },
	{ 0xac2d9473, "of_property_read_variable_u16_array" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0xb82fe302, "of_get_named_gpio_flags" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:tsc2046");
MODULE_ALIAS("spi:ads7843");
MODULE_ALIAS("spi:ads7843");
MODULE_ALIAS("spi:ads7845");
MODULE_ALIAS("spi:ads7846");
MODULE_ALIAS("spi:ads7873");
MODULE_ALIAS("of:N*T*Cti,tsc2046");
MODULE_ALIAS("of:N*T*Cti,tsc2046C*");
MODULE_ALIAS("of:N*T*Cti,ads7843");
MODULE_ALIAS("of:N*T*Cti,ads7843C*");
MODULE_ALIAS("of:N*T*Cti,ads7845");
MODULE_ALIAS("of:N*T*Cti,ads7845C*");
MODULE_ALIAS("of:N*T*Cti,ads7846");
MODULE_ALIAS("of:N*T*Cti,ads7846C*");
MODULE_ALIAS("of:N*T*Cti,ads7873");
MODULE_ALIAS("of:N*T*Cti,ads7873C*");

MODULE_INFO(srcversion, "DC993600F6826FDB6280A13");
