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
	{ 0x4a13b6b6, "i2c_smbus_write_byte_data" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af8defc, "i2c_smbus_read_byte_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x111bf9da, "device_get_match_data" },
	{ 0x14c1c2a2, "device_get_child_node_count" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x9e218444, "device_get_next_child_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xff96f8c5, "fwnode_property_read_u32_array" },
	{ 0xc116761e, "fwnode_property_read_string" },
	{ 0xbc15ad04, "i2c_match_id" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x15b1c8fc, "devm_led_classdev_register_ext" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x21917449, "of_fwnode_ops" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pca9550");
MODULE_ALIAS("of:N*T*Cnxp,pca9550C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9551");
MODULE_ALIAS("of:N*T*Cnxp,pca9551C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9552");
MODULE_ALIAS("of:N*T*Cnxp,pca9552C*");
MODULE_ALIAS("of:N*T*Cibm,pca9552");
MODULE_ALIAS("of:N*T*Cibm,pca9552C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9553");
MODULE_ALIAS("of:N*T*Cnxp,pca9553C*");
MODULE_ALIAS("i2c:pca9550");
MODULE_ALIAS("i2c:pca9551");
MODULE_ALIAS("i2c:pca9552");
MODULE_ALIAS("i2c:ibm-pca9552");
MODULE_ALIAS("i2c:pca9553");

MODULE_INFO(srcversion, "347B684ED3BC868B8B502D8");
