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

SYMBOL_CRC(v4l2_async_nf_init, 0x45809783, "");
SYMBOL_CRC(v4l2_async_nf_register, 0x547b15f9, "");
SYMBOL_CRC(v4l2_async_subdev_nf_register, 0x95e31af5, "");
SYMBOL_CRC(v4l2_async_nf_unregister, 0x8dea8b5b, "");
SYMBOL_CRC(v4l2_async_nf_cleanup, 0x9c928371, "_gpl");
SYMBOL_CRC(__v4l2_async_nf_add_subdev, 0xdc403dd8, "_gpl");
SYMBOL_CRC(__v4l2_async_nf_add_fwnode, 0xcbc40302, "_gpl");
SYMBOL_CRC(__v4l2_async_nf_add_fwnode_remote, 0x4223e1e3, "_gpl");
SYMBOL_CRC(__v4l2_async_nf_add_i2c, 0xc2906a5e, "_gpl");
SYMBOL_CRC(v4l2_async_register_subdev, 0x92639471, "");
SYMBOL_CRC(v4l2_async_unregister_subdev, 0x46d83af6, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5a7f5ae8, "i2c_verify_client" },
	{ 0x85b8cc63, "debugfs_create_dir" },
	{ 0x6cf47d7c, "debugfs_create_file" },
	{ 0xb3c6f341, "single_open" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xaba9cfd5, "seq_printf" },
	{ 0x135ff00b, "fwnode_property_present" },
	{ 0x23400324, "fwnode_graph_get_port_parent" },
	{ 0x1d877bf, "fwnode_handle_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2594e048, "fwnode_handle_get" },
	{ 0x65cad864, "debugfs_remove" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xfcbcca79, "_dev_notice" },
	{ 0xcaaa3030, "v4l2_device_register_subdev" },
	{ 0x2eb22d11, "media_create_ancillary_link" },
	{ 0xe32420d8, "v4l2_device_unregister_subdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8ea7f437, "fwnode_graph_get_remote_endpoint" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0x655cade0, "seq_lseek" },
	{ 0xae7a9a01, "seq_read" },
	{ 0x613beb6, "single_release" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,mc");


MODULE_INFO(srcversion, "A1016864681DD8567081501");
