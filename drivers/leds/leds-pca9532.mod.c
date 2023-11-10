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
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x771d5acf, "led_classdev_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4a13b6b6, "i2c_smbus_write_byte_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8af8defc, "i2c_smbus_read_byte_data" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x897dc934, "of_device_get_match_data" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x1196dca3, "of_property_read_variable_u8_array" },
	{ 0x7f34aad4, "of_get_next_available_child" },
	{ 0xcb5163ff, "of_property_read_string" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2e077701, "led_classdev_register_ext" },
	{ 0xeeecb47f, "devm_input_allocate_device" },
	{ 0xf1564295, "input_register_device" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pca9530");
MODULE_ALIAS("of:N*T*Cnxp,pca9530C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9531");
MODULE_ALIAS("of:N*T*Cnxp,pca9531C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9532");
MODULE_ALIAS("of:N*T*Cnxp,pca9532C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9533");
MODULE_ALIAS("of:N*T*Cnxp,pca9533C*");
MODULE_ALIAS("i2c:pca9530");
MODULE_ALIAS("i2c:pca9531");
MODULE_ALIAS("i2c:pca9532");
MODULE_ALIAS("i2c:pca9533");

MODULE_INFO(srcversion, "6B8393687F00E148F20E963");
