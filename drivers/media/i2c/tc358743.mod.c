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
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0x56a767f6, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x89a1e456, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd7889a07, "cec_unregister_adapter" },
	{ 0x46d83af6, "v4l2_async_unregister_subdev" },
	{ 0xe32420d8, "v4l2_device_unregister_subdev" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x62d2a046, "__v4l2_ctrl_s_ctrl" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x998cc3c, "hdmi_infoframe_unpack" },
	{ 0xafb1c0ca, "hdmi_infoframe_log" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf385464b, "v4l2_subdev_notify_event" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xbe4de675, "cec_get_edid_phys_addr" },
	{ 0x7b6ac78f, "v4l2_phys_addr_validate" },
	{ 0x7bccd8df, "cec_s_phys_addr" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x21680411, "v4l2_i2c_subdev_init" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x5dc59ae6, "v4l2_ctrl_new_custom" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x92639471, "v4l2_async_register_subdev" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x4967e77b, "cec_register_adapter" },
	{ 0x2b3bd22e, "v4l2_ctrl_handler_setup" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xcd332d0a, "devm_clk_get" },
	{ 0x3c5dae42, "of_graph_get_next_endpoint" },
	{ 0x9095f28, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0xb5d05c79, "v4l2_fwnode_endpoint_free" },
	{ 0xb882b19b, "of_node_put" },
	{ 0x815588a6, "clk_enable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcbca3a1f, "gpiod_set_value" },
	{ 0xf9a482f9, "msleep" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x558f4d16, "cec_delete_adapter" },
	{ 0x2c766c04, "v4l2_event_subdev_unsubscribe" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "v4l2-dv-timings,videodev,cec,v4l2-async,mc,v4l2-fwnode");

MODULE_ALIAS("of:N*T*Ctoshiba,tc358743");
MODULE_ALIAS("of:N*T*Ctoshiba,tc358743C*");
MODULE_ALIAS("i2c:tc358743");

MODULE_INFO(srcversion, "AB381DE57FE6497DA3A8CC8");
