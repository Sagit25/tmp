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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x29d64eb5, "gpiod_get_value" },
	{ 0xa6257a2f, "complete" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfe476039, "ktime_get_resolution_ns" },
	{ 0x796376c1, "gpiod_direction_output" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x604f36d6, "gpiod_direction_input" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x726bc3c7, "wait_for_completion_killable_timeout" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x156d71c9, "devm_iio_device_alloc" },
	{ 0x63a87a6a, "devm_gpiod_get" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb43d639b, "__devm_iio_device_register" },
	{ 0x65f35656, "desc_to_gpio" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cdht11");
MODULE_ALIAS("of:N*T*Cdht11C*");

MODULE_INFO(srcversion, "97296114A92472AAD224432");
