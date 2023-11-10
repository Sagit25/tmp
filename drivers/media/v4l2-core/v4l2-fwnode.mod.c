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

SYMBOL_CRC(v4l2_fwnode_endpoint_parse, 0x9b9b69f9, "_gpl");
SYMBOL_CRC(v4l2_fwnode_endpoint_free, 0xb5d05c79, "_gpl");
SYMBOL_CRC(v4l2_fwnode_endpoint_alloc_parse, 0x09095f28, "_gpl");
SYMBOL_CRC(v4l2_fwnode_parse_link, 0xda6177f6, "_gpl");
SYMBOL_CRC(v4l2_fwnode_put_link, 0x93511bcf, "_gpl");
SYMBOL_CRC(v4l2_fwnode_connector_free, 0x612ddce5, "_gpl");
SYMBOL_CRC(v4l2_fwnode_connector_parse, 0x336d34d3, "_gpl");
SYMBOL_CRC(v4l2_fwnode_connector_add_link, 0x5ea95b1b, "_gpl");
SYMBOL_CRC(v4l2_fwnode_device_parse, 0x6a17c0eb, "_gpl");
SYMBOL_CRC(v4l2_async_nf_parse_fwnode_endpoints, 0x94daddbe, "_gpl");
SYMBOL_CRC(v4l2_async_register_subdev_sensor, 0x6fd3de17, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xff96f8c5, "fwnode_property_read_u32_array" },
	{ 0x135ff00b, "fwnode_property_present" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x49b918c, "fwnode_graph_parse_endpoint" },
	{ 0x23400324, "fwnode_graph_get_port_parent" },
	{ 0x8ea7f437, "fwnode_graph_get_remote_endpoint" },
	{ 0x1d877bf, "fwnode_handle_put" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xc116761e, "fwnode_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdcb764ad, "memset" },
	{ 0xaa60678e, "fwnode_get_name" },
	{ 0xd9f0e6d3, "fwnode_graph_get_remote_port_parent" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x45809783, "v4l2_async_nf_init" },
	{ 0x40a59af4, "fwnode_property_get_reference_args" },
	{ 0xcbc40302, "__v4l2_async_nf_add_fwnode" },
	{ 0x95e31af5, "v4l2_async_subdev_nf_register" },
	{ 0x92639471, "v4l2_async_register_subdev" },
	{ 0x8dea8b5b, "v4l2_async_nf_unregister" },
	{ 0x9c928371, "v4l2_async_nf_cleanup" },
	{ 0x4fe598f6, "fwnode_property_read_u64_array" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x632f2d27, "fwnode_graph_get_next_endpoint" },
	{ 0xa6e6c3a, "fwnode_device_is_available" },
	{ 0xdc403dd8, "__v4l2_async_nf_add_subdev" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "v4l2-async");


MODULE_INFO(srcversion, "033668EF155948718FDF3FA");
