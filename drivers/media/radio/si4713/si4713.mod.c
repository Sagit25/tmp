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
	{ 0xa6257a2f, "complete" },
	{ 0x92997ed8, "_printk" },
	{ 0x4829a47e, "memcpy" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcbca3a1f, "gpiod_set_value" },
	{ 0xab8b892e, "regulator_disable" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe52de225, "regulator_enable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x764d09b3, "devm_gpiod_get_optional" },
	{ 0x63a66ce1, "devm_regulator_get_optional" },
	{ 0x21680411, "v4l2_i2c_subdev_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x5dc59ae6, "v4l2_ctrl_new_custom" },
	{ 0x390eb7ec, "v4l2_ctrl_new_std_menu" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x61c51a7b, "v4l2_ctrl_cluster" },
	{ 0xaaefc71c, "devm_request_threaded_irq" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x677df74e, "platform_device_alloc" },
	{ 0x12b8faac, "platform_device_add_data" },
	{ 0x3e1cfad0, "platform_device_put" },
	{ 0xe32420d8, "v4l2_device_unregister_subdev" },
	{ 0x5e169e6e, "platform_device_add" },
	{ 0x687bbe20, "platform_device_unregister" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xdcb764ad, "memset" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("of:N*T*Csilabs,si4713");
MODULE_ALIAS("of:N*T*Csilabs,si4713C*");
MODULE_ALIAS("i2c:si4713");

MODULE_INFO(srcversion, "4B28E28FE5B1D1B9A49A899");
