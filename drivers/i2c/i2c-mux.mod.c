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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(i2c_root_adapter, 0x8d437639, "_gpl");
SYMBOL_CRC(i2c_mux_alloc, 0xa6a300de, "_gpl");
SYMBOL_CRC(i2c_mux_add_adapter, 0xce5496ea, "_gpl");
SYMBOL_CRC(i2c_mux_del_adapters, 0x50b5daa4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbb9bf013, "i2c_adapter_type" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xf627fa29, "rt_mutex_unlock" },
	{ 0x12d77cc7, "rt_mutex_trylock" },
	{ 0x4617c710, "rt_mutex_lock" },
	{ 0x31d84cdc, "__i2c_smbus_xfer" },
	{ 0x8afd5abb, "i2c_smbus_xfer" },
	{ 0xb216dec6, "__i2c_transfer" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x111e0ce2, "sysfs_remove_link" },
	{ 0xd9fe9752, "i2c_del_adapter" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x6035d020, "of_get_child_by_name" },
	{ 0x3abf43ab, "of_property_read_variable_u32_array" },
	{ 0xbeedee72, "of_get_next_child" },
	{ 0xea2ef5c5, "i2c_add_adapter" },
	{ 0xa6cccc4f, "sysfs_create_link" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xef426f3b, "i2c_add_numbered_adapter" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xf53a8fc6, "of_node_get" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "117F5A5BEACE707E69FE9D1");
