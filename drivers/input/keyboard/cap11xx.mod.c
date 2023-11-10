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
	{ 0x6f4721d6, "regmap_update_bits_base" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xc75df6b5, "regmap_read" },
	{ 0x441916ec, "input_event" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x9c33e1db, "of_find_property" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xbeedee72, "of_get_next_child" },
	{ 0xf1564295, "input_register_device" },
	{ 0x20af50d6, "irq_of_parse_and_map" },
	{ 0x1dac9fc8, "of_get_property" },
	{ 0xb882b19b, "of_node_put" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x15b1c8fc, "devm_led_classdev_register_ext" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("i2c:cap1106");
MODULE_ALIAS("i2c:cap1126");
MODULE_ALIAS("i2c:cap1188");
MODULE_ALIAS("i2c:cap1206");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1106");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1106C*");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1126");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1126C*");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1188");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1188C*");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1206");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1206C*");

MODULE_INFO(srcversion, "23B269E4154200E3E4B7318");
