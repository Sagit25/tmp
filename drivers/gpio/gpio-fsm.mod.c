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
	{ 0xe2d5255a, "strcmp" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x38baa1bc, "gpiod_get_value_cansleep" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xe2964344, "__wake_up" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7aeed1fd, "gpiochip_get_data" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xa169b1d6, "class_unregister" },
	{ 0xdcced5f2, "__class_register" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0xa7e0c03a, "devm_gpiod_get_array_optional" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0x30880ebb, "gpiod_is_active_low" },
	{ 0xbeedee72, "of_get_next_child" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe5c17e53, "device_create_with_groups" },
	{ 0x20e9f9cf, "devm_gpiochip_add_data_with_key" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crpi,gpio-fsm");
MODULE_ALIAS("of:N*T*Crpi,gpio-fsmC*");

MODULE_INFO(srcversion, "505950738F18E2A4560B91C");
