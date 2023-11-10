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
	{ 0x92997ed8, "_printk" },
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0x38baa1bc, "gpiod_get_value_cansleep" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0x63a87a6a, "devm_gpiod_get" },
	{ 0x80ce52c7, "gpiod_cansleep" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5004b86f, "i2c_bit_add_numbered_bus" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x137812e9, "devm_gpiod_get_index" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x65f35656, "desc_to_gpio" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "i2c-algo-bit");

MODULE_ALIAS("of:N*T*Ci2c-gpio");
MODULE_ALIAS("of:N*T*Ci2c-gpioC*");

MODULE_INFO(srcversion, "41E6D836F99BB932C1C6156");
