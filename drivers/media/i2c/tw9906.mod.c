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
	{ 0xe32420d8, "v4l2_device_unregister_subdev" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x4a13b6b6, "i2c_smbus_write_byte_data" },
	{ 0x92997ed8, "_printk" },
	{ 0xa5118dfb, "v4l2_ctrl_subdev_log_status" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x21680411, "v4l2_i2c_subdev_init" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:tw9906");

MODULE_INFO(srcversion, "32513974FE5C95262422B39");
