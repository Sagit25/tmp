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
	{ 0xc75df6b5, "regmap_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb26e53b2, "regmap_write" },
	{ 0x97f91466, "_dev_printk" },
	{ 0x4a6aa4a0, "__pm_runtime_idle" },
	{ 0xdcb764ad, "memset" },
	{ 0x56a767f6, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x89a1e456, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x612ddce5, "v4l2_fwnode_connector_free" },
	{ 0x69b7d204, "media_device_unregister_entity" },
	{ 0x46d83af6, "v4l2_async_unregister_subdev" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0xfcac7088, "__pm_runtime_disable" },
	{ 0x543bdc, "__pm_runtime_set_status" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xf385464b, "v4l2_subdev_notify_event" },
	{ 0xf12e8bfe, "__pm_runtime_resume" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x89f73718, "media_device_register_entity" },
	{ 0xa94bf655, "media_create_pad_link" },
	{ 0x1f015c96, "media_pad_remote_pad_first" },
	{ 0x73e48c4c, "media_entity_find_link" },
	{ 0x2b3bd22e, "v4l2_ctrl_handler_setup" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x98553ea7, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0xadf4cb34, "__devm_regmap_init_i2c" },
	{ 0x21680411, "v4l2_i2c_subdev_init" },
	{ 0xd7c4aacf, "of_graph_get_endpoint_count" },
	{ 0x3c5dae42, "of_graph_get_next_endpoint" },
	{ 0x336d34d3, "v4l2_fwnode_connector_parse" },
	{ 0x5ea95b1b, "v4l2_fwnode_connector_add_link" },
	{ 0x7d0cdd04, "of_graph_parse_endpoint" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x91115cf9, "regmap_bulk_read" },
	{ 0x5e745a, "devm_kasprintf" },
	{ 0x60b985d3, "of_graph_get_endpoint_by_regs" },
	{ 0x9b9b69f9, "v4l2_fwnode_endpoint_parse" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0xd847f4f4, "v4l2_ctrl_new_std_menu_items" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x92639471, "v4l2_async_register_subdev" },
	{ 0x6704465b, "pm_runtime_enable" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x2c766c04, "v4l2_event_subdev_unsubscribe" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,v4l2-fwnode,mc,v4l2-async,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,tvp5150");
MODULE_ALIAS("of:N*T*Cti,tvp5150C*");
MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "FD287D3F7E46B44A4A22C26");
