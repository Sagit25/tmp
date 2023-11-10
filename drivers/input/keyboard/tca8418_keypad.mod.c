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
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x8af8defc, "i2c_smbus_read_byte_data" },
	{ 0x4a13b6b6, "i2c_smbus_write_byte_data" },
	{ 0x441916ec, "input_event" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x3d06cd56, "matrix_keypad_parse_properties" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0x133f4654, "matrix_keypad_build_keymap" },
	{ 0xb13a59e0, "device_property_present" },
	{ 0xf9c15038, "input_set_capability" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0xf1564295, "input_register_device" },
	{ 0x4ca377a, "dev_driver_string" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("of:N*T*Cti,tca8418");
MODULE_ALIAS("of:N*T*Cti,tca8418C*");
MODULE_ALIAS("i2c:tca8418");

MODULE_INFO(srcversion, "345505E234584CA55D4CD29");
