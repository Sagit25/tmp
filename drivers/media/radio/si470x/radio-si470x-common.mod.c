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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(si470x_set_freq, 0x91bb0f4d, "_gpl");
SYMBOL_CRC(si470x_start, 0xe7de4757, "_gpl");
SYMBOL_CRC(si470x_stop, 0xc3ef54c5, "_gpl");
SYMBOL_CRC(si470x_ctrl_ops, 0x6a279527, "_gpl");
SYMBOL_CRC(si470x_viddev_template, 0x1c6ea5ea, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x663b757a, "video_devdata" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xfd384dd1, "_dev_warn" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xc4ef58d, "v4l2_ctrl_poll" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0x7510b5e8, "param_ops_uint" },
	{ 0xd9653b2f, "param_ops_ushort" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "FB6A2D2EEEDDE0F5ED3A4D8");
