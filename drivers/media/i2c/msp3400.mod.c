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
	{ 0x21680411, "v4l2_i2c_subdev_init" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x12f15cdb, "i2c_transfer_buffer_flags" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0xbf613d39, "wake_up_process" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x17bd6bed, "v4l2_ctrl_handler_log_status" },
	{ 0x2b3bd22e, "v4l2_ctrl_handler_setup" },
	{ 0x1000e51, "schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1249c32d, "_dev_info" },
	{ 0x482e8a2, "i2c_register_driver" },
	{ 0xe32420d8, "v4l2_device_unregister_subdev" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x85023b60, "media_entity_pads_init" },
	{ 0x997f89b5, "kthread_stop" },
	{ 0xc8c41a62, "freezing_slow_path" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x38d330cb, "kthread_create_on_node" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x16253c8, "param_ops_bool" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0x97f91466, "_dev_printk" },
	{ 0x61c51a7b, "v4l2_ctrl_cluster" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:msp3400");

MODULE_INFO(srcversion, "FF9AB08015461B29FF9EEB9");
