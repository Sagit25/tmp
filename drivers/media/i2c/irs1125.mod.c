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
	{ 0x46d83af6, "v4l2_async_unregister_subdev" },
	{ 0xe32420d8, "v4l2_device_unregister_subdev" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0xdcb764ad, "memset" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x5dc59ae6, "v4l2_ctrl_new_custom" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x21680411, "v4l2_i2c_subdev_init" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0x632f2d27, "fwnode_graph_get_next_endpoint" },
	{ 0x9b9b69f9, "v4l2_fwnode_endpoint_parse" },
	{ 0x1d877bf, "fwnode_handle_put" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x63a87a6a, "devm_gpiod_get" },
	{ 0x65f35656, "desc_to_gpio" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa99b173d, "v4l2_ctrl_find" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x62d2a046, "__v4l2_ctrl_s_ctrl" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x92639471, "v4l2_async_register_subdev" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x74a05018, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x2b3bd22e, "v4l2_ctrl_handler_setup" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x67a41807, "__v4l2_ctrl_grab" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "v4l2-async,videodev,v4l2-fwnode,mc");

MODULE_ALIAS("of:N*T*Cinfineon,irs1125");
MODULE_ALIAS("of:N*T*Cinfineon,irs1125C*");

MODULE_INFO(srcversion, "4FC37131D1995DD1E80EF55");
