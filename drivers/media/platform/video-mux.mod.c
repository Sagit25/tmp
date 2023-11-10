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
	{ 0xf30730d, "v4l2_subdev_call_wrappers" },
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x8dea8b5b, "v4l2_async_nf_unregister" },
	{ 0x9c928371, "v4l2_async_nf_cleanup" },
	{ 0x46d83af6, "v4l2_async_unregister_subdev" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbc57e8d, "mux_control_try_select_delay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x52211bbb, "mux_control_deselect" },
	{ 0x1f015c96, "media_pad_remote_pad_first" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xaed04a7f, "v4l2_create_fwnode_links" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x6f6a0a31, "v4l2_subdev_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c5dae42, "of_graph_get_next_endpoint" },
	{ 0x7d0cdd04, "of_graph_parse_endpoint" },
	{ 0xd03fb01b, "devm_mux_control_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x60b985d3, "of_graph_get_endpoint_by_regs" },
	{ 0x9b9b69f9, "v4l2_fwnode_endpoint_parse" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x45809783, "v4l2_async_nf_init" },
	{ 0x1d877bf, "fwnode_handle_put" },
	{ 0x4223e1e3, "__v4l2_async_nf_add_fwnode_remote" },
	{ 0x40cbfb66, "dev_fwnode" },
	{ 0x96e26f29, "fwnode_graph_get_endpoint_by_id" },
	{ 0x8ea7f437, "fwnode_graph_get_remote_endpoint" },
	{ 0x95e31af5, "v4l2_async_subdev_nf_register" },
	{ 0x92639471, "v4l2_async_register_subdev" },
	{ 0x82e98b81, "dev_err_probe" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x45edbbb6, "v4l2_subdev_get_fwnode_pad_1_to_1" },
	{ 0xe2f3ba0a, "v4l2_subdev_link_validate" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,v4l2-async,mux-core,mc,v4l2-fwnode");

MODULE_ALIAS("of:N*T*Cvideo-mux");
MODULE_ALIAS("of:N*T*Cvideo-muxC*");

MODULE_INFO(srcversion, "066EC9791C5076E9902B9F7");
