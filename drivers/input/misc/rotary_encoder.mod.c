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
	{ 0x441916ec, "input_event" },
	{ 0x38baa1bc, "gpiod_get_value_cansleep" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf6484dc0, "device_property_read_u32_array" },
	{ 0xb13a59e0, "device_property_present" },
	{ 0xb767983b, "device_property_match_string" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x8549ffab, "devm_gpiod_get_array" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0x48091979, "input_set_abs_params" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0x6ab02cb6, "gpiod_to_irq" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xf1564295, "input_register_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crotary-encoder");
MODULE_ALIAS("of:N*T*Crotary-encoderC*");

MODULE_INFO(srcversion, "341AD564B293E1EEFB9394E");
