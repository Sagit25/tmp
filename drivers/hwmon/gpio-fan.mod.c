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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x38baa1bc, "gpiod_get_value_cansleep" },
	{ 0xf5b71c4b, "sysfs_notify" },
	{ 0x52427fe4, "kobject_uevent" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xa16de2d2, "gpiod_count" },
	{ 0x137812e9, "devm_gpiod_get_index" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x796376c1, "gpiod_direction_output" },
	{ 0xd903f981, "devm_add_action" },
	{ 0xf523bfa6, "devm_hwmon_device_register_with_groups" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xfd892dc3, "devm_thermal_of_cooling_device_register" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xc711578e, "of_prop_next_u32" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-fan");
MODULE_ALIAS("of:N*T*Cgpio-fanC*");

MODULE_INFO(srcversion, "1C3B2FBC302E519D7D8CCEC");
