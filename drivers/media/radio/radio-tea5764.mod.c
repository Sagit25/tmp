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
	{ 0xeed45f35, "i2c_transfer" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x2bd361f5, "v4l2_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x663b757a, "video_devdata" },
	{ 0xdd64e639, "strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xabf366e5, "i2c_del_driver" },
	{ 0xca050b95, "kmalloc_caches" },
	{ 0x26d6b51d, "kmalloc_trace" },
	{ 0x8fd5944f, "v4l2_device_register" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0xc4ef58d, "v4l2_ctrl_poll" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0xbc0e3807, "v4l2_fh_release" },
	{ 0xba5e6261, "v4l2_ctrl_log_status" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xb6d79550, "param_ops_int" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:radio-tea5764");

MODULE_INFO(srcversion, "373A74EFDA85D0AAE755397");
