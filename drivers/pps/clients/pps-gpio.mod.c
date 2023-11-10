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
	{ 0xcbca3a1f, "gpiod_set_value" },
	{ 0x709b71a6, "pps_unregister_source" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x4cb27100, "ktime_get_snapshot" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x29d64eb5, "gpiod_get_value" },
	{ 0x2fdac217, "pps_event" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x24d273d1, "add_timer" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x63a87a6a, "devm_gpiod_get" },
	{ 0xb13a59e0, "device_property_present" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x50528409, "pps_register_source" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpps-gpio");
MODULE_ALIAS("of:N*T*Cpps-gpioC*");

MODULE_INFO(srcversion, "F819621FD7009AA57B6E27F");
