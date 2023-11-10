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
	{ 0x3b9bfb5c, "w1_remove_master_device" },
	{ 0x29d64eb5, "gpiod_get_value" },
	{ 0x808284df, "of_root" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x1dac9fc8, "of_get_property" },
	{ 0x137812e9, "devm_gpiod_get_index" },
	{ 0xde937eb3, "devm_gpiod_get_index_optional" },
	{ 0x796376c1, "gpiod_direction_output" },
	{ 0x63fcb7b2, "w1_add_master_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0x5f0265b, "gpiod_direction_output_raw" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "wire");

MODULE_ALIAS("of:N*T*Cw1-gpio");
MODULE_ALIAS("of:N*T*Cw1-gpioC*");

MODULE_INFO(srcversion, "89D33780A3861BE22B688C6");
