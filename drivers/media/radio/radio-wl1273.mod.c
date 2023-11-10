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
	{ 0xf8f941a8, "__platform_driver_register" },
	{ 0x1249c32d, "_dev_info" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x8e97a3d0, "_dev_err" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x663b757a, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2964344, "__wake_up" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4589e7b6, "platform_driver_unregister" },
	{ 0xdc265ede, "devm_kmalloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xdcb764ad, "memset" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x390eb7ec, "v4l2_ctrl_new_std_menu" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa6257a2f, "complete" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x74a05018, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "515567DE33971656F8FC573");
