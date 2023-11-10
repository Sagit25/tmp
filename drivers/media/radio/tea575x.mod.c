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

SYMBOL_CRC(snd_tea575x_set_freq, 0xfc64277d, "");
SYMBOL_CRC(snd_tea575x_enum_freq_bands, 0x1baef557, "");
SYMBOL_CRC(snd_tea575x_g_tuner, 0xc46fa245, "");
SYMBOL_CRC(snd_tea575x_s_hw_freq_seek, 0x31bca9b3, "");
SYMBOL_CRC(snd_tea575x_hw_init, 0x3924793d, "");
SYMBOL_CRC(snd_tea575x_init, 0x43cce41f, "");
SYMBOL_CRC(snd_tea575x_exit, 0xa8f2ed67, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdcb764ad, "memset" },
	{ 0xdd64e639, "strscpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x663b757a, "video_devdata" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x4f85f5c6, "video_unregister_device" },
	{ 0x3b3d5da2, "v4l2_ctrl_handler_free" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8a07bc13, "video_device_release_empty" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc4ef58d, "v4l2_ctrl_poll" },
	{ 0x607e5eef, "video_ioctl2" },
	{ 0x66521121, "v4l2_fh_open" },
	{ 0xbc0e3807, "v4l2_fh_release" },
	{ 0xe8cbcdc8, "v4l2_ctrl_handler_init_class" },
	{ 0x7b65904f, "v4l2_ctrl_new_std" },
	{ 0x2b3bd22e, "v4l2_ctrl_handler_setup" },
	{ 0x73ef0476, "__video_register_device" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x92997ed8, "_printk" },
	{ 0xba5e6261, "v4l2_ctrl_log_status" },
	{ 0x679fc93f, "v4l2_ctrl_subscribe_event" },
	{ 0x2488ec38, "v4l2_event_unsubscribe" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "1137E254B0CB801DF4730CB");
